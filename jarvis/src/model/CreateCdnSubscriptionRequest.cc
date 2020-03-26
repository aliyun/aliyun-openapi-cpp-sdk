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

#include <alibabacloud/jarvis/model/CreateCdnSubscriptionRequest.h>

using AlibabaCloud::Jarvis::Model::CreateCdnSubscriptionRequest;

CreateCdnSubscriptionRequest::CreateCdnSubscriptionRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateCdnSubscription")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCdnSubscriptionRequest::~CreateCdnSubscriptionRequest()
{}

long CreateCdnSubscriptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCdnSubscriptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCdnSubscriptionRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateCdnSubscriptionRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string CreateCdnSubscriptionRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCdnSubscriptionRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCdnSubscriptionRequest::getLang()const
{
	return lang_;
}

void CreateCdnSubscriptionRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateCdnSubscriptionRequest::getCdnUidList()const
{
	return cdnUidList_;
}

void CreateCdnSubscriptionRequest::setCdnUidList(const std::string& cdnUidList)
{
	cdnUidList_ = cdnUidList;
	setParameter("CdnUidList", cdnUidList);
}

