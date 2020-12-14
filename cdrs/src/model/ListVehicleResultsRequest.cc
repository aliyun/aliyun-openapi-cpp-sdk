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

#include <alibabacloud/cdrs/model/ListVehicleResultsRequest.h>

using AlibabaCloud::CDRS::Model::ListVehicleResultsRequest;

ListVehicleResultsRequest::ListVehicleResultsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListVehicleResults")
{
	setMethod(HttpRequest::Method::Post);
}

ListVehicleResultsRequest::~ListVehicleResultsRequest()
{}

std::string ListVehicleResultsRequest::getCorpId()const
{
	return corpId_;
}

void ListVehicleResultsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListVehicleResultsRequest::getEndTime()const
{
	return endTime_;
}

void ListVehicleResultsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListVehicleResultsRequest::getStartTime()const
{
	return startTime_;
}

void ListVehicleResultsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListVehicleResultsRequest::getVehicleColor()const
{
	return vehicleColor_;
}

void ListVehicleResultsRequest::setVehicleColor(const std::string& vehicleColor)
{
	vehicleColor_ = vehicleColor;
	setBodyParameter("VehicleColor", vehicleColor);
}

std::string ListVehicleResultsRequest::getVehicleApplication()const
{
	return vehicleApplication_;
}

void ListVehicleResultsRequest::setVehicleApplication(const std::string& vehicleApplication)
{
	vehicleApplication_ = vehicleApplication;
	setBodyParameter("VehicleApplication", vehicleApplication);
}

long ListVehicleResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListVehicleResultsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListVehicleResultsRequest::getVehicleClass()const
{
	return vehicleClass_;
}

void ListVehicleResultsRequest::setVehicleClass(const std::string& vehicleClass)
{
	vehicleClass_ = vehicleClass;
	setBodyParameter("VehicleClass", vehicleClass);
}

long ListVehicleResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListVehicleResultsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

