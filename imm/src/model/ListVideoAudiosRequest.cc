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

#include <alibabacloud/imm/model/ListVideoAudiosRequest.h>

using AlibabaCloud::Imm::Model::ListVideoAudiosRequest;

ListVideoAudiosRequest::ListVideoAudiosRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListVideoAudios")
{}

ListVideoAudiosRequest::~ListVideoAudiosRequest()
{}

std::string ListVideoAudiosRequest::getVideoUri()const
{
	return videoUri_;
}

void ListVideoAudiosRequest::setVideoUri(const std::string& videoUri)
{
	videoUri_ = videoUri;
	setCoreParameter("VideoUri", videoUri);
}

std::string ListVideoAudiosRequest::getRegionId()const
{
	return regionId_;
}

void ListVideoAudiosRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListVideoAudiosRequest::getMarker()const
{
	return marker_;
}

void ListVideoAudiosRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListVideoAudiosRequest::getProject()const
{
	return project_;
}

void ListVideoAudiosRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListVideoAudiosRequest::getSetId()const
{
	return setId_;
}

void ListVideoAudiosRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string ListVideoAudiosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListVideoAudiosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

