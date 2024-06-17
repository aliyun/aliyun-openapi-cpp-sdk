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

#include <alibabacloud/swas-open/model/DescribeCommandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeCommandsResult::DescribeCommandsResult() :
	ServiceResult()
{}

DescribeCommandsResult::DescribeCommandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommandsResult::~DescribeCommandsResult()
{}

void DescribeCommandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommandsNode = value["Commands"]["command"];
	for (auto valueCommandscommand : allCommandsNode)
	{
		Command commandsObject;
		if(!valueCommandscommand["CommandId"].isNull())
			commandsObject.commandId = valueCommandscommand["CommandId"].asString();
		if(!valueCommandscommand["CreationTime"].isNull())
			commandsObject.creationTime = valueCommandscommand["CreationTime"].asString();
		if(!valueCommandscommand["Name"].isNull())
			commandsObject.name = valueCommandscommand["Name"].asString();
		if(!valueCommandscommand["Provider"].isNull())
			commandsObject.provider = valueCommandscommand["Provider"].asString();
		if(!valueCommandscommand["Type"].isNull())
			commandsObject.type = valueCommandscommand["Type"].asString();
		if(!valueCommandscommand["Timeout"].isNull())
			commandsObject.timeout = std::stol(valueCommandscommand["Timeout"].asString());
		if(!valueCommandscommand["Description"].isNull())
			commandsObject.description = valueCommandscommand["Description"].asString();
		if(!valueCommandscommand["WorkingDir"].isNull())
			commandsObject.workingDir = valueCommandscommand["WorkingDir"].asString();
		if(!valueCommandscommand["CommandContent"].isNull())
			commandsObject.commandContent = valueCommandscommand["CommandContent"].asString();
		if(!valueCommandscommand["EnableParameter"].isNull())
			commandsObject.enableParameter = valueCommandscommand["EnableParameter"].asString() == "true";
		if(!valueCommandscommand["ResourceGroupId"].isNull())
			commandsObject.resourceGroupId = valueCommandscommand["ResourceGroupId"].asString();
		auto allTagsNode = valueCommandscommand["Tags"]["tag"];
		for (auto valueCommandscommandTagstag : allTagsNode)
		{
			Command::Tag tagsObject;
			if(!valueCommandscommandTagstag["Key"].isNull())
				tagsObject.key = valueCommandscommandTagstag["Key"].asString();
			if(!valueCommandscommandTagstag["Value"].isNull())
				tagsObject.value = valueCommandscommandTagstag["Value"].asString();
			commandsObject.tags.push_back(tagsObject);
		}
		auto allParameterDefinitionsNode = valueCommandscommand["ParameterDefinitions"]["parameterDefinition"];
		for (auto valueCommandscommandParameterDefinitionsparameterDefinition : allParameterDefinitionsNode)
		{
			Command::ParameterDefinition parameterDefinitionsObject;
			if(!valueCommandscommandParameterDefinitionsparameterDefinition["Required"].isNull())
				parameterDefinitionsObject.required = valueCommandscommandParameterDefinitionsparameterDefinition["Required"].asString() == "true";
			if(!valueCommandscommandParameterDefinitionsparameterDefinition["Description"].isNull())
				parameterDefinitionsObject.description = valueCommandscommandParameterDefinitionsparameterDefinition["Description"].asString();
			if(!valueCommandscommandParameterDefinitionsparameterDefinition["DefaultValue"].isNull())
				parameterDefinitionsObject.defaultValue = valueCommandscommandParameterDefinitionsparameterDefinition["DefaultValue"].asString();
			if(!valueCommandscommandParameterDefinitionsparameterDefinition["ParameterName"].isNull())
				parameterDefinitionsObject.parameterName = valueCommandscommandParameterDefinitionsparameterDefinition["ParameterName"].asString();
			auto allPossibleValues = value["PossibleValues"]["possibleValue"];
			for (auto value : allPossibleValues)
				parameterDefinitionsObject.possibleValues.push_back(value.asString());
			commandsObject.parameterDefinitions.push_back(parameterDefinitionsObject);
		}
		auto allParameterNames = value["ParameterNames"]["parameterName"];
		for (auto value : allParameterNames)
			commandsObject.parameterNames.push_back(value.asString());
		commands_.push_back(commandsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCommandsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCommandsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCommandsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCommandsResult::Command> DescribeCommandsResult::getCommands()const
{
	return commands_;
}

