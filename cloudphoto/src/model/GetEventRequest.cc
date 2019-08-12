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

#include <alibabacloud/cloudphoto/model/GetEventRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetEventRequest;

GetEventRequest::GetEventRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetEvent")
{}

GetEventRequest::~GetEventRequest()
{}

long GetEventRequest::getEventId()const
{
	return eventId_;
}

void GetEventRequest::setEventId(long eventId)
{
	eventId_ = eventId;
	setCoreParameter("EventId", eventId);
}

std::string GetEventRequest::getLibraryId()const
{
	return libraryId_;
}

void GetEventRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::string GetEventRequest::getStoreName()const
{
	return storeName_;
}

void GetEventRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

