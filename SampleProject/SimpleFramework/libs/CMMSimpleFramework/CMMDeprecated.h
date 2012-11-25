//  Created by JGroup(kimbobv22@gmail.com)

#import "CMMDrawingManager.h"
#import "CMMMenuItem.h"
#import "CMMScrollMenu.h"
#import "CMMSType.h"
#import "CMMStage.h"
#import "CMMStageTMX.h"
#import "CMMStagePXL.h"
#import "CMMSObject.h"
#import "CMMSParticle.h"
#import "CMMSimpleCache.h"
#import "CMMScene.h"
#import "CMMLayerMD.h"
#import "CMMSpriteBatchBar.h"
#import "CMMSequenceMaker.h"
#import "CMMSoundEngine.h"
#import "CMMControlItemText.h"

DEPRECATED_ATTRIBUTE static inline CGPoint cmmFuncCommon_position_center(CGRect parentRect_,CGRect targetRect_,CGPoint targetAPoint_){
	return cmmFuncCommon_positionInParent(parentRect_, targetRect_, targetAPoint_, ccp(0.5f,0.5f));
}
DEPRECATED_ATTRIBUTE static inline CGPoint cmmFuncCommon_position_center(CCNode *parent_,CCNode *target_){
	return cmmFuncCommon_positionInParent(parent_, target_, ccp(0.5f,0.5f));
}

UNAVAILABLE_ATTRIBUTE @protocol CMMApplicationProtocol <NSObject>

@optional
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;

-(void)applicationWillTerminate;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;

-(void)applicationDidReceiveMemoryWarning;

@end

@interface CMMScene(Deprecated)

@property (nonatomic, readwrite) ccColor3B transitionColor DEPRECATED_ATTRIBUTE;
@property (nonatomic, readwrite) ccTime fadeTime DEPRECATED_ATTRIBUTE;

@end

@interface CMMTouchDispatcher(Deprecated)

+(void)setAllTouchDispatcherEnable:(BOOL)enable_ DEPRECATED_ATTRIBUTE;
+(BOOL)isAllTouchDispatcherEnable DEPRECATED_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE @interface CMMTouchDispatcherScene : CMMTouchDispatcher

@end

@interface CMMLayer(Deprecated)

-(void)loadingProcess000 UNAVAILABLE_ATTRIBUTE;
-(void)whenLoadingEnded UNAVAILABLE_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE @interface CMMLayerMask : CMMLayerM

//use CMMLayerM class

@end

DEPRECATED_ATTRIBUTE typedef CMMLayerMDScrollbar CMMScrollbarDesign;

DEPRECATED_ATTRIBUTE @interface CMMLayerMaskDrag : CMMLayerMD

//use CMMLayerMD class

@end

DEPRECATED_ATTRIBUTE @interface CMMLayerPinchZoom : CMMLayer

@end

@class CMMLoadingObject;

DEPRECATED_ATTRIBUTE @protocol CMMLoadingObjectDelegate <CMMSequenceMakerDelegate>

@optional

//use -(void)sequenceMakerDidStart:(CMMSequenceMaker *)sequenceMaker_;
-(void)loadingObject_whenLoadingStart:(CMMLoadingObject *)loadingObject_;
// use -(void)sequenceMakerDidEnd:(CMMSequenceMaker *)sequenceMaker_;
-(void)loadingObject_whenLoadingEnded:(CMMLoadingObject *)loadingObject_;

@end

@interface CMMSpriteBatchBar(Deprecated)

+(id)batchBarWithTargetSprite:(CCSprite *)targetSprite_ batchBarSize:(CGSize)batchBarSize_ edgeSize:(CGSize)edgeSize_ barCropWidth:(float)barCropWidth_ DEPRECATED_ATTRIBUTE;
-(id)initWithTargetSprite:(CCSprite *)targetSprite_ batchBarSize:(CGSize)batchBarSize_ edgeSize:(CGSize)edgeSize_ barCropWidth:(float)barCropWidth_ DEPRECATED_ATTRIBUTE;

