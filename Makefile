include $(THEOS)/makefiles/common.mk


TWEAK_NAME = PowerPlus
PowerPlus_FILES = Tweak.xm
PowerPlus_FRAMEWORKS = UIKit Foundation
PowerPlus_PRIVATE_FRAMEWORKS = SpringBoardUIServices
PowerPlus_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk



after-install::
	install.exec "killall -9 SpringBoard"
