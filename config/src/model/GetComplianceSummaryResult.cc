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

#include <alibabacloud/config/model/GetComplianceSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetComplianceSummaryResult::GetComplianceSummaryResult() :
	ServiceResult()
{}

GetComplianceSummaryResult::GetComplianceSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetComplianceSummaryResult::~GetComplianceSummaryResult()
{}

void GetComplianceSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto complianceSummaryNode = value["ComplianceSummary"];
	auto complianceSummaryByResourceNode = complianceSummaryNode["ComplianceSummaryByResource"];
	if(!complianceSummaryByResourceNode["CompliantCount"].isNull())
		complianceSummary_.complianceSummaryByResource.compliantCount = std::stoi(complianceSummaryByResourceNode["CompliantCount"].asString());
	if(!complianceSummaryByResourceNode["NonCompliantCount"].isNull())
		complianceSummary_.complianceSummaryByResource.nonCompliantCount = std::stoi(complianceSummaryByResourceNode["NonCompliantCount"].asString());
	if(!complianceSummaryByResourceNode["ComplianceSummaryTimestamp"].isNull())
		complianceSummary_.complianceSummaryByResource.complianceSummaryTimestamp = std::stol(complianceSummaryByResourceNode["ComplianceSummaryTimestamp"].asString());
	if(!complianceSummaryByResourceNode["TotalCount"].isNull())
		complianceSummary_.complianceSummaryByResource.totalCount = std::stol(complianceSummaryByResourceNode["TotalCount"].asString());
	auto complianceSummaryByConfigRuleNode = complianceSummaryNode["ComplianceSummaryByConfigRule"];
	if(!complianceSummaryByConfigRuleNode["CompliantCount"].isNull())
		complianceSummary_.complianceSummaryByConfigRule.compliantCount = std::stoi(complianceSummaryByConfigRuleNode["CompliantCount"].asString());
	if(!complianceSummaryByConfigRuleNode["NonCompliantCount"].isNull())
		complianceSummary_.complianceSummaryByConfigRule.nonCompliantCount = std::stoi(complianceSummaryByConfigRuleNode["NonCompliantCount"].asString());
	if(!complianceSummaryByConfigRuleNode["ComplianceSummaryTimestamp"].isNull())
		complianceSummary_.complianceSummaryByConfigRule.complianceSummaryTimestamp = std::stol(complianceSummaryByConfigRuleNode["ComplianceSummaryTimestamp"].asString());
	if(!complianceSummaryByConfigRuleNode["TotalCount"].isNull())
		complianceSummary_.complianceSummaryByConfigRule.totalCount = std::stol(complianceSummaryByConfigRuleNode["TotalCount"].asString());

}

GetComplianceSummaryResult::ComplianceSummary GetComplianceSummaryResult::getComplianceSummary()const
{
	return complianceSummary_;
}

