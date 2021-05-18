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

#include <alibabacloud/iot/model/QuerySpeechPushJobSpeechRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechPushJobSpeechRequest;

QuerySpeechPushJobSpeechRequest::QuerySpeechPushJobSpeechRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechPushJobSpeech")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechPushJobSpeechRequest::~QuerySpeechPushJobSpeechRequest()
{}

int QuerySpeechPushJobSpeechRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechPushJobSpeechRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySpeechPushJobSpeechRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechPushJobSpeechRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechPushJobSpeechRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechPushJobSpeechRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechPushJobSpeechRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechPushJobSpeechRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechPushJobSpeechRequest::getJobCode()const
{
	return jobCode_;
}

void QuerySpeechPushJobSpeechRequest::setJobCode(const std::string& jobCode)
{
	jobCode_ = jobCode;
	setBodyParameter("JobCode", jobCode);
}

std::string QuerySpeechPushJobSpeechRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechPushJobSpeechRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

