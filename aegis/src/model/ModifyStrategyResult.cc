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

#include <alibabacloud/aegis/model/ModifyStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

ModifyStrategyResult::ModifyStrategyResult() :
	ServiceResult()
{}

ModifyStrategyResult::ModifyStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyStrategyResult::~ModifyStrategyResult()
{}

void ModifyStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResult = value["Result"];
	for (auto value : allResult)
	{
		Result resultObject;
		if(!value["StrategyId"].isNull())
			resultObject.strategyId = std::stoi(value["StrategyId"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int ModifyStrategyResult::getTotalCount()const
{
	return totalCount_;
}

int ModifyStrategyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

bool ModifyStrategyResult::getSuccess()const
{
	return success_;
}

std::vector<ModifyStrategyResult::Result> ModifyStrategyResult::getResult()const
{
	return result_;
}

