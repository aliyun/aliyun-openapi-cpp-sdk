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

#include <alibabacloud/quickbi-public/model/QueryDataRangeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDataRangeResult::QueryDataRangeResult() :
	ServiceResult()
{}

QueryDataRangeResult::QueryDataRangeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDataRangeResult::~QueryDataRangeResult()
{}

void QueryDataRangeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allApiCopilotLlmCubeModelsNode = resultNode["ApiCopilotLlmCubeModels"]["ApiCopilotLlmCubeModelsItem"];
	for (auto resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem : allApiCopilotLlmCubeModelsNode)
	{
		Result::ApiCopilotLlmCubeModelsItem apiCopilotLlmCubeModelsItemObject;
		if(!resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["Alias"].isNull())
			apiCopilotLlmCubeModelsItemObject.alias = resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["Alias"].asString();
		if(!resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["CreateUser"].isNull())
			apiCopilotLlmCubeModelsItemObject.createUser = resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["CreateUser"].asString();
		if(!resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["LlmCubeId"].isNull())
			apiCopilotLlmCubeModelsItemObject.llmCubeId = resultNodeApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["LlmCubeId"].asString();
		result_.apiCopilotLlmCubeModels.push_back(apiCopilotLlmCubeModelsItemObject);
	}
	auto allApiCopilotThemeModelsNode = resultNode["ApiCopilotThemeModels"]["ApiCopilotThemeModelsItem"];
	for (auto resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem : allApiCopilotThemeModelsNode)
	{
		Result::ApiCopilotThemeModelsItem apiCopilotThemeModelsItemObject;
		if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["CreateUser"].isNull())
			apiCopilotThemeModelsItemObject.createUser = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["CreateUser"].asString();
		if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["ThemeId"].isNull())
			apiCopilotThemeModelsItemObject.themeId = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["ThemeId"].asString();
		if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["ThemeName"].isNull())
			apiCopilotThemeModelsItemObject.themeName = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["ThemeName"].asString();
		auto allApiCopilotLlmCubeModels1Node = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItem["ApiCopilotLlmCubeModels"]["ApiCopilotLlmCubeModelsItem"];
		for (auto resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem : allApiCopilotLlmCubeModels1Node)
		{
			Result::ApiCopilotThemeModelsItem::ApiCopilotLlmCubeModelsItem2 apiCopilotLlmCubeModels1Object;
			if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["Alias"].isNull())
				apiCopilotLlmCubeModels1Object.alias = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["Alias"].asString();
			if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["CreateUser"].isNull())
				apiCopilotLlmCubeModels1Object.createUser = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["CreateUser"].asString();
			if(!resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["LlmCubeId"].isNull())
				apiCopilotLlmCubeModels1Object.llmCubeId = resultNodeApiCopilotThemeModelsApiCopilotThemeModelsItemApiCopilotLlmCubeModelsApiCopilotLlmCubeModelsItem["LlmCubeId"].asString();
			apiCopilotThemeModelsItemObject.apiCopilotLlmCubeModels1.push_back(apiCopilotLlmCubeModels1Object);
		}
		result_.apiCopilotThemeModels.push_back(apiCopilotThemeModelsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDataRangeResult::getSuccess()const
{
	return success_;
}

QueryDataRangeResult::Result QueryDataRangeResult::getResult()const
{
	return result_;
}

