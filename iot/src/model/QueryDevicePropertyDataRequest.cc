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

#include <alibabacloud/iot/model/QueryDevicePropertyDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDevicePropertyDataRequest;

QueryDevicePropertyDataRequest::QueryDevicePropertyDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDevicePropertyData")
{}

QueryDevicePropertyDataRequest::~QueryDevicePropertyDataRequest()
{}

<<<<<<< HEAD
int QueryDevicePropertyDataRequest::getAsc()const
{
	return asc_;
}

void QueryDevicePropertyDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setCoreParameter("Asc", std::to_string(asc));
}

std::string QueryDevicePropertyDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDevicePropertyDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string QueryDevicePropertyDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDevicePropertyDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QueryDevicePropertyDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDevicePropertyDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDevicePropertyDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDevicePropertyDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryDevicePropertyDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDevicePropertyDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryDevicePropertyDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDevicePropertyDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

long QueryDevicePropertyDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDevicePropertyDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryDevicePropertyDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDevicePropertyDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDevicePropertyDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDevicePropertyDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

=======
int QueryDevicePropertyDataRequest::getAsc()const
{
	return asc_;
}

void QueryDevicePropertyDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setCoreParameter("Asc", std::to_string(asc));
}

std::string QueryDevicePropertyDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDevicePropertyDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setCoreParameter("Identifier", identifier);
}

std::string QueryDevicePropertyDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDevicePropertyDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QueryDevicePropertyDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDevicePropertyDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDevicePropertyDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDevicePropertyDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryDevicePropertyDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDevicePropertyDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryDevicePropertyDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDevicePropertyDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

long QueryDevicePropertyDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDevicePropertyDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryDevicePropertyDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDevicePropertyDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDevicePropertyDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDevicePropertyDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

>>>>>>> master
