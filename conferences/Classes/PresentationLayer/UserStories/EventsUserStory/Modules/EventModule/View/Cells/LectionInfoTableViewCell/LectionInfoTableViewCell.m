//
//  SpeachTableViewCell.m
//  Conferences
//
//  Created by Karpushin Artem on 07/11/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import "LectionInfoTableViewCell.h"
#import "LectionInfoTableViewCellObject.h"

static CGFloat const LectionInfoTableViewCellHeight = 340.0f;

@interface LectionInfoTableViewCell ()

@property (weak, nonatomic) IBOutlet UIImageView *speakerImageView;
@property (weak, nonatomic) IBOutlet UILabel *speakerName;
@property (weak, nonatomic) IBOutlet UILabel *speakerCompanyName;
@property (weak, nonatomic) IBOutlet UITextView *lectureDescription;
@property (weak, nonatomic) IBOutlet UILabel *lectureTitle;
@property (weak, nonatomic) IBOutlet UIButton *readMoreButton;

@end

@implementation LectionInfoTableViewCell

- (BOOL)shouldUpdateCellWithObject:(LectionInfoTableViewCellObject *)object {
    return YES;
}

+ (CGFloat)heightForObject:(id)object atIndexPath:(NSIndexPath *)indexPath tableView:(UITableView *)tableView {
    return LectionInfoTableViewCellHeight;
}

@end
