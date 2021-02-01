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

#include <alibabacloud/videoseg/model/SegmentGreenScreenVideoRequest.h>

using AlibabaCloud::Videoseg::Model::SegmentGreenScreenVideoRequest;

SegmentGreenScreenVideoRequest::SegmentGreenScreenVideoRequest() :
	RpcServiceRequest("videoseg", "2020-03-20", "SegmentGreenScreenVideo")
{
	setMethod(HttpRequest::Method::Post);
}

SegmentGreenScreenVideoRequest::~SegmentGreenScreenVideoRequest()
{}

bool SegmentGreenScreenVideoRequest::getAsync()const
{
	return async_;
}

void SegmentGreenScreenVideoRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string SegmentGreenScreenVideoRequest::getVideoURL()const
{
	return videoURL_;
}

void SegmentGreenScreenVideoRequest::setVideoURL(const std::string& videoURL)
{
	videoURL_ = videoURL;
	setBodyParameter("VideoURL", videoURL);
}

