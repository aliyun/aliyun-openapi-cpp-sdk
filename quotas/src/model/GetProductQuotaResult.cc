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

#include <alibabacloud/quotas/model/GetProductQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

GetProductQuotaResult::GetProductQuotaResult() :
	ServiceResult()
{}

GetProductQuotaResult::GetProductQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProductQuotaResult::~GetProductQuotaResult()
{}

void GetProductQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaNode = value["Quota"];
	if(!quotaNode["QuotaUnit"].isNull())
		quota_.quotaUnit = quotaNode["QuotaUnit"].asString();
	if(!quotaNode["QuotaActionCode"].isNull())
		quota_.quotaActionCode = quotaNode["QuotaActionCode"].asString();
	if(!quotaNode["TotalUsage"].isNull())
		quota_.totalUsage = std::stof(quotaNode["TotalUsage"].asString());
	if(!quotaNode["QuotaType"].isNull())
		quota_.quotaType = quotaNode["QuotaType"].asString();
	if(!quotaNode["QuotaDescription"].isNull())
		quota_.quotaDescription = quotaNode["QuotaDescription"].asString();
	if(!quotaNode["QuotaArn"].isNull())
		quota_.quotaArn = quotaNode["QuotaArn"].asString();
	if(!quotaNode["ApplicableType"].isNull())
		quota_.applicableType = quotaNode["ApplicableType"].asString();
	if(!quotaNode["Dimensions"].isNull())
		quota_.dimensions = quotaNode["Dimensions"].asString();
	if(!quotaNode["Adjustable"].isNull())
		quota_.adjustable = quotaNode["Adjustable"].asString() == "true";
	if(!quotaNode["QuotaName"].isNull())
		quota_.quotaName = quotaNode["QuotaName"].asString();
	if(!quotaNode["UnadjustableDetail"].isNull())
		quota_.unadjustableDetail = quotaNode["UnadjustableDetail"].asString();
	if(!quotaNode["Consumable"].isNull())
		quota_.consumable = quotaNode["Consumable"].asString() == "true";
	if(!quotaNode["TotalQuota"].isNull())
		quota_.totalQuota = std::stof(quotaNode["TotalQuota"].asString());
	if(!quotaNode["ProductCode"].isNull())
		quota_.productCode = quotaNode["ProductCode"].asString();
	if(!quotaNode["EffectiveTime"].isNull())
		quota_.effectiveTime = quotaNode["EffectiveTime"].asString();
	if(!quotaNode["ExpireTime"].isNull())
		quota_.expireTime = quotaNode["ExpireTime"].asString();
	if(!quotaNode["QuotaCategory"].isNull())
		quota_.quotaCategory = quotaNode["QuotaCategory"].asString();
	if(!quotaNode["ApplyReasonTips"].isNull())
		quota_.applyReasonTips = quotaNode["ApplyReasonTips"].asString();
	if(!quotaNode["GlobalQuota"].isNull())
		quota_.globalQuota = quotaNode["GlobalQuota"].asString() == "true";
	auto allQuotaItemsNode = quotaNode["QuotaItems"]["QuotaItemsItem"];
	for (auto quotaNodeQuotaItemsQuotaItemsItem : allQuotaItemsNode)
	{
		Quota::QuotaItemsItem quotaItemsItemObject;
		if(!quotaNodeQuotaItemsQuotaItemsItem["Type"].isNull())
			quotaItemsItemObject.type = quotaNodeQuotaItemsQuotaItemsItem["Type"].asString();
		if(!quotaNodeQuotaItemsQuotaItemsItem["Quota"].isNull())
			quotaItemsItemObject.quota = quotaNodeQuotaItemsQuotaItemsItem["Quota"].asString();
		if(!quotaNodeQuotaItemsQuotaItemsItem["QuotaUnit"].isNull())
			quotaItemsItemObject.quotaUnit = quotaNodeQuotaItemsQuotaItemsItem["QuotaUnit"].asString();
		if(!quotaNodeQuotaItemsQuotaItemsItem["Usage"].isNull())
			quotaItemsItemObject.usage = quotaNodeQuotaItemsQuotaItemsItem["Usage"].asString();
		quota_.quotaItems.push_back(quotaItemsItemObject);
	}
	auto periodNode = quotaNode["Period"];
	if(!periodNode["PeriodValue"].isNull())
		quota_.period.periodValue = std::stoi(periodNode["PeriodValue"].asString());
	if(!periodNode["PeriodUnit"].isNull())
		quota_.period.periodUnit = periodNode["PeriodUnit"].asString();
	auto usageMetricNode = quotaNode["UsageMetric"];
	if(!usageMetricNode["MetricNamespace"].isNull())
		quota_.usageMetric.metricNamespace = usageMetricNode["MetricNamespace"].asString();
	if(!usageMetricNode["MetricName"].isNull())
		quota_.usageMetric.metricName = usageMetricNode["MetricName"].asString();
	if(!usageMetricNode["MetricDimensions"].isNull())
		quota_.usageMetric.metricDimensions = usageMetricNode["MetricDimensions"].asString();
		auto allApplicableRange = quotaNode["ApplicableRange"]["ApplicableRange"];
		for (auto value : allApplicableRange)
			quota_.applicableRange.push_back(value.asString());
		auto allSupportedRange = quotaNode["SupportedRange"]["SupportedRange"];
		for (auto value : allSupportedRange)
			quota_.supportedRange.push_back(value.asString());

}

GetProductQuotaResult::Quota GetProductQuotaResult::getQuota()const
{
	return quota_;
}

