
secondps.dll: dlldata.obj second_p.obj second_i.obj
	link /dll /out:secondps.dll /def:secondps.def /entry:DllMain dlldata.obj second_p.obj second_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del secondps.dll
	@del secondps.lib
	@del secondps.exp
	@del dlldata.obj
	@del second_p.obj
	@del second_i.obj
