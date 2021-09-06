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

#include <alibabacloud/iot/model/QuerySpeechListRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechListRequest;

QuerySpeechListRequest::QuerySpeechListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechListRequest::~QuerySpeechListRequest()
{}

std::string QuerySpeechListRequest::getProjectCode()const
{
	return projectCode_;
}

void QuerySpeechListRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

int QuerySpeechListRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySpeechListRequest::getAudioFormat()const
{
	return audioFormat_;
}

void QuerySpeechListRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string QuerySpeechListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

