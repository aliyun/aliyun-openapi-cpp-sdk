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

#include <alibabacloud/imm/model/FindImagesByTagNamesRequest.h>

using AlibabaCloud::Imm::Model::FindImagesByTagNamesRequest;

FindImagesByTagNamesRequest::FindImagesByTagNamesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "FindImagesByTagNames")
{}

FindImagesByTagNamesRequest::~FindImagesByTagNamesRequest()
{}

std::string FindImagesByTagNamesRequest::getRegionId()const
{
	return regionId_;
}

void FindImagesByTagNamesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string FindImagesByTagNamesRequest::getMarker()const
{
	return marker_;
}

void FindImagesByTagNamesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

int FindImagesByTagNamesRequest::getLimit()const
{
	return limit_;
}

void FindImagesByTagNamesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string FindImagesByTagNamesRequest::getProject()const
{
	return project_;
}

void FindImagesByTagNamesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string FindImagesByTagNamesRequest::getSetId()const
{
	return setId_;
}

void FindImagesByTagNamesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string FindImagesByTagNamesRequest::getTagNames()const
{
	return tagNames_;
}

void FindImagesByTagNamesRequest::setTagNames(const std::string& tagNames)
{
	tagNames_ = tagNames;
	setCoreParameter("TagNames", std::to_string(tagNames));
}

std::string FindImagesByTagNamesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FindImagesByTagNamesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

