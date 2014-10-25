//
//  CCSprite+Grid.h
//  GameOfLife
//
//  Created by Etienne van der Walt on 25/10/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Grid.h"

@interface Grid: CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
