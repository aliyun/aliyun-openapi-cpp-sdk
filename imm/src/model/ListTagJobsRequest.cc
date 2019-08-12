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

#include <alibabacloud/imm/model/ListTagJobsRequest.h>

using AlibabaCloud::Imm::Model::ListTagJobsRequest;

ListTagJobsRequest::ListTagJobsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListTagJobs")
{}

ListTagJobsRequest::~ListTagJobsRequest()
{}

std::string ListTagJobsRequest::getCondition()const
{
	return condition_;
}

void ListTagJobsRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setCoreParameter("Condition", condition);
}

int ListTagJobsRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListTagJobsRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", maxKeys);
}

std::string ListTagJobsRequest::getRegionId()const
{
	return regionId_;
}

void ListTagJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListTagJobsRequest::getMarker()const
{
	return marker_;
}

void ListTagJobsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListTagJobsRequest::getProject()const
{
	return project_;
}

void ListTagJobsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListTagJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

