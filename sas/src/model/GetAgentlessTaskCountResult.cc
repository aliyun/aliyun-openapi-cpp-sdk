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

#include <alibabacloud/sas/model/GetAgentlessTaskCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetAgentlessTaskCountResult::GetAgentlessTaskCountResult() :
	ServiceResult()
{}

GetAgentlessTaskCountResult::GetAgentlessTaskCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAgentlessTaskCountResult::~GetAgentlessTaskCountResult()
{}

void GetAgentlessTaskCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RiskMachine"].isNull())
		riskMachine_ = std::stoi(value["RiskMachine"].asString());
	if(!value["ScanMachine"].isNull())
		scanMachine_ = std::stoi(value["ScanMachine"].asString());
	if(!value["MaliciousFile"].isNull())
		maliciousFile_ = std::stoi(value["MaliciousFile"].asString());
	if(!value["Vulnerability"].isNull())
		vulnerability_ = std::stoi(value["Vulnerability"].asString());
	if(!value["LastTaskTime"].isNull())
		lastTaskTime_ = std::stol(value["LastTaskTime"].asString());
	if(!value["BaselineCheckCount"].isNull())
		baselineCheckCount_ = std::stoi(value["BaselineCheckCount"].asString());
	if(!value["ScaVulCount"].isNull())
		scaVulCount_ = std::stoi(value["ScaVulCount"].asString());
	if(!value["CveVulCount"].isNull())
		cveVulCount_ = std::stoi(value["CveVulCount"].asString());

}

int GetAgentlessTaskCountResult::getBaselineCheckCount()const
{
	return baselineCheckCount_;
}

int GetAgentlessTaskCountResult::getMaliciousFile()const
{
	return maliciousFile_;
}

long GetAgentlessTaskCountResult::getLastTaskTime()const
{
	return lastTaskTime_;
}

int GetAgentlessTaskCountResult::getCveVulCount()const
{
	return cveVulCount_;
}

int GetAgentlessTaskCountResult::getVulnerability()const
{
	return vulnerability_;
}

int GetAgentlessTaskCountResult::getScaVulCount()const
{
	return scaVulCount_;
}

int GetAgentlessTaskCountResult::getRiskMachine()const
{
	return riskMachine_;
}

int GetAgentlessTaskCountResult::getScanMachine()const
{
	return scanMachine_;
}

