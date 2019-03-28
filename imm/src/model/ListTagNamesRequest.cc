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

#include <alibabacloud/imm/model/ListTagNamesRequest.h>

using AlibabaCloud::Imm::Model::ListTagNamesRequest;

ListTagNamesRequest::ListTagNamesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListTagNames")
{}

ListTagNamesRequest::~ListTagNamesRequest()
{}

std::string ListTagNamesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagNamesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagNamesRequest::getMarker()const
{
	return marker_;
}

void ListTagNamesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setParameter("Marker", marker);
}

std::string ListTagNamesRequest::getProject()const
{
	return project_;
}

void ListTagNamesRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string ListTagNamesRequest::getSetId()const
{
	return setId_;
}

void ListTagNamesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setParameter("SetId", setId);
}

std::string ListTagNamesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagNamesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

