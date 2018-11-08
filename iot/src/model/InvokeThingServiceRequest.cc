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

#include <alibabacloud/iot/model/InvokeThingServiceRequest.h>

using AlibabaCloud::Iot::Model::InvokeThingServiceRequest;

InvokeThingServiceRequest::InvokeThingServiceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "InvokeThingService")
{}

InvokeThingServiceRequest::~InvokeThingServiceRequest()
{}

std::string InvokeThingServiceRequest::getArgs()const
{
	return args_;
}

void InvokeThingServiceRequest::setArgs(const std::string& args)
{
	args_ = args;
	setParameter("Args", args);
}

std::string InvokeThingServiceRequest::getIdentifier()const
{
	return identifier_;
}

void InvokeThingServiceRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setParameter("Identifier", identifier);
}

std::string InvokeThingServiceRequest::getIotId()const
{
	return iotId_;
}

void InvokeThingServiceRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string InvokeThingServiceRequest::getDeviceName()const
{
	return deviceName_;
}

void InvokeThingServiceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string InvokeThingServiceRequest::getProductKey()const
{
	return productKey_;
}

void InvokeThingServiceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string InvokeThingServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InvokeThingServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

