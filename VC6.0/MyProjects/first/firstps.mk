
firstps.dll: dlldata.obj first_p.obj first_i.obj
	link /dll /out:firstps.dll /def:firstps.def /entry:DllMain dlldata.obj first_p.obj first_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del firstps.dll
	@del firstps.lib
	@del firstps.exp
	@del dlldata.obj
	@del first_p.obj
	@del first_i.obj
