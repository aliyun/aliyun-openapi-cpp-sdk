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

#include <alibabacloud/quotas/model/ListQuotaUtilizationReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaUtilizationReportResult::ListQuotaUtilizationReportResult() :
	ServiceResult()
{}

ListQuotaUtilizationReportResult::ListQuotaUtilizationReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaUtilizationReportResult::~ListQuotaUtilizationReportResult()
{}

void ListQuotaUtilizationReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotasNode = value["Quotas"]["quotasItem"];
	for (auto valueQuotasquotasItem : allQuotasNode)
	{
		QuotasItem quotasObject;
		if(!valueQuotasquotasItem["QuotaDescription"].isNull())
			quotasObject.quotaDescription = valueQuotasquotasItem["QuotaDescription"].asString();
		if(!valueQuotasquotasItem["Consumable"].isNull())
			quotasObject.consumable = valueQuotasquotasItem["Consumable"].asString() == "true";
		if(!valueQuotasquotasItem["UnadjustableDetail"].isNull())
			quotasObject.unadjustableDetail = valueQuotasquotasItem["UnadjustableDetail"].asString();
		if(!valueQuotasquotasItem["ProductCode"].isNull())
			quotasObject.productCode = valueQuotasquotasItem["ProductCode"].asString();
		if(!valueQuotasquotasItem["TotalUsage"].isNull())
			quotasObject.totalUsage = valueQuotasquotasItem["TotalUsage"].asString();
		if(!valueQuotasquotasItem["Dimensions"].isNull())
			quotasObject.dimensions = valueQuotasquotasItem["Dimensions"].asString();
		if(!valueQuotasquotasItem["UtilizationStatus"].isNull())
			quotasObject.utilizationStatus = valueQuotasquotasItem["UtilizationStatus"].asString();
		if(!valueQuotasquotasItem["Adjustable"].isNull())
			quotasObject.adjustable = valueQuotasquotasItem["Adjustable"].asString() == "true";
		if(!valueQuotasquotasItem["QuotaActionCode"].isNull())
			quotasObject.quotaActionCode = valueQuotasquotasItem["QuotaActionCode"].asString();
		if(!valueQuotasquotasItem["QuotaName"].isNull())
			quotasObject.quotaName = valueQuotasquotasItem["QuotaName"].asString();
		if(!valueQuotasquotasItem["Utilization"].isNull())
			quotasObject.utilization = valueQuotasquotasItem["Utilization"].asString();
		if(!valueQuotasquotasItem["QuotaArn"].isNull())
			quotasObject.quotaArn = valueQuotasquotasItem["QuotaArn"].asString();
		if(!valueQuotasquotasItem["TotalQuota"].isNull())
			quotasObject.totalQuota = valueQuotasquotasItem["TotalQuota"].asString();
		if(!valueQuotasquotasItem["QuotaCategory"].isNull())
			quotasObject.quotaCategory = valueQuotasquotasItem["QuotaCategory"].asString();
		auto usageMetricNode = value["UsageMetric"];
		if(!usageMetricNode["MetricName"].isNull())
			quotasObject.usageMetric.metricName = usageMetricNode["MetricName"].asString();
		if(!usageMetricNode["MetricDimensions"].isNull())
			quotasObject.usageMetric.metricDimensions = usageMetricNode["MetricDimensions"].asString();
		if(!usageMetricNode["MetricNamespace"].isNull())
			quotasObject.usageMetric.metricNamespace = usageMetricNode["MetricNamespace"].asString();
		auto flowControlAlgoNode = value["FlowControlAlgo"];
		if(!flowControlAlgoNode["TotalQuota"].isNull())
			quotasObject.flowControlAlgo.totalQuota = flowControlAlgoNode["TotalQuota"].asString();
		if(!flowControlAlgoNode["AlgoType"].isNull())
			quotasObject.flowControlAlgo.algoType = flowControlAlgoNode["AlgoType"].asString();
		if(!flowControlAlgoNode["TokensPerRefill"].isNull())
			quotasObject.flowControlAlgo.tokensPerRefill = std::stoi(flowControlAlgoNode["TokensPerRefill"].asString());
		if(!flowControlAlgoNode["RefillInterval"].isNull())
			quotasObject.flowControlAlgo.refillInterval = std::stoi(flowControlAlgoNode["RefillInterval"].asString());
		auto periodNode = flowControlAlgoNode["Period"];
		if(!periodNode["PeriodValue"].isNull())
			quotasObject.flowControlAlgo.period.periodValue = std::stoi(periodNode["PeriodValue"].asString());
		if(!periodNode["PeriodUnit"].isNull())
			quotasObject.flowControlAlgo.period.periodUnit = periodNode["PeriodUnit"].asString();
		quotas_.push_back(quotasObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["GeneratedAt"].isNull())
		generatedAt_ = value["GeneratedAt"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListQuotaUtilizationReportResult::getStatus()const
{
	return status_;
}

int ListQuotaUtilizationReportResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaUtilizationReportResult::getMessage()const
{
	return message_;
}

std::string ListQuotaUtilizationReportResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListQuotaUtilizationReportResult::QuotasItem> ListQuotaUtilizationReportResult::getQuotas()const
{
	return quotas_;
}

std::string ListQuotaUtilizationReportResult::getGeneratedAt()const
{
	return generatedAt_;
}

std::string ListQuotaUtilizationReportResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListQuotaUtilizationReportResult::getErrorCode()const
{
	return errorCode_;
}

bool ListQuotaUtilizationReportResult::getSuccess()const
{
	return success_;
}

