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

#include <alibabacloud/bssopenapi/model/DescribeResourceUsageTotalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeResourceUsageTotalResult::DescribeResourceUsageTotalResult() :
	ServiceResult()
{}

DescribeResourceUsageTotalResult::DescribeResourceUsageTotalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceUsageTotalResult::~DescribeResourceUsageTotalResult()
{}

void DescribeResourceUsageTotalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allPeriodCoverageNode = dataNode["PeriodCoverage"]["Item"];
	for (auto dataNodePeriodCoverageItem : allPeriodCoverageNode)
	{
		Data::Item itemObject;
		if(!dataNodePeriodCoverageItem["UsagePercentage"].isNull())
			itemObject.usagePercentage = std::stof(dataNodePeriodCoverageItem["UsagePercentage"].asString());
		if(!dataNodePeriodCoverageItem["Period"].isNull())
			itemObject.period = dataNodePeriodCoverageItem["Period"].asString();
		data_.periodCoverage.push_back(itemObject);
	}
	auto totalUsageNode = dataNode["TotalUsage"];
	if(!totalUsageNode["PostpaidCost"].isNull())
		data_.totalUsage.postpaidCost = std::stof(totalUsageNode["PostpaidCost"].asString());
	if(!totalUsageNode["SavedCost"].isNull())
		data_.totalUsage.savedCost = std::stof(totalUsageNode["SavedCost"].asString());
	if(!totalUsageNode["UsagePercentage"].isNull())
		data_.totalUsage.usagePercentage = std::stof(totalUsageNode["UsagePercentage"].asString());
	if(!totalUsageNode["PotentialSavedCost"].isNull())
		data_.totalUsage.potentialSavedCost = std::stof(totalUsageNode["PotentialSavedCost"].asString());
	if(!totalUsageNode["ReservationCost"].isNull())
		data_.totalUsage.reservationCost = std::stof(totalUsageNode["ReservationCost"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeResourceUsageTotalResult::getMessage()const
{
	return message_;
}

DescribeResourceUsageTotalResult::Data DescribeResourceUsageTotalResult::getData()const
{
	return data_;
}

std::string DescribeResourceUsageTotalResult::getCode()const
{
	return code_;
}

bool DescribeResourceUsageTotalResult::getSuccess()const
{
	return success_;
}

