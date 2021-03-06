cmake_minimum_required(VERSION 3.15)
project(ecilaz)

set(CMAKE_CXX_STANDARD 14)

add_executable(ecilaz
        app/dispatchtask.cpp
        app/dispatchtask.h
        app/http.cpp
        app/http.h
        app/httpmsgdispatcherdic.cpp
        app/httpmsgdispatcherdic.h
        app/httpmsgindex.cpp
        app/httpmsgindex.h
        app/httpmsgnotfound.cpp
        app/httpmsgnotfound.h
        app/httpmsgreq.cpp
        app/httpmsgreq.h
        app/httpmsgres.cpp
        app/httpmsgres.h
        app/ihttpmsgdispatcher.cpp
        app/ihttpmsgdispatcher.h
        app/main.cpp
        app/main.h
        app/networktask.cpp
        app/networktask.h
        app/packethandler.cpp
        app/packethandler.h
        infra/acceptor.cpp
        infra/acceptor.h
        infra/asyncacceptor.cpp
        infra/asyncacceptor.h
        infra/asyncresultimpl.cpp
        infra/asyncresultimpl.h
        infra/asyncresultpool.cpp
        infra/asyncresultpool.h
        infra/asyncsession.cpp
        infra/asyncsession.h
        infra/asyncsessionpool.cpp
        infra/asyncsessionpool.h
        infra/basemacro.h
        infra/basetype.h
        infra/buffer.cpp
        infra/buffer.h
        infra/bufferpool.cpp
        infra/bufferpool.h
        infra/config.h
        infra/danodelist.cpp
        infra/danodelist.h
        infra/demultiplexer.cpp
        infra/demultiplexer.h
        infra/ecila.h
        infra/epollreactor.cpp
        infra/epollreactor.h
        infra/eventhandlerrep.cpp
        infra/eventhandlerrep.h
        infra/eventresult.cpp
        infra/eventresult.h
        infra/eventtype.h
        infra/file.cpp
        infra/file.h
        infra/guard.h
        infra/iacceptor.h
        infra/iactsession.h
        infra/iasyncresult.h
        infra/idbhandle.cpp
        infra/idbhandle.h
        infra/idemultiplexer.h
        infra/ieventhandler.cpp
        infra/ieventhandler.h
        infra/iniloader.cpp
        infra/iniloader.h
        infra/iocpproactor.cpp
        infra/iocpproactor.h
        infra/ipackethandler.cpp
        infra/ipackethandler.h
        infra/ipaddrs.cpp
        infra/ipaddrs.h
        infra/iservice.h
        infra/itask.h
        infra/kqueuereactor.cpp
        infra/kqueuereactor.h
        infra/lfthreadpool.cpp
        infra/lfthreadpool.h
        infra/log.cpp
        infra/log.h
        infra/msgqueue.cpp
        infra/msgqueue.h
        infra/node.cpp
        infra/node.h
        infra/nullmutex.h
        infra/os.h
        infra/os_freebsd.h
        infra/os_linux.h
        infra/os_windows.h
        infra/osapi.cpp
        infra/osapi.h
        infra/packet.cpp
        infra/packet.h
        infra/pool.h
        infra/ringbuffer.cpp
        infra/ringbuffer.h
        infra/selectreactor.cpp
        infra/selectreactor.h
        infra/serial.h
        infra/server.cpp
        infra/server.h
        infra/session.cpp
        infra/session.h
        infra/socket.cpp
        infra/socket.h
        infra/syncacceptor.cpp
        infra/syncacceptor.h
        infra/syncsession.cpp
        infra/syncsession.h
        infra/syncsessionpool.cpp
        infra/syncsessionpool.h
        infra/thread.cpp
        infra/thread.h
        infra/threadcondition.h
        infra/threadmutex.h
        infra/threadspecdata.cpp
        infra/threadspecdata.h
        infra/timer.cpp
        infra/timer.h
        infra/tokenizer.cpp
        infra/tokenizer.h
        infra/unittest.h
        infra/unittestsuite.h)