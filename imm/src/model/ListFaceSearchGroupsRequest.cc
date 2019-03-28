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

#include <alibabacloud/imm/model/ListFaceSearchGroupsRequest.h>

using AlibabaCloud::Imm::Model::ListFaceSearchGroupsRequest;

ListFaceSearchGroupsRequest::ListFaceSearchGroupsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListFaceSearchGroups")
{}

ListFaceSearchGroupsRequest::~ListFaceSearchGroupsRequest()
{}

int ListFaceSearchGroupsRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListFaceSearchGroupsRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setParameter("MaxKeys", std::to_string(maxKeys));
}

std::string ListFaceSearchGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListFaceSearchGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListFaceSearchGroupsRequest::getMarker()const
{
	return marker_;
}

void ListFaceSearchGroupsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setParameter("Marker", marker);
}

std::string ListFaceSearchGroupsRequest::getProject()const
{
	return project_;
}

void ListFaceSearchGroupsRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string ListFaceSearchGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFaceSearchGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

