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

#include <alibabacloud/cloudphoto/model/ActivatePhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::ActivatePhotosRequest;

ActivatePhotosRequest::ActivatePhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ActivatePhotos")
{}

ActivatePhotosRequest::~ActivatePhotosRequest()
{}

std::string ActivatePhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void ActivatePhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::vector<long> ActivatePhotosRequest::getPhotoId()const
{
	return photoId_;
}

void ActivatePhotosRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setCoreParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string ActivatePhotosRequest::getStoreName()const
{
	return storeName_;
}

void ActivatePhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

