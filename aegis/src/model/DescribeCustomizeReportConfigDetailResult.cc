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

#include <alibabacloud/aegis/model/DescribeCustomizeReportConfigDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeCustomizeReportConfigDetailResult::DescribeCustomizeReportConfigDetailResult() :
	ServiceResult()
{}

DescribeCustomizeReportConfigDetailResult::DescribeCustomizeReportConfigDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizeReportConfigDetailResult::~DescribeCustomizeReportConfigDetailResult()
{}

void DescribeCustomizeReportConfigDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ReportId"].isNull())
		reportId_ = std::stol(value["ReportId"].asString());
	if(!value["Title"].isNull())
		title_ = value["Title"].asString();
	if(!value["ReportType"].isNull())
		reportType_ = value["ReportType"].asString();
	if(!value["ReportStatus"].isNull())
		reportStatus_ = value["ReportStatus"].asString();
	if(!value["SendTime"].isNull())
		sendTime_ = value["SendTime"].asString();
	if(!value["ReportSendType"].isNull())
		reportSendType_ = value["ReportSendType"].asString();
	if(!value["ReportStartDate"].isNull())
		reportStartDate_ = value["ReportStartDate"].asString();
	if(!value["ReportEndDate"].isNull())
		reportEndDate_ = value["ReportEndDate"].asString();
	if(!value["Recipients"].isNull())
		recipients_ = value["Recipients"].asString();
	if(!value["ChartIds"].isNull())
		chartIds_ = value["ChartIds"].asString();
	if(!value["IsDefault"].isNull())
		isDefault_ = std::stoi(value["IsDefault"].asString());
	if(!value["ReportLang"].isNull())
		reportLang_ = value["ReportLang"].asString();

}

int DescribeCustomizeReportConfigDetailResult::getIsDefault()const
{
	return isDefault_;
}

std::string DescribeCustomizeReportConfigDetailResult::getSendTime()const
{
	return sendTime_;
}

std::string DescribeCustomizeReportConfigDetailResult::getChartIds()const
{
	return chartIds_;
}

std::string DescribeCustomizeReportConfigDetailResult::getRecipients()const
{
	return recipients_;
}

long DescribeCustomizeReportConfigDetailResult::getReportId()const
{
	return reportId_;
}

std::string DescribeCustomizeReportConfigDetailResult::getTitle()const
{
	return title_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportStatus()const
{
	return reportStatus_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportStartDate()const
{
	return reportStartDate_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportType()const
{
	return reportType_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportLang()const
{
	return reportLang_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportSendType()const
{
	return reportSendType_;
}

std::string DescribeCustomizeReportConfigDetailResult::getReportEndDate()const
{
	return reportEndDate_;
}

