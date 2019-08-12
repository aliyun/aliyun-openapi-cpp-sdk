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

#include <alibabacloud/cloudphoto/model/GetFramedPhotoUrlsRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetFramedPhotoUrlsRequest;

GetFramedPhotoUrlsRequest::GetFramedPhotoUrlsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetFramedPhotoUrls")
{}

GetFramedPhotoUrlsRequest::~GetFramedPhotoUrlsRequest()
{}

std::string GetFramedPhotoUrlsRequest::getFrameId()const
{
	return frameId_;
}

void GetFramedPhotoUrlsRequest::setFrameId(const std::string& frameId)
{
	frameId_ = frameId;
	setCoreParameter("FrameId", frameId);
}

std::string GetFramedPhotoUrlsRequest::getLibraryId()const
{
	return libraryId_;
}

void GetFramedPhotoUrlsRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::vector<long> GetFramedPhotoUrlsRequest::getPhotoId()const
{
	return photoId_;
}

void GetFramedPhotoUrlsRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setCoreParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string GetFramedPhotoUrlsRequest::getStoreName()const
{
	return storeName_;
}

void GetFramedPhotoUrlsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

