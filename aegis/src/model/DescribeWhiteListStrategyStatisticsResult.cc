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

#include <alibabacloud/aegis/model/DescribeWhiteListStrategyStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWhiteListStrategyStatisticsResult::DescribeWhiteListStrategyStatisticsResult() :
	ServiceResult()
{}

DescribeWhiteListStrategyStatisticsResult::DescribeWhiteListStrategyStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteListStrategyStatisticsResult::~DescribeWhiteListStrategyStatisticsResult()
{}

void DescribeWhiteListStrategyStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allStrategies = value["Strategies"]["Strategy"];
	for (auto value : allStrategies)
	{
		Strategy strategiesObject;
		if(!value["StrategyId"].isNull())
			strategiesObject.strategyId = std::stol(value["StrategyId"].asString());
		if(!value["StrategyName"].isNull())
			strategiesObject.strategyName = value["StrategyName"].asString();
		if(!value["StudyTime"].isNull())
			strategiesObject.studyTime = std::stoi(value["StudyTime"].asString());
		if(!value["AssetCount"].isNull())
			strategiesObject.assetCount = std::stoi(value["AssetCount"].asString());
		if(!value["Status"].isNull())
			strategiesObject.status = std::stoi(value["Status"].asString());
		if(!value["TrustProcCount"].isNull())
			strategiesObject.trustProcCount = std::stoi(value["TrustProcCount"].asString());
		if(!value["SuspiciousProcCount"].isNull())
			strategiesObject.suspiciousProcCount = std::stoi(value["SuspiciousProcCount"].asString());
		if(!value["VirusProcCount"].isNull())
			strategiesObject.virusProcCount = std::stoi(value["VirusProcCount"].asString());
		if(!value["Progress"].isNull())
			strategiesObject.progress = std::stoi(value["Progress"].asString());
		strategies_.push_back(strategiesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWhiteListStrategyStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWhiteListStrategyStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWhiteListStrategyStatisticsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWhiteListStrategyStatisticsResult::Strategy> DescribeWhiteListStrategyStatisticsResult::getStrategies()const
{
	return strategies_;
}

int DescribeWhiteListStrategyStatisticsResult::getCount()const
{
	return count_;
}

