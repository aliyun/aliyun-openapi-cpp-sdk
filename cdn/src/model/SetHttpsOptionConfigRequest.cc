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

#include <alibabacloud/cdn/model/SetHttpsOptionConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetHttpsOptionConfigRequest;

SetHttpsOptionConfigRequest::SetHttpsOptionConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetHttpsOptionConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetHttpsOptionConfigRequest::~SetHttpsOptionConfigRequest()
{}

std::string SetHttpsOptionConfigRequest::getHttp2()const
{
	return http2_;
}

void SetHttpsOptionConfigRequest::setHttp2(const std::string& http2)
{
	http2_ = http2;
	setCoreParameter("Http2", http2);
}

std::string SetHttpsOptionConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpsOptionConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SetHttpsOptionConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpsOptionConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long SetHttpsOptionConfigRequest::getConfigId()const
{
	return configId_;
}

void SetHttpsOptionConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

