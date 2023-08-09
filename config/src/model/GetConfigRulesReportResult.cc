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

#include <alibabacloud/config/model/GetConfigRulesReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetConfigRulesReportResult::GetConfigRulesReportResult() :
	ServiceResult()
{}

GetConfigRulesReportResult::GetConfigRulesReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConfigRulesReportResult::~GetConfigRulesReportResult()
{}

void GetConfigRulesReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configRulesReportNode = value["ConfigRulesReport"];
	if(!configRulesReportNode["ReportStatus"].isNull())
		configRulesReport_.reportStatus = configRulesReportNode["ReportStatus"].asString();
	if(!configRulesReportNode["ReportUrl"].isNull())
		configRulesReport_.reportUrl = configRulesReportNode["ReportUrl"].asString();
	if(!configRulesReportNode["AccountId"].isNull())
		configRulesReport_.accountId = std::stol(configRulesReportNode["AccountId"].asString());
	if(!configRulesReportNode["ReportCreateTimestamp"].isNull())
		configRulesReport_.reportCreateTimestamp = std::stol(configRulesReportNode["ReportCreateTimestamp"].asString());
	if(!configRulesReportNode["ReportId"].isNull())
		configRulesReport_.reportId = configRulesReportNode["ReportId"].asString();

}

GetConfigRulesReportResult::ConfigRulesReport GetConfigRulesReportResult::getConfigRulesReport()const
{
	return configRulesReport_;
}

