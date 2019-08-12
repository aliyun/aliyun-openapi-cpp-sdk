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

#include <alibabacloud/mts/model/UpdateCategoryNameRequest.h>

using AlibabaCloud::Mts::Model::UpdateCategoryNameRequest;

UpdateCategoryNameRequest::UpdateCategoryNameRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateCategoryName")
{}

UpdateCategoryNameRequest::~UpdateCategoryNameRequest()
{}

long UpdateCategoryNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateCategoryNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateCategoryNameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateCategoryNameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateCategoryNameRequest::getCateId()const
{
	return cateId_;
}

void UpdateCategoryNameRequest::setCateId(const std::string& cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", std::to_string(cateId));
}

std::string UpdateCategoryNameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateCategoryNameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long UpdateCategoryNameRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCategoryNameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateCategoryNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateCategoryNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateCategoryNameRequest::getCateName()const
{
	return cateName_;
}

void UpdateCategoryNameRequest::setCateName(const std::string& cateName)
{
	cateName_ = cateName;
	setCoreParameter("CateName", std::to_string(cateName));
}

