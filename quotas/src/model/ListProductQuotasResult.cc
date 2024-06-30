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

#include <alibabacloud/quotas/model/ListProductQuotasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListProductQuotasResult::ListProductQuotasResult() :
	ServiceResult()
{}

ListProductQuotasResult::ListProductQuotasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductQuotasResult::~ListProductQuotasResult()
{}

void ListProductQuotasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotasNode = value["Quotas"]["QuotasItem"];
	for (auto valueQuotasQuotasItem : allQuotasNode)
	{
		QuotasItem quotasObject;
		if(!valueQuotasQuotasItem["QuotaUnit"].isNull())
			quotasObject.quotaUnit = valueQuotasQuotasItem["QuotaUnit"].asString();
		if(!valueQuotasQuotasItem["QuotaActionCode"].isNull())
			quotasObject.quotaActionCode = valueQuotasQuotasItem["QuotaActionCode"].asString();
		if(!valueQuotasQuotasItem["TotalUsage"].isNull())
			quotasObject.totalUsage = std::stof(valueQuotasQuotasItem["TotalUsage"].asString());
		if(!valueQuotasQuotasItem["QuotaType"].isNull())
			quotasObject.quotaType = valueQuotasQuotasItem["QuotaType"].asString();
		if(!valueQuotasQuotasItem["QuotaDescription"].isNull())
			quotasObject.quotaDescription = valueQuotasQuotasItem["QuotaDescription"].asString();
		if(!valueQuotasQuotasItem["QuotaArn"].isNull())
			quotasObject.quotaArn = valueQuotasQuotasItem["QuotaArn"].asString();
		if(!valueQuotasQuotasItem["ApplicableType"].isNull())
			quotasObject.applicableType = valueQuotasQuotasItem["ApplicableType"].asString();
		if(!valueQuotasQuotasItem["Dimensions"].isNull())
			quotasObject.dimensions = valueQuotasQuotasItem["Dimensions"].asString();
		if(!valueQuotasQuotasItem["Adjustable"].isNull())
			quotasObject.adjustable = valueQuotasQuotasItem["Adjustable"].asString() == "true";
		if(!valueQuotasQuotasItem["QuotaName"].isNull())
			quotasObject.quotaName = valueQuotasQuotasItem["QuotaName"].asString();
		if(!valueQuotasQuotasItem["UnadjustableDetail"].isNull())
			quotasObject.unadjustableDetail = valueQuotasQuotasItem["UnadjustableDetail"].asString();
		if(!valueQuotasQuotasItem["Consumable"].isNull())
			quotasObject.consumable = valueQuotasQuotasItem["Consumable"].asString() == "true";
		if(!valueQuotasQuotasItem["TotalQuota"].isNull())
			quotasObject.totalQuota = std::stof(valueQuotasQuotasItem["TotalQuota"].asString());
		if(!valueQuotasQuotasItem["ProductCode"].isNull())
			quotasObject.productCode = valueQuotasQuotasItem["ProductCode"].asString();
		if(!valueQuotasQuotasItem["EffectiveTime"].isNull())
			quotasObject.effectiveTime = valueQuotasQuotasItem["EffectiveTime"].asString();
		if(!valueQuotasQuotasItem["ExpireTime"].isNull())
			quotasObject.expireTime = valueQuotasQuotasItem["ExpireTime"].asString();
		if(!valueQuotasQuotasItem["QuotaCategory"].isNull())
			quotasObject.quotaCategory = valueQuotasQuotasItem["QuotaCategory"].asString();
		if(!valueQuotasQuotasItem["ApplyReasonTips"].isNull())
			quotasObject.applyReasonTips = valueQuotasQuotasItem["ApplyReasonTips"].asString();
		if(!valueQuotasQuotasItem["GlobalQuota"].isNull())
			quotasObject.globalQuota = valueQuotasQuotasItem["GlobalQuota"].asString() == "true";
		auto allQuotaItemsNode = valueQuotasQuotasItem["QuotaItems"]["QuotaItemsItem"];
		for (auto valueQuotasQuotasItemQuotaItemsQuotaItemsItem : allQuotaItemsNode)
		{
			QuotasItem::QuotaItemsItem quotaItemsObject;
			if(!valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Type"].isNull())
				quotaItemsObject.type = valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Type"].asString();
			if(!valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Quota"].isNull())
				quotaItemsObject.quota = valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Quota"].asString();
			if(!valueQuotasQuotasItemQuotaItemsQuotaItemsItem["QuotaUnit"].isNull())
				quotaItemsObject.quotaUnit = valueQuotasQuotasItemQuotaItemsQuotaItemsItem["QuotaUnit"].asString();
			if(!valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Usage"].isNull())
				quotaItemsObject.usage = valueQuotasQuotasItemQuotaItemsQuotaItemsItem["Usage"].asString();
			quotasObject.quotaItems.push_back(quotaItemsObject);
		}
		auto periodNode = value["Period"];
		if(!periodNode["PeriodValue"].isNull())
			quotasObject.period.periodValue = std::stoi(periodNode["PeriodValue"].asString());
		if(!periodNode["PeriodUnit"].isNull())
			quotasObject.period.periodUnit = periodNode["PeriodUnit"].asString();
		auto usageMetricNode = value["UsageMetric"];
		if(!usageMetricNode["MetricNamespace"].isNull())
			quotasObject.usageMetric.metricNamespace = usageMetricNode["MetricNamespace"].asString();
		if(!usageMetricNode["MetricName"].isNull())
			quotasObject.usageMetric.metricName = usageMetricNode["MetricName"].asString();
		if(!usageMetricNode["MetricDimensions"].isNull())
			quotasObject.usageMetric.metricDimensions = usageMetricNode["MetricDimensions"].asString();
		auto allApplicableRange = value["ApplicableRange"]["ApplicableRange"];
		for (auto value : allApplicableRange)
			quotasObject.applicableRange.push_back(value.asString());
		auto allSupportedRange = value["SupportedRange"]["SupportedRange"];
		for (auto value : allSupportedRange)
			quotasObject.supportedRange.push_back(value.asString());
		quotas_.push_back(quotasObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListProductQuotasResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListProductQuotasResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListProductQuotasResult::QuotasItem> ListProductQuotasResult::getQuotas()const
{
	return quotas_;
}

int ListProductQuotasResult::getMaxResults()const
{
	return maxResults_;
}

