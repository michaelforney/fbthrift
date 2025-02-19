/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.swift.transport.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("MyService")
public interface MyService extends java.io.Closeable {
    @com.facebook.swift.service.ThriftService("MyService")
    public interface Async extends java.io.Closeable {
        @java.lang.Override void close();

        @ThriftMethod(value = "ping")
        ListenableFuture<Void> ping();

        default ListenableFuture<Void> ping(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> pingWrapper(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "getRandomData")
        ListenableFuture<String> getRandomData();

        default ListenableFuture<String> getRandomData(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<String>> getRandomDataWrapper(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "hasDataById")
        ListenableFuture<Boolean> hasDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id);

        default ListenableFuture<Boolean> hasDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Boolean>> hasDataByIdWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "getDataById")
        ListenableFuture<String> getDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id);

        default ListenableFuture<String> getDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<String>> getDataByIdWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "putDataById")
        ListenableFuture<Void> putDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data);

        default ListenableFuture<Void> putDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> putDataByIdWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "lobDataById",
                      oneway = true)
        ListenableFuture<Void> lobDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data);

        default ListenableFuture<Void> lobDataById(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> lobDataByIdWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
            @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "doNothing")
        ListenableFuture<Void> doNothing();

        default ListenableFuture<Void> doNothing(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> doNothingWrapper(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "ping")
    void ping() throws org.apache.thrift.TException;

    default void ping(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> pingWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "getRandomData")
    String getRandomData() throws org.apache.thrift.TException;

    default String getRandomData(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<String> getRandomDataWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "hasDataById")
    boolean hasDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id) throws org.apache.thrift.TException;

    default boolean hasDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Boolean> hasDataByIdWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "getDataById")
    String getDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id) throws org.apache.thrift.TException;

    default String getDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<String> getDataByIdWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "putDataById")
    void putDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data) throws org.apache.thrift.TException;

    default void putDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> putDataByIdWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "lobDataById",
                  oneway = true)
    void lobDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data) throws org.apache.thrift.TException;

    default void lobDataById(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> lobDataByIdWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @com.facebook.swift.codec.ThriftField(value=2, name="data", requiredness=Requiredness.NONE) final String data,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "doNothing")
    void doNothing() throws org.apache.thrift.TException;

    default void doNothing(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> doNothingWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("MyService")
    interface Reactive extends reactor.core.Disposable {
        reactor.core.publisher.Mono<Void> ping();

        default reactor.core.publisher.Mono<Void> ping(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> pingWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<String> getRandomData();

        default reactor.core.publisher.Mono<String> getRandomData(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<String>> getRandomDataWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Boolean> hasDataById(final long id);

        default reactor.core.publisher.Mono<Boolean> hasDataById(final long id, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Boolean>> hasDataByIdWrapper(final long id, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<String> getDataById(final long id);

        default reactor.core.publisher.Mono<String> getDataById(final long id, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<String>> getDataByIdWrapper(final long id, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> putDataById(final long id, final String data);

        default reactor.core.publisher.Mono<Void> putDataById(final long id, final String data, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> putDataByIdWrapper(final long id, final String data, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> lobDataById(final long id, final String data);

        default reactor.core.publisher.Mono<Void> lobDataById(final long id, final String data, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> lobDataByIdWrapper(final long id, final String data, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> doNothing();

        default reactor.core.publisher.Mono<Void> doNothing(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> doNothingWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
