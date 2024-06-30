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

#include <alibabacloud/quotas/model/ListQuotaApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaApplicationsResult::ListQuotaApplicationsResult() :
	ServiceResult()
{}

ListQuotaApplicationsResult::ListQuotaApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaApplicationsResult::~ListQuotaApplicationsResult()
{}

void ListQuotaApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaApplicationsNode = value["QuotaApplications"]["QuotaApplicationsItem"];
	for (auto valueQuotaApplicationsQuotaApplicationsItem : allQuotaApplicationsNode)
	{
		QuotaApplicationsItem quotaApplicationsObject;
		if(!valueQuotaApplicationsQuotaApplicationsItem["Status"].isNull())
			quotaApplicationsObject.status = valueQuotaApplicationsQuotaApplicationsItem["Status"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["Comment"].isNull())
			quotaApplicationsObject.comment = valueQuotaApplicationsQuotaApplicationsItem["Comment"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["ExpireTime"].isNull())
			quotaApplicationsObject.expireTime = valueQuotaApplicationsQuotaApplicationsItem["ExpireTime"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["QuotaUnit"].isNull())
			quotaApplicationsObject.quotaUnit = valueQuotaApplicationsQuotaApplicationsItem["QuotaUnit"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["DesireValue"].isNull())
			quotaApplicationsObject.desireValue = std::stof(valueQuotaApplicationsQuotaApplicationsItem["DesireValue"].asString());
		if(!valueQuotaApplicationsQuotaApplicationsItem["NoticeType"].isNull())
			quotaApplicationsObject.noticeType = std::stoi(valueQuotaApplicationsQuotaApplicationsItem["NoticeType"].asString());
		if(!valueQuotaApplicationsQuotaApplicationsItem["QuotaActionCode"].isNull())
			quotaApplicationsObject.quotaActionCode = valueQuotaApplicationsQuotaApplicationsItem["QuotaActionCode"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["Dimension"].isNull())
			quotaApplicationsObject.dimension = valueQuotaApplicationsQuotaApplicationsItem["Dimension"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["QuotaDescription"].isNull())
			quotaApplicationsObject.quotaDescription = valueQuotaApplicationsQuotaApplicationsItem["QuotaDescription"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["QuotaArn"].isNull())
			quotaApplicationsObject.quotaArn = valueQuotaApplicationsQuotaApplicationsItem["QuotaArn"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["EffectiveTime"].isNull())
			quotaApplicationsObject.effectiveTime = valueQuotaApplicationsQuotaApplicationsItem["EffectiveTime"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["ApproveValue"].isNull())
			quotaApplicationsObject.approveValue = std::stof(valueQuotaApplicationsQuotaApplicationsItem["ApproveValue"].asString());
		if(!valueQuotaApplicationsQuotaApplicationsItem["QuotaName"].isNull())
			quotaApplicationsObject.quotaName = valueQuotaApplicationsQuotaApplicationsItem["QuotaName"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["ApplicationId"].isNull())
			quotaApplicationsObject.applicationId = valueQuotaApplicationsQuotaApplicationsItem["ApplicationId"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["AuditReason"].isNull())
			quotaApplicationsObject.auditReason = valueQuotaApplicationsQuotaApplicationsItem["AuditReason"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["Reason"].isNull())
			quotaApplicationsObject.reason = valueQuotaApplicationsQuotaApplicationsItem["Reason"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["ApplyTime"].isNull())
			quotaApplicationsObject.applyTime = valueQuotaApplicationsQuotaApplicationsItem["ApplyTime"].asString();
		if(!valueQuotaApplicationsQuotaApplicationsItem["ProductCode"].isNull())
			quotaApplicationsObject.productCode = valueQuotaApplicationsQuotaApplicationsItem["ProductCode"].asString();
		auto periodNode = value["Period"];
		if(!periodNode["PeriodValue"].isNull())
			quotaApplicationsObject.period.periodValue = std::stol(periodNode["PeriodValue"].asString());
		if(!periodNode["PeriodUnit"].isNull())
			quotaApplicationsObject.period.periodUnit = periodNode["PeriodUnit"].asString();
		quotaApplications_.push_back(quotaApplicationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListQuotaApplicationsResult::QuotaApplicationsItem> ListQuotaApplicationsResult::getQuotaApplications()const
{
	return quotaApplications_;
}

int ListQuotaApplicationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaApplicationsResult::getNextToken()const
{
	return nextToken_;
}

int ListQuotaApplicationsResult::getMaxResults()const
{
	return maxResults_;
}

