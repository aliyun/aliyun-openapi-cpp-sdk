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

#include <alibabacloud/codeup/model/GetCodeCompletionRequest.h>

using AlibabaCloud::Codeup::Model::GetCodeCompletionRequest;

GetCodeCompletionRequest::GetCodeCompletionRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v2/service/invoke/[ServiceName]");
	setMethod(HttpRequest::Method::Post);
}

GetCodeCompletionRequest::~GetCodeCompletionRequest()
{}

bool GetCodeCompletionRequest::getIsEncrypted()const
{
	return isEncrypted_;
}

void GetCodeCompletionRequest::setIsEncrypted(bool isEncrypted)
{
	isEncrypted_ = isEncrypted;
	setParameter("IsEncrypted", isEncrypted ? "true" : "false");
}

std::string GetCodeCompletionRequest::getFetchKeys()const
{
	return fetchKeys_;
}

void GetCodeCompletionRequest::setFetchKeys(const std::string& fetchKeys)
{
	fetchKeys_ = fetchKeys;
	setParameter("FetchKeys", fetchKeys);
}

std::string GetCodeCompletionRequest::getServiceName()const
{
	return serviceName_;
}

void GetCodeCompletionRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

