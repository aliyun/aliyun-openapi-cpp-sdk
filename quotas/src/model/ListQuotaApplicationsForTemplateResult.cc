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

#include <alibabacloud/quotas/model/ListQuotaApplicationsForTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaApplicationsForTemplateResult::ListQuotaApplicationsForTemplateResult() :
	ServiceResult()
{}

ListQuotaApplicationsForTemplateResult::ListQuotaApplicationsForTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaApplicationsForTemplateResult::~ListQuotaApplicationsForTemplateResult()
{}

void ListQuotaApplicationsForTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaBatchApplicationsNode = value["QuotaBatchApplications"]["QuotaBatchApplicationsItem"];
	for (auto valueQuotaBatchApplicationsQuotaBatchApplicationsItem : allQuotaBatchApplicationsNode)
	{
		QuotaBatchApplicationsItem quotaBatchApplicationsObject;
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ProductCode"].isNull())
			quotaBatchApplicationsObject.productCode = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ProductCode"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["QuotaActionCode"].isNull())
			quotaBatchApplicationsObject.quotaActionCode = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["QuotaActionCode"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["BatchQuotaApplicationId"].isNull())
			quotaBatchApplicationsObject.batchQuotaApplicationId = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["BatchQuotaApplicationId"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["EffectiveTime"].isNull())
			quotaBatchApplicationsObject.effectiveTime = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["EffectiveTime"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ExpireTime"].isNull())
			quotaBatchApplicationsObject.expireTime = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ExpireTime"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ApplyTime"].isNull())
			quotaBatchApplicationsObject.applyTime = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["ApplyTime"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["DesireValue"].isNull())
			quotaBatchApplicationsObject.desireValue = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["DesireValue"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["QuotaCategory"].isNull())
			quotaBatchApplicationsObject.quotaCategory = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["QuotaCategory"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["Dimensions"].isNull())
			quotaBatchApplicationsObject.dimensions = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["Dimensions"].asString();
		if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItem["Reason"].isNull())
			quotaBatchApplicationsObject.reason = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["Reason"].asString();
		auto allAuditStatusVosNode = valueQuotaBatchApplicationsQuotaBatchApplicationsItem["AuditStatusVos"]["AuditStatusVo"];
		for (auto valueQuotaBatchApplicationsQuotaBatchApplicationsItemAuditStatusVosAuditStatusVo : allAuditStatusVosNode)
		{
			QuotaBatchApplicationsItem::AuditStatusVo auditStatusVosObject;
			if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItemAuditStatusVosAuditStatusVo["Status"].isNull())
				auditStatusVosObject.status = valueQuotaBatchApplicationsQuotaBatchApplicationsItemAuditStatusVosAuditStatusVo["Status"].asString();
			if(!valueQuotaBatchApplicationsQuotaBatchApplicationsItemAuditStatusVosAuditStatusVo["Count"].isNull())
				auditStatusVosObject.count = std::stoi(valueQuotaBatchApplicationsQuotaBatchApplicationsItemAuditStatusVosAuditStatusVo["Count"].asString());
			quotaBatchApplicationsObject.auditStatusVos.push_back(auditStatusVosObject);
		}
		auto allAliyunUids = value["AliyunUids"]["AliyunUids"];
		for (auto value : allAliyunUids)
			quotaBatchApplicationsObject.aliyunUids.push_back(value.asString());
		quotaBatchApplications_.push_back(quotaBatchApplicationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListQuotaApplicationsForTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaApplicationsForTemplateResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListQuotaApplicationsForTemplateResult::QuotaBatchApplicationsItem> ListQuotaApplicationsForTemplateResult::getQuotaBatchApplications()const
{
	return quotaBatchApplications_;
}

int ListQuotaApplicationsForTemplateResult::getMaxResults()const
{
	return maxResults_;
}

