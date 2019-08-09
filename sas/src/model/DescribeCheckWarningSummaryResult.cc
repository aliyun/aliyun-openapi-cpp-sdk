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

#include <alibabacloud/sas/model/DescribeCheckWarningSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCheckWarningSummaryResult::DescribeCheckWarningSummaryResult() :
	ServiceResult()
{}

DescribeCheckWarningSummaryResult::DescribeCheckWarningSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCheckWarningSummaryResult::~DescribeCheckWarningSummaryResult()
{}

void DescribeCheckWarningSummaryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allWarningSummarys = value["WarningSummarys"]["WarningSummary"];
	for (auto value : allWarningSummarys)
	{
		WarningSummary warningSummarysObject;
		if(!value["RiskId"].isNull())
			warningSummarysObject.riskId = std::stol(value["RiskId"].asString());
		if(!value["RiskName"].isNull())
			warningSummarysObject.riskName = value["RiskName"].asString();
		if(!value["TypeAlias"].isNull())
			warningSummarysObject.typeAlias = value["TypeAlias"].asString();
		if(!value["SubTypeAlias"].isNull())
			warningSummarysObject.subTypeAlias = value["SubTypeAlias"].asString();
		if(!value["LastFoundTime"].isNull())
			warningSummarysObject.lastFoundTime = value["LastFoundTime"].asString();
		if(!value["Level"].isNull())
			warningSummarysObject.level = value["Level"].asString();
		if(!value["CheckCount"].isNull())
			warningSummarysObject.checkCount = std::stoi(value["CheckCount"].asString());
		if(!value["HighWarningCount"].isNull())
			warningSummarysObject.highWarningCount = std::stoi(value["HighWarningCount"].asString());
		if(!value["MediumWarningCount"].isNull())
			warningSummarysObject.mediumWarningCount = std::stoi(value["MediumWarningCount"].asString());
		if(!value["LowWarningCount"].isNull())
			warningSummarysObject.lowWarningCount = std::stoi(value["LowWarningCount"].asString());
		if(!value["WarningMachineCount"].isNull())
			warningSummarysObject.warningMachineCount = std::stoi(value["WarningMachineCount"].asString());
		warningSummarys_.push_back(warningSummarysObject);
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

int DescribeCheckWarningSummaryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCheckWarningSummaryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCheckWarningSummaryResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeCheckWarningSummaryResult::getCount()const
{
	return count_;
}

std::vector<DescribeCheckWarningSummaryResult::WarningSummary> DescribeCheckWarningSummaryResult::getWarningSummarys()const
{
	return warningSummarys_;
}

