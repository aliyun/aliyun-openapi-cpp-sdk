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

#include <alibabacloud/sas/model/DescribeImageBaselineCheckSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageBaselineCheckSummaryResult::DescribeImageBaselineCheckSummaryResult() :
	ServiceResult()
{}

DescribeImageBaselineCheckSummaryResult::DescribeImageBaselineCheckSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageBaselineCheckSummaryResult::~DescribeImageBaselineCheckSummaryResult()
{}

void DescribeImageBaselineCheckSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineResultSummaryNode = value["BaselineResultSummary"]["BaselineResultSummaryItem"];
	for (auto valueBaselineResultSummaryBaselineResultSummaryItem : allBaselineResultSummaryNode)
	{
		BaselineResultSummaryItem baselineResultSummaryObject;
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["Status"].isNull())
			baselineResultSummaryObject.status = std::stoi(valueBaselineResultSummaryBaselineResultSummaryItem["Status"].asString());
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["MiddleRiskImage"].isNull())
			baselineResultSummaryObject.middleRiskImage = std::stoi(valueBaselineResultSummaryBaselineResultSummaryItem["MiddleRiskImage"].asString());
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameLevel"].isNull())
			baselineResultSummaryObject.baselineNameLevel = valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameLevel"].asString();
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["LastScanTime"].isNull())
			baselineResultSummaryObject.lastScanTime = std::stol(valueBaselineResultSummaryBaselineResultSummaryItem["LastScanTime"].asString());
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["HighRiskImage"].isNull())
			baselineResultSummaryObject.highRiskImage = std::stoi(valueBaselineResultSummaryBaselineResultSummaryItem["HighRiskImage"].asString());
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameKey"].isNull())
			baselineResultSummaryObject.baselineNameKey = valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameKey"].asString();
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["BaselineClassKey"].isNull())
			baselineResultSummaryObject.baselineClassKey = valueBaselineResultSummaryBaselineResultSummaryItem["BaselineClassKey"].asString();
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameAlias"].isNull())
			baselineResultSummaryObject.baselineNameAlias = valueBaselineResultSummaryBaselineResultSummaryItem["BaselineNameAlias"].asString();
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["BaselineClassAlias"].isNull())
			baselineResultSummaryObject.baselineClassAlias = valueBaselineResultSummaryBaselineResultSummaryItem["BaselineClassAlias"].asString();
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["FirstScanTime"].isNull())
			baselineResultSummaryObject.firstScanTime = std::stol(valueBaselineResultSummaryBaselineResultSummaryItem["FirstScanTime"].asString());
		if(!valueBaselineResultSummaryBaselineResultSummaryItem["LowRiskImage"].isNull())
			baselineResultSummaryObject.lowRiskImage = std::stoi(valueBaselineResultSummaryBaselineResultSummaryItem["LowRiskImage"].asString());
		baselineResultSummary_.push_back(baselineResultSummaryObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeImageBaselineCheckSummaryResult::PageInfo DescribeImageBaselineCheckSummaryResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeImageBaselineCheckSummaryResult::BaselineResultSummaryItem> DescribeImageBaselineCheckSummaryResult::getBaselineResultSummary()const
{
	return baselineResultSummary_;
}

