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

#include <alibabacloud/cdn/model/SetWafConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetWafConfigRequest;

SetWafConfigRequest::SetWafConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetWafConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetWafConfigRequest::~SetWafConfigRequest()
{}

std::string SetWafConfigRequest::getEnable()const
{
	return enable_;
}

void SetWafConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetWafConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetWafConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SetWafConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetWafConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long SetWafConfigRequest::getConfigId()const
{
	return configId_;
}

void SetWafConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

