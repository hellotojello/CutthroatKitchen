//
//  Sabotage.h
//  CutthroatKitchen
//
//  Created by Jo Tu on 10/9/16.
//  Copyright © 2016 alvorithms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Player.h"

@interface Sabotage : NSObject


-(id)initWithName:(NSString*)name info:(NSString*)info CPDebuff:(double)CPDebuff MoraleDebuff:(double)moraleDebuff;

@property (nonatomic,strong) NSString* name;
@property (nonatomic,strong) NSString* info;

@property (nonatomic) double cookingDebuff;
@property (nonatomic) double moraleDebuff;
@property (nonatomic) Player *target;

@end
