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

#include <alibabacloud/cdn/model/DeleteHttpHeaderConfigRequest.h>

using AlibabaCloud::Cdn::Model::DeleteHttpHeaderConfigRequest;

DeleteHttpHeaderConfigRequest::DeleteHttpHeaderConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DeleteHttpHeaderConfig")
{}

DeleteHttpHeaderConfigRequest::~DeleteHttpHeaderConfigRequest()
{}

std::string DeleteHttpHeaderConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteHttpHeaderConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteHttpHeaderConfigRequest::getConfigID()const
{
	return configID_;
}

void DeleteHttpHeaderConfigRequest::setConfigID(const std::string& configID)
{
	configID_ = configID;
	setParameter("ConfigID", configID);
}

std::string DeleteHttpHeaderConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteHttpHeaderConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteHttpHeaderConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHttpHeaderConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteHttpHeaderConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteHttpHeaderConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

