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

#include <alibabacloud/cdrs/model/ListVehicleTopRequest.h>

using AlibabaCloud::CDRS::Model::ListVehicleTopRequest;

ListVehicleTopRequest::ListVehicleTopRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListVehicleTop")
{
	setMethod(HttpRequest::Method::Post);
}

ListVehicleTopRequest::~ListVehicleTopRequest()
{}

std::string ListVehicleTopRequest::getPlateId()const
{
	return plateId_;
}

void ListVehicleTopRequest::setPlateId(const std::string& plateId)
{
	plateId_ = plateId;
	setBodyParameter("PlateId", plateId);
}

std::string ListVehicleTopRequest::getCorpId()const
{
	return corpId_;
}

void ListVehicleTopRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListVehicleTopRequest::getEndTime()const
{
	return endTime_;
}

void ListVehicleTopRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListVehicleTopRequest::getStartTime()const
{
	return startTime_;
}

void ListVehicleTopRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListVehicleTopRequest::getPageNum()const
{
	return pageNum_;
}

void ListVehicleTopRequest::setPageNum(const std::string& pageNum)
{
	pageNum_ = pageNum;
	setBodyParameter("PageNum", pageNum);
}

std::string ListVehicleTopRequest::getPageSize()const
{
	return pageSize_;
}

void ListVehicleTopRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

