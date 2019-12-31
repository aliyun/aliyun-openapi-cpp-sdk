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
	auto accurateOverviewDetailNode = value["AccurateOverviewDetail"];
	if(!accurateOverviewDetailNode["StayDeepAvgWOWPercent"].isNull())
		accurateOverviewDetail_.stayDeepAvgWOWPercent = accurateOverviewDetailNode["StayDeepAvgWOWPercent"].asString();
	if(!accurateOverviewDetailNode["StayDeepAvg"].isNull())
		accurateOverviewDetail_.stayDeepAvg = accurateOverviewDetailNode["StayDeepAvg"].asString();
	if(!accurateOverviewDetailNode["UvAvgWOWPercent"].isNull())
		accurateOverviewDetail_.uvAvgWOWPercent = accurateOverviewDetailNode["UvAvgWOWPercent"].asString();
	if(!accurateOverviewDetailNode["StayAvgPeriodWOWPercent"].isNull())
		accurateOverviewDetail_.stayAvgPeriodWOWPercent = accurateOverviewDetailNode["StayAvgPeriodWOWPercent"].asString();
	if(!accurateOverviewDetailNode["UvWOWPercent"].isNull())
		accurateOverviewDetail_.uvWOWPercent = accurateOverviewDetailNode["UvWOWPercent"].asString();
	if(!accurateOverviewDetailNode["UvEverySqmGrowthWOWPercent"].isNull())
		accurateOverviewDetail_.uvEverySqmGrowthWOWPercent = accurateOverviewDetailNode["UvEverySqmGrowthWOWPercent"].asString();
	if(!accurateOverviewDetailNode["Uv"].isNull())
		accurateOverviewDetail_.uv = std::stol(accurateOverviewDetailNode["Uv"].asString());
	if(!accurateOverviewDetailNode["UvEverySqm"].isNull())
		accurateOverviewDetail_.uvEverySqm = accurateOverviewDetailNode["UvEverySqm"].asString();
	if(!accurateOverviewDetailNode["UvAvg"].isNull())
		accurateOverviewDetail_.uvAvg = accurateOverviewDetailNode["UvAvg"].asString();
	if(!accurateOverviewDetailNode["StayAvgPeriod"].isNull())
		accurateOverviewDetail_.stayAvgPeriod = accurateOverviewDetailNode["StayAvgPeriod"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

DescribeOverviewDataResult::OverviewDetail DescribeOverviewDataResult::getOverviewDetail()const
{
	return overviewDetail_;
}

std::string DescribeOverviewDataResult::getMessage()const
{
	return message_;
}

DescribeOverviewDataResult::AccurateOverviewDetail DescribeOverviewDataResult::getAccurateOverviewDetail()const
{
	return accurateOverviewDetail_;
}

std::string DescribeOverviewDataResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeOverviewDataResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeOverviewDataResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeOverviewDataResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeOverviewDataResult::getCode()const
{
	return code_;
}

bool DescribeOverviewDataResult::getSuccess()const
{
	return success_;
}

