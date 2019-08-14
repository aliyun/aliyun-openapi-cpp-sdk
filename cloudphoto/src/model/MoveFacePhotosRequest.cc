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

#include <alibabacloud/cloudphoto/model/MoveFacePhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::MoveFacePhotosRequest;

MoveFacePhotosRequest::MoveFacePhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "MoveFacePhotos")
{}

MoveFacePhotosRequest::~MoveFacePhotosRequest()
{}

std::string MoveFacePhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void MoveFacePhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

long MoveFacePhotosRequest::getTargetFaceId()const
{
	return targetFaceId_;
}

void MoveFacePhotosRequest::setTargetFaceId(long targetFaceId)
{
	targetFaceId_ = targetFaceId;
	setCoreParameter("TargetFaceId", std::to_string(targetFaceId));
}

std::vector<long> MoveFacePhotosRequest::getPhotoId()const
{
	return photoId_;
}

void MoveFacePhotosRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setCoreParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string MoveFacePhotosRequest::getStoreName()const
{
	return storeName_;
}

void MoveFacePhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

long MoveFacePhotosRequest::getSourceFaceId()const
{
	return sourceFaceId_;
}

void MoveFacePhotosRequest::setSourceFaceId(long sourceFaceId)
{
	sourceFaceId_ = sourceFaceId;
	setCoreParameter("SourceFaceId", std::to_string(sourceFaceId));
}

