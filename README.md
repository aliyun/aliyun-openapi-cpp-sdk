# Alibaba Cloud C++ Software Development Kit
[中文文档](./README_zh.md)

- [![Build Status](https://travis-ci.org/aliyun/aliyun-openapi-cpp-sdk.svg?branch=master)](https://travis-ci.org/aliyun/aliyun-openapi-cpp-sdk)

The Alibaba Cloud C++ Software Development Kit (SDK) allows you to access Alibaba Cloud services such as Elastic Compute Service (ECS), Server Load Balancer (SLB), and CloudMonitor. You can access Alibaba Cloud services without the need to handle API related tasks, such as signing and constructing your requests.

This document introduces how to obtain and call Alibaba Cloud C++ SDK.

If you have any problem while using C++ SDK, please join the **DingTalk group: 11771185 (the official SDK customer service group of Alibaba Cloud)** for consultation.

## Prerequisites

- To use Alibaba Cloud C++ SDK, you must have an Alibaba Cloud account and an AccessKey.

	The AccessKey is required when initializing the client. You can create an AccessKey in the Alibaba Cloud console. For more information, see [Create an AccessKey](https://usercenter.console.aliyun.com/?spm=5176.doc52740.2.3.QKZk8w#/manage/ak).

	>**Note:** To increase the security of your account, we recommend that you use the AccessKey of the RAM user to access Alibaba Cloud services.

- To use Alibaba Cloud C++ SDK to access the APIs of a product, you must first activate the product on the [Alibaba Cloud console](https://home.console.aliyun.com/?spm=5176.doc52740.2.4.QKZk8w) if required.


## Install C++ SDK

1. Install third-party libraries on the Linux platform, including `libcurl`, `libopenssl`, `libuuid`, and `libjsoncpp`.

	- Run the following commands on the Redhat/Fedora system to install third-party libraries.
	```
    sudo dnf install libcurl-devel openssl-devel libuuid-devel libjsoncpp-devel
    ```
	- Run the following commands on the Debian/Ubuntu system to install third-party libraries.
    ```
    sudo apt-get install libcurl4-openssl-dev libssl-dev uuid-dev libjsoncpp-dev
    ```
2. Run the following commands to clone source codes from GitHub.

    ```
    git clone https://github.com/aliyun/aliyun-openapi-cpp-sdk.git
    ```

## Use the C++ SDK

Before using C++ SDK, you must first configure the preprocessor to define `ALIBABACLOUD_SHARED` to achieve dynamic linking with Alibaba Cloud C++ SDK shared libraries. Then you must create a client instance, specify the region of cloud services and provide authentication parameters before sending API requests.

The following code shows how to call the [DescribeInstances](~~25506~~) API of ECS to query detailed information of all ECS instances in a specific region.

```
#include <iostream>
#include <alibabacloud/core/AlibabaCloud.h>
#include <alibabacloud/ecs/EcsClient.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Ecs;

int main(int argc, char** argv)
{
	// Initialize the SDK
	AlibabaCloud::InitializeSdk();

	// Configure the ECS instance
	ClientConfiguration configuration("<your-region-id>");
	EcsClient client("<your-access-key-id>", "<your-access-key-secret>", configuration);

	// Create an API request and set parameters
	Model::DescribeInstancesRequest request;
	request.setPageSize(10);

	auto outcome = client.describeInstances(request);
	if (!outcome.isSuccess())
	{
		// Handle exceptions
		std::cout << outcome.error().errorCode() << std::endl;
		AlibabaCloud::ShutdownSdk();
		return -1;
	}

	std::cout << "totalCount: " << outcome.result().getTotalCount() << std::endl;

	// Close the SDK
	AlibabaCloud::ShutdownSdk();
	return 0;
}
```
