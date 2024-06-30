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

#include <alibabacloud/quotas/model/ListQuotaApplicationTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaApplicationTemplatesResult::ListQuotaApplicationTemplatesResult() :
	ServiceResult()
{}

ListQuotaApplicationTemplatesResult::ListQuotaApplicationTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaApplicationTemplatesResult::~ListQuotaApplicationTemplatesResult()
{}

void ListQuotaApplicationTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaApplicationTemplatesNode = value["QuotaApplicationTemplates"]["QuotaApplicationTemplatesItem"];
	for (auto valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem : allQuotaApplicationTemplatesNode)
	{
		QuotaApplicationTemplatesItem quotaApplicationTemplatesObject;
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["Id"].isNull())
			quotaApplicationTemplatesObject.id = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["Id"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ProductCode"].isNull())
			quotaApplicationTemplatesObject.productCode = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ProductCode"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["Dimensions"].isNull())
			quotaApplicationTemplatesObject.dimensions = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["Dimensions"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["DesireValue"].isNull())
			quotaApplicationTemplatesObject.desireValue = std::stof(valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["DesireValue"].asString());
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["NoticeType"].isNull())
			quotaApplicationTemplatesObject.noticeType = std::stoi(valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["NoticeType"].asString());
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaActionCode"].isNull())
			quotaApplicationTemplatesObject.quotaActionCode = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaActionCode"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ApplicableType"].isNull())
			quotaApplicationTemplatesObject.applicableType = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ApplicableType"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["EnvLanguage"].isNull())
			quotaApplicationTemplatesObject.envLanguage = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["EnvLanguage"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaName"].isNull())
			quotaApplicationTemplatesObject.quotaName = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaName"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaDescription"].isNull())
			quotaApplicationTemplatesObject.quotaDescription = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaDescription"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["EffectiveTime"].isNull())
			quotaApplicationTemplatesObject.effectiveTime = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["EffectiveTime"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ExpireTime"].isNull())
			quotaApplicationTemplatesObject.expireTime = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["ExpireTime"].asString();
		if(!valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaCategory"].isNull())
			quotaApplicationTemplatesObject.quotaCategory = valueQuotaApplicationTemplatesQuotaApplicationTemplatesItem["QuotaCategory"].asString();
		auto periodNode = value["Period"];
		if(!periodNode["PeriodValue"].isNull())
			quotaApplicationTemplatesObject.period.periodValue = std::stoi(periodNode["PeriodValue"].asString());
		if(!periodNode["PeriodUnit"].isNull())
			quotaApplicationTemplatesObject.period.periodUnit = periodNode["PeriodUnit"].asString();
		auto allApplicableRange = value["ApplicableRange"]["Applicable"];
		for (auto value : allApplicableRange)
			quotaApplicationTemplatesObject.applicableRange.push_back(value.asString());
		quotaApplicationTemplates_.push_back(quotaApplicationTemplatesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListQuotaApplicationTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaApplicationTemplatesResult::getNextToken()const
{
	return nextToken_;
}

int ListQuotaApplicationTemplatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListQuotaApplicationTemplatesResult::QuotaApplicationTemplatesItem> ListQuotaApplicationTemplatesResult::getQuotaApplicationTemplates()const
{
	return quotaApplicationTemplates_;
}

