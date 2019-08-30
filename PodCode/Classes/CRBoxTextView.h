//
//  CRBoxTextView.h
//  CRBoxInputView
//
//  Created by Chobits on 2019/1/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CRBoxTextView : UIControl <UITextInput, UITextInputTraits>

//@interface CRBoxTextView : UITextField

@property(nullable, nonatomic,copy)   NSString               *text;
@property(nullable, nonatomic,weak)   id<UITextFieldDelegate> delegate;
@property (nullable, readwrite, strong) UIView *inputAccessoryView;

@property(nonatomic) UIKeyboardType keyboardType;
@property(null_unspecified,nonatomic,copy) UITextContentType textContentType;

@end

NS_ASSUME_NONNULL_END
