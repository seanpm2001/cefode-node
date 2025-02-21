// Copyright Joyent, Inc. and other Node contributors.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit
// persons to whom the Software is furnished to do so, subject to the
// following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
// NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
// USE OR OTHER DEALINGS IN THE SOFTWARE.


NODE_EXT_LIST_START
NODE_EXT_LIST_ITEM(node_buffer)
NODE_EXT_LIST_ITEM(node_typed_array)
#if HAVE_OPENSSL
NODE_EXT_LIST_ITEM(node_crypto)
#endif
NODE_EXT_LIST_ITEM(node_evals)
NODE_EXT_LIST_ITEM(node_fs)
NODE_EXT_LIST_ITEM(node_http_parser)
#ifdef __POSIX__
NODE_EXT_LIST_ITEM(node_signal_watcher)
#endif
NODE_EXT_LIST_ITEM(node_os)
NODE_EXT_LIST_ITEM(node_zlib)

// libuv rewrite
NODE_EXT_LIST_ITEM(node_timer_wrap)
NODE_EXT_LIST_ITEM(node_tcp_wrap)
NODE_EXT_LIST_ITEM(node_udp_wrap)
NODE_EXT_LIST_ITEM(node_pipe_wrap)
NODE_EXT_LIST_ITEM(node_cares_wrap)
NODE_EXT_LIST_ITEM(node_tty_wrap)
NODE_EXT_LIST_ITEM(node_process_wrap)
NODE_EXT_LIST_ITEM(node_fs_event_wrap)

// nw extensions
NODE_EXT_LIST_ITEM(node_id_weak_map)
NODE_EXT_LIST_ITEM(node_v8_util)
NODE_EXT_LIST_ITEM(node_sqlite3)

NODE_EXT_LIST_END

