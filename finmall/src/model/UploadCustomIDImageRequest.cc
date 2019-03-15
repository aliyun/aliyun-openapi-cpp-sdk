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

#include <alibabacloud/finmall/model/UploadCustomIDImageRequest.h>

using AlibabaCloud::Finmall::Model::UploadCustomIDImageRequest;

UploadCustomIDImageRequest::UploadCustomIDImageRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "UploadCustomIDImage")
{}

UploadCustomIDImageRequest::~UploadCustomIDImageRequest()
{}

std::string UploadCustomIDImageRequest::getImageType()const
{
	return imageType_;
}

void UploadCustomIDImageRequest::setImageType(const std::string& imageType)
{
	imageType_ = imageType;
	setParameter("ImageType", imageType);
}

std::string UploadCustomIDImageRequest::getSide()const
{
	return side_;
}

void UploadCustomIDImageRequest::setSide(const std::string& side)
{
	side_ = side;
	setParameter("Side", side);
}

std::string UploadCustomIDImageRequest::getImageFile()const
{
	return imageFile_;
}

void UploadCustomIDImageRequest::setImageFile(const std::string& imageFile)
{
	imageFile_ = imageFile;
	setParameter("ImageFile", imageFile);
}

std::string UploadCustomIDImageRequest::getUserId()const
{
	return userId_;
}

void UploadCustomIDImageRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

