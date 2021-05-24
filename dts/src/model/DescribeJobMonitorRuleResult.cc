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

#include <alibabacloud/dts/model/DescribeJobMonitorRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeJobMonitorRuleResult::DescribeJobMonitorRuleResult() :
	ServiceResult()
{}

DescribeJobMonitorRuleResult::DescribeJobMonitorRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobMonitorRuleResult::~DescribeJobMonitorRuleResult()
{}

void DescribeJobMonitorRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMonitorRulesNode = value["MonitorRules"]["MonitorRule"];
	for (auto valueMonitorRulesMonitorRule : allMonitorRulesNode)
	{
		MonitorRule monitorRulesObject;
		if(!valueMonitorRulesMonitorRule["Phone"].isNull())
			monitorRulesObject.phone = valueMonitorRulesMonitorRule["Phone"].asString();
		if(!valueMonitorRulesMonitorRule["DelayRuleTime"].isNull())
			monitorRulesObject.delayRuleTime = std::stol(valueMonitorRulesMonitorRule["DelayRuleTime"].asString());
		if(!valueMonitorRulesMonitorRule["State"].isNull())
			monitorRulesObject.state = valueMonitorRulesMonitorRule["State"].asString();
		if(!valueMonitorRulesMonitorRule["Type"].isNull())
			monitorRulesObject.type = valueMonitorRulesMonitorRule["Type"].asString();
		monitorRules_.push_back(monitorRulesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DtsJobId"].isNull())
		dtsJobId_ = value["DtsJobId"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeJobMonitorRuleResult::getDtsJobId()const
{
	return dtsJobId_;
}

int DescribeJobMonitorRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeJobMonitorRuleResult::MonitorRule> DescribeJobMonitorRuleResult::getMonitorRules()const
{
	return monitorRules_;
}

std::string DescribeJobMonitorRuleResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeJobMonitorRuleResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeJobMonitorRuleResult::getCode()const
{
	return code_;
}

bool DescribeJobMonitorRuleResult::getSuccess()const
{
	return success_;
}

std::string DescribeJobMonitorRuleResult::getErrCode()const
{
	return errCode_;
}

