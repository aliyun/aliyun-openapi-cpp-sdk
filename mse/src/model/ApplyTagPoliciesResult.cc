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

#include <alibabacloud/mse/model/ApplyTagPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ApplyTagPoliciesResult::ApplyTagPoliciesResult() :
	ServiceResult()
{}

ApplyTagPoliciesResult::ApplyTagPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyTagPoliciesResult::~ApplyTagPoliciesResult()
{}

void ApplyTagPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RouteRuleVO"];
	for (auto valueDataRouteRuleVO : allDataNode)
	{
		RouteRuleVO dataObject;
		if(!valueDataRouteRuleVO["Status"].isNull())
			dataObject.status = std::stoi(valueDataRouteRuleVO["Status"].asString());
		if(!valueDataRouteRuleVO["InstanceNum"].isNull())
			dataObject.instanceNum = std::stoi(valueDataRouteRuleVO["InstanceNum"].asString());
		if(!valueDataRouteRuleVO["Remove"].isNull())
			dataObject.remove = valueDataRouteRuleVO["Remove"].asString() == "true";
		if(!valueDataRouteRuleVO["CarryData"].isNull())
			dataObject.carryData = valueDataRouteRuleVO["CarryData"].asString() == "true";
		if(!valueDataRouteRuleVO["Tag"].isNull())
			dataObject.tag = valueDataRouteRuleVO["Tag"].asString();
		if(!valueDataRouteRuleVO["Name"].isNull())
			dataObject.name = valueDataRouteRuleVO["Name"].asString();
		if(!valueDataRouteRuleVO["Rules"].isNull())
			dataObject.rules = valueDataRouteRuleVO["Rules"].asString();
		if(!valueDataRouteRuleVO["Id"].isNull())
			dataObject.id = std::stol(valueDataRouteRuleVO["Id"].asString());
		if(!valueDataRouteRuleVO["Rate"].isNull())
			dataObject.rate = std::stoi(valueDataRouteRuleVO["Rate"].asString());
		if(!valueDataRouteRuleVO["Enable"].isNull())
			dataObject.enable = valueDataRouteRuleVO["Enable"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ApplyTagPoliciesResult::getMessage()const
{
	return message_;
}

int ApplyTagPoliciesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ApplyTagPoliciesResult::RouteRuleVO> ApplyTagPoliciesResult::getData()const
{
	return data_;
}

int ApplyTagPoliciesResult::getCode()const
{
	return code_;
}

bool ApplyTagPoliciesResult::getSuccess()const
{
	return success_;
}

