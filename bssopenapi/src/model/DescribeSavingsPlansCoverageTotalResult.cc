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

#include <alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageTotalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeSavingsPlansCoverageTotalResult::DescribeSavingsPlansCoverageTotalResult() :
	ServiceResult()
{}

DescribeSavingsPlansCoverageTotalResult::DescribeSavingsPlansCoverageTotalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSavingsPlansCoverageTotalResult::~DescribeSavingsPlansCoverageTotalResult()
{}

void DescribeSavingsPlansCoverageTotalResult::parse(const std::string &payload)
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
		if(!dataNodePeriodCoverageItem["Percentage"].isNull())
			itemObject.percentage = std::stof(dataNodePeriodCoverageItem["Percentage"].asString());
		if(!dataNodePeriodCoverageItem["Period"].isNull())
			itemObject.period = dataNodePeriodCoverageItem["Period"].asString();
		data_.periodCoverage.push_back(itemObject);
	}
	auto totalCoverageNode = dataNode["TotalCoverage"];
	if(!totalCoverageNode["CoveragePercentage"].isNull())
		data_.totalCoverage.coveragePercentage = std::stof(totalCoverageNode["CoveragePercentage"].asString());
	if(!totalCoverageNode["DeductAmount"].isNull())
		data_.totalCoverage.deductAmount = std::stof(totalCoverageNode["DeductAmount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSavingsPlansCoverageTotalResult::getMessage()const
{
	return message_;
}

DescribeSavingsPlansCoverageTotalResult::Data DescribeSavingsPlansCoverageTotalResult::getData()const
{
	return data_;
}

std::string DescribeSavingsPlansCoverageTotalResult::getCode()const
{
	return code_;
}

bool DescribeSavingsPlansCoverageTotalResult::getSuccess()const
{
	return success_;
}

