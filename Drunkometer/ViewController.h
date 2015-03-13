//
//  ViewController.h
//  Drunkometer
//
//  Created by Edward Heywood on 11/03/2015.
//  Copyright (c) 2015 Edward Heywood. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UISlider *beerCountSlider;
@property (weak, nonatomic) UILabel *resultLabel;
//@property (weak, nonatomic) UILabel *numberOfBeers;
//@property(nonatomic) BOOL autoresizesSubviews;
//@property(nonatomic) UIViewAutoresizing autoresizingMask;
@property(nonatomic, retain) UIColor *minimumTrackTintColor;
@property(nonatomic, retain) UIColor *maximumTrackTintColor;

- (void)buttonPressed:(UIButton *)sender;


@end

