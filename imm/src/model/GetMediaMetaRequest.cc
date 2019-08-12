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

#include <alibabacloud/imm/model/GetMediaMetaRequest.h>

using AlibabaCloud::Imm::Model::GetMediaMetaRequest;

GetMediaMetaRequest::GetMediaMetaRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetMediaMeta")
{}

GetMediaMetaRequest::~GetMediaMetaRequest()
{}

std::string GetMediaMetaRequest::getRegionId()const
{
	return regionId_;
}

void GetMediaMetaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetMediaMetaRequest::getMediaUri()const
{
	return mediaUri_;
}

void GetMediaMetaRequest::setMediaUri(const std::string& mediaUri)
{
	mediaUri_ = mediaUri;
	setCoreParameter("MediaUri", mediaUri);
}

std::string GetMediaMetaRequest::getProject()const
{
	return project_;
}

void GetMediaMetaRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetMediaMetaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMediaMetaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

