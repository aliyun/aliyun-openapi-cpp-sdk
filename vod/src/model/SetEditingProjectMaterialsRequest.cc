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

#include <alibabacloud/vod/model/SetEditingProjectMaterialsRequest.h>

using AlibabaCloud::Vod::Model::SetEditingProjectMaterialsRequest;

SetEditingProjectMaterialsRequest::SetEditingProjectMaterialsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetEditingProjectMaterials")
{}

SetEditingProjectMaterialsRequest::~SetEditingProjectMaterialsRequest()
{}

std::string SetEditingProjectMaterialsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetEditingProjectMaterialsRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SetEditingProjectMaterialsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetEditingProjectMaterialsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetEditingProjectMaterialsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetEditingProjectMaterialsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SetEditingProjectMaterialsRequest::getMaterialIds()const
{
	return materialIds_;
}

void SetEditingProjectMaterialsRequest::setMaterialIds(const std::string& materialIds)
{
	materialIds_ = materialIds;
	setCoreParameter("MaterialIds", materialIds);
}

std::string SetEditingProjectMaterialsRequest::getOwnerId()const
{
	return ownerId_;
}

void SetEditingProjectMaterialsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetEditingProjectMaterialsRequest::getProjectId()const
{
	return projectId_;
}

void SetEditingProjectMaterialsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string SetEditingProjectMaterialsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetEditingProjectMaterialsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

