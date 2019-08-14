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

#include <alibabacloud/cloudphoto/model/ListMomentPhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListMomentPhotosRequest;

ListMomentPhotosRequest::ListMomentPhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListMomentPhotos")
{}

ListMomentPhotosRequest::~ListMomentPhotosRequest()
{}

std::string ListMomentPhotosRequest::getCursor()const
{
	return cursor_;
}

void ListMomentPhotosRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", cursor);
}

int ListMomentPhotosRequest::getSize()const
{
	return size_;
}

void ListMomentPhotosRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string ListMomentPhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void ListMomentPhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::string ListMomentPhotosRequest::getStoreName()const
{
	return storeName_;
}

void ListMomentPhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

std::string ListMomentPhotosRequest::getState()const
{
	return state_;
}

void ListMomentPhotosRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

long ListMomentPhotosRequest::getMomentId()const
{
	return momentId_;
}

void ListMomentPhotosRequest::setMomentId(long momentId)
{
	momentId_ = momentId;
	setCoreParameter("MomentId", std::to_string(momentId));
}

std::string ListMomentPhotosRequest::getDirection()const
{
	return direction_;
}

void ListMomentPhotosRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

