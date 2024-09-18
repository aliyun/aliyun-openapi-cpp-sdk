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

#include <alibabacloud/quickbi-public/model/QueryCopilotEmbedConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryCopilotEmbedConfigResult::QueryCopilotEmbedConfigResult() :
	ServiceResult()
{}

QueryCopilotEmbedConfigResult::QueryCopilotEmbedConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCopilotEmbedConfigResult::~QueryCopilotEmbedConfigResult()
{}

void QueryCopilotEmbedConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AgentName"].isNull())
			resultObject.agentName = valueResultResultItem["AgentName"].asString();
		if(!valueResultResultItem["CopilotId"].isNull())
			resultObject.copilotId = valueResultResultItem["CopilotId"].asString();
		if(!valueResultResultItem["CreateUser"].isNull())
			resultObject.createUser = valueResultResultItem["CreateUser"].asString();
		if(!valueResultResultItem["CreateUserName"].isNull())
			resultObject.createUserName = valueResultResultItem["CreateUserName"].asString();
		if(!valueResultResultItem["ModifyUser"].isNull())
			resultObject.modifyUser = valueResultResultItem["ModifyUser"].asString();
		if(!valueResultResultItem["ModuleName"].isNull())
			resultObject.moduleName = valueResultResultItem["ModuleName"].asString();
		if(!valueResultResultItem["ShowName"].isNull())
			resultObject.showName = valueResultResultItem["ShowName"].asString();
		auto dataRangeNode = value["DataRange"];
		if(!dataRangeNode["AllCube"].isNull())
			resultObject.dataRange.allCube = dataRangeNode["AllCube"].asString() == "true";
		if(!dataRangeNode["AllTheme"].isNull())
			resultObject.dataRange.allTheme = dataRangeNode["AllTheme"].asString() == "true";
			auto allLlmCubes = dataRangeNode["LlmCubes"]["LlmCubes"];
			for (auto value : allLlmCubes)
				resultObject.dataRange.llmCubes.push_back(value.asString());
			auto allThemes = dataRangeNode["Themes"]["Themes"];
			for (auto value : allThemes)
				resultObject.dataRange.themes.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryCopilotEmbedConfigResult::getSuccess()const
{
	return success_;
}

std::vector<QueryCopilotEmbedConfigResult::ResultItem> QueryCopilotEmbedConfigResult::getResult()const
{
	return result_;
}

