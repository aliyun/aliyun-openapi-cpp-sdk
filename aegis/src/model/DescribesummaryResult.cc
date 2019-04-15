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

#include <alibabacloud/aegis/model/DescribesummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribesummaryResult::DescribesummaryResult() :
	ServiceResult()
{}

DescribesummaryResult::DescribesummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribesummaryResult::~DescribesummaryResult()
{}

void DescribesummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allWarningSummarys = value["WarningSummarys"]["WarningSummary"];
	for (auto value : allWarningSummarys)
	{
		WarningSummary warningSummarysObject;
		if(!value["RiskId"].isNull())
			warningSummarysObject.riskId = std::stol(value["RiskId"].asString());
		if(!value["RiskName"].isNull())
			warningSummarysObject.riskName = value["RiskName"].asString();
		if(!value["Level"].isNull())
			warningSummarysObject.level = value["Level"].asString();
		if(!value["TypeAlias"].isNull())
			warningSummarysObject.typeAlias = value["TypeAlias"].asString();
		if(!value["SubTypeAlias"].isNull())
			warningSummarysObject.subTypeAlias = value["SubTypeAlias"].asString();
		if(!value["LastFoundTime"].isNull())
			warningSummarysObject.lastFoundTime = value["LastFoundTime"].asString();
		if(!value["PendingCount"].isNull())
			warningSummarysObject.pendingCount = std::stoi(value["PendingCount"].asString());
		if(!value["TotalCount"].isNull())
			warningSummarysObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["RiskDetail"].isNull())
			warningSummarysObject.riskDetail = value["RiskDetail"].asString();
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

int DescribesummaryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribesummaryResult::getPageSize()const
{
	return pageSize_;
}

int DescribesummaryResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribesummaryResult::getCount()const
{
	return count_;
}

std::vector<DescribesummaryResult::WarningSummary> DescribesummaryResult::getWarningSummarys()const
{
	return warningSummarys_;
}

