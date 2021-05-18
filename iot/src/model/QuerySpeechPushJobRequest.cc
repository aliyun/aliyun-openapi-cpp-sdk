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

#include <alibabacloud/iot/model/QuerySpeechPushJobRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechPushJobRequest;

QuerySpeechPushJobRequest::QuerySpeechPushJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechPushJob")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechPushJobRequest::~QuerySpeechPushJobRequest()
{}

std::vector<std::string> QuerySpeechPushJobRequest::getStatusList()const
{
	return statusList_;
}

void QuerySpeechPushJobRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setBodyParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string QuerySpeechPushJobRequest::getProjectCode()const
{
	return projectCode_;
}

void QuerySpeechPushJobRequest::setProjectCode(const std::string& projectCode)
{
	projectCode_ = projectCode;
	setBodyParameter("ProjectCode", projectCode);
}

int QuerySpeechPushJobRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechPushJobRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySpeechPushJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechPushJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechPushJobRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechPushJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechPushJobRequest::getPushMode()const
{
	return pushMode_;
}

void QuerySpeechPushJobRequest::setPushMode(const std::string& pushMode)
{
	pushMode_ = pushMode;
	setBodyParameter("PushMode", pushMode);
}

std::string QuerySpeechPushJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechPushJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechPushJobRequest::getJobCode()const
{
	return jobCode_;
}

void QuerySpeechPushJobRequest::setJobCode(const std::string& jobCode)
{
	jobCode_ = jobCode;
	setParameter("JobCode", jobCode);
}

std::string QuerySpeechPushJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechPushJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

