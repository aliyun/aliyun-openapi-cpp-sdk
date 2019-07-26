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

#include <alibabacloud/cusanalytic_sc_online/model/ListVisitorsRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::ListVisitorsRequest;

ListVisitorsRequest::ListVisitorsRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "ListVisitors")
{}

ListVisitorsRequest::~ListVisitorsRequest()
{}

std::string ListVisitorsRequest::getPkId()const
{
	return pkId_;
}

void ListVisitorsRequest::setPkId(const std::string& pkId)
{
	pkId_ = pkId;
	setCoreParameter("PkId", pkId);
}

std::string ListVisitorsRequest::getGender()const
{
	return gender_;
}

void ListVisitorsRequest::setGender(const std::string& gender)
{
	gender_ = gender;
	setCoreParameter("Gender", gender);
}

long ListVisitorsRequest::getUkId()const
{
	return ukId_;
}

void ListVisitorsRequest::setUkId(long ukId)
{
	ukId_ = ukId;
	setCoreParameter("UkId", std::to_string(ukId));
}

int ListVisitorsRequest::getPageSize()const
{
	return pageSize_;
}

void ListVisitorsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListVisitorsRequest::getLocationIds()const
{
	return locationIds_;
}

void ListVisitorsRequest::setLocationIds(const std::string& locationIds)
{
	locationIds_ = locationIds;
	setCoreParameter("LocationIds", locationIds);
}

std::string ListVisitorsRequest::getEndTime()const
{
	return endTime_;
}

void ListVisitorsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ListVisitorsRequest::getEnterCount()const
{
	return enterCount_;
}

void ListVisitorsRequest::setEnterCount(long enterCount)
{
	enterCount_ = enterCount;
	setCoreParameter("EnterCount", std::to_string(enterCount));
}

int ListVisitorsRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListVisitorsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListVisitorsRequest::getStartTime()const
{
	return startTime_;
}

void ListVisitorsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long ListVisitorsRequest::getAgeStart()const
{
	return ageStart_;
}

void ListVisitorsRequest::setAgeStart(long ageStart)
{
	ageStart_ = ageStart;
	setCoreParameter("AgeStart", std::to_string(ageStart));
}

long ListVisitorsRequest::getAgeEnd()const
{
	return ageEnd_;
}

void ListVisitorsRequest::setAgeEnd(long ageEnd)
{
	ageEnd_ = ageEnd;
	setCoreParameter("AgeEnd", std::to_string(ageEnd));
}

std::string ListVisitorsRequest::getStoreIds()const
{
	return storeIds_;
}

void ListVisitorsRequest::setStoreIds(const std::string& storeIds)
{
	storeIds_ = storeIds;
	setCoreParameter("StoreIds", storeIds);
}

