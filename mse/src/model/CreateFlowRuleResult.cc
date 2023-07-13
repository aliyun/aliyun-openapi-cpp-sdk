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

#include <alibabacloud/mse/model/CreateFlowRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateFlowRuleResult::CreateFlowRuleResult() :
	ServiceResult()
{}

CreateFlowRuleResult::CreateFlowRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFlowRuleResult::~CreateFlowRuleResult()
{}

void CreateFlowRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["Resource"].isNull())
		data_.resource = dataNode["Resource"].asString();
	if(!dataNode["ControlBehavior"].isNull())
		data_.controlBehavior = std::stoi(dataNode["ControlBehavior"].asString());
	if(!dataNode["MaxQueueingTimeMs"].isNull())
		data_.maxQueueingTimeMs = std::stoi(dataNode["MaxQueueingTimeMs"].asString());
	if(!dataNode["Threshold"].isNull())
		data_.threshold = std::stof(dataNode["Threshold"].asString());
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateFlowRuleResult::getMessage()const
{
	return message_;
}

CreateFlowRuleResult::Data CreateFlowRuleResult::getData()const
{
	return data_;
}

std::string CreateFlowRuleResult::getCode()const
{
	return code_;
}

bool CreateFlowRuleResult::getSuccess()const
{
	return success_;
}

