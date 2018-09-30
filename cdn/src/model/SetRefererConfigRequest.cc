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

#include <alibabacloud/cdn/model/SetRefererConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetRefererConfigRequest;

SetRefererConfigRequest::SetRefererConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetRefererConfig")
{}

SetRefererConfigRequest::~SetRefererConfigRequest()
{}

std::string SetRefererConfigRequest::getReferList()const
{
	return referList_;
}

void SetRefererConfigRequest::setReferList(const std::string& referList)
{
	referList_ = referList;
	setParameter("ReferList", referList);
}

std::string SetRefererConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRefererConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetRefererConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRefererConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetRefererConfigRequest::getReferType()const
{
	return referType_;
}

void SetRefererConfigRequest::setReferType(const std::string& referType)
{
	referType_ = referType;
	setParameter("ReferType", referType);
}

std::string SetRefererConfigRequest::getDisableAst()const
{
	return disableAst_;
}

void SetRefererConfigRequest::setDisableAst(const std::string& disableAst)
{
	disableAst_ = disableAst;
	setParameter("DisableAst", disableAst);
}

long SetRefererConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRefererConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRefererConfigRequest::getAllowEmpty()const
{
	return allowEmpty_;
}

void SetRefererConfigRequest::setAllowEmpty(const std::string& allowEmpty)
{
	allowEmpty_ = allowEmpty;
	setParameter("AllowEmpty", allowEmpty);
}

std::string SetRefererConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRefererConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

