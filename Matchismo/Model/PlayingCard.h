//
//  PlayingCard.h
//  Matchismo
//
//  Created by Daniel Young on 1/30/2014.
//  Copyright (c) 2014 Daniel Young. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
