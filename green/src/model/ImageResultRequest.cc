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

#include <alibabacloud/green/model/ImageResultRequest.h>

using AlibabaCloud::Green::Model::ImageResultRequest;

ImageResultRequest::ImageResultRequest() :
	RoaServiceRequest("green", "2016-12-22")
{
	setResourcePath("/image/result/[taskid]");
	setMethod(HttpRequest::Method::Get);
}

ImageResultRequest::~ImageResultRequest()
{}

std::string ImageResultRequest::getTaskid()const
{
	return taskid_;
}

void ImageResultRequest::setTaskid(const std::string& taskid)
{
	taskid_ = taskid;
	setParameter("Taskid", taskid);
}

