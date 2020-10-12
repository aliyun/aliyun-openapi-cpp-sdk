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

#include <alibabacloud/codeup/model/DeleteRepositoryGroupRequest.h>

using AlibabaCloud::Codeup::Model::DeleteRepositoryGroupRequest;

DeleteRepositoryGroupRequest::DeleteRepositoryGroupRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/groups/[GroupId]/remove");
	setMethod(HttpRequest::Method::Post);
}

DeleteRepositoryGroupRequest::~DeleteRepositoryGroupRequest()
{}

std::string DeleteRepositoryGroupRequest::getOrganizationId()const
{
	return organizationId_;
}

void DeleteRepositoryGroupRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string DeleteRepositoryGroupRequest::getSubUserId()const
{
	return subUserId_;
}

void DeleteRepositoryGroupRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long DeleteRepositoryGroupRequest::getGroupId()const
{
	return groupId_;
}

void DeleteRepositoryGroupRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string DeleteRepositoryGroupRequest::getAccessToken()const
{
	return accessToken_;
}

void DeleteRepositoryGroupRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

