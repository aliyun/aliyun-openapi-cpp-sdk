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

#include <alibabacloud/iot/model/BatchGetDeviceStateRequest.h>

using AlibabaCloud::Iot::Model::BatchGetDeviceStateRequest;

BatchGetDeviceStateRequest::BatchGetDeviceStateRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchGetDeviceState")
{}

BatchGetDeviceStateRequest::~BatchGetDeviceStateRequest()
{}

std::vector<std::string> BatchGetDeviceStateRequest::getIotId()const
{
	return iotId_;
}

void BatchGetDeviceStateRequest::setIotId(const std::vector<std::string>& iotId)
{
	iotId_ = iotId;
	for(int i = 0; i!= iotId.size(); i++)
		setCoreParameter("IotId."+ std::to_string(i), iotId.at(i));
}

std::string BatchGetDeviceStateRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchGetDeviceStateRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> BatchGetDeviceStateRequest::getDeviceName()const
{
	return deviceName_;
}

void BatchGetDeviceStateRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int i = 0; i!= deviceName.size(); i++)
		setCoreParameter("DeviceName."+ std::to_string(i), deviceName.at(i));
}

std::string BatchGetDeviceStateRequest::getProductKey()const
{
	return productKey_;
}

void BatchGetDeviceStateRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string BatchGetDeviceStateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BatchGetDeviceStateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

