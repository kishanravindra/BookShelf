//
//  BookShelfCollectionView.h
//  BookShelfDevelopment
//
//  Created by Rico on 15/3/3.
//  Copyright (c) 2015年 zhanzhenchao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BookShelfCollectionView : UICollectionViewController<UICollectionViewDelegate, UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property(nonatomic) CGPDFDocumentRef pdfDocument;

@end
