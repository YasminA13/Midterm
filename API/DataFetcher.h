//
//  Data.h
//  API
//
//  Created by Rosalyn Kingsmill on 2016-05-31.
//  Copyright © 2016 Rosalyn Kingsmill. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataFetcher : NSObject


-(void)returnData:(NSString*)text;
+(int)convertToPercent:(NSString*)decimalString;

@end
