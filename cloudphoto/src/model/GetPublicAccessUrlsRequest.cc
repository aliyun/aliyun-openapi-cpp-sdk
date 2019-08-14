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

#include <alibabacloud/cloudphoto/model/GetPublicAccessUrlsRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetPublicAccessUrlsRequest;

GetPublicAccessUrlsRequest::GetPublicAccessUrlsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetPublicAccessUrls")
{}

GetPublicAccessUrlsRequest::~GetPublicAccessUrlsRequest()
{}

std::string GetPublicAccessUrlsRequest::getDomainType()const
{
	return domainType_;
}

void GetPublicAccessUrlsRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setCoreParameter("DomainType", domainType);
}

std::string GetPublicAccessUrlsRequest::getLibraryId()const
{
	return libraryId_;
}

void GetPublicAccessUrlsRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::vector<long> GetPublicAccessUrlsRequest::getPhotoId()const
{
	return photoId_;
}

void GetPublicAccessUrlsRequest::setPhotoId(const std::vector<long>& photoId)
{
	photoId_ = photoId;
	for(int i = 0; i!= photoId.size(); i++)
		setCoreParameter("PhotoId."+ std::to_string(i), std::to_string(photoId.at(i)));
}

std::string GetPublicAccessUrlsRequest::getStoreName()const
{
	return storeName_;
}

void GetPublicAccessUrlsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

std::string GetPublicAccessUrlsRequest::getZoomType()const
{
	return zoomType_;
}

void GetPublicAccessUrlsRequest::setZoomType(const std::string& zoomType)
{
	zoomType_ = zoomType;
	setCoreParameter("ZoomType", zoomType);
}

