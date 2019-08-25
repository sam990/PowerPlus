#import"powerplus.h"
#import<substrate.h>
#import<dlfcn.h>
#import<mach-o/dyld.h>
#import<spawn.h>


%group ohYeah

_UIActionSlider* respringSlider;

%hook _SBInternalPowerDownView 

	-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2{

        id something = %orig;
        respringSlider = [[_UIActionSlider alloc] initWithFrame:CGRectMake(0 , 0 , 0 , 0) vibrantSettings:arg2];
        respringSlider.style = 2 , respringSlider.backgroundColor = [UIColor colorWithWhite:0.831373 alpha:0.96];
        UIImage *image = [UIImage imageWithContentsOfFile:@"Library/Application Support/PowerPlus/Respring.png"]; 
        NSString* respringString = @"slide to respring";
        [respringSlider setTrackText:respringString];
        [respringSlider _makeTrackLabel];
        [respringSlider setDelegate:self];
        [respringSlider setKnobImage:image];
        return something;
    }

    -(void)layoutSubviews{
        %orig;
        _UIActionSlider* power = MSHookIvar<_UIActionSlider*>(self , "_actionSlider");
        CGRect origFrame = power.frame;
        origFrame.origin.y += 80;
        [respringSlider setFrame:origFrame];;
        if(respringSlider)
            [self addSubview:respringSlider];
        power = 0;
    }

    -(void)actionSliderDidCompleteSlide:(id)arg1{
        if(arg1 == respringSlider){
            pid_t pid;
            int status;
            const char* argv[] = {"killall" , "-9" , "backboardd" , NULL};
            posix_spawn(&pid , "usr/bin/killall" , NULL , NULL , (char* const*)argv , NULL);
            waitpid(pid , &status , 0);
        }
        else{
            %orig;
        }
    }

%end

%end

%ctor{
    dlopen("/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore", RTLD_LAZY);
    %init(ohYeah);
}