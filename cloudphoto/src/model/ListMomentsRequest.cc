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

#include <alibabacloud/cloudphoto/model/ListMomentsRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListMomentsRequest;

ListMomentsRequest::ListMomentsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListMoments")
{}

ListMomentsRequest::~ListMomentsRequest()
{}

std::string ListMomentsRequest::getCursor()const
{
	return cursor_;
}

void ListMomentsRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", std::to_string(cursor));
}

int ListMomentsRequest::getSize()const
{
	return size_;
}

void ListMomentsRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

std::string ListMomentsRequest::getLibraryId()const
{
	return libraryId_;
}

void ListMomentsRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::string ListMomentsRequest::getStoreName()const
{
	return storeName_;
}

void ListMomentsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

std::string ListMomentsRequest::getState()const
{
	return state_;
}

void ListMomentsRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string ListMomentsRequest::getDirection()const
{
	return direction_;
}

void ListMomentsRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", std::to_string(direction));
}

