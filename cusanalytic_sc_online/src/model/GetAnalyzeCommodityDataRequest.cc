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

#include <alibabacloud/cusanalytic_sc_online/model/GetAnalyzeCommodityDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetAnalyzeCommodityDataRequest;

GetAnalyzeCommodityDataRequest::GetAnalyzeCommodityDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetAnalyzeCommodityData")
{}

GetAnalyzeCommodityDataRequest::~GetAnalyzeCommodityDataRequest()
{}

long GetAnalyzeCommodityDataRequest::getStartUserCount()const
{
	return startUserCount_;
}

void GetAnalyzeCommodityDataRequest::setStartUserCount(long startUserCount)
{
	startUserCount_ = startUserCount;
	setCoreParameter("StartUserCount", std::to_string(startUserCount));
}

std::string GetAnalyzeCommodityDataRequest::getEndDate()const
{
	return endDate_;
}

void GetAnalyzeCommodityDataRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

long GetAnalyzeCommodityDataRequest::getEndUserCount()const
{
	return endUserCount_;
}

void GetAnalyzeCommodityDataRequest::setEndUserCount(long endUserCount)
{
	endUserCount_ = endUserCount;
	setCoreParameter("EndUserCount", std::to_string(endUserCount));
}

int GetAnalyzeCommodityDataRequest::getPageSize()const
{
	return pageSize_;
}

void GetAnalyzeCommodityDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long GetAnalyzeCommodityDataRequest::getMinSupportCount()const
{
	return minSupportCount_;
}

void GetAnalyzeCommodityDataRequest::setMinSupportCount(long minSupportCount)
{
	minSupportCount_ = minSupportCount;
	setCoreParameter("MinSupportCount", std::to_string(minSupportCount));
}

int GetAnalyzeCommodityDataRequest::getPageIndex()const
{
	return pageIndex_;
}

void GetAnalyzeCommodityDataRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

long GetAnalyzeCommodityDataRequest::getStoreId()const
{
	return storeId_;
}

void GetAnalyzeCommodityDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setCoreParameter("StoreId", std::to_string(storeId));
}

std::string GetAnalyzeCommodityDataRequest::getStartDate()const
{
	return startDate_;
}

void GetAnalyzeCommodityDataRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

long GetAnalyzeCommodityDataRequest::getStayPeriod()const
{
	return stayPeriod_;
}

void GetAnalyzeCommodityDataRequest::setStayPeriod(long stayPeriod)
{
	stayPeriod_ = stayPeriod;
	setCoreParameter("StayPeriod", std::to_string(stayPeriod));
}

