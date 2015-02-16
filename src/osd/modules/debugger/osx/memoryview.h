// license:BSD-3-Clause
// copyright-holders:Vas Crabb
//============================================================
//
//  debugosxmemoryview.h - MacOS X Cocoa debug window handling
//
//  Copyright (c) 1996-2015, Nicola Salmoria and the MAME Team.
//  Visit http://mamedev.org for licensing and usage restrictions.
//
//============================================================

#import "debugosx.h"

#import "debugview.h"

#include "emu.h"
#include "debug/dvmemory.h"

#import <Cocoa/Cocoa.h>


@interface MAMEMemoryView : MAMEDebugView <MAMEDebugViewSubviewSupport, MAMEDebugViewExpressionSupport>
{
}

- (id)initWithFrame:(NSRect)f machine:(running_machine &)m;

- (NSSize)maximumFrameSize;

- (NSString *)selectedSubviewName;
- (int)selectedSubviewIndex;
- (void)selectSubviewAtIndex:(int)index;
- (BOOL)selectSubviewForDevice:(device_t *)device;
- (BOOL)selectSubviewForSpace:(address_space *)space;

- (NSString *)expression;
- (void)setExpression:(NSString *)exp;

- (debug_view_memory_source const *)source;

- (IBAction)showChunkSize:(id)sender;
- (IBAction)showPhysicalAddresses:(id)sender;
- (IBAction)showReverseView:(id)sender;
- (IBAction)showReverseViewToggle:(id)sender;
- (IBAction)changeBytesPerLine:(id)sender;

- (void)insertActionItemsInMenu:(NSMenu *)menu atIndex:(NSInteger)index;
- (void)insertSubviewItemsInMenu:(NSMenu *)menu atIndex:(NSInteger)index;

@end
