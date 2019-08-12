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

#include <alibabacloud/imm/model/ListVideoFramesRequest.h>

using AlibabaCloud::Imm::Model::ListVideoFramesRequest;

ListVideoFramesRequest::ListVideoFramesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListVideoFrames")
{}

ListVideoFramesRequest::~ListVideoFramesRequest()
{}

std::string ListVideoFramesRequest::getVideoUri()const
{
	return videoUri_;
}

void ListVideoFramesRequest::setVideoUri(const std::string& videoUri)
{
	videoUri_ = videoUri;
	setCoreParameter("VideoUri", videoUri);
}

std::string ListVideoFramesRequest::getRegionId()const
{
	return regionId_;
}

void ListVideoFramesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListVideoFramesRequest::getMarker()const
{
	return marker_;
}

void ListVideoFramesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListVideoFramesRequest::getProject()const
{
	return project_;
}

void ListVideoFramesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListVideoFramesRequest::getSetId()const
{
	return setId_;
}

void ListVideoFramesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string ListVideoFramesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListVideoFramesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

