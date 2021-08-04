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

#include <alibabacloud/imagerecog/model/TaggingAdImageRequest.h>

using AlibabaCloud::Imagerecog::Model::TaggingAdImageRequest;

TaggingAdImageRequest::TaggingAdImageRequest() :
	RpcServiceRequest("imagerecog", "2019-09-30", "TaggingAdImage")
{
	setMethod(HttpRequest::Method::Post);
}

TaggingAdImageRequest::~TaggingAdImageRequest()
{}

int TaggingAdImageRequest::getImageType()const
{
	return imageType_;
}

void TaggingAdImageRequest::setImageType(int imageType)
{
	imageType_ = imageType;
	setBodyParameter("ImageType", std::to_string(imageType));
}

bool TaggingAdImageRequest::getAsync()const
{
	return async_;
}

void TaggingAdImageRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string TaggingAdImageRequest::getImageURL()const
{
	return imageURL_;
}

void TaggingAdImageRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

