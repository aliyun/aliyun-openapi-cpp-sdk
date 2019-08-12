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

#include <alibabacloud/cloudphoto/model/ListTimeLinesRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListTimeLinesRequest;

ListTimeLinesRequest::ListTimeLinesRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListTimeLines")
{}

ListTimeLinesRequest::~ListTimeLinesRequest()
{}

long ListTimeLinesRequest::getCursor()const
{
	return cursor_;
}

void ListTimeLinesRequest::setCursor(long cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", cursor);
}

int ListTimeLinesRequest::getPhotoSize()const
{
	return photoSize_;
}

void ListTimeLinesRequest::setPhotoSize(int photoSize)
{
	photoSize_ = photoSize;
	setCoreParameter("PhotoSize", photoSize);
}

int ListTimeLinesRequest::getTimeLineCount()const
{
	return timeLineCount_;
}

void ListTimeLinesRequest::setTimeLineCount(int timeLineCount)
{
	timeLineCount_ = timeLineCount;
	setCoreParameter("TimeLineCount", timeLineCount);
}

std::string ListTimeLinesRequest::getLibraryId()const
{
	return libraryId_;
}

void ListTimeLinesRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::string ListTimeLinesRequest::getStoreName()const
{
	return storeName_;
}

void ListTimeLinesRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

std::string ListTimeLinesRequest::getTimeLineUnit()const
{
	return timeLineUnit_;
}

void ListTimeLinesRequest::setTimeLineUnit(const std::string& timeLineUnit)
{
	timeLineUnit_ = timeLineUnit;
	setCoreParameter("TimeLineUnit", std::to_string(timeLineUnit));
}

std::string ListTimeLinesRequest::getFilterBy()const
{
	return filterBy_;
}

void ListTimeLinesRequest::setFilterBy(const std::string& filterBy)
{
	filterBy_ = filterBy;
	setCoreParameter("FilterBy", std::to_string(filterBy));
}

std::string ListTimeLinesRequest::getDirection()const
{
	return direction_;
}

void ListTimeLinesRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", std::to_string(direction));
}

std::string ListTimeLinesRequest::getOrder()const
{
	return order_;
}

void ListTimeLinesRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

