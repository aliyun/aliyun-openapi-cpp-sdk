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

#include <alibabacloud/iot/model/QueryDeviceGroupByDeviceRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceGroupByDeviceRequest;

QueryDeviceGroupByDeviceRequest::QueryDeviceGroupByDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceGroupByDevice")
{}

QueryDeviceGroupByDeviceRequest::~QueryDeviceGroupByDeviceRequest()
{}

std::string QueryDeviceGroupByDeviceRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceGroupByDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDeviceGroupByDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceGroupByDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceGroupByDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceGroupByDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceGroupByDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceGroupByDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

