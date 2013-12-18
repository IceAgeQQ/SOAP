//
//  ViewController.h
//  SOAP Test
//
//  Created by Chao Xu on 13-12-18.
//  Copyright (c) 2013年 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSXMLParserDelegate,NSURLConnectionDelegate>

@property(strong,nonatomic) NSMutableData *webData;
@property(strong,nonatomic) NSMutableString *soapResults;
@property(strong,nonatomic) NSXMLParser *xmlParser;
@property(nonatomic) BOOL elementFound;
@property(strong,nonatomic) NSString *matchingElement;
@property(strong,nonatomic) NSURLConnection *conn;

@property (strong, nonatomic) IBOutlet UITextField *phoneNumber;

- (IBAction)doQuery:(id)sender;

@end
