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

#include <alibabacloud/cloudphoto/model/ListTimeLinePhotosRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListTimeLinePhotosRequest;

ListTimeLinePhotosRequest::ListTimeLinePhotosRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListTimeLinePhotos")
{}

ListTimeLinePhotosRequest::~ListTimeLinePhotosRequest()
{}

int ListTimeLinePhotosRequest::getSize()const
{
	return size_;
}

void ListTimeLinePhotosRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

std::string ListTimeLinePhotosRequest::getLibraryId()const
{
	return libraryId_;
}

void ListTimeLinePhotosRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

long ListTimeLinePhotosRequest::getEndTime()const
{
	return endTime_;
}

void ListTimeLinePhotosRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ListTimeLinePhotosRequest::getStoreName()const
{
	return storeName_;
}

void ListTimeLinePhotosRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

int ListTimeLinePhotosRequest::getPage()const
{
	return page_;
}

void ListTimeLinePhotosRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

long ListTimeLinePhotosRequest::getStartTime()const
{
	return startTime_;
}

void ListTimeLinePhotosRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ListTimeLinePhotosRequest::getFilterBy()const
{
	return filterBy_;
}

void ListTimeLinePhotosRequest::setFilterBy(const std::string& filterBy)
{
	filterBy_ = filterBy;
	setCoreParameter("FilterBy", std::to_string(filterBy));
}

std::string ListTimeLinePhotosRequest::getDirection()const
{
	return direction_;
}

void ListTimeLinePhotosRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", std::to_string(direction));
}

std::string ListTimeLinePhotosRequest::getOrder()const
{
	return order_;
}

void ListTimeLinePhotosRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

