/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/iot/model/QueryDeviceDetailRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceDetailRequest;

QueryDeviceDetailRequest::QueryDeviceDetailRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceDetail")
{}

QueryDeviceDetailRequest::~QueryDeviceDetailRequest()
{}

std::string QueryDeviceDetailRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceDetailRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", std::to_string(iotId));
}

std::string QueryDeviceDetailRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceDetailRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string QueryDeviceDetailRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceDetailRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", std::to_string(deviceName));
}

std::string QueryDeviceDetailRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceDetailRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

std::string QueryDeviceDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

