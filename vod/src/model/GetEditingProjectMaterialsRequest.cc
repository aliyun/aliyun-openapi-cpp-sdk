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

#include <alibabacloud/vod/model/GetEditingProjectMaterialsRequest.h>

using AlibabaCloud::Vod::Model::GetEditingProjectMaterialsRequest;

GetEditingProjectMaterialsRequest::GetEditingProjectMaterialsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetEditingProjectMaterials")
{}

GetEditingProjectMaterialsRequest::~GetEditingProjectMaterialsRequest()
{}

std::string GetEditingProjectMaterialsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetEditingProjectMaterialsRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetEditingProjectMaterialsRequest::getMaterialType()const
{
	return materialType_;
}

void GetEditingProjectMaterialsRequest::setMaterialType(const std::string& materialType)
{
	materialType_ = materialType;
	setCoreParameter("MaterialType", std::to_string(materialType));
}

std::string GetEditingProjectMaterialsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetEditingProjectMaterialsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string GetEditingProjectMaterialsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetEditingProjectMaterialsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string GetEditingProjectMaterialsRequest::getOwnerId()const
{
	return ownerId_;
}

void GetEditingProjectMaterialsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetEditingProjectMaterialsRequest::getType()const
{
	return type_;
}

void GetEditingProjectMaterialsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string GetEditingProjectMaterialsRequest::getProjectId()const
{
	return projectId_;
}

void GetEditingProjectMaterialsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string GetEditingProjectMaterialsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetEditingProjectMaterialsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

