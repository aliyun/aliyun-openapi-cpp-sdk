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

#include <alibabacloud/vod/model/ListAppPoliciesForIdentityRequest.h>

using AlibabaCloud::Vod::Model::ListAppPoliciesForIdentityRequest;

ListAppPoliciesForIdentityRequest::ListAppPoliciesForIdentityRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAppPoliciesForIdentity")
{}

ListAppPoliciesForIdentityRequest::~ListAppPoliciesForIdentityRequest()
{}

std::string ListAppPoliciesForIdentityRequest::getIdentityName()const
{
	return identityName_;
}

void ListAppPoliciesForIdentityRequest::setIdentityName(const std::string& identityName)
{
	identityName_ = identityName;
	setCoreParameter("IdentityName", std::to_string(identityName));
}

long ListAppPoliciesForIdentityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAppPoliciesForIdentityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAppPoliciesForIdentityRequest::getIdentityType()const
{
	return identityType_;
}

void ListAppPoliciesForIdentityRequest::setIdentityType(const std::string& identityType)
{
	identityType_ = identityType;
	setCoreParameter("IdentityType", std::to_string(identityType));
}

std::string ListAppPoliciesForIdentityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAppPoliciesForIdentityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ListAppPoliciesForIdentityRequest::getAppId()const
{
	return appId_;
}

void ListAppPoliciesForIdentityRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

long ListAppPoliciesForIdentityRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAppPoliciesForIdentityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

