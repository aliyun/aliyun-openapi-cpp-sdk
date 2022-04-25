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

#include <alibabacloud/dataworks-public/model/GetMetaTableThemeLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableThemeLevelResult::GetMetaTableThemeLevelResult() :
	ServiceResult()
{}

GetMetaTableThemeLevelResult::GetMetaTableThemeLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableThemeLevelResult::~GetMetaTableThemeLevelResult()
{}

void GetMetaTableThemeLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto entityNode = value["Entity"];
	auto allThemeNode = entityNode["Theme"]["ThemeItem"];
	for (auto entityNodeThemeThemeItem : allThemeNode)
	{
		Entity::ThemeItem themeItemObject;
		if(!entityNodeThemeThemeItem["ParentId"].isNull())
			themeItemObject.parentId = std::stol(entityNodeThemeThemeItem["ParentId"].asString());
		if(!entityNodeThemeThemeItem["Name"].isNull())
			themeItemObject.name = entityNodeThemeThemeItem["Name"].asString();
		if(!entityNodeThemeThemeItem["ThemeId"].isNull())
			themeItemObject.themeId = std::stol(entityNodeThemeThemeItem["ThemeId"].asString());
		if(!entityNodeThemeThemeItem["Level"].isNull())
			themeItemObject.level = std::stoi(entityNodeThemeThemeItem["Level"].asString());
		entity_.theme.push_back(themeItemObject);
	}
	auto allLevelNode = entityNode["Level"]["LevelItem"];
	for (auto entityNodeLevelLevelItem : allLevelNode)
	{
		Entity::LevelItem levelItemObject;
		if(!entityNodeLevelLevelItem["Type"].isNull())
			levelItemObject.type = std::stoi(entityNodeLevelLevelItem["Type"].asString());
		if(!entityNodeLevelLevelItem["Description"].isNull())
			levelItemObject.description = entityNodeLevelLevelItem["Description"].asString();
		if(!entityNodeLevelLevelItem["Name"].isNull())
			levelItemObject.name = entityNodeLevelLevelItem["Name"].asString();
		if(!entityNodeLevelLevelItem["LevelId"].isNull())
			levelItemObject.levelId = std::stol(entityNodeLevelLevelItem["LevelId"].asString());
		entity_.level.push_back(levelItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetMetaTableThemeLevelResult::Entity GetMetaTableThemeLevelResult::getEntity()const
{
	return entity_;
}

int GetMetaTableThemeLevelResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetMetaTableThemeLevelResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableThemeLevelResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableThemeLevelResult::getSuccess()const
{
	return success_;
}

