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

#include <alibabacloud/config/model/GetCompliancePackReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetCompliancePackReportResult::GetCompliancePackReportResult() :
	ServiceResult()
{}

GetCompliancePackReportResult::GetCompliancePackReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCompliancePackReportResult::~GetCompliancePackReportResult()
{}

void GetCompliancePackReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto compliancePackReportNode = value["CompliancePackReport"];
	if(!compliancePackReportNode["ReportUrl"].isNull())
		compliancePackReport_.reportUrl = compliancePackReportNode["ReportUrl"].asString();
	if(!compliancePackReportNode["ReportStatus"].isNull())
		compliancePackReport_.reportStatus = compliancePackReportNode["ReportStatus"].asString();
	if(!compliancePackReportNode["CompliancePackId"].isNull())
		compliancePackReport_.compliancePackId = compliancePackReportNode["CompliancePackId"].asString();
	if(!compliancePackReportNode["AccountId"].isNull())
		compliancePackReport_.accountId = std::stol(compliancePackReportNode["AccountId"].asString());
	if(!compliancePackReportNode["ReportCreateTimestamp"].isNull())
		compliancePackReport_.reportCreateTimestamp = std::stol(compliancePackReportNode["ReportCreateTimestamp"].asString());

}

GetCompliancePackReportResult::CompliancePackReport GetCompliancePackReportResult::getCompliancePackReport()const
{
	return compliancePackReport_;
}

