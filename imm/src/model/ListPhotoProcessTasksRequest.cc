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

#include <alibabacloud/imm/model/ListPhotoProcessTasksRequest.h>

using AlibabaCloud::Imm::Model::ListPhotoProcessTasksRequest;

ListPhotoProcessTasksRequest::ListPhotoProcessTasksRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListPhotoProcessTasks")
{}

ListPhotoProcessTasksRequest::~ListPhotoProcessTasksRequest()
{}

int ListPhotoProcessTasksRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListPhotoProcessTasksRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", maxKeys);
}

std::string ListPhotoProcessTasksRequest::getRegionId()const
{
	return regionId_;
}

void ListPhotoProcessTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListPhotoProcessTasksRequest::getMarker()const
{
	return marker_;
}

void ListPhotoProcessTasksRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

std::string ListPhotoProcessTasksRequest::getProject()const
{
	return project_;
}

void ListPhotoProcessTasksRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string ListPhotoProcessTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPhotoProcessTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

