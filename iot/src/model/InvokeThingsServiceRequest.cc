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

#include <alibabacloud/iot/model/InvokeThingsServiceRequest.h>

using AlibabaCloud::Iot::Model::InvokeThingsServiceRequest;

InvokeThingsServiceRequest::InvokeThingsServiceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "InvokeThingsService")
{}

InvokeThingsServiceRequest::~InvokeThingsServiceRequest()
{}

std::string InvokeThingsServiceRequest::getArgs()const
{
	return args_;
}

void InvokeThingsServiceRequest::setArgs(const std::string& args)
{
	args_ = args;
	setCoreParameter("Args", args);
}

std::string InvokeThingsServiceRequest::getIdentifier()const
{
	return identifier_;
}

void InvokeThingsServiceRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string InvokeThingsServiceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void InvokeThingsServiceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> InvokeThingsServiceRequest::getDeviceName()const
{
	return deviceName_;
}

void InvokeThingsServiceRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int i = 0; i!= deviceName.size(); i++)
		setCoreParameter("DeviceName."+ std::to_string(i), std::to_string(deviceName.at(i)));
}

std::string InvokeThingsServiceRequest::getProductKey()const
{
	return productKey_;
}

void InvokeThingsServiceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string InvokeThingsServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InvokeThingsServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

