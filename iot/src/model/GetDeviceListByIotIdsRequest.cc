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

#include <alibabacloud/iot/model/GetDeviceListByIotIdsRequest.h>

using AlibabaCloud::Iot::Model::GetDeviceListByIotIdsRequest;

GetDeviceListByIotIdsRequest::GetDeviceListByIotIdsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetDeviceListByIotIds")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceListByIotIdsRequest::~GetDeviceListByIotIdsRequest()
{}

std::string GetDeviceListByIotIdsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetDeviceListByIotIdsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetDeviceListByIotIdsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void GetDeviceListByIotIdsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string GetDeviceListByIotIdsRequest::getIotIds()const
{
	return iotIds_;
}

void GetDeviceListByIotIdsRequest::setIotIds(const std::string& iotIds)
{
	iotIds_ = iotIds;
	setCoreParameter("IotIds", iotIds);
}

std::string GetDeviceListByIotIdsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetDeviceListByIotIdsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

