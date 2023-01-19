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

#include <alibabacloud/sas/model/DescribeImageBaselineCheckResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageBaselineCheckResultResult::DescribeImageBaselineCheckResultResult() :
	ServiceResult()
{}

DescribeImageBaselineCheckResultResult::DescribeImageBaselineCheckResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageBaselineCheckResultResult::~DescribeImageBaselineCheckResultResult()
{}

void DescribeImageBaselineCheckResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineResultNode = value["BaselineResult"]["BaselineResultItem"];
	for (auto valueBaselineResultBaselineResultItem : allBaselineResultNode)
	{
		BaselineResultItem baselineResultObject;
		if(!valueBaselineResultBaselineResultItem["Status"].isNull())
			baselineResultObject.status = std::stoi(valueBaselineResultBaselineResultItem["Status"].asString());
		if(!valueBaselineResultBaselineResultItem["LowRiskItemCount"].isNull())
			baselineResultObject.lowRiskItemCount = std::stoi(valueBaselineResultBaselineResultItem["LowRiskItemCount"].asString());
		if(!valueBaselineResultBaselineResultItem["BaselineNameLevel"].isNull())
			baselineResultObject.baselineNameLevel = valueBaselineResultBaselineResultItem["BaselineNameLevel"].asString();
		if(!valueBaselineResultBaselineResultItem["LastScanTime"].isNull())
			baselineResultObject.lastScanTime = std::stol(valueBaselineResultBaselineResultItem["LastScanTime"].asString());
		if(!valueBaselineResultBaselineResultItem["MiddleRiskItemCount"].isNull())
			baselineResultObject.middleRiskItemCount = std::stoi(valueBaselineResultBaselineResultItem["MiddleRiskItemCount"].asString());
		if(!valueBaselineResultBaselineResultItem["BaselineNameKey"].isNull())
			baselineResultObject.baselineNameKey = valueBaselineResultBaselineResultItem["BaselineNameKey"].asString();
		if(!valueBaselineResultBaselineResultItem["BaselineItemCount"].isNull())
			baselineResultObject.baselineItemCount = std::stoi(valueBaselineResultBaselineResultItem["BaselineItemCount"].asString());
		if(!valueBaselineResultBaselineResultItem["BaselineNameAlias"].isNull())
			baselineResultObject.baselineNameAlias = valueBaselineResultBaselineResultItem["BaselineNameAlias"].asString();
		if(!valueBaselineResultBaselineResultItem["BaselineClassAlias"].isNull())
			baselineResultObject.baselineClassAlias = valueBaselineResultBaselineResultItem["BaselineClassAlias"].asString();
		if(!valueBaselineResultBaselineResultItem["FirstScanTime"].isNull())
			baselineResultObject.firstScanTime = std::stol(valueBaselineResultBaselineResultItem["FirstScanTime"].asString());
		if(!valueBaselineResultBaselineResultItem["HighRiskItemCount"].isNull())
			baselineResultObject.highRiskItemCount = std::stoi(valueBaselineResultBaselineResultItem["HighRiskItemCount"].asString());
		baselineResult_.push_back(baselineResultObject);
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

DescribeImageBaselineCheckResultResult::PageInfo DescribeImageBaselineCheckResultResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeImageBaselineCheckResultResult::BaselineResultItem> DescribeImageBaselineCheckResultResult::getBaselineResult()const
{
	return baselineResult_;
}

