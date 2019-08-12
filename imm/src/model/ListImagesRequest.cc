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

#include <alibabacloud/imm/model/ListImagesRequest.h>

using AlibabaCloud::Imm::Model::ListImagesRequest;

ListImagesRequest::ListImagesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListImages")
{}

ListImagesRequest::~ListImagesRequest()
{}

std::string ListImagesRequest::getRegionId()const
{
	return regionId_;
}

void ListImagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListImagesRequest::getMarker()const
{
	return marker_;
}

void ListImagesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

int ListImagesRequest::getLimit()const
{
	return limit_;
}

void ListImagesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string ListImagesRequest::getProject()const
{
	return project_;
}

void ListImagesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string ListImagesRequest::getSetId()const
{
	return setId_;
}

void ListImagesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string ListImagesRequest::getCreateTimeStart()const
{
	return createTimeStart_;
}

void ListImagesRequest::setCreateTimeStart(const std::string& createTimeStart)
{
	createTimeStart_ = createTimeStart;
	setCoreParameter("CreateTimeStart", std::to_string(createTimeStart));
}

std::string ListImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

