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

#include <alibabacloud/iot/model/QuerySpeechPushJobDeviceRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechPushJobDeviceRequest;

QuerySpeechPushJobDeviceRequest::QuerySpeechPushJobDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechPushJobDevice")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechPushJobDeviceRequest::~QuerySpeechPushJobDeviceRequest()
{}

int QuerySpeechPushJobDeviceRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechPushJobDeviceRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySpeechPushJobDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechPushJobDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechPushJobDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechPushJobDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechPushJobDeviceRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechPushJobDeviceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechPushJobDeviceRequest::getJobCode()const
{
	return jobCode_;
}

void QuerySpeechPushJobDeviceRequest::setJobCode(const std::string& jobCode)
{
	jobCode_ = jobCode;
	setBodyParameter("JobCode", jobCode);
}

std::string QuerySpeechPushJobDeviceRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechPushJobDeviceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QuerySpeechPushJobDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void QuerySpeechPushJobDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

std::string QuerySpeechPushJobDeviceRequest::getStatus()const
{
	return status_;
}

void QuerySpeechPushJobDeviceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

