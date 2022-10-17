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

#include <alibabacloud/videorecog/model/RecognizeVideoCastCrewListRequest.h>

using AlibabaCloud::Videorecog::Model::RecognizeVideoCastCrewListRequest;

RecognizeVideoCastCrewListRequest::RecognizeVideoCastCrewListRequest() :
	RpcServiceRequest("videorecog", "2020-03-20", "RecognizeVideoCastCrewList")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeVideoCastCrewListRequest::~RecognizeVideoCastCrewListRequest()
{}

Array RecognizeVideoCastCrewListRequest::getParams()const
{
	return params_;
}

void RecognizeVideoCastCrewListRequest::setParams(const Array& params)
{
	params_ = params;
	setBodyParameter("Params", std::to_string(params));
}

bool RecognizeVideoCastCrewListRequest::getAsync()const
{
	return async_;
}

void RecognizeVideoCastCrewListRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string RecognizeVideoCastCrewListRequest::getRegisterUrl()const
{
	return registerUrl_;
}

void RecognizeVideoCastCrewListRequest::setRegisterUrl(const std::string& registerUrl)
{
	registerUrl_ = registerUrl;
	setBodyParameter("RegisterUrl", registerUrl);
}

std::string RecognizeVideoCastCrewListRequest::getVideoUrl()const
{
	return videoUrl_;
}

void RecognizeVideoCastCrewListRequest::setVideoUrl(const std::string& videoUrl)
{
	videoUrl_ = videoUrl;
	setBodyParameter("VideoUrl", videoUrl);
}

