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

#include <alibabacloud/iot/model/QueryShareTaskDeviceListRequest.h>

using AlibabaCloud::Iot::Model::QueryShareTaskDeviceListRequest;

QueryShareTaskDeviceListRequest::QueryShareTaskDeviceListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryShareTaskDeviceList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryShareTaskDeviceListRequest::~QueryShareTaskDeviceListRequest()
{}

int QueryShareTaskDeviceListRequest::getPageId()const
{
	return pageId_;
}

void QueryShareTaskDeviceListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QueryShareTaskDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryShareTaskDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryShareTaskDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryShareTaskDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryShareTaskDeviceListRequest::getShareTaskId()const
{
	return shareTaskId_;
}

void QueryShareTaskDeviceListRequest::setShareTaskId(const std::string& shareTaskId)
{
	shareTaskId_ = shareTaskId;
	setBodyParameter("ShareTaskId", shareTaskId);
}

std::string QueryShareTaskDeviceListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryShareTaskDeviceListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryShareTaskDeviceListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryShareTaskDeviceListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryShareTaskDeviceListRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryShareTaskDeviceListRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

