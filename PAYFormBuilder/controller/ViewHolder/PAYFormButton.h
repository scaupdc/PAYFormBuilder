//
//  PAYFormButton.h
//  PAYFormBuilder
//
//  Created by Simon Seyer on 01.11.13.
//  Copyright (c) 2014 Paij. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PAYFormView.h"


@interface PAYFormButton : PAYFormView

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, assign) PAYFormButtonStyle style;
@property (nonatomic, copy) PAYFormButtonSelectionBlock selectionBlock;
@property (nonatomic, assign) BOOL selected;

@end
