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

#include <alibabacloud/cusanalytic_sc_online/model/GetAnalyzePlaceDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetAnalyzePlaceDataRequest;

GetAnalyzePlaceDataRequest::GetAnalyzePlaceDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetAnalyzePlaceData")
{}

GetAnalyzePlaceDataRequest::~GetAnalyzePlaceDataRequest()
{}

long GetAnalyzePlaceDataRequest::getEndUVCount()const
{
	return endUVCount_;
}

void GetAnalyzePlaceDataRequest::setEndUVCount(long endUVCount)
{
	endUVCount_ = endUVCount;
	setCoreParameter("EndUVCount", std::to_string(endUVCount));
}

long GetAnalyzePlaceDataRequest::getParentAmount()const
{
	return parentAmount_;
}

void GetAnalyzePlaceDataRequest::setParentAmount(long parentAmount)
{
	parentAmount_ = parentAmount;
	setCoreParameter("ParentAmount", std::to_string(parentAmount));
}

std::string GetAnalyzePlaceDataRequest::getEndDate()const
{
	return endDate_;
}

void GetAnalyzePlaceDataRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

long GetAnalyzePlaceDataRequest::getLocationId()const
{
	return locationId_;
}

void GetAnalyzePlaceDataRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setCoreParameter("LocationId", std::to_string(locationId));
}

std::string GetAnalyzePlaceDataRequest::getParentLocationIds()const
{
	return parentLocationIds_;
}

void GetAnalyzePlaceDataRequest::setParentLocationIds(const std::string& parentLocationIds)
{
	parentLocationIds_ = parentLocationIds;
	setCoreParameter("ParentLocationIds", parentLocationIds);
}

std::string GetAnalyzePlaceDataRequest::getStartDate()const
{
	return startDate_;
}

void GetAnalyzePlaceDataRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

long GetAnalyzePlaceDataRequest::getStartUVCount()const
{
	return startUVCount_;
}

void GetAnalyzePlaceDataRequest::setStartUVCount(long startUVCount)
{
	startUVCount_ = startUVCount;
	setCoreParameter("StartUVCount", std::to_string(startUVCount));
}

long GetAnalyzePlaceDataRequest::getStoreId()const
{
	return storeId_;
}

void GetAnalyzePlaceDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setCoreParameter("StoreId", std::to_string(storeId));
}

