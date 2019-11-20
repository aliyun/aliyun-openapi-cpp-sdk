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

#include <alibabacloud/cloudphoto/model/GetLibraryRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetLibraryRequest;

GetLibraryRequest::GetLibraryRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetLibrary")
{
	setMethod(HttpRequest::Method::Post);
}

GetLibraryRequest::~GetLibraryRequest()
{}

std::string GetLibraryRequest::getLibraryId()const
{
	return libraryId_;
}

void GetLibraryRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::string GetLibraryRequest::getStoreName()const
{
	return storeName_;
}

void GetLibraryRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

