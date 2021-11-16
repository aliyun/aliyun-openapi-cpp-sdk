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

#include <alibabacloud/vod/model/UpdateStreamInfoRequest.h>

using AlibabaCloud::Vod::Model::UpdateStreamInfoRequest;

UpdateStreamInfoRequest::UpdateStreamInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateStreamInfo")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateStreamInfoRequest::~UpdateStreamInfoRequest()
{}

std::string UpdateStreamInfoRequest::getJobId()const
{
	return jobId_;
}

void UpdateStreamInfoRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string UpdateStreamInfoRequest::getHDRType()const
{
	return hDRType_;
}

void UpdateStreamInfoRequest::setHDRType(const std::string& hDRType)
{
	hDRType_ = hDRType;
	setParameter("HDRType", hDRType);
}

std::string UpdateStreamInfoRequest::getDefinition()const
{
	return definition_;
}

void UpdateStreamInfoRequest::setDefinition(const std::string& definition)
{
	definition_ = definition;
	setParameter("Definition", definition);
}

std::string UpdateStreamInfoRequest::getMediaId()const
{
	return mediaId_;
}

void UpdateStreamInfoRequest::setMediaId(const std::string& mediaId)
{
	mediaId_ = mediaId;
	setParameter("MediaId", mediaId);
}

