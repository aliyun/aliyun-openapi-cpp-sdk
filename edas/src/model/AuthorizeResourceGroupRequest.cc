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

#include <alibabacloud/edas/model/AuthorizeResourceGroupRequest.h>

using AlibabaCloud::Edas::Model::AuthorizeResourceGroupRequest;

AuthorizeResourceGroupRequest::AuthorizeResourceGroupRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/account/authorize_res_group");
	setMethod(HttpRequest::Method::Post);
}

AuthorizeResourceGroupRequest::~AuthorizeResourceGroupRequest()
{}

std::string AuthorizeResourceGroupRequest::getResourceGroupIds()const
{
	return resourceGroupIds_;
}

void AuthorizeResourceGroupRequest::setResourceGroupIds(const std::string& resourceGroupIds)
{
	resourceGroupIds_ = resourceGroupIds;
	setParameter("ResourceGroupIds", resourceGroupIds);
}

std::string AuthorizeResourceGroupRequest::getTargetUserId()const
{
	return targetUserId_;
}

void AuthorizeResourceGroupRequest::setTargetUserId(const std::string& targetUserId)
{
	targetUserId_ = targetUserId;
	setParameter("TargetUserId", targetUserId);
}

