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

#include <alibabacloud/oos/model/UpdateStateConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

UpdateStateConfigurationResult::UpdateStateConfigurationResult() :
	ServiceResult()
{}

UpdateStateConfigurationResult::UpdateStateConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateStateConfigurationResult::~UpdateStateConfigurationResult()
{}

void UpdateStateConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStateConfigurationNode = value["StateConfiguration"]["StateConfigurationItem"];
	for (auto valueStateConfigurationStateConfigurationItem : allStateConfigurationNode)
	{
		StateConfigurationItem stateConfigurationObject;
		if(!valueStateConfigurationStateConfigurationItem["UpdateTime"].isNull())
			stateConfigurationObject.updateTime = valueStateConfigurationStateConfigurationItem["UpdateTime"].asString();
		if(!valueStateConfigurationStateConfigurationItem["CreateTime"].isNull())
			stateConfigurationObject.createTime = valueStateConfigurationStateConfigurationItem["CreateTime"].asString();
		if(!valueStateConfigurationStateConfigurationItem["Targets"].isNull())
			stateConfigurationObject.targets = valueStateConfigurationStateConfigurationItem["Targets"].asString();
		if(!valueStateConfigurationStateConfigurationItem["Tags"].isNull())
			stateConfigurationObject.tags = valueStateConfigurationStateConfigurationItem["Tags"].asString();
		if(!valueStateConfigurationStateConfigurationItem["StateConfigurationId"].isNull())
			stateConfigurationObject.stateConfigurationId = valueStateConfigurationStateConfigurationItem["StateConfigurationId"].asString();
		if(!valueStateConfigurationStateConfigurationItem["ScheduleExpression"].isNull())
			stateConfigurationObject.scheduleExpression = valueStateConfigurationStateConfigurationItem["ScheduleExpression"].asString();
		if(!valueStateConfigurationStateConfigurationItem["TemplateName"].isNull())
			stateConfigurationObject.templateName = valueStateConfigurationStateConfigurationItem["TemplateName"].asString();
		if(!valueStateConfigurationStateConfigurationItem["TemplateVersion"].isNull())
			stateConfigurationObject.templateVersion = valueStateConfigurationStateConfigurationItem["TemplateVersion"].asString();
		if(!valueStateConfigurationStateConfigurationItem["ConfigureMode"].isNull())
			stateConfigurationObject.configureMode = valueStateConfigurationStateConfigurationItem["ConfigureMode"].asString();
		if(!valueStateConfigurationStateConfigurationItem["ScheduleType"].isNull())
			stateConfigurationObject.scheduleType = valueStateConfigurationStateConfigurationItem["ScheduleType"].asString();
		if(!valueStateConfigurationStateConfigurationItem["Parameters"].isNull())
			stateConfigurationObject.parameters = valueStateConfigurationStateConfigurationItem["Parameters"].asString();
		if(!valueStateConfigurationStateConfigurationItem["Description"].isNull())
			stateConfigurationObject.description = valueStateConfigurationStateConfigurationItem["Description"].asString();
		if(!valueStateConfigurationStateConfigurationItem["ResourceGroupId"].isNull())
			stateConfigurationObject.resourceGroupId = valueStateConfigurationStateConfigurationItem["ResourceGroupId"].asString();
		if(!valueStateConfigurationStateConfigurationItem["TemplateId"].isNull())
			stateConfigurationObject.templateId = valueStateConfigurationStateConfigurationItem["TemplateId"].asString();
		stateConfiguration_.push_back(stateConfigurationObject);
	}

}

std::vector<UpdateStateConfigurationResult::StateConfigurationItem> UpdateStateConfigurationResult::getStateConfiguration()const
{
	return stateConfiguration_;
}

