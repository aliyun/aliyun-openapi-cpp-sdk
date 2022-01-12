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

#include <alibabacloud/config/model/GenerateAggregateConfigRulesReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GenerateAggregateConfigRulesReportResult::GenerateAggregateConfigRulesReportResult() :
	ServiceResult()
{}

GenerateAggregateConfigRulesReportResult::GenerateAggregateConfigRulesReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateAggregateConfigRulesReportResult::~GenerateAggregateConfigRulesReportResult()
{}

void GenerateAggregateConfigRulesReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AggregatorId"].isNull())
		aggregatorId_ = value["AggregatorId"].asString();
	if(!value["ReportId"].isNull())
		reportId_ = value["ReportId"].asString();

}

std::string GenerateAggregateConfigRulesReportResult::getReportId()const
{
	return reportId_;
}

std::string GenerateAggregateConfigRulesReportResult::getAggregatorId()const
{
	return aggregatorId_;
}

