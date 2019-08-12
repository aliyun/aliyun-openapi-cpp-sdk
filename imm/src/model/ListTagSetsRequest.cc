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

#include <alibabacloud/imm/model/ListTagSetsRequest.h>

using AlibabaCloud::Imm::Model::ListTagSetsRequest;

ListTagSetsRequest::ListTagSetsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListTagSets")
{}

ListTagSetsRequest::~ListTagSetsRequest()
{}

int ListTagSetsRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListTagSetsRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", maxKeys);
}

std::string ListTagSetsRequest::getRegionId()const
{
	return regionId_;
}

void ListTagSetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListTagSetsRequest::getMarker()const
{
	return marker_;
}

void ListTagSetsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListTagSetsRequest::getProject()const
{
	return project_;
}

void ListTagSetsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListTagSetsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagSetsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

