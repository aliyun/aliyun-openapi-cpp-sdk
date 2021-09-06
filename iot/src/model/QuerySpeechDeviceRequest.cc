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

#include <alibabacloud/iot/model/QuerySpeechDeviceRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechDeviceRequest;

QuerySpeechDeviceRequest::QuerySpeechDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechDevice")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechDeviceRequest::~QuerySpeechDeviceRequest()
{}

std::string QuerySpeechDeviceRequest::getAvailableSpaceScope()const
{
	return availableSpaceScope_;
}

void QuerySpeechDeviceRequest::setAvailableSpaceScope(const std::string& availableSpaceScope)
{
	availableSpaceScope_ = availableSpaceScope;
	setBodyParameter("AvailableSpaceScope", availableSpaceScope);
}

std::string QuerySpeechDeviceRequest::getProjectCode()const
{
	return projectCode_;
}

void QuerySpeechDeviceRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

int QuerySpeechDeviceRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechDeviceRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySpeechDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechDeviceRequest::getAvailableSpace()const
{
	return availableSpace_;
}

void QuerySpeechDeviceRequest::setAvailableSpace(const std::string& availableSpace)
{
	availableSpace_ = availableSpace;
	setBodyParameter("AvailableSpace", availableSpace);
}

std::string QuerySpeechDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QuerySpeechDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void QuerySpeechDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

