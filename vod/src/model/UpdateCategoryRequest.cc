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

#include <alibabacloud/vod/model/UpdateCategoryRequest.h>

using AlibabaCloud::Vod::Model::UpdateCategoryRequest;

UpdateCategoryRequest::UpdateCategoryRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateCategory")
{}

UpdateCategoryRequest::~UpdateCategoryRequest()
{}

std::string UpdateCategoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateCategoryRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateCategoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateCategoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long UpdateCategoryRequest::getCateId()const
{
	return cateId_;
}

void UpdateCategoryRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", cateId);
}

std::string UpdateCategoryRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCategoryRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateCategoryRequest::getCateName()const
{
	return cateName_;
}

void UpdateCategoryRequest::setCateName(const std::string& cateName)
{
	cateName_ = cateName;
	setCoreParameter("CateName", std::to_string(cateName));
}

