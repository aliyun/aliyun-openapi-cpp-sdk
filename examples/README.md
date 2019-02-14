# how to use examples

## 1. install sdk

```bash
cd path/to/aliyun-openapi-cpp-sdk
./build_sdk.sh
```

## 2. build examples

```bash
cd path/to/aliyun-openapi-cpp-sdk
cd examples
mkdir build
cd build
cmake ..
make -j
```

## 3. run examples

configure `accessKeyId` and `accessKeySecret` via env.

```bash
export ENV_AccessKeyId="your-accessKeyId"
export ENV_AccessKeySecret="your-accessKeySecret"
```

```bash
cd path/to/aliyun-openapi-cpp-sdk
cd examples/build/bin

# run ecs_demo
./ecs_demo
...
```
