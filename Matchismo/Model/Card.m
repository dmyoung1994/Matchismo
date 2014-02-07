//
//  Card.m
//  Matchismo
//
//  Created by Daniel Young on 1/30/2014.
//  Copyright (c) 2014 Daniel Young. All rights reserved.
//

#import "Card.h"
@interface Card()
@end
@implementation Card
- (int)match:(NSArray *)otherCards
{
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1; }
    }
    return score;
}
@end