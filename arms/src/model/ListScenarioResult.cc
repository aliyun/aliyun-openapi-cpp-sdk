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

#include <alibabacloud/arms/model/ListScenarioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListScenarioResult::ListScenarioResult() :
	ServiceResult()
{}

ListScenarioResult::ListScenarioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenarioResult::~ListScenarioResult()
{}

void ListScenarioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allArmsScenariosNode = value["ArmsScenarios"]["ArmsScenariosItem"];
	for (auto valueArmsScenariosArmsScenariosItem : allArmsScenariosNode)
	{
		ArmsScenariosItem armsScenariosObject;
		if(!valueArmsScenariosArmsScenariosItem["UpdateTime"].isNull())
			armsScenariosObject.updateTime = valueArmsScenariosArmsScenariosItem["UpdateTime"].asString();
		if(!valueArmsScenariosArmsScenariosItem["AppId"].isNull())
			armsScenariosObject.appId = valueArmsScenariosArmsScenariosItem["AppId"].asString();
		if(!valueArmsScenariosArmsScenariosItem["Sign"].isNull())
			armsScenariosObject.sign = valueArmsScenariosArmsScenariosItem["Sign"].asString();
		if(!valueArmsScenariosArmsScenariosItem["CreateTime"].isNull())
			armsScenariosObject.createTime = valueArmsScenariosArmsScenariosItem["CreateTime"].asString();
		if(!valueArmsScenariosArmsScenariosItem["UserId"].isNull())
			armsScenariosObject.userId = valueArmsScenariosArmsScenariosItem["UserId"].asString();
		if(!valueArmsScenariosArmsScenariosItem["Extensions"].isNull())
			armsScenariosObject.extensions = valueArmsScenariosArmsScenariosItem["Extensions"].asString();
		if(!valueArmsScenariosArmsScenariosItem["Name"].isNull())
			armsScenariosObject.name = valueArmsScenariosArmsScenariosItem["Name"].asString();
		if(!valueArmsScenariosArmsScenariosItem["Id"].isNull())
			armsScenariosObject.id = std::stol(valueArmsScenariosArmsScenariosItem["Id"].asString());
		if(!valueArmsScenariosArmsScenariosItem["RegionId"].isNull())
			armsScenariosObject.regionId = valueArmsScenariosArmsScenariosItem["RegionId"].asString();
		armsScenarios_.push_back(armsScenariosObject);
	}

}

std::vector<ListScenarioResult::ArmsScenariosItem> ListScenarioResult::getArmsScenarios()const
{
	return armsScenarios_;
}

