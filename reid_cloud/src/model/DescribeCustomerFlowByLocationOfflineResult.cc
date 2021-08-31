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

#include <alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationOfflineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

DescribeCustomerFlowByLocationOfflineResult::DescribeCustomerFlowByLocationOfflineResult() :
	ServiceResult()
{}

DescribeCustomerFlowByLocationOfflineResult::DescribeCustomerFlowByLocationOfflineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomerFlowByLocationOfflineResult::~DescribeCustomerFlowByLocationOfflineResult()
{}

void DescribeCustomerFlowByLocationOfflineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomerSummaryNode = value["CustomerSummary"]["customerSummaryItem"];
	for (auto valueCustomerSummarycustomerSummaryItem : allCustomerSummaryNode)
	{
		CustomerSummaryItem customerSummaryObject;
		if(!valueCustomerSummarycustomerSummaryItem["SummaryStartTime"].isNull())
			customerSummaryObject.summaryStartTime = std::stol(valueCustomerSummarycustomerSummaryItem["SummaryStartTime"].asString());
		if(!valueCustomerSummarycustomerSummaryItem["SummaryEndTime"].isNull())
			customerSummaryObject.summaryEndTime = std::stol(valueCustomerSummarycustomerSummaryItem["SummaryEndTime"].asString());
		auto allCustomerFlowsNode = valueCustomerSummarycustomerSummaryItem["CustomerFlows"]["customerFlow"];
		for (auto valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow : allCustomerFlowsNode)
		{
			CustomerSummaryItem::CustomerFlow customerFlowsObject;
			if(!valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow["CurrentLocationId"].isNull())
				customerFlowsObject.currentLocationId = std::stol(valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow["CurrentLocationId"].asString());
			if(!valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow["Count"].isNull())
				customerFlowsObject.count = std::stol(valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow["Count"].asString());
			auto allCustomerFlowItemsNode = valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlow["CustomerFlowItems"]["customerFlowItem"];
			for (auto valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlowCustomerFlowItemscustomerFlowItem : allCustomerFlowItemsNode)
			{
				CustomerSummaryItem::CustomerFlow::CustomerFlowItem customerFlowItemsObject;
				if(!valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlowCustomerFlowItemscustomerFlowItem["LocationId"].isNull())
					customerFlowItemsObject.locationId = std::stol(valueCustomerSummarycustomerSummaryItemCustomerFlowscustomerFlowCustomerFlowItemscustomerFlowItem["LocationId"].asString());
				auto allUkId = value["UkId"]["ukId"];
				for (auto value : allUkId)
					customerFlowItemsObject.ukId.push_back(value.asString());
				customerFlowsObject.customerFlowItems.push_back(customerFlowItemsObject);
			}
			customerSummaryObject.customerFlows.push_back(customerFlowsObject);
		}
		customerSummary_.push_back(customerSummaryObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["SummaryDay"].isNull())
		summaryDay_ = value["SummaryDay"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<DescribeCustomerFlowByLocationOfflineResult::CustomerSummaryItem> DescribeCustomerFlowByLocationOfflineResult::getCustomerSummary()const
{
	return customerSummary_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getMessage()const
{
	return message_;
}

long DescribeCustomerFlowByLocationOfflineResult::getStoreId()const
{
	return storeId_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getSummaryDay()const
{
	return summaryDay_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeCustomerFlowByLocationOfflineResult::getCode()const
{
	return code_;
}

bool DescribeCustomerFlowByLocationOfflineResult::getSuccess()const
{
	return success_;
}

