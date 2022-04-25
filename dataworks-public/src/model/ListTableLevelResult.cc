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

#include <alibabacloud/dataworks-public/model/ListTableLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTableLevelResult::ListTableLevelResult() :
	ServiceResult()
{}

ListTableLevelResult::ListTableLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTableLevelResult::~ListTableLevelResult()
{}

void ListTableLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableLevelInfoNode = value["TableLevelInfo"];
	if(!tableLevelInfoNode["TotalCount"].isNull())
		tableLevelInfo_.totalCount = std::stol(tableLevelInfoNode["TotalCount"].asString());
	auto allLevelListNode = tableLevelInfoNode["LevelList"]["LevelListItem"];
	for (auto tableLevelInfoNodeLevelListLevelListItem : allLevelListNode)
	{
		TableLevelInfo::LevelListItem levelListItemObject;
		if(!tableLevelInfoNodeLevelListLevelListItem["LevelType"].isNull())
			levelListItemObject.levelType = std::stoi(tableLevelInfoNodeLevelListLevelListItem["LevelType"].asString());
		if(!tableLevelInfoNodeLevelListLevelListItem["Description"].isNull())
			levelListItemObject.description = tableLevelInfoNodeLevelListLevelListItem["Description"].asString();
		if(!tableLevelInfoNodeLevelListLevelListItem["Name"].isNull())
			levelListItemObject.name = tableLevelInfoNodeLevelListLevelListItem["Name"].asString();
		if(!tableLevelInfoNodeLevelListLevelListItem["ProjectId"].isNull())
			levelListItemObject.projectId = std::stol(tableLevelInfoNodeLevelListLevelListItem["ProjectId"].asString());
		if(!tableLevelInfoNodeLevelListLevelListItem["LevelId"].isNull())
			levelListItemObject.levelId = std::stol(tableLevelInfoNodeLevelListLevelListItem["LevelId"].asString());
		tableLevelInfo_.levelList.push_back(levelListItemObject);
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

ListTableLevelResult::TableLevelInfo ListTableLevelResult::getTableLevelInfo()const
{
	return tableLevelInfo_;
}

int ListTableLevelResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListTableLevelResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTableLevelResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTableLevelResult::getSuccess()const
{
	return success_;
}

