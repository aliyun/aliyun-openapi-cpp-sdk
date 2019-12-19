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

#include <alibabacloud/reid/model/DescribeCustomerFlowByLocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

DescribeCustomerFlowByLocationResult::DescribeCustomerFlowByLocationResult() :
	ServiceResult()
{}

DescribeCustomerFlowByLocationResult::DescribeCustomerFlowByLocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomerFlowByLocationResult::~DescribeCustomerFlowByLocationResult()
{}

void DescribeCustomerFlowByLocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomerFlowItemsNode = value["CustomerFlowItems"]["CustomerFlowItem"];
	for (auto valueCustomerFlowItemsCustomerFlowItem : allCustomerFlowItemsNode)
	{
		CustomerFlowItem customerFlowItemsObject;
		if(!valueCustomerFlowItemsCustomerFlowItem["Count"].isNull())
			customerFlowItemsObject.count = std::stol(valueCustomerFlowItemsCustomerFlowItem["Count"].asString());
		if(!valueCustomerFlowItemsCustomerFlowItem["StoreId"].isNull())
			customerFlowItemsObject.storeId = std::stol(valueCustomerFlowItemsCustomerFlowItem["StoreId"].asString());
		if(!valueCustomerFlowItemsCustomerFlowItem["Percent"].isNull())
			customerFlowItemsObject.percent = std::stof(valueCustomerFlowItemsCustomerFlowItem["Percent"].asString());
		if(!valueCustomerFlowItemsCustomerFlowItem["LocationName"].isNull())
			customerFlowItemsObject.locationName = valueCustomerFlowItemsCustomerFlowItem["LocationName"].asString();
		if(!valueCustomerFlowItemsCustomerFlowItem["ParentLocationIds"].isNull())
			customerFlowItemsObject.parentLocationIds = valueCustomerFlowItemsCustomerFlowItem["ParentLocationIds"].asString();
		if(!valueCustomerFlowItemsCustomerFlowItem["LocationId"].isNull())
			customerFlowItemsObject.locationId = std::stol(valueCustomerFlowItemsCustomerFlowItem["LocationId"].asString());
		customerFlowItems_.push_back(customerFlowItemsObject);
	}
	if(!value["LocationId"].isNull())
		locationId_ = std::stol(value["LocationId"].asString());
	if(!value["ParentLocationIds"].isNull())
		parentLocationIds_ = value["ParentLocationIds"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["LocationName"].isNull())
		locationName_ = value["LocationName"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stof(value["Percent"].asString());
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());

}

std::vector<DescribeCustomerFlowByLocationResult::CustomerFlowItem> DescribeCustomerFlowByLocationResult::getCustomerFlowItems()const
{
	return customerFlowItems_;
}

long DescribeCustomerFlowByLocationResult::getStoreId()const
{
	return storeId_;
}

float DescribeCustomerFlowByLocationResult::getPercent()const
{
	return percent_;
}

long DescribeCustomerFlowByLocationResult::getLocationId()const
{
	return locationId_;
}

std::string DescribeCustomerFlowByLocationResult::getParentLocationIds()const
{
	return parentLocationIds_;
}

std::string DescribeCustomerFlowByLocationResult::getErrorCode()const
{
	return errorCode_;
}

long DescribeCustomerFlowByLocationResult::getCount()const
{
	return count_;
}

std::string DescribeCustomerFlowByLocationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DescribeCustomerFlowByLocationResult::getSuccess()const
{
	return success_;
}

std::string DescribeCustomerFlowByLocationResult::getLocationName()const
{
	return locationName_;
}

