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

#include <alibabacloud/cloudphoto/model/RenameAlbumRequest.h>

using AlibabaCloud::CloudPhoto::Model::RenameAlbumRequest;

RenameAlbumRequest::RenameAlbumRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "RenameAlbum")
{}

RenameAlbumRequest::~RenameAlbumRequest()
{}

std::string RenameAlbumRequest::getAlbumName()const
{
	return albumName_;
}

void RenameAlbumRequest::setAlbumName(const std::string& albumName)
{
	albumName_ = albumName;
	setCoreParameter("AlbumName", std::to_string(albumName));
}

std::string RenameAlbumRequest::getLibraryId()const
{
	return libraryId_;
}

void RenameAlbumRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

long RenameAlbumRequest::getAlbumId()const
{
	return albumId_;
}

void RenameAlbumRequest::setAlbumId(long albumId)
{
	albumId_ = albumId;
	setCoreParameter("AlbumId", albumId);
}

std::string RenameAlbumRequest::getStoreName()const
{
	return storeName_;
}

void RenameAlbumRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

