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

#include <alibabacloud/quotas/model/GetQuotaUtilizationOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

GetQuotaUtilizationOverviewResult::GetQuotaUtilizationOverviewResult() :
	ServiceResult()
{}

GetQuotaUtilizationOverviewResult::GetQuotaUtilizationOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaUtilizationOverviewResult::~GetQuotaUtilizationOverviewResult()
{}

void GetQuotaUtilizationOverviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaOverviewNode = value["QuotaOverview"];
	auto over80PercentNode = quotaOverviewNode["Over80Percent"];
	if(!over80PercentNode["Total"].isNull())
		quotaOverview_.over80Percent.total = std::stol(over80PercentNode["Total"].asString());
	if(!over80PercentNode["AdjustableRatio"].isNull())
		quotaOverview_.over80Percent.adjustableRatio = over80PercentNode["AdjustableRatio"].asString();
	if(!over80PercentNode["Adjustable"].isNull())
		quotaOverview_.over80Percent.adjustable = std::stol(over80PercentNode["Adjustable"].asString());
	auto over95PercentNode = quotaOverviewNode["Over95Percent"];
	if(!over95PercentNode["Total"].isNull())
		quotaOverview_.over95Percent.total = std::stol(over95PercentNode["Total"].asString());
	if(!over95PercentNode["AdjustableRatio"].isNull())
		quotaOverview_.over95Percent.adjustableRatio = over95PercentNode["AdjustableRatio"].asString();
	if(!over95PercentNode["Adjustable"].isNull())
		quotaOverview_.over95Percent.adjustable = std::stol(over95PercentNode["Adjustable"].asString());
	auto inUseNode = quotaOverviewNode["InUse"];
	if(!inUseNode["Total"].isNull())
		quotaOverview_.inUse.total = std::stol(inUseNode["Total"].asString());
	if(!inUseNode["AdjustableRatio"].isNull())
		quotaOverview_.inUse.adjustableRatio = inUseNode["AdjustableRatio"].asString();
	if(!inUseNode["Adjustable"].isNull())
		quotaOverview_.inUse.adjustable = std::stol(inUseNode["Adjustable"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["GeneratedAt"].isNull())
		generatedAt_ = value["GeneratedAt"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetQuotaUtilizationOverviewResult::getStatus()const
{
	return status_;
}

std::string GetQuotaUtilizationOverviewResult::getMessage()const
{
	return message_;
}

GetQuotaUtilizationOverviewResult::QuotaOverview GetQuotaUtilizationOverviewResult::getQuotaOverview()const
{
	return quotaOverview_;
}

std::string GetQuotaUtilizationOverviewResult::getGeneratedAt()const
{
	return generatedAt_;
}

std::string GetQuotaUtilizationOverviewResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetQuotaUtilizationOverviewResult::getErrorCode()const
{
	return errorCode_;
}

bool GetQuotaUtilizationOverviewResult::getSuccess()const
{
	return success_;
}

