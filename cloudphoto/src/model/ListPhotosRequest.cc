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

#include <alibabacloud/cloudphoto/model/ListPhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListPhotosRequest;

ListPhotosRequest::ListPhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListPhotos")
{}

ListPhotosRequest::~ListPhotosRequest()
{}

std::string ListPhotosRequest::getCursor()const
{
	return cursor_;
}

void ListPhotosRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", std::to_string(cursor));
}

int ListPhotosRequest::getSize()const
{
	return size_;
}

void ListPhotosRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

std::string ListPhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void ListPhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::string ListPhotosRequest::getStoreName()const
{
	return storeName_;
}

void ListPhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

std::string ListPhotosRequest::getState()const
{
	return state_;
}

void ListPhotosRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string ListPhotosRequest::getDirection()const
{
	return direction_;
}

void ListPhotosRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", std::to_string(direction));
}

