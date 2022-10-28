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

#include <alibabacloud/dms-enterprise/model/ListScenariosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListScenariosResult::ListScenariosResult() :
	ServiceResult()
{}

ListScenariosResult::ListScenariosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenariosResult::~ListScenariosResult()
{}

void ListScenariosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScenarioListNode = value["ScenarioList"]["Scenario"];
	for (auto valueScenarioListScenario : allScenarioListNode)
	{
		Scenario scenarioListObject;
		if(!valueScenarioListScenario["Id"].isNull())
			scenarioListObject.id = std::stol(valueScenarioListScenario["Id"].asString());
		if(!valueScenarioListScenario["ScenarioName"].isNull())
			scenarioListObject.scenarioName = valueScenarioListScenario["ScenarioName"].asString();
		if(!valueScenarioListScenario["CreatorId"].isNull())
			scenarioListObject.creatorId = valueScenarioListScenario["CreatorId"].asString();
		if(!valueScenarioListScenario["Description"].isNull())
			scenarioListObject.description = valueScenarioListScenario["Description"].asString();
		scenarioList_.push_back(scenarioListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListScenariosResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListScenariosResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListScenariosResult::Scenario> ListScenariosResult::getScenarioList()const
{
	return scenarioList_;
}

bool ListScenariosResult::getSuccess()const
{
	return success_;
}

