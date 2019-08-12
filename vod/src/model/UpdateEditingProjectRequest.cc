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

#include <alibabacloud/vod/model/UpdateEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::UpdateEditingProjectRequest;

UpdateEditingProjectRequest::UpdateEditingProjectRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateEditingProject")
{}

UpdateEditingProjectRequest::~UpdateEditingProjectRequest()
{}

std::string UpdateEditingProjectRequest::getCoverURL()const
{
	return coverURL_;
}

void UpdateEditingProjectRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setCoreParameter("CoverURL", std::to_string(coverURL));
}

std::string UpdateEditingProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateEditingProjectRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateEditingProjectRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateEditingProjectRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateEditingProjectRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateEditingProjectRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string UpdateEditingProjectRequest::getTimeline()const
{
	return timeline_;
}

void UpdateEditingProjectRequest::setTimeline(const std::string& timeline)
{
	timeline_ = timeline;
	setCoreParameter("Timeline", std::to_string(timeline));
}

std::string UpdateEditingProjectRequest::getDescription()const
{
	return description_;
}

void UpdateEditingProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string UpdateEditingProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateEditingProjectRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateEditingProjectRequest::getTitle()const
{
	return title_;
}

void UpdateEditingProjectRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

std::string UpdateEditingProjectRequest::getProjectId()const
{
	return projectId_;
}

void UpdateEditingProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string UpdateEditingProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateEditingProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

