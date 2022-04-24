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

#include <alibabacloud/bssopenapi/model/DescribeResourceCoverageTotalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeResourceCoverageTotalResult::DescribeResourceCoverageTotalResult() :
	ServiceResult()
{}

DescribeResourceCoverageTotalResult::DescribeResourceCoverageTotalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceCoverageTotalResult::~DescribeResourceCoverageTotalResult()
{}

void DescribeResourceCoverageTotalResult::parse(const std::string &payload)
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
		if(!dataNodePeriodCoverageItem["CoveragePercentage"].isNull())
			itemObject.coveragePercentage = std::stof(dataNodePeriodCoverageItem["CoveragePercentage"].asString());
		if(!dataNodePeriodCoverageItem["Period"].isNull())
			itemObject.period = dataNodePeriodCoverageItem["Period"].asString();
		data_.periodCoverage.push_back(itemObject);
	}
	auto totalCoverageNode = dataNode["TotalCoverage"];
	if(!totalCoverageNode["CapacityUnit"].isNull())
		data_.totalCoverage.capacityUnit = totalCoverageNode["CapacityUnit"].asString();
	if(!totalCoverageNode["DeductQuantity"].isNull())
		data_.totalCoverage.deductQuantity = std::stof(totalCoverageNode["DeductQuantity"].asString());
	if(!totalCoverageNode["CoveragePercentage"].isNull())
		data_.totalCoverage.coveragePercentage = std::stof(totalCoverageNode["CoveragePercentage"].asString());
	if(!totalCoverageNode["TotalQuantity"].isNull())
		data_.totalCoverage.totalQuantity = std::stof(totalCoverageNode["TotalQuantity"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeResourceCoverageTotalResult::getMessage()const
{
	return message_;
}

DescribeResourceCoverageTotalResult::Data DescribeResourceCoverageTotalResult::getData()const
{
	return data_;
}

std::string DescribeResourceCoverageTotalResult::getCode()const
{
	return code_;
}

bool DescribeResourceCoverageTotalResult::getSuccess()const
{
	return success_;
}

