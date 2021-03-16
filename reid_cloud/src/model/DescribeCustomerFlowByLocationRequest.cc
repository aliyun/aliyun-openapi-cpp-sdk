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

#include <alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationRequest.h>

using AlibabaCloud::Reid_cloud::Model::DescribeCustomerFlowByLocationRequest;

DescribeCustomerFlowByLocationRequest::DescribeCustomerFlowByLocationRequest() :
	RpcServiceRequest("reid_cloud", "2020-10-29", "DescribeCustomerFlowByLocation")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCustomerFlowByLocationRequest::~DescribeCustomerFlowByLocationRequest()
{}

std::string DescribeCustomerFlowByLocationRequest::getStartDate()const
{
	return startDate_;
}

void DescribeCustomerFlowByLocationRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

long DescribeCustomerFlowByLocationRequest::getStoreId()const
{
	return storeId_;
}

void DescribeCustomerFlowByLocationRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long DescribeCustomerFlowByLocationRequest::getMinCount()const
{
	return minCount_;
}

void DescribeCustomerFlowByLocationRequest::setMinCount(long minCount)
{
	minCount_ = minCount;
	setBodyParameter("MinCount", std::to_string(minCount));
}

long DescribeCustomerFlowByLocationRequest::getParentAmount()const
{
	return parentAmount_;
}

void DescribeCustomerFlowByLocationRequest::setParentAmount(long parentAmount)
{
	parentAmount_ = parentAmount;
	setBodyParameter("ParentAmount", std::to_string(parentAmount));
}

long DescribeCustomerFlowByLocationRequest::getMaxCount()const
{
	return maxCount_;
}

void DescribeCustomerFlowByLocationRequest::setMaxCount(long maxCount)
{
	maxCount_ = maxCount;
	setBodyParameter("MaxCount", std::to_string(maxCount));
}

std::string DescribeCustomerFlowByLocationRequest::getEndDate()const
{
	return endDate_;
}

void DescribeCustomerFlowByLocationRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setBodyParameter("EndDate", endDate);
}

long DescribeCustomerFlowByLocationRequest::getLocationId()const
{
	return locationId_;
}

void DescribeCustomerFlowByLocationRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

std::string DescribeCustomerFlowByLocationRequest::getParentLocationIds()const
{
	return parentLocationIds_;
}

void DescribeCustomerFlowByLocationRequest::setParentLocationIds(const std::string& parentLocationIds)
{
	parentLocationIds_ = parentLocationIds;
	setBodyParameter("ParentLocationIds", parentLocationIds);
}

