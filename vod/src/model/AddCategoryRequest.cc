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

#include <alibabacloud/vod/model/AddCategoryRequest.h>

using AlibabaCloud::Vod::Model::AddCategoryRequest;

AddCategoryRequest::AddCategoryRequest() :
	RpcServiceRequest("vod", "2017-03-21", "AddCategory")
{}

AddCategoryRequest::~AddCategoryRequest()
{}

std::string AddCategoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddCategoryRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddCategoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddCategoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddCategoryRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCategoryRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddCategoryRequest::getType()const
{
	return type_;
}

void AddCategoryRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

long AddCategoryRequest::getParentId()const
{
	return parentId_;
}

void AddCategoryRequest::setParentId(long parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", std::to_string(parentId));
}

std::string AddCategoryRequest::getCateName()const
{
	return cateName_;
}

void AddCategoryRequest::setCateName(const std::string& cateName)
{
	cateName_ = cateName;
	setCoreParameter("CateName", cateName);
}

