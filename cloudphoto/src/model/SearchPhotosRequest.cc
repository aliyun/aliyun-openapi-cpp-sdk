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

#include <alibabacloud/cloudphoto/model/SearchPhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::SearchPhotosRequest;

SearchPhotosRequest::SearchPhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "SearchPhotos")
{}

SearchPhotosRequest::~SearchPhotosRequest()
{}

int SearchPhotosRequest::getSize()const
{
	return size_;
}

void SearchPhotosRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string SearchPhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void SearchPhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::string SearchPhotosRequest::getStoreName()const
{
	return storeName_;
}

void SearchPhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

int SearchPhotosRequest::getPage()const
{
	return page_;
}

void SearchPhotosRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string SearchPhotosRequest::getKeyword()const
{
	return keyword_;
}

void SearchPhotosRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

