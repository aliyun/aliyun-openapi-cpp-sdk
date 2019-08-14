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

#include <alibabacloud/scdn/model/RefreshScdnObjectCachesRequest.h>

using AlibabaCloud::Scdn::Model::RefreshScdnObjectCachesRequest;

RefreshScdnObjectCachesRequest::RefreshScdnObjectCachesRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "RefreshScdnObjectCaches")
{}

RefreshScdnObjectCachesRequest::~RefreshScdnObjectCachesRequest()
{}

std::string RefreshScdnObjectCachesRequest::getSecurityToken()const
{
	return securityToken_;
}

void RefreshScdnObjectCachesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RefreshScdnObjectCachesRequest::getObjectPath()const
{
	return objectPath_;
}

void RefreshScdnObjectCachesRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setCoreParameter("ObjectPath", objectPath);
}

long RefreshScdnObjectCachesRequest::getOwnerId()const
{
	return ownerId_;
}

void RefreshScdnObjectCachesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RefreshScdnObjectCachesRequest::getObjectType()const
{
	return objectType_;
}

void RefreshScdnObjectCachesRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", objectType);
}

