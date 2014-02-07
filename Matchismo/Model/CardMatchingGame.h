//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Daniel Young on 1/31/2014.
//  Copyright (c) 2014 Daniel Young. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count
                        UsingDeck:(Deck *) deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
