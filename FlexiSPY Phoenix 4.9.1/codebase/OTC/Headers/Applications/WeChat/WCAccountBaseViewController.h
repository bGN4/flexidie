/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MMUIViewController.h"

//#import "MMTableViewInfoDelegate-Protocol.h"
//#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMTableViewInfo, NSString, WCAccountControlData;

@interface WCAccountBaseViewController : MMUIViewController //<MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
    unsigned long m_uiReportStatus;
    NSString *m_nsStyleID;
    struct timeval m_tvStart;
}

@property(nonatomic) unsigned long m_uiReportStatus; // @synthesize m_uiReportStatus;
@property(retain, nonatomic) NSString *m_nsStyleID; // @synthesize m_nsStyleID;
//- (id).cxx_construct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)onNext;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)getSaveStypeBarBtnWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)getGreenBtn;
- (id)GetUnderLineLinkBtnWithTitle:(id)arg1 image:(id)arg2;
- (id)GetUnderLineLinkBtnWithTitle:(id)arg1 image:(id)arg2 font:(id)arg3;
- (id)getWhiteBtn;
- (id)getHeaderView:(id)arg1;
- (void)initNavigationBar;
- (unsigned long)getStayTime;
- (void)setStartTime;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)callViewDidLoad;
- (void)initData;
- (void)refreshViewWithData:(id)arg1;
- (void)initWithData:(id)arg1;
- (id)init;

@end

