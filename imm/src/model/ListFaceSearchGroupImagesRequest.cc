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

#include <alibabacloud/imm/model/ListFaceSearchGroupImagesRequest.h>

using AlibabaCloud::Imm::Model::ListFaceSearchGroupImagesRequest;

ListFaceSearchGroupImagesRequest::ListFaceSearchGroupImagesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListFaceSearchGroupImages")
{}

ListFaceSearchGroupImagesRequest::~ListFaceSearchGroupImagesRequest()
{}

int ListFaceSearchGroupImagesRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListFaceSearchGroupImagesRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", std::to_string(maxKeys));
}

std::string ListFaceSearchGroupImagesRequest::getRegionId()const
{
	return regionId_;
}

void ListFaceSearchGroupImagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListFaceSearchGroupImagesRequest::getMarker()const
{
	return marker_;
}

void ListFaceSearchGroupImagesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListFaceSearchGroupImagesRequest::getProject()const
{
	return project_;
}

void ListFaceSearchGroupImagesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListFaceSearchGroupImagesRequest::getGroupName()const
{
	return groupName_;
}

void ListFaceSearchGroupImagesRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string ListFaceSearchGroupImagesRequest::getUser()const
{
	return user_;
}

void ListFaceSearchGroupImagesRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

std::string ListFaceSearchGroupImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFaceSearchGroupImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

