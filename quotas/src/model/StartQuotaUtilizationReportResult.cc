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

#include <alibabacloud/quotas/model/StartQuotaUtilizationReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

StartQuotaUtilizationReportResult::StartQuotaUtilizationReportResult() :
	ServiceResult()
{}

StartQuotaUtilizationReportResult::StartQuotaUtilizationReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartQuotaUtilizationReportResult::~StartQuotaUtilizationReportResult()
{}

void StartQuotaUtilizationReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RefreshSuccess"].isNull())
		refreshSuccess_ = value["RefreshSuccess"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["NextRefreshTime"].isNull())
		nextRefreshTime_ = value["NextRefreshTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool StartQuotaUtilizationReportResult::getRefreshSuccess()const
{
	return refreshSuccess_;
}

std::string StartQuotaUtilizationReportResult::getMessage()const
{
	return message_;
}

std::string StartQuotaUtilizationReportResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string StartQuotaUtilizationReportResult::getErrorCode()const
{
	return errorCode_;
}

std::string StartQuotaUtilizationReportResult::getNextRefreshTime()const
{
	return nextRefreshTime_;
}

bool StartQuotaUtilizationReportResult::getSuccess()const
{
	return success_;
}

