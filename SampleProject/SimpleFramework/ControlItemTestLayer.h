//  Created by JGroup(kimbobv22@gmail.com)

#import "CMMHeader.h"

@interface ControlItemTestLayer : CMMLayer<CMMControlItemSwitchDelegate,CMMControlItemSliderDelegate>{
	CMMControlItemSlider *slider2;
}

@end

@interface ControlItemTestLayer2 : CMMLayer{
	CMMSpriteBatchBar *batchBar;
	CCLabelTTF *label;
}

@end