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

#include <alibabacloud/hitsdb/model/GetLindormInstanceListRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLindormInstanceListRequest;

GetLindormInstanceListRequest::GetLindormInstanceListRequest() :
	RpcServiceRequest("hitsdb", "2020-06-15", "GetLindormInstanceList")
{
	setMethod(HttpRequest::Method::Post);
}

GetLindormInstanceListRequest::~GetLindormInstanceListRequest()
{}

long GetLindormInstanceListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLindormInstanceListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int GetLindormInstanceListRequest::getSupportEngine()const
{
	return supportEngine_;
}

void GetLindormInstanceListRequest::setSupportEngine(int supportEngine)
{
	supportEngine_ = supportEngine;
	setParameter("SupportEngine", std::to_string(supportEngine));
}

int GetLindormInstanceListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetLindormInstanceListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetLindormInstanceListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLindormInstanceListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetLindormInstanceListRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetLindormInstanceListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int GetLindormInstanceListRequest::getPageSize()const
{
	return pageSize_;
}

void GetLindormInstanceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetLindormInstanceListRequest::getQueryStr()const
{
	return queryStr_;
}

void GetLindormInstanceListRequest::setQueryStr(const std::string& queryStr)
{
	queryStr_ = queryStr;
	setParameter("QueryStr", queryStr);
}

std::string GetLindormInstanceListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetLindormInstanceListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetLindormInstanceListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetLindormInstanceListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long GetLindormInstanceListRequest::getOwnerId()const
{
	return ownerId_;
}

void GetLindormInstanceListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetLindormInstanceListRequest::getServiceType()const
{
	return serviceType_;
}

void GetLindormInstanceListRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

