#import <Cocoa/Cocoa.h>
#import "MyCameraCentral.h"

@interface PS3EyeWindowAppDelegate : NSObject <NSApplicationDelegate> {
	NSWindow *window;
	NSImage* image;
	NSBitmapImageRep* imageRep;
	NSImageView* imageView;
	MyCameraCentral* central;
	MyCameraDriver* driver;
	
	BOOL cameraGrabbing;
	CameraResolution cameraResolution;
	int cameraWidth;
	int cameraHeight;
	int cameraFPS;
	
	BOOL frameNew;
}
- (void)connect;
- (BOOL)isFrameNew;

//delegate calls from camera central
- (void)cameraDetected:(unsigned long)uid;
//delegate calls from camera driver
- (void)imageReady:(id)cam;
//- (void)cameraHasShutDown:(id)cam;
//- (void) cameraEventHappened:(id)sender event:(CameraEvent)evt;
- (void) updateStatus:(NSString *)status fpsDisplay:(float)fpsDisplay fpsReceived:(float)fpsReceived;

@property (assign) IBOutlet NSWindow *window;

@end
