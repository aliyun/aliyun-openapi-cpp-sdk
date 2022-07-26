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

#include <alibabacloud/oos/model/CreateStateConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

CreateStateConfigurationResult::CreateStateConfigurationResult() :
	ServiceResult()
{}

CreateStateConfigurationResult::CreateStateConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStateConfigurationResult::~CreateStateConfigurationResult()
{}

void CreateStateConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto stateConfigurationNode = value["StateConfiguration"];
	if(!stateConfigurationNode["CreateTime"].isNull())
		stateConfiguration_.createTime = stateConfigurationNode["CreateTime"].asString();
	if(!stateConfigurationNode["Targets"].isNull())
		stateConfiguration_.targets = stateConfigurationNode["Targets"].asString();
	if(!stateConfigurationNode["Tags"].isNull())
		stateConfiguration_.tags = stateConfigurationNode["Tags"].asString();
	if(!stateConfigurationNode["StateConfigurationId"].isNull())
		stateConfiguration_.stateConfigurationId = stateConfigurationNode["StateConfigurationId"].asString();
	if(!stateConfigurationNode["ScheduleExpression"].isNull())
		stateConfiguration_.scheduleExpression = stateConfigurationNode["ScheduleExpression"].asString();
	if(!stateConfigurationNode["TemplateName"].isNull())
		stateConfiguration_.templateName = stateConfigurationNode["TemplateName"].asString();
	if(!stateConfigurationNode["TemplateVersion"].isNull())
		stateConfiguration_.templateVersion = stateConfigurationNode["TemplateVersion"].asString();
	if(!stateConfigurationNode["ConfigureMode"].isNull())
		stateConfiguration_.configureMode = stateConfigurationNode["ConfigureMode"].asString();
	if(!stateConfigurationNode["ScheduleType"].isNull())
		stateConfiguration_.scheduleType = stateConfigurationNode["ScheduleType"].asString();
	if(!stateConfigurationNode["Parameters"].isNull())
		stateConfiguration_.parameters = stateConfigurationNode["Parameters"].asString();
	if(!stateConfigurationNode["Description"].isNull())
		stateConfiguration_.description = stateConfigurationNode["Description"].asString();
	if(!stateConfigurationNode["ResourceGroupId"].isNull())
		stateConfiguration_.resourceGroupId = stateConfigurationNode["ResourceGroupId"].asString();
	if(!stateConfigurationNode["TemplateId"].isNull())
		stateConfiguration_.templateId = stateConfigurationNode["TemplateId"].asString();

}

CreateStateConfigurationResult::StateConfiguration CreateStateConfigurationResult::getStateConfiguration()const
{
	return stateConfiguration_;
}

