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

#include <alibabacloud/bssopenapi/model/DescribeCostBudgetsSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeCostBudgetsSummaryResult::DescribeCostBudgetsSummaryResult() :
	ServiceResult()
{}

DescribeCostBudgetsSummaryResult::DescribeCostBudgetsSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCostBudgetsSummaryResult::~DescribeCostBudgetsSummaryResult()
{}

void DescribeCostBudgetsSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["BudgetName"].isNull())
			itemObject.budgetName = dataNodeItemsItem["BudgetName"].asString();
		if(!dataNodeItemsItem["BudgetStatus"].isNull())
			itemObject.budgetStatus = dataNodeItemsItem["BudgetStatus"].asString();
		if(!dataNodeItemsItem["BudgetType"].isNull())
			itemObject.budgetType = dataNodeItemsItem["BudgetType"].asString();
		if(!dataNodeItemsItem["Budget"].isNull())
			itemObject.budget = dataNodeItemsItem["Budget"].asString();
		if(!dataNodeItemsItem["CalculatedValues"].isNull())
			itemObject.calculatedValues = dataNodeItemsItem["CalculatedValues"].asString();
		if(!dataNodeItemsItem["ConsumePeriod"].isNull())
			itemObject.consumePeriod = dataNodeItemsItem["ConsumePeriod"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeCostBudgetsSummaryResult::getMessage()const
{
	return message_;
}

DescribeCostBudgetsSummaryResult::Data DescribeCostBudgetsSummaryResult::getData()const
{
	return data_;
}

std::string DescribeCostBudgetsSummaryResult::getCode()const
{
	return code_;
}

bool DescribeCostBudgetsSummaryResult::getSuccess()const
{
	return success_;
}

