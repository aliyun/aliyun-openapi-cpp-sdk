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

#include <alibabacloud/iot/model/QueryDeviceByNameRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceByNameRequest;

QueryDeviceByNameRequest::QueryDeviceByNameRequest() :
	RpcServiceRequest("iot", "2017-04-20", "QueryDeviceByName")
{}

QueryDeviceByNameRequest::~QueryDeviceByNameRequest()
{}

std::string QueryDeviceByNameRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceByNameRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string QueryDeviceByNameRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceByNameRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryDeviceByNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceByNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

