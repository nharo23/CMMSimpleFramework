#CMMSimpleFramework

CMMSimpleframework which coded based on the cocos2d 2.x will be helpful to develop your cocos2d project!<br>
cocos2d 2.x 기반으로 짜여진 CMMSimpleframework는 당신의 cocos2d 프로젝트 개발에 도움이 될 것입니다!

##How to use

    // Just import.
    #import "CMMHeader.h"
    
##Class List - Common

###1.Common

#####CMMHeader
#####CMMType
#####CMMMacro
#####CMMGLView

###2.View

#####CMMScene

>CMMSimpleFramework only supports the transition between layers(CMMLayer) by CMMScene.<br>
>CMMSimpleFramework는 레이어(CMMLayer)간 전환만 지원합니다.

    [[CMMScene sharedScene] pushLayer:(CMMLayer *)];

<br>
>Support Pop-up window. <br>
>팝업창을 지원합니다.

    [[CMMScene sharedScene] openPopup:(CMMLayerPopup *) delegate:(id<CMMPopupDispatcherDelegate>)];
    [[CMMScene sharedScene] openPopupAtFirst:(CMMLayerPopup *) delegate:(id<CMMPopupDispatcherDelegate>)];

<br>
>Support Notifications window. (Refer the CMMNoticeDispatcher><br>
>알림창을 지원합니다. (CMMNoticeDispatcher 참고)

<br>

>Support Multi-touch management and separation.(Refer the CMMTouchDispatcher)<br>
>멀티터치 관리 및 분리를 지원합니다.(CMMTouchDipatcher 참고)

<br>

#####CMMLayer

>CMMLayer is "Top layer node" in CMMSimpleFramework.<br>
>CMMLayer는 CMMSimpleFramework에서 "최상위 레이어 노드"입니다.

>CMMLayer can manage Multi-touch(Max Multi-touch count, etc...) Individually.(Refer the CMMTouchDispatcher)<br>
>CMMLayer는 독립적으로 멀티터치(최대멀티터치수 등...)를 관리할 수 있습니다.(CMMTouchDispatcher 참고)

<br>

#####CMMLayerMask

>CMMLayerMask supports mask for children. also you can change size,position,color,opacity of inner layer.<br>
>CMMLayerMask 는 자식들의 마스크기능을 제공합니다. 또한 내부레이어의 크기,위치,색,투명도 를 설정할 수 있습니다.
    
	// How to set property inner layer
	// 내부레이어의 속성을 설정하는 방법
	[(CMMLayerMask *) setInnerColor:(ccColor3B)];
	[(CMMLayerMask *) setInnerOpacity:(GLubyte)];
	[(CMMLayerMask *) setInnerPosition:(CGPoint):];
	[(CMMLayerMask *) setInnerSize:(CGSize)];

<br>

#####CMMLayerMaskDrag

>CMMLayerMaskDrag is that from CMMLayerMask added dragging feature.<br>
>CMMLayerMaskDrag는 CMMLayerMask에서 드래그기능이 추가되었습니다.

	// How to allow dragging
	// 드래그 허용하는 방법
	[(CMMLayerMaskDrag *) setIsCanDragX:(BOOL)]; //X-Axis X축
	[(CMMLayerMaskDrag *) setIsCanDragY:(BOOL)]; //Y-Axis Y축
	
<br>	

>You can change the design of the scrollbar conditionally.<br>
>스크롤바의 디자인을 제약적으로 변경할 수 있습니다.

	// How to change design of scrollbar
	// 스크롤바 디자인 변경방법
	[(CMMLayerMaskDrag *) setScrollbarDesign:(CMMScrollbarDesign)];

<br>

#####CMMLayerPinchZoom

>CMMLayerPinchZoom is available Pinch-Zoom.<br>
>CMMLayerPinchZoom는 핀치줌이 가능합니다.

<br>

#####CMMLayerPopup

>Layer for Pop-up. You can create creative Pop-up window by inheriting the CMMLayerPopup.<br>
>팝업창을 위한 레이어입니다. CMMLayerPopup를 상속받아 독창적인 팝업창을 제작할 수 있습니다.

<br>

#####CMMSprite

>CMMSprite is "the Sprite node that can be received the touch input" in CMMSimpleFramework.<br>
>CMMSprite는 CMMSimpleFramework에서 터치를 입력받을 수 있는 스프라이트 노드입니다.

<br>

###3.Dispatcher

#####CMMTouchDispatcher

>Support Multi-touch Management and Separation.<br>
>멀티터치 관리 및 분리를 지원합니다.

    // How to set max count of multi-touch.(default : 4)
    // 최대멀티터치수 설정하는 방법 
    [(CMMTouchDispatcher *) setMaxMultiTouchCount:(int)]
    
<br>
    
#####CMMPopupDispatcher

>Designed for Pop-up management in CMMScene. (Refer the CMMScene)<br>
>CMMScene에서 팝업을 관리할 수 있도록 디자인되었습니다. (CMMScene 참고)

<br>

#####CMMMotionDispatcher

>designed for Accelerometer management. Supported in CMMLayer.<br>
>가속도계를 관리할 수 있도록 디자인되었습니다. CMMLayer에서 사용가능합니다.

	// How to use
	// 사용법
	[(CMMLayer *) setIsAccelerometerEnabled:(BOOL)];
	
	//and add syntax in class
	//그리고 클래스에 구문을 추가합니다.
	-(void)motionDispatcher:(CMMMotionDispatcher *)motionDispatcher_ updateMotion:(CMMMotionState)state_{}

<br>

#####CMMNoticeDispatcher

>Designed for Notification management in CMMScene.<br>
>CMMScene에서 알림를 관리할 수 있도록 설계되었습니다.

	// 1. Set a template for notification window firstly.(reusable 재사용가능)
	// 1. 먼저 공지창의 템플릿을 설정합니다.
	[(CMMNoticeDispatcher *).noticeTemplate = [(CMMNoticeDispatcherTemplate *) templateWithNoticeDispatcher:(CMMNoticeDispatcher *)];

	// 2. Open notification window.
	// 2. 공지창을 띄웁니다.
	[(CMMNoticeDispatcher *) addNoticeItemWithTitle:(NSString *) subject:(NSString *)];
	[(CMMNoticeDispatcher *) addNoticeItemWithTitle:(NSString *) subject:(NSString *)];
	...(loadable 적재가능)

<br>

###4.Util

#####CMMDrawingUtil

>Designed for Image Drawing & Modify by using CCRenderTexture.<br>
>CCRenderTexture를 사용하여 이미지를 그리거나, 수정할 수 있도록 디자인되었습니다.

<br>

#####CMMFileUtil

>Designed for File Loading & Checking & etc....<br>
>파일 불러오기, 검증 등을 할 수 있도록 디자인되었습니다.

<br>

#####CMMFontUtil

>Designed for Creating CCLabelTTF easily.<br>
>CCLabelTTF 객체를 쉽게 만들 수 있도록 디자인되었습니다.

<br>

#####CMMStringUtil

>Designed for Converting to NSString from Filepath, Modify other NSString.<br>
>파일경로를 NSString으로 변환하거나, 다른 NSString을 수정할 수 있도록 디자인되었습니다.

<br>

#####CMMTouchUtil

>Designed for Finding touch point &Finding node that contacting with the touch.<br>
>터치좌표를 구하거나, 터치와 접촉하는 노드를 쉽게 찾을 수 있도록 디자인되었습니다.

<br>

#####CMMLoadingObject

>Designed for implementing loading feature easily.<br>
>로딩을 쉽게 구현할 수 있도록 디자인되었습니다.

>지정한 로딩 포메터를 이용해 로딩을 수행합니다. 예를 들어 로딩 포메터가 @"test%03d"이고 

	// How to use
	// 사용법
	CMMLoadingObject *loadingObject_ = [CMMLoadingObject loadingObject];
	loadingObject_.delegate = (id<CMMLoadingObjectDelegate>)(id);
	
	 //default loading formatter (@"loadingProcess%03d")
	 //기본 로딩 포메터 (@"loadingProcess%03d")
	[loadingObject_ startLoading];
	[loadingObject_ startLoadingWithMethodFormatter:(NSString *)];
	[loadingObject_ startLoadingWithMethodFormatter:(NSString *) target:(id)];

<br>

##Class List - Component

###1.Manager

#####CMMDrawingManager

###2.Stage

#####CMMStage
#####CMMTilemapStage
#####CMMSSpec
#####CMMSSpecStage
#####CMMSParticle
#####CMMSObject
#####CMMSSpecObject
#####CMMSStateObject

###3.menu

#####CMMMenuItem
#####CMMScrollMenu
#####CMMScrollMenuH
#####CMMScrollMenuV

###4.control

#####CMMControlItem
#####CMMControlItemSwitch
#####CMMControlItemSlider
#####CMMControlItemText

###5.customUI

#####CMMCustomUI
#####CMMCustomUIJoypad