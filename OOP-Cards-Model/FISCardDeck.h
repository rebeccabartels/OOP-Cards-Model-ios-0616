//
//  FISCardDeck.h
//  OOP-Cards-Model
//
//  Created by Rebecca Bartels on 6/21/16.
//  Copyright © 2016 Al Tyus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FISAppDelegate.h"
#import "FISCard.h"


@class FISCard;

@interface FISCardDeck : NSObject

@property (strong, nonatomic) NSMutableArray *remainingCards;
@property (strong, nonatomic) NSMutableArray *dealtCards;

- (instancetype)init;

- (FISCard *)drawNextCard;

- (void)resetDeck;

- (void)gatherDealtCards;

- (void)shuffleRemainingCards;

@end

