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

#include <alibabacloud/imm/model/ListSetTagsRequest.h>

using AlibabaCloud::Imm::Model::ListSetTagsRequest;

ListSetTagsRequest::ListSetTagsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListSetTags")
{}

ListSetTagsRequest::~ListSetTagsRequest()
{}

std::string ListSetTagsRequest::getRegionId()const
{
	return regionId_;
}

void ListSetTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListSetTagsRequest::getProject()const
{
	return project_;
}

void ListSetTagsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string ListSetTagsRequest::getSetId()const
{
	return setId_;
}

void ListSetTagsRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string ListSetTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSetTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

