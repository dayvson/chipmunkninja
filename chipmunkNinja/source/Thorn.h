//
//  Thorns.h
//  chipmunkNinja
//
//  Created by Tiago Padua on 16/2/12.
//  Copyright (c) 2012 Terra Networks. All rights reserved.
//

#import "cocos2d.h"
#import "BaseObject.h"
@interface Thorn : BaseObject {
    
@private
    BOOL _positionedRight;
}
-(void)setSide:(BOOL)flipRight;

@end