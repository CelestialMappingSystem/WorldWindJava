#ifndef PROPERTY_CHANGE_LISTENER_H
#define PROPERTY_CHANGE_LISTENER_H

/*
 * Copyright (C) 2012 United States Government as represented by the Administrator of the
 * National Aeronautics and Space Administration.
 * All Rights Reserved.
 */
#import <Cocoa/Cocoa.h>
#import <JavaNativeFoundation/JavaNativeFoundation.h> // Helper framework for Cocoa and JNI development.

/*
    Version $Id: PropertyChangeListener.h 1171 2013-02-11 21:45:02Z dcollins $
 */
@interface PropertyChangeListener : JNFJObjectWrapper
{
}

- (void)propertyChange;

@end

#endif /* PROPERTY_CHANGE_LISTENER_H */
