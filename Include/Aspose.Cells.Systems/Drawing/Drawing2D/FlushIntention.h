#ifndef _SYSTEM_DRAWING_DRAWING2D_FLUSHINTENTION_H_
#define _SYSTEM_DRAWING_DRAWING2D_FLUSHINTENTION_H_

// FlushIntentionFlush merely means that all the pending commands have been passed to
// the hardware, and that the final results will be shown as soon as the hardware finishes
// its rendering.  FlushIntentionSync means to wait for the hardware to actually finish its
// rendering before returning - this is important for animation and timing loops.

namespace Aspose {
	namespace Cells {
		namespace Systems{
			namespace Drawing {
				namespace Drawing2D {
					enum FlushIntention
					{
						// Flush all batched rendering operations
						/// <include file='doc\FlushIntention.uex' path='docs/doc[@for="FlushIntention.Flush"]/*' />
						/// <devdoc>
						///    Specifies the stack of all graphics
						///    operations is flushed immediately.
						/// </devdoc>
						Flush = 0,

						// Flush all batched rendering operations and wait for them to complete
						/// <include file='doc\FlushIntention.uex' path='docs/doc[@for="FlushIntention.[....]"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies that all graphics operations on the stack are execyted as soon as
						///       possible. This synchronizes the graphics state.
						///    </para>
						/// </devdoc>
						Sync = 1
					};
				}
			}
		}
	}
}
#endif