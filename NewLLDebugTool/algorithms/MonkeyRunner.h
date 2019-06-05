//
//  MonkeyRunner.h
//  LLDebugToolDemo
//
//  Created by haleli on 2019/6/5.
//  Copyright © 2019 li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Element.h"
#import "Tree.h"
#import "App.h"
NS_ASSUME_NONNULL_BEGIN

@interface MonkeyRunner : NSObject
@property (nonatomic , strong) Tree *preTree ;
@property (nonatomic , strong) Tree *curTree ;
@property (nonatomic , strong) Element *preElement ;
@end

NS_ASSUME_NONNULL_END
