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

#include <alibabacloud/cloud-siem/model/PostCustomizeRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

PostCustomizeRuleResult::PostCustomizeRuleResult() :
	ServiceResult()
{}

PostCustomizeRuleResult::PostCustomizeRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PostCustomizeRuleResult::~PostCustomizeRuleResult()
{}

void PostCustomizeRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["Aliuid"].isNull())
		data_.aliuid = std::stol(dataNode["Aliuid"].asString());
	if(!dataNode["RuleName"].isNull())
		data_.ruleName = dataNode["RuleName"].asString();
	if(!dataNode["RuleDesc"].isNull())
		data_.ruleDesc = dataNode["RuleDesc"].asString();
	if(!dataNode["RuleType"].isNull())
		data_.ruleType = dataNode["RuleType"].asString();
	if(!dataNode["ThreatLevel"].isNull())
		data_.threatLevel = dataNode["ThreatLevel"].asString();
	if(!dataNode["AlertType"].isNull())
		data_.alertType = dataNode["AlertType"].asString();
	if(!dataNode["AlertTypeMds"].isNull())
		data_.alertTypeMds = dataNode["AlertTypeMds"].asString();
	if(!dataNode["LogType"].isNull())
		data_.logType = dataNode["LogType"].asString();
	if(!dataNode["LogTypeMds"].isNull())
		data_.logTypeMds = dataNode["LogTypeMds"].asString();
	if(!dataNode["LogSource"].isNull())
		data_.logSource = dataNode["LogSource"].asString();
	if(!dataNode["LogSourceMds"].isNull())
		data_.logSourceMds = dataNode["LogSourceMds"].asString();
	if(!dataNode["RuleCondition"].isNull())
		data_.ruleCondition = dataNode["RuleCondition"].asString();
	if(!dataNode["RuleGroup"].isNull())
		data_.ruleGroup = dataNode["RuleGroup"].asString();
	if(!dataNode["RuleThreshold"].isNull())
		data_.ruleThreshold = dataNode["RuleThreshold"].asString();
	if(!dataNode["QueryCycle"].isNull())
		data_.queryCycle = dataNode["QueryCycle"].asString();
	if(!dataNode["AttCk"].isNull())
		data_.attCk = dataNode["AttCk"].asString();
	if(!dataNode["EventTransferSwitch"].isNull())
		data_.eventTransferSwitch = std::stoi(dataNode["EventTransferSwitch"].asString());
	if(!dataNode["EventTransferType"].isNull())
		data_.eventTransferType = dataNode["EventTransferType"].asString();
	if(!dataNode["EventTransferExt"].isNull())
		data_.eventTransferExt = dataNode["EventTransferExt"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["DataType"].isNull())
		data_.dataType = std::stoi(dataNode["DataType"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PostCustomizeRuleResult::getMessage()const
{
	return message_;
}

PostCustomizeRuleResult::Data PostCustomizeRuleResult::getData()const
{
	return data_;
}

int PostCustomizeRuleResult::getCode()const
{
	return code_;
}

bool PostCustomizeRuleResult::getSuccess()const
{
	return success_;
}

