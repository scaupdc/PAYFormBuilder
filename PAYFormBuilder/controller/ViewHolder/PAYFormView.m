//
//  PAYFormView.m
//  PAYFormBuilder
//
//  Created by Simon Seyer on 05.11.13.
//  Copyright (c) 2014 Paij. All rights reserved.
//

#import "PAYFormView.h"


@implementation PAYFormView

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.defaultErrorColor = [UIColor colorFromHex:0xFFFF3B30];
        self.defaultTextColor  = [UIColor colorFromHex:0xFF323232];
    }
    return self;
}

@end
