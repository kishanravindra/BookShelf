//
//  PDFPageVIewController.h
//  BookShelfDevelopment
//
//  Created by Rico on 15/3/3.
//  Copyright (c) 2015年 zhanzhenchao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDFPageViewController : UIPageViewController <UIPageViewControllerDataSource>

@property(nonatomic)CGPDFDocumentRef pdfBook;

@end
