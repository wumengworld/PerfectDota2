//
//  PDMineViewController.h
//  PerfectDota2
//
//  Created by 谈Xx on 16/2/2.
//  Copyright © 2016年 谈Xx. All rights reserved.
//

#import "PDBaseViewController.h"

@interface MineViewController : PDBaseViewController

@property (nonatomic, weak) UIScrollView *BGScrollView;

@property (nonatomic, weak) UIScrollView *mineBGScrollView;
@property (nonatomic, weak) UICollectionView *collectionView;
@property (nonatomic, strong) NSArray *collectionList;

@property (nonatomic, strong) NSArray *heroList;
@end
