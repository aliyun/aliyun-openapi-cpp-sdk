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

#include <alibabacloud/iot/model/QueryDeviceServiceDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceServiceDataRequest;

QueryDeviceServiceDataRequest::QueryDeviceServiceDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceServiceData")
{}

QueryDeviceServiceDataRequest::~QueryDeviceServiceDataRequest()
{}

int QueryDeviceServiceDataRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceServiceDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setCoreParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceServiceDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDeviceServiceDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string QueryDeviceServiceDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceServiceDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QueryDeviceServiceDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceServiceDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceServiceDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceServiceDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryDeviceServiceDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceServiceDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryDeviceServiceDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceServiceDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

long QueryDeviceServiceDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceServiceDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryDeviceServiceDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceServiceDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDeviceServiceDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceServiceDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

