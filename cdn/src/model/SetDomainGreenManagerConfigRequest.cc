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

#include <alibabacloud/cdn/model/SetDomainGreenManagerConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetDomainGreenManagerConfigRequest;

SetDomainGreenManagerConfigRequest::SetDomainGreenManagerConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetDomainGreenManagerConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetDomainGreenManagerConfigRequest::~SetDomainGreenManagerConfigRequest()
{}

std::string SetDomainGreenManagerConfigRequest::getEnable()const
{
	return enable_;
}

void SetDomainGreenManagerConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetDomainGreenManagerConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetDomainGreenManagerConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetDomainGreenManagerConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDomainGreenManagerConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

