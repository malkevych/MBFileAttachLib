//
//  ItemDriveServiceFile.h
//  SwipeIn
//
//  Created by Malkevych Bohdan Ihorovych on 15.03.16.
//  Copyright © 2016 Seductive. All rights reserved.
//

#import "GTLDrive.h"
#import "ItemFromFileServiceProtocol.h"

@interface ItemDriveServiceFile : GTLDriveFile <ItemFromFileServiceProtocol>

@property (nonatomic, strong) NSString * extention;
@property (nonatomic, assign) FSFileType fileType;
@property (nonatomic, strong) NSString * serverPath;

-(BOOL)isFolder;
+(NSArray <ItemDriveServiceFile*>*)getItemDriveServiceFilesFrom:(NSArray <GTLDriveFile *>*)files;

@end
