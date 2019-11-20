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

#include <alibabacloud/cloudphoto/model/ReactivatePhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::ReactivatePhotosRequest;

ReactivatePhotosRequest::ReactivatePhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ReactivatePhotos")
{
	setMethod(HttpRequest::Method::Post);
}

ReactivatePhotosRequest::~ReactivatePhotosRequest()
{}

std::string ReactivatePhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void ReactivatePhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::vector<long> ReactivatePhotosRequest::getPhotoId()const
{
	return photoId_;
}

void ReactivatePhotosRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int dep1 = 0; dep1!= photoId.size(); dep1++)
		setCoreParameter("PhotoId."+ std::to_string(dep1), std::to_string(photoId.at(dep1)));
}

std::string ReactivatePhotosRequest::getStoreName()const
{
	return storeName_;
}

void ReactivatePhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

