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

#include <alibabacloud/cdrs/model/ListVehicleDetailsRequest.h>

using AlibabaCloud::CDRS::Model::ListVehicleDetailsRequest;

ListVehicleDetailsRequest::ListVehicleDetailsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListVehicleDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListVehicleDetailsRequest::~ListVehicleDetailsRequest()
{}

std::string ListVehicleDetailsRequest::getPlateId()const
{
	return plateId_;
}

void ListVehicleDetailsRequest::setPlateId(const std::string& plateId)
{
	plateId_ = plateId;
	setBodyParameter("PlateId", plateId);
}

std::string ListVehicleDetailsRequest::getCorpId()const
{
	return corpId_;
}

void ListVehicleDetailsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListVehicleDetailsRequest::getEndTime()const
{
	return endTime_;
}

void ListVehicleDetailsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListVehicleDetailsRequest::getStartTime()const
{
	return startTime_;
}

void ListVehicleDetailsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListVehicleDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListVehicleDetailsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListVehicleDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListVehicleDetailsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

