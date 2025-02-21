{
    This file is part of the Free Pascal run time library.
    Copyright (c) 2015 Jonas Maebe

    This file contains declarations for LLVM intrinsics

    See the file COPYING.FPC, included in this distribution,
    for details about the copyright.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

 **********************************************************************}


procedure llvm_memcpy64(dest, source: pointer; len: qword; align: cardinal; isvolatile: LLVMBool1); compilerproc; external name 'llvm.memcpy.p0i8.p0i8.i64';
{ LLVM 7.0+, alignment specified as part of the dest and source parameters }
procedure llvm_memcpy64_indivalign(dest, source: pointer; len: qword; isvolatile: LLVMBool1); compilerproc; external name 'llvm.memcpy.p0i8.p0i8.i64';

function llvm_frameaddress(level: longint): pointer; compilerproc; external name 'llvm.frameaddress';

function llvm_eh_typeid_for(sym: pointer): longint; compilerproc; external name 'llvm.eh.typeid.for';

procedure llvm_lifetime_start(size: int64; ptr: pointer); compilerproc; external name 'llvm.lifetime.start';
procedure llvm_lifetime_end(size: int64; ptr: pointer); compilerproc; external name 'llvm.lifetime.end';

function llvm_ctlz(src: UInt8; is_zero_undef: LLVMBool1): UInt8; external name 'llvm.ctlz.i8';
function llvm_ctlz(src: UInt16; is_zero_undef: LLVMBool1): UInt16; external name 'llvm.ctlz.i16';
function llvm_ctlz(src: UInt32; is_zero_undef: LLVMBool1): UInt32; external name 'llvm.ctlz.i32';
function llvm_ctlz(src: UInt64; is_zero_undef: LLVMBool1): UInt64; external name 'llvm.ctlz.i64';

function llvm_cttz(src: UInt8; is_zero_undef: LLVMBool1): UInt8; external name 'llvm.cttz.i8';
function llvm_cttz(src: UInt16; is_zero_undef: LLVMBool1): UInt16; external name 'llvm.cttz.i16';
function llvm_cttz(src: UInt32; is_zero_undef: LLVMBool1): UInt32; external name 'llvm.cttz.i32';
function llvm_cttz(src: UInt64; is_zero_undef: LLVMBool1): UInt64; external name 'llvm.cttz.i64';

function llvm_ctpop(src: UInt8): UInt8; external name 'llvm.ctpop.i8';
function llvm_ctpop(src: UInt16): UInt16; external name 'llvm.ctpop.i16';
function llvm_ctpop(src: UInt32): UInt32; external name 'llvm.ctpop.i32';
function llvm_ctpop(src: UInt64): UInt64; external name 'llvm.ctpop.i64';

function llvm_sqrt_f32(val: single): single; compilerproc; external name 'llvm.sqrt.f32';
function llvm_sqrt_f64(val: double): double; compilerproc; external name 'llvm.sqrt.f64';
{$ifdef SUPPORT_EXTENDED}
function llvm_sqrt_f80(val: extended): extended; compilerproc; external name 'llvm.sqrt.f80';
{$endif}
{$ifdef SUPPORT_FLOAT128}
function llvm_sqrt_f128(val: float128): float128; compilerproc; external name 'llvm.sqrt.f128';
{$endif}

function llvm_fma_f32(a, b, c: single): single; compilerproc; external name 'llvm.fma.f32';
function llvm_fma_f64(a, b, c: double): double; compilerproc; external name 'llvm.fma.f64';
{$ifdef SUPPORT_EXTENDED}
function llvm_fma_f80(a, b, c: extended): extended; compilerproc; external name 'llvm.fma.f80';
{$endif}
{$ifdef SUPPORT_FLOAT128}
function llvm_fma_f128(a, b, c: float128): float128; compilerproc; external name 'llvm.fma.f128';
{$endif}
