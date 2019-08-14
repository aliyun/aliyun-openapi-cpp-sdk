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

#include <alibabacloud/mts/model/AddCategoryRequest.h>

using AlibabaCloud::Mts::Model::AddCategoryRequest;

AddCategoryRequest::AddCategoryRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddCategory")
{}

AddCategoryRequest::~AddCategoryRequest()
{}

long AddCategoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddCategoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string AddCategoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddCategoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AddCategoryRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCategoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
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

std::string AddCategoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddCategoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
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

