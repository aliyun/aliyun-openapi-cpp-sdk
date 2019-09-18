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

#include <alibabacloud/iot/model/GetThingTopoRequest.h>

using AlibabaCloud::Iot::Model::GetThingTopoRequest;

GetThingTopoRequest::GetThingTopoRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetThingTopo")
{}

GetThingTopoRequest::~GetThingTopoRequest()
{}

std::string GetThingTopoRequest::getProductKey()const
{
	return productKey_;
}

void GetThingTopoRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string GetThingTopoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetThingTopoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetThingTopoRequest::getIotId()const
{
	return iotId_;
}

void GetThingTopoRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

int GetThingTopoRequest::getPageNo()const
{
	return pageNo_;
}

void GetThingTopoRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string GetThingTopoRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetThingTopoRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int GetThingTopoRequest::getPageSize()const
{
	return pageSize_;
}

void GetThingTopoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string GetThingTopoRequest::getDeviceName()const
{
	return deviceName_;
}

void GetThingTopoRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

