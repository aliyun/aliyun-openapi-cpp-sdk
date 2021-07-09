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

#include <alibabacloud/devops-rdc/model/ListDevopsScenarioFieldConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListDevopsScenarioFieldConfigResult::ListDevopsScenarioFieldConfigResult() :
	ServiceResult()
{}

ListDevopsScenarioFieldConfigResult::ListDevopsScenarioFieldConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevopsScenarioFieldConfigResult::~ListDevopsScenarioFieldConfigResult()
{}

void ListDevopsScenarioFieldConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["ScenarioFieldConfig"];
	for (auto valueObjectScenarioFieldConfig : allObjectNode)
	{
		ScenarioFieldConfig objectObject;
		if(!valueObjectScenarioFieldConfig["Type"].isNull())
			objectObject.type = valueObjectScenarioFieldConfig["Type"].asString();
		if(!valueObjectScenarioFieldConfig["Name"].isNull())
			objectObject.name = valueObjectScenarioFieldConfig["Name"].asString();
		if(!valueObjectScenarioFieldConfig["Id"].isNull())
			objectObject.id = valueObjectScenarioFieldConfig["Id"].asString();
		object_.push_back(objectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListDevopsScenarioFieldConfigResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListDevopsScenarioFieldConfigResult::ScenarioFieldConfig> ListDevopsScenarioFieldConfigResult::getObject()const
{
	return object_;
}

std::string ListDevopsScenarioFieldConfigResult::getErrorCode()const
{
	return errorCode_;
}

bool ListDevopsScenarioFieldConfigResult::getSuccessful()const
{
	return successful_;
}

