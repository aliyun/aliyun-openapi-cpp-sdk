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

#include <alibabacloud/quotas/model/ListQuotaApplicationsDetailForTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaApplicationsDetailForTemplateResult::ListQuotaApplicationsDetailForTemplateResult() :
	ServiceResult()
{}

ListQuotaApplicationsDetailForTemplateResult::ListQuotaApplicationsDetailForTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaApplicationsDetailForTemplateResult::~ListQuotaApplicationsDetailForTemplateResult()
{}

void ListQuotaApplicationsDetailForTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaApplicationsNode = value["QuotaApplications"]["QuotaBatchApplicationDetailVos"];
	for (auto valueQuotaApplicationsQuotaBatchApplicationDetailVos : allQuotaApplicationsNode)
	{
		QuotaBatchApplicationDetailVos quotaApplicationsObject;
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["BatchQuotaApplicationId"].isNull())
			quotaApplicationsObject.batchQuotaApplicationId = valueQuotaApplicationsQuotaBatchApplicationDetailVos["BatchQuotaApplicationId"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["ProductCode"].isNull())
			quotaApplicationsObject.productCode = valueQuotaApplicationsQuotaBatchApplicationDetailVos["ProductCode"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaActionCode"].isNull())
			quotaApplicationsObject.quotaActionCode = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaActionCode"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaName"].isNull())
			quotaApplicationsObject.quotaName = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaName"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaDescription"].isNull())
			quotaApplicationsObject.quotaDescription = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaDescription"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaUnit"].isNull())
			quotaApplicationsObject.quotaUnit = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaUnit"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaArn"].isNull())
			quotaApplicationsObject.quotaArn = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaArn"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaDimension"].isNull())
			quotaApplicationsObject.quotaDimension = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaDimension"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApplicationId"].isNull())
			quotaApplicationsObject.applicationId = valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApplicationId"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["DesireValue"].isNull())
			quotaApplicationsObject.desireValue = valueQuotaApplicationsQuotaBatchApplicationDetailVos["DesireValue"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["Reason"].isNull())
			quotaApplicationsObject.reason = valueQuotaApplicationsQuotaBatchApplicationDetailVos["Reason"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["Status"].isNull())
			quotaApplicationsObject.status = valueQuotaApplicationsQuotaBatchApplicationDetailVos["Status"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApproveValue"].isNull())
			quotaApplicationsObject.approveValue = valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApproveValue"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["EffectiveTime"].isNull())
			quotaApplicationsObject.effectiveTime = valueQuotaApplicationsQuotaBatchApplicationDetailVos["EffectiveTime"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["ExpireTime"].isNull())
			quotaApplicationsObject.expireTime = valueQuotaApplicationsQuotaBatchApplicationDetailVos["ExpireTime"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApplyTime"].isNull())
			quotaApplicationsObject.applyTime = valueQuotaApplicationsQuotaBatchApplicationDetailVos["ApplyTime"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["AuditReason"].isNull())
			quotaApplicationsObject.auditReason = valueQuotaApplicationsQuotaBatchApplicationDetailVos["AuditReason"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["NoticeType"].isNull())
			quotaApplicationsObject.noticeType = std::stoi(valueQuotaApplicationsQuotaBatchApplicationDetailVos["NoticeType"].asString());
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["AliyunUid"].isNull())
			quotaApplicationsObject.aliyunUid = valueQuotaApplicationsQuotaBatchApplicationDetailVos["AliyunUid"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaCategory"].isNull())
			quotaApplicationsObject.quotaCategory = valueQuotaApplicationsQuotaBatchApplicationDetailVos["QuotaCategory"].asString();
		if(!valueQuotaApplicationsQuotaBatchApplicationDetailVos["EnvLanguage"].isNull())
			quotaApplicationsObject.envLanguage = valueQuotaApplicationsQuotaBatchApplicationDetailVos["EnvLanguage"].asString();
		auto periodNode = value["Period"];
		if(!periodNode["PeriodUnit"].isNull())
			quotaApplicationsObject.period.periodUnit = periodNode["PeriodUnit"].asString();
		if(!periodNode["PeriodValue"].isNull())
			quotaApplicationsObject.period.periodValue = std::stoi(periodNode["PeriodValue"].asString());
		quotaApplications_.push_back(quotaApplicationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListQuotaApplicationsDetailForTemplateResult::QuotaBatchApplicationDetailVos> ListQuotaApplicationsDetailForTemplateResult::getQuotaApplications()const
{
	return quotaApplications_;
}

int ListQuotaApplicationsDetailForTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaApplicationsDetailForTemplateResult::getNextToken()const
{
	return nextToken_;
}

int ListQuotaApplicationsDetailForTemplateResult::getMaxResults()const
{
	return maxResults_;
}

