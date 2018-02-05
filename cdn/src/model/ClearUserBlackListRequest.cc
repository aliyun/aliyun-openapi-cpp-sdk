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

#include <alibabacloud/cdn/model/ClearUserBlackListRequest.h>

using AlibabaCloud::Cdn::Model::ClearUserBlackListRequest;

ClearUserBlackListRequest::ClearUserBlackListRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ClearUserBlackList")
{}

ClearUserBlackListRequest::~ClearUserBlackListRequest()
{}

std::string ClearUserBlackListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ClearUserBlackListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ClearUserBlackListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ClearUserBlackListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ClearUserBlackListRequest::getOwnerId()const
{
	return ownerId_;
}

void ClearUserBlackListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ClearUserBlackListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ClearUserBlackListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