@property (nonatomic, readwrite) float barCropWidth DEPRECATED_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE @interface CMMLoadingObject : CMMSequenceMakerAuto

//use CMMSequenceMakerAuto class

+(id)loadingObject;

-(void)startLoadingWithTarget:(id)target_;
-(void)startLoading;
-(void)startLoadingWithMethodFormatter:(NSString *)methodFormatter_ target:(id)target_;
-(void)startLoadingWithMethodFormatter:(NSString *)methodFormatter_;

@property (nonatomic, copy) NSString *loadingMethodFormatter;

@end

/*
 */
@interface CMMDrawingManager(Deprecated)

-(CCTexture2D *)textureFrameWithFrameSeq:(int)frameSeq_ size:(CGSize)size_ backGroundYN:(BOOL)backGroundYN_ barYN:(BOOL)barYN_ DEPRECATED_ATTRIBUTE;
-(CCTexture2D *)textureFrameWithFrameSeq:(int)frameSeq_ size:(CGSize)size_ backGroundYN:(BOOL)backGroundYN_ DEPRECATED_ATTRIBUTE;
-(CCTexture2D *)textureFrameWithFrameSeq:(int)frameSeq_ size:(CGSize)size_ DEPRECATED_ATTRIBUTE;

@end

/*
 CMMControlItemBatchBar -> CMMSpriteBatchBar
 */
DEPRECATED_ATTRIBUTE @interface CMMControlItemBatchBar : CMMSpriteBatchBar

@end

@interface CMMControlItemText(Deprecated)

+(id)controlItemTextWithWidth:(float)width_ barSprite:(CCSprite *)barSprite_ DEPRECATED_ATTRIBUTE;
-(id)initWithWidth:(float)width_ barSprite:(CCSprite *)barSprite_ DEPRECATED_ATTRIBUTE;

@end

/*
 */
@interface CMMMenuItem(Deprecated)

+(id)menuItemWithFrameSeq:(int)frameSeq_ frameSize:(CGSize)frameSize_ DEPRECATED_ATTRIBUTE;
+(id)menuItemWithFrameSeq:(int)frameSeq_ DEPRECATED_ATTRIBUTE;

-(id)initWithFrameSeq:(int)frameSeq_ frameSize:(CGSize)frameSize_ DEPRECATED_ATTRIBUTE;
-(id)initWithFrameSeq:(int)frameSeq_ DEPRECATED_ATTRIBUTE;

@end

/*
 */
@interface CMMScrollMenu(Deprecated)

+(id)scrollMenuWithFrameSeq:(int)frameSeq_ frameSize:(CGSize)frameSize_ DEPRECATED_ATTRIBUTE;

@end

@interface CMMSObject(Deprecated)

-(void)updateBodyWithPosition:(CGPoint)point_ andRotation:(float)tRotation_ DEPRECATED_ATTRIBUTE;
-(void)updateBodyWithPosition:(CGPoint)point_ DEPRECATED_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE typedef CMMStageDef CMMStageSpecDef;

DEPRECATED_ATTRIBUTE static inline CMMStageDef CMMStageSpecDefMake(CGSize stageSize_, CGSize worldSize_, CGPoint gravity_){
	return CMMStageDefMake(stageSize_,worldSize_,gravity_);
}

DEPRECATED_ATTRIBUTE static inline CMMb2ContactMask b2CMaskMake(CMMb2FixtureType fixtureType_, cmmMaskBit maskBit1_, cmmMaskBit maskBit2_, cmmMaskBit checkBit_){
	return CMMb2ContactMaskMake(fixtureType_, maskBit1_, maskBit2_, checkBit_);
}

DEPRECATED_ATTRIBUTE @interface CMMStageBackGround : NSObject{
	CMMStage *stage;
	CCNode *backGroundNode;
	float distanceRate;
}

+(id)backGroundWithStage:(CMMStage *)stage_ distanceRate:(float)distanceRate_;
-(id)initWithStage:(CMMStage *)stage_ distanceRate:(float)distanceRate_;

-(void)updatePosition;

