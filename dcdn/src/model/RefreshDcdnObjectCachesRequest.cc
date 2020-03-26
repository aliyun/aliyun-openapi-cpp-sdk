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

#include <alibabacloud/dcdn/model/RefreshDcdnObjectCachesRequest.h>

using AlibabaCloud::Dcdn::Model::RefreshDcdnObjectCachesRequest;

RefreshDcdnObjectCachesRequest::RefreshDcdnObjectCachesRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "RefreshDcdnObjectCaches")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshDcdnObjectCachesRequest::~RefreshDcdnObjectCachesRequest()
{}

std::string RefreshDcdnObjectCachesRequest::getObjectPath()const
{
	return objectPath_;
}

void RefreshDcdnObjectCachesRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setParameter("ObjectPath", objectPath);
}

long RefreshDcdnObjectCachesRequest::getOwnerId()const
{
	return ownerId_;
}

void RefreshDcdnObjectCachesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RefreshDcdnObjectCachesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RefreshDcdnObjectCachesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RefreshDcdnObjectCachesRequest::getObjectType()const
{
	return objectType_;
}

void RefreshDcdnObjectCachesRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setParameter("ObjectType", objectType);
}

