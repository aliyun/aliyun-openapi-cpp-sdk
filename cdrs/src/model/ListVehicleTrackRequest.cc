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

#include <alibabacloud/cdrs/model/ListVehicleTrackRequest.h>

using AlibabaCloud::CDRS::Model::ListVehicleTrackRequest;

ListVehicleTrackRequest::ListVehicleTrackRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListVehicleTrack")
{
	setMethod(HttpRequest::Method::Post);
}

ListVehicleTrackRequest::~ListVehicleTrackRequest()
{}

std::string ListVehicleTrackRequest::getPlateId()const
{
	return plateId_;
}

void ListVehicleTrackRequest::setPlateId(const std::string& plateId)
{
	plateId_ = plateId;
	setBodyParameter("PlateId", plateId);
}

std::string ListVehicleTrackRequest::getCorpId()const
{
	return corpId_;
}

void ListVehicleTrackRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListVehicleTrackRequest::getEndTime()const
{
	return endTime_;
}

void ListVehicleTrackRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListVehicleTrackRequest::getStartTime()const
{
	return startTime_;
}

void ListVehicleTrackRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListVehicleTrackRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListVehicleTrackRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

long ListVehicleTrackRequest::getPageSize()const
{
	return pageSize_;
}

void ListVehicleTrackRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

