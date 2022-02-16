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

#include <alibabacloud/emr/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetApplicationResult::GetApplicationResult() :
	ServiceResult()
{}

GetApplicationResult::GetApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationResult::~GetApplicationResult()
{}

void GetApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationNode = value["Application"];
	if(!applicationNode["ApplicationName"].isNull())
		application_.applicationName = applicationNode["ApplicationName"].asString();
	if(!applicationNode["ApplicationVersion"].isNull())
		application_.applicationVersion = applicationNode["ApplicationVersion"].asString();
	if(!applicationNode["ApplicationState"].isNull())
		application_.applicationState = applicationNode["ApplicationState"].asString();
	auto allActionsNode = applicationNode["Actions"]["Action"];
	for (auto applicationNodeActionsAction : allActionsNode)
	{
		Application::Action actionObject;
		if(!applicationNodeActionsAction["RunActionScope"].isNull())
			actionObject.runActionScope = applicationNodeActionsAction["RunActionScope"].asString();
		if(!applicationNodeActionsAction["ActionScope"].isNull())
			actionObject.actionScope = applicationNodeActionsAction["ActionScope"].asString();
		if(!applicationNodeActionsAction["ComponentName"].isNull())
			actionObject.componentName = applicationNodeActionsAction["ComponentName"].asString();
		if(!applicationNodeActionsAction["ActionName"].isNull())
			actionObject.actionName = applicationNodeActionsAction["ActionName"].asString();
		if(!applicationNodeActionsAction["Command"].isNull())
			actionObject.command = applicationNodeActionsAction["Command"].asString();
		auto allActionParamsNode = applicationNodeActionsAction["ActionParams"]["ActionParam"];
		for (auto applicationNodeActionsActionActionParamsActionParam : allActionParamsNode)
		{
			Application::Action::ActionParam actionParamsObject;
			if(!applicationNodeActionsActionActionParamsActionParam["Key"].isNull())
				actionParamsObject.key = applicationNodeActionsActionActionParamsActionParam["Key"].asString();
			if(!applicationNodeActionsActionActionParamsActionParam["Description"].isNull())
				actionParamsObject.description = applicationNodeActionsActionActionParamsActionParam["Description"].asString();
			auto valueAttributeNode = value["ValueAttribute"];
			if(!valueAttributeNode["ValueType"].isNull())
				actionParamsObject.valueAttribute.valueType = valueAttributeNode["ValueType"].asString();
			if(!valueAttributeNode["ValueMaximum"].isNull())
				actionParamsObject.valueAttribute.valueMaximum = valueAttributeNode["ValueMaximum"].asString();
			if(!valueAttributeNode["ValueMinimum"].isNull())
				actionParamsObject.valueAttribute.valueMinimum = valueAttributeNode["ValueMinimum"].asString();
			if(!valueAttributeNode["ValueUnit"].isNull())
				actionParamsObject.valueAttribute.valueUnit = valueAttributeNode["ValueUnit"].asString();
			if(!valueAttributeNode["ValueIncrementStep"].isNull())
				actionParamsObject.valueAttribute.valueIncrementStep = valueAttributeNode["ValueIncrementStep"].asString();
			if(!valueAttributeNode["Description"].isNull())
				actionParamsObject.valueAttribute.description = valueAttributeNode["Description"].asString();
			actionObject.actionParams.push_back(actionParamsObject);
		}
		auto allNotSupportStates = value["NotSupportStates"]["String"];
		for (auto value : allNotSupportStates)
			actionObject.notSupportStates.push_back(value.asString());
		application_.actions.push_back(actionObject);
	}

}

GetApplicationResult::Application GetApplicationResult::getApplication()const
{
	return application_;
}

