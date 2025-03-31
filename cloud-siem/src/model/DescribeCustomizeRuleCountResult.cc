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

#include <alibabacloud/cloud-siem/model/DescribeCustomizeRuleCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeCustomizeRuleCountResult::DescribeCustomizeRuleCountResult() :
	ServiceResult()
{}

DescribeCustomizeRuleCountResult::DescribeCustomizeRuleCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizeRuleCountResult::~DescribeCustomizeRuleCountResult()
{}

void DescribeCustomizeRuleCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["InUseRuleNum"].isNull())
		data_.inUseRuleNum = std::stoi(dataNode["InUseRuleNum"].asString());
	if(!dataNode["HighRuleNum"].isNull())
		data_.highRuleNum = std::stoi(dataNode["HighRuleNum"].asString());
	if(!dataNode["MediumRuleNum"].isNull())
		data_.mediumRuleNum = std::stoi(dataNode["MediumRuleNum"].asString());
	if(!dataNode["LowRuleNum"].isNull())
		data_.lowRuleNum = std::stoi(dataNode["LowRuleNum"].asString());
	if(!dataNode["TotalRuleNum"].isNull())
		data_.totalRuleNum = std::stoi(dataNode["TotalRuleNum"].asString());
	if(!dataNode["CustomizeRuleNum"].isNull())
		data_.customizeRuleNum = std::stoi(dataNode["CustomizeRuleNum"].asString());
	if(!dataNode["PredefinedRuleNum"].isNull())
		data_.predefinedRuleNum = std::stoi(dataNode["PredefinedRuleNum"].asString());
	if(!dataNode["UnEventRuleNum"].isNull())
		data_.unEventRuleNum = std::stoi(dataNode["UnEventRuleNum"].asString());
	if(!dataNode["ExpertRuleNum"].isNull())
		data_.expertRuleNum = std::stoi(dataNode["ExpertRuleNum"].asString());
	if(!dataNode["GraphComputingRuleNum"].isNull())
		data_.graphComputingRuleNum = std::stoi(dataNode["GraphComputingRuleNum"].asString());
	if(!dataNode["SingleAlertRuleNum"].isNull())
		data_.singleAlertRuleNum = std::stoi(dataNode["SingleAlertRuleNum"].asString());
	if(!dataNode["AggregationRuleNum"].isNull())
		data_.aggregationRuleNum = std::stoi(dataNode["AggregationRuleNum"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeCustomizeRuleCountResult::getMessage()const
{
	return message_;
}

DescribeCustomizeRuleCountResult::Data DescribeCustomizeRuleCountResult::getData()const
{
	return data_;
}

int DescribeCustomizeRuleCountResult::getCode()const
{
	return code_;
}

bool DescribeCustomizeRuleCountResult::getSuccess()const
{
	return success_;
}

