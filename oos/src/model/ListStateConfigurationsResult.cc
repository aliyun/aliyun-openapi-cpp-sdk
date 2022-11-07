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

#include <alibabacloud/oos/model/ListStateConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListStateConfigurationsResult::ListStateConfigurationsResult() :
	ServiceResult()
{}

ListStateConfigurationsResult::ListStateConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStateConfigurationsResult::~ListStateConfigurationsResult()
{}

void ListStateConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStateConfigurationsNode = value["StateConfigurations"]["StateConfiguration"];
	for (auto valueStateConfigurationsStateConfiguration : allStateConfigurationsNode)
	{
		StateConfiguration stateConfigurationsObject;
		if(!valueStateConfigurationsStateConfiguration["UpdateTime"].isNull())
			stateConfigurationsObject.updateTime = valueStateConfigurationsStateConfiguration["UpdateTime"].asString();
		if(!valueStateConfigurationsStateConfiguration["CreateTime"].isNull())
			stateConfigurationsObject.createTime = valueStateConfigurationsStateConfiguration["CreateTime"].asString();
		if(!valueStateConfigurationsStateConfiguration["Targets"].isNull())
			stateConfigurationsObject.targets = valueStateConfigurationsStateConfiguration["Targets"].asString();
		if(!valueStateConfigurationsStateConfiguration["Tags"].isNull())
			stateConfigurationsObject.tags = valueStateConfigurationsStateConfiguration["Tags"].asString();
		if(!valueStateConfigurationsStateConfiguration["StateConfigurationId"].isNull())
			stateConfigurationsObject.stateConfigurationId = valueStateConfigurationsStateConfiguration["StateConfigurationId"].asString();
		if(!valueStateConfigurationsStateConfiguration["ScheduleExpression"].isNull())
			stateConfigurationsObject.scheduleExpression = valueStateConfigurationsStateConfiguration["ScheduleExpression"].asString();
		if(!valueStateConfigurationsStateConfiguration["TemplateName"].isNull())
			stateConfigurationsObject.templateName = valueStateConfigurationsStateConfiguration["TemplateName"].asString();
		if(!valueStateConfigurationsStateConfiguration["TemplateVersion"].isNull())
			stateConfigurationsObject.templateVersion = valueStateConfigurationsStateConfiguration["TemplateVersion"].asString();
		if(!valueStateConfigurationsStateConfiguration["ConfigureMode"].isNull())
			stateConfigurationsObject.configureMode = valueStateConfigurationsStateConfiguration["ConfigureMode"].asString();
		if(!valueStateConfigurationsStateConfiguration["ScheduleType"].isNull())
			stateConfigurationsObject.scheduleType = valueStateConfigurationsStateConfiguration["ScheduleType"].asString();
		if(!valueStateConfigurationsStateConfiguration["Parameters"].isNull())
			stateConfigurationsObject.parameters = valueStateConfigurationsStateConfiguration["Parameters"].asString();
		if(!valueStateConfigurationsStateConfiguration["Description"].isNull())
			stateConfigurationsObject.description = valueStateConfigurationsStateConfiguration["Description"].asString();
		if(!valueStateConfigurationsStateConfiguration["ResourceGroupId"].isNull())
			stateConfigurationsObject.resourceGroupId = valueStateConfigurationsStateConfiguration["ResourceGroupId"].asString();
		if(!valueStateConfigurationsStateConfiguration["TemplateId"].isNull())
			stateConfigurationsObject.templateId = valueStateConfigurationsStateConfiguration["TemplateId"].asString();
		stateConfigurations_.push_back(stateConfigurationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListStateConfigurationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListStateConfigurationsResult::StateConfiguration> ListStateConfigurationsResult::getStateConfigurations()const
{
	return stateConfigurations_;
}

