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

#include <alibabacloud/sas/model/DescribeVulFixStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVulFixStatisticsResult::DescribeVulFixStatisticsResult() :
	ServiceResult()
{}

DescribeVulFixStatisticsResult::DescribeVulFixStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulFixStatisticsResult::~DescribeVulFixStatisticsResult()
{}

void DescribeVulFixStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFixStatNode = value["FixStat"]["Fix"];
	for (auto valueFixStatFix : allFixStatNode)
	{
		Fix fixStatObject;
		if(!valueFixStatFix["FixingNum"].isNull())
			fixStatObject.fixingNum = std::stoi(valueFixStatFix["FixingNum"].asString());
		if(!valueFixStatFix["Type"].isNull())
			fixStatObject.type = valueFixStatFix["Type"].asString();
		if(!valueFixStatFix["FixedTodayNum"].isNull())
			fixStatObject.fixedTodayNum = std::stoi(valueFixStatFix["FixedTodayNum"].asString());
		if(!valueFixStatFix["FixedTotalNum"].isNull())
			fixStatObject.fixedTotalNum = std::stoi(valueFixStatFix["FixedTotalNum"].asString());
		if(!valueFixStatFix["NeedFixNum"].isNull())
			fixStatObject.needFixNum = std::stoi(valueFixStatFix["NeedFixNum"].asString());
		fixStat_.push_back(fixStatObject);
	}
	auto fixTotalNode = value["FixTotal"];
	if(!fixTotalNode["FixingNum"].isNull())
		fixTotal_.fixingNum = std::stoi(fixTotalNode["FixingNum"].asString());
	if(!fixTotalNode["FixedTodayNum"].isNull())
		fixTotal_.fixedTodayNum = std::stoi(fixTotalNode["FixedTodayNum"].asString());
	if(!fixTotalNode["FixedTotalNum"].isNull())
		fixTotal_.fixedTotalNum = std::stoi(fixTotalNode["FixedTotalNum"].asString());
	if(!fixTotalNode["NeedFixNum"].isNull())
		fixTotal_.needFixNum = std::stoi(fixTotalNode["NeedFixNum"].asString());

}

DescribeVulFixStatisticsResult::FixTotal DescribeVulFixStatisticsResult::getFixTotal()const
{
	return fixTotal_;
}

std::vector<DescribeVulFixStatisticsResult::Fix> DescribeVulFixStatisticsResult::getFixStat()const
{
	return fixStat_;
}

