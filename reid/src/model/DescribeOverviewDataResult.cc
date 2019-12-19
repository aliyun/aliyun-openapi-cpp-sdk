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

#include <alibabacloud/reid/model/DescribeOverviewDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

DescribeOverviewDataResult::DescribeOverviewDataResult() :
	ServiceResult()
{}

DescribeOverviewDataResult::DescribeOverviewDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOverviewDataResult::~DescribeOverviewDataResult()
{}

void DescribeOverviewDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto overviewDetailNode = value["OverviewDetail"];
	if(!overviewDetailNode["StayDeepAvgWOWPercent"].isNull())
		overviewDetail_.stayDeepAvgWOWPercent = std::stof(overviewDetailNode["StayDeepAvgWOWPercent"].asString());
	if(!overviewDetailNode["StayDeepAvg"].isNull())
		overviewDetail_.stayDeepAvg = std::stof(overviewDetailNode["StayDeepAvg"].asString());
	if(!overviewDetailNode["UvAvgWOWPercent"].isNull())
		overviewDetail_.uvAvgWOWPercent = std::stof(overviewDetailNode["UvAvgWOWPercent"].asString());
	if(!overviewDetailNode["StayAvgPeriodWOWPercent"].isNull())
		overviewDetail_.stayAvgPeriodWOWPercent = std::stof(overviewDetailNode["StayAvgPeriodWOWPercent"].asString());
	if(!overviewDetailNode["UvEverySqmGrowthWOWPercent"].isNull())
		overviewDetail_.uvEverySqmGrowthWOWPercent = std::stof(overviewDetailNode["UvEverySqmGrowthWOWPercent"].asString());
	if(!overviewDetailNode["UvWOWPercent"].isNull())
		overviewDetail_.uvWOWPercent = std::stof(overviewDetailNode["UvWOWPercent"].asString());
	if(!overviewDetailNode["Uv"].isNull())
		overviewDetail_.uv = std::stol(overviewDetailNode["Uv"].asString());
	if(!overviewDetailNode["UvEverySqm"].isNull())
		overviewDetail_.uvEverySqm = std::stof(overviewDetailNode["UvEverySqm"].asString());
	if(!overviewDetailNode["UvAvg"].isNull())
		overviewDetail_.uvAvg = std::stof(overviewDetailNode["UvAvg"].asString());
	if(!overviewDetailNode["StayAvgPeriod"].isNull())
		overviewDetail_.stayAvgPeriod = std::stof(overviewDetailNode["StayAvgPeriod"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeOverviewDataResult::OverviewDetail DescribeOverviewDataResult::getOverviewDetail()const
{
	return overviewDetail_;
}

std::string DescribeOverviewDataResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeOverviewDataResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DescribeOverviewDataResult::getSuccess()const
{
	return success_;
}

