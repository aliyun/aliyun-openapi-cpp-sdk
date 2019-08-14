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

#include <alibabacloud/iot/model/QueryDeviceEventDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceEventDataRequest;

QueryDeviceEventDataRequest::QueryDeviceEventDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceEventData")
{}

QueryDeviceEventDataRequest::~QueryDeviceEventDataRequest()
{}

int QueryDeviceEventDataRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceEventDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setCoreParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceEventDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDeviceEventDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string QueryDeviceEventDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceEventDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QueryDeviceEventDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceEventDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceEventDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceEventDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryDeviceEventDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceEventDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryDeviceEventDataRequest::getEventType()const
{
	return eventType_;
}

void QueryDeviceEventDataRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

std::string QueryDeviceEventDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceEventDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

long QueryDeviceEventDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceEventDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryDeviceEventDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceEventDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDeviceEventDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceEventDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

