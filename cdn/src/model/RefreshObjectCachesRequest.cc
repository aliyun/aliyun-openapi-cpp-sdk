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

#include <alibabacloud/cdn/model/RefreshObjectCachesRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

RefreshObjectCachesRequest::RefreshObjectCachesRequest() :
	CdnRequest("RefreshObjectCaches")
{}

RefreshObjectCachesRequest::~RefreshObjectCachesRequest()
{}

std::string RefreshObjectCachesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RefreshObjectCachesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RefreshObjectCachesRequest::getObjectPath()const
{
	return objectPath_;
}

void RefreshObjectCachesRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setParameter("ObjectPath", objectPath);
}

long RefreshObjectCachesRequest::getOwnerId()const
{
	return ownerId_;
}

void RefreshObjectCachesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RefreshObjectCachesRequest::getObjectType()const
{
	return objectType_;
}

void RefreshObjectCachesRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setParameter("ObjectType", objectType);
}

std::string RefreshObjectCachesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshObjectCachesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

