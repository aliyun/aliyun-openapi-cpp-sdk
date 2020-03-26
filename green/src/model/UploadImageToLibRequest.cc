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

#include <alibabacloud/green/model/UploadImageToLibRequest.h>

using AlibabaCloud::Green::Model::UploadImageToLibRequest;

UploadImageToLibRequest::UploadImageToLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "UploadImageToLib")
{
	setMethod(HttpRequest::Method::Post);
}

UploadImageToLibRequest::~UploadImageToLibRequest()
{}

std::string UploadImageToLibRequest::getImages()const
{
	return images_;
}

void UploadImageToLibRequest::setImages(const std::string& images)
{
	images_ = images;
	setParameter("Images", images);
}

std::string UploadImageToLibRequest::getUrls()const
{
	return urls_;
}

void UploadImageToLibRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setParameter("Urls", urls);
}

std::string UploadImageToLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void UploadImageToLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int UploadImageToLibRequest::getImageLibId()const
{
	return imageLibId_;
}

void UploadImageToLibRequest::setImageLibId(int imageLibId)
{
	imageLibId_ = imageLibId;
	setParameter("ImageLibId", std::to_string(imageLibId));
}

