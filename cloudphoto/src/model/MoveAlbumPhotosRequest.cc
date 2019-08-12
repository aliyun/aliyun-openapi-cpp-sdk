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

#include <alibabacloud/cloudphoto/model/MoveAlbumPhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::MoveAlbumPhotosRequest;

MoveAlbumPhotosRequest::MoveAlbumPhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "MoveAlbumPhotos")
{}

MoveAlbumPhotosRequest::~MoveAlbumPhotosRequest()
{}

long MoveAlbumPhotosRequest::getSourceAlbumId()const
{
	return sourceAlbumId_;
}

void MoveAlbumPhotosRequest::setSourceAlbumId(long sourceAlbumId)
{
	sourceAlbumId_ = sourceAlbumId;
	setCoreParameter("SourceAlbumId", sourceAlbumId);
}

long MoveAlbumPhotosRequest::getTargetAlbumId()const
{
	return targetAlbumId_;
}

void MoveAlbumPhotosRequest::setTargetAlbumId(long targetAlbumId)
{
	targetAlbumId_ = targetAlbumId;
	setCoreParameter("TargetAlbumId", targetAlbumId);
}

std::string MoveAlbumPhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void MoveAlbumPhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::vector<long> MoveAlbumPhotosRequest::getPhotoId()const
{
	return photoId_;
}

void MoveAlbumPhotosRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setCoreParameter("PhotoId."+ std::to_string(i), photoId.at(i));
}

std::string MoveAlbumPhotosRequest::getStoreName()const
{
	return storeName_;
}

void MoveAlbumPhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

