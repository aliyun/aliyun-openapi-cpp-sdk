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

#include <alibabacloud/cloudphoto/model/InactivatePhotosRequest.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

InactivatePhotosRequest::InactivatePhotosRequest() :
	CloudPhotoRequest("InactivatePhotos")
{}

InactivatePhotosRequest::~InactivatePhotosRequest()
{}

std::string InactivatePhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void InactivatePhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setParameter("LibraryId", libraryId);
}

std::vector<long> InactivatePhotosRequest::getPhotoId()const
{
	return photoId_;
}

void InactivatePhotosRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string InactivatePhotosRequest::getStoreName()const
{
	return storeName_;
}

void InactivatePhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

long InactivatePhotosRequest::getInactiveTime()const
{
	return inactiveTime_;
}

void InactivatePhotosRequest::setInactiveTime(long inactiveTime)
{
	inactiveTime_ = inactiveTime;
	setParameter("InactiveTime", std::to_string(inactiveTime));
}

