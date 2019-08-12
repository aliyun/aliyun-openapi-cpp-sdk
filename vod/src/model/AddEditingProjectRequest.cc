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

#include <alibabacloud/vod/model/AddEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::AddEditingProjectRequest;

AddEditingProjectRequest::AddEditingProjectRequest() :
	RpcServiceRequest("vod", "2017-03-21", "AddEditingProject")
{}

AddEditingProjectRequest::~AddEditingProjectRequest()
{}

std::string AddEditingProjectRequest::getCoverURL()const
{
	return coverURL_;
}

void AddEditingProjectRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setCoreParameter("CoverURL", std::to_string(coverURL));
}

std::string AddEditingProjectRequest::getDivision()const
{
	return division_;
}

void AddEditingProjectRequest::setDivision(const std::string& division)
{
	division_ = division;
	setCoreParameter("Division", std::to_string(division));
}

std::string AddEditingProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddEditingProjectRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddEditingProjectRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddEditingProjectRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddEditingProjectRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddEditingProjectRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AddEditingProjectRequest::getDescription()const
{
	return description_;
}

void AddEditingProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string AddEditingProjectRequest::getTimeline()const
{
	return timeline_;
}

void AddEditingProjectRequest::setTimeline(const std::string& timeline)
{
	timeline_ = timeline;
	setCoreParameter("Timeline", std::to_string(timeline));
}

std::string AddEditingProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void AddEditingProjectRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddEditingProjectRequest::getTitle()const
{
	return title_;
}

void AddEditingProjectRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

std::string AddEditingProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddEditingProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

