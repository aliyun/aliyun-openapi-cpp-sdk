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

#include <alibabacloud/iot/model/QueryDevicePropertiesDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDevicePropertiesDataRequest;

QueryDevicePropertiesDataRequest::QueryDevicePropertiesDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDevicePropertiesData")
{}

QueryDevicePropertiesDataRequest::~QueryDevicePropertiesDataRequest()
{}

int QueryDevicePropertiesDataRequest::getAsc()const
{
	return asc_;
}

void QueryDevicePropertiesDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setCoreParameter("Asc", asc);
}

std::vector<std::string> QueryDevicePropertiesDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDevicePropertiesDataRequest::setIdentifier(const std::vector<std::string>& identifier)
{
	identifier_ = identifier;
	for(int i = 0; i!= identifier.size(); i++)
		setCoreParameter("Identifier."+ std::to_string(i), std::to_string(identifier.at(i)));
}

std::string QueryDevicePropertiesDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDevicePropertiesDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", std::to_string(iotId));
}

std::string QueryDevicePropertiesDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDevicePropertiesDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

int QueryDevicePropertiesDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDevicePropertiesDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long QueryDevicePropertiesDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDevicePropertiesDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryDevicePropertiesDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDevicePropertiesDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", std::to_string(deviceName));
}

long QueryDevicePropertiesDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDevicePropertiesDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string QueryDevicePropertiesDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDevicePropertiesDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

std::string QueryDevicePropertiesDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDevicePropertiesDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

