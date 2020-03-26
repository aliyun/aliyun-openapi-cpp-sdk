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

#include <alibabacloud/dyvmsapi/model/ListOutboundStrategiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

ListOutboundStrategiesResult::ListOutboundStrategiesResult() :
	ServiceResult()
{}

ListOutboundStrategiesResult::ListOutboundStrategiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOutboundStrategiesResult::~ListOutboundStrategiesResult()
{}

void ListOutboundStrategiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOutboundStrategiesNode = value["OutboundStrategies"]["OutboundStrategy"];
	for (auto valueOutboundStrategiesOutboundStrategy : allOutboundStrategiesNode)
	{
		OutboundStrategy outboundStrategiesObject;
		if(!valueOutboundStrategiesOutboundStrategy["Id"].isNull())
			outboundStrategiesObject.id = std::stol(valueOutboundStrategiesOutboundStrategy["Id"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["GmtCreateStr"].isNull())
			outboundStrategiesObject.gmtCreateStr = valueOutboundStrategiesOutboundStrategy["GmtCreateStr"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["GmtModifiedStr"].isNull())
			outboundStrategiesObject.gmtModifiedStr = valueOutboundStrategiesOutboundStrategy["GmtModifiedStr"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["CreatorId"].isNull())
			outboundStrategiesObject.creatorId = std::stol(valueOutboundStrategiesOutboundStrategy["CreatorId"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["CreatorName"].isNull())
			outboundStrategiesObject.creatorName = valueOutboundStrategiesOutboundStrategy["CreatorName"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["ModifierId"].isNull())
			outboundStrategiesObject.modifierId = std::stol(valueOutboundStrategiesOutboundStrategy["ModifierId"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["ModifierName"].isNull())
			outboundStrategiesObject.modifierName = valueOutboundStrategiesOutboundStrategy["ModifierName"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["BuId"].isNull())
			outboundStrategiesObject.buId = std::stol(valueOutboundStrategiesOutboundStrategy["BuId"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["DepartmentId"].isNull())
			outboundStrategiesObject.departmentId = std::stol(valueOutboundStrategiesOutboundStrategy["DepartmentId"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["name"].isNull())
			outboundStrategiesObject.name = valueOutboundStrategiesOutboundStrategy["name"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["NumType"].isNull())
			outboundStrategiesObject.numType = std::stoi(valueOutboundStrategiesOutboundStrategy["NumType"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["OutboundNum"].isNull())
			outboundStrategiesObject.outboundNum = valueOutboundStrategiesOutboundStrategy["OutboundNum"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["RobotType"].isNull())
			outboundStrategiesObject.robotType = std::stoi(valueOutboundStrategiesOutboundStrategy["RobotType"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["RobotId"].isNull())
			outboundStrategiesObject.robotId = valueOutboundStrategiesOutboundStrategy["RobotId"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["RobotName"].isNull())
			outboundStrategiesObject.robotName = valueOutboundStrategiesOutboundStrategy["RobotName"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["ResourceAllocation"].isNull())
			outboundStrategiesObject.resourceAllocation = std::stoi(valueOutboundStrategiesOutboundStrategy["ResourceAllocation"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["SceneName"].isNull())
			outboundStrategiesObject.sceneName = valueOutboundStrategiesOutboundStrategy["SceneName"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["RuleCode"].isNull())
			outboundStrategiesObject.ruleCode = std::stol(valueOutboundStrategiesOutboundStrategy["RuleCode"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["Status"].isNull())
			outboundStrategiesObject.status = std::stoi(valueOutboundStrategiesOutboundStrategy["Status"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["ExtAttr"].isNull())
			outboundStrategiesObject.extAttr = valueOutboundStrategiesOutboundStrategy["ExtAttr"].asString();
		if(!valueOutboundStrategiesOutboundStrategy["Process"].isNull())
			outboundStrategiesObject.process = std::stoi(valueOutboundStrategiesOutboundStrategy["Process"].asString());
		if(!valueOutboundStrategiesOutboundStrategy["SuccessRate"].isNull())
			outboundStrategiesObject.successRate = std::stoi(valueOutboundStrategiesOutboundStrategy["SuccessRate"].asString());
		outboundStrategies_.push_back(outboundStrategiesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListOutboundStrategiesResult::getMessage()const
{
	return message_;
}

std::vector<ListOutboundStrategiesResult::OutboundStrategy> ListOutboundStrategiesResult::getOutboundStrategies()const
{
	return outboundStrategies_;
}

std::string ListOutboundStrategiesResult::getCode()const
{
	return code_;
}