@property (nonatomic, assign) CMMStage *stage;
@property (nonatomic, retain) CCNode *backGroundNode;
@property (nonatomic, readwrite) float distanceRate;

@end

@interface CMMStage(Deprecated)

+(id)stageWithStageSpecDef:(CMMStageDef)stageSpecDef_;
-(id)initWithStageSpecDef:(CMMStageDef)stageSpecDef_;

@property (nonatomic, readwrite) BOOL isAllowTouch DEPRECATED_ATTRIBUTE;
@property (nonatomic, readonly) id backGround DEPRECATED_ATTRIBUTE;

@end

@interface CMMStageWorld(Deprecated)

-(CCArray *)objectsInTouched DEPRECATED_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE @interface CMMSParticleFollow : CMMSParticle

@end

@interface CMMStageParticle(Deprecated)

-(CMMSParticle *)addParticleFollowWithName:(NSString *)particleName_ target:(CMMSObject *)target_ DEPRECATED_ATTRIBUTE;
-(void)removeParticleFollowOfTarget:(CMMSObject *)target_ DEPRECATED_ATTRIBUTE;

@end

@interface CMMStageTMX(Deprecated)

+(id)stageWithStageSpecDef:(CMMStageDef)stageSpecDef_ tmxFileName:(NSString *)tmxFileName_ isInDocument:(BOOL)isInDocument_;
-(id)initWithStageSpecDef:(CMMStageDef)stageSpecDef_ tmxFileName:(NSString *)tmxFileName_ isInDocument:(BOOL)isInDocument_;

@end

@interface CMMStagePXL(Deprecated)

+(id)stageWithStageSpecDef:(CMMStageDef)stageSpecDef_ fileName:(NSString *)fileName_ isInDocument:(BOOL)isInDocument_;
-(id)initWithStageSpecDef:(CMMStageDef)stageSpecDef_ fileName:(NSString *)fileName_ isInDocument:(BOOL)isInDocument_;

@end

@interface CMMSSpecStage(Deprecated)

+(id)specWithTarget:(id)target_ withStageSpecDef:(CMMStageDef)stageSpecDef_;
-(id)initWithTarget:(id)target_ withStageSpecDef:(CMMStageDef)stageSpecDef_;

-(void)applyWithStageSpecDef:(CMMStageDef)stageSpecDef_;

@end

@interface CMMSimpleCache(Deprecated)

-(void)cacheObject:(id)object_ DEPRECATED_ATTRIBUTE;
-(void)clearCache DEPRECATED_ATTRIBUTE;

@end

typedef CMMSoundID SoundID DEPRECATED_ATTRIBUTE;

typedef enum{
	CMMSoundHandlerItemType_default DEPRECATED_ATTRIBUTE,
	CMMSoundHandlerItemType_follow DEPRECATED_ATTRIBUTE,
} CMMSoundHandlerItemType;

@interface CMMSoundHandlerItem(Deprecated)

@property (nonatomic, readwrite) CMMSoundHandlerItemType type DEPRECATED_ATTRIBUTE;

@end

DEPRECATED_ATTRIBUTE @interface CMMSoundHandlerItemFollow : CMMSoundHandlerItem

+(id)itemWithSoundSource:(CDSoundSource *)soundSource_ trackNode:(CCNode *)trackNode_;
-(id)initWithSoundSource:(CDSoundSource *)soundSource_ trackNode:(CCNode *)trackNode_;

@end

@interface CMMSoundHandler(Deprecated)

-(CMMSoundHandlerItem *)addSoundItem:(NSString*)soundPath_ soundPoint:(CGPoint)soundPoint_;
-(CMMSoundHandlerItem *)addSoundItem:(NSString*)soundPath_;

-(CMMSoundHandlerItemFollow *)addSoundItemFollow:(NSString*)soundPath_ trackNode:(CCNode *)trackNode_ DEPRECATED_ATTRIBUTE;
-(CMMSoundHandlerItem *)cachedSoundItem:(CMMSoundHandlerItemType)soundItemType_ DEPRECATED_ATTRIBUTE;

@end