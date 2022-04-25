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

#include <alibabacloud/dataworks-public/model/ListTableThemeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTableThemeResult::ListTableThemeResult() :
	ServiceResult()
{}

ListTableThemeResult::ListTableThemeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTableThemeResult::~ListTableThemeResult()
{}

void ListTableThemeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allThemeListNode = dataNode["ThemeList"]["ThemeListItem"];
	for (auto dataNodeThemeListThemeListItem : allThemeListNode)
	{
		Data::ThemeListItem themeListItemObject;
		if(!dataNodeThemeListThemeListItem["CreateTimeStamp"].isNull())
			themeListItemObject.createTimeStamp = std::stol(dataNodeThemeListThemeListItem["CreateTimeStamp"].asString());
		if(!dataNodeThemeListThemeListItem["ParentId"].isNull())
			themeListItemObject.parentId = std::stol(dataNodeThemeListThemeListItem["ParentId"].asString());
		if(!dataNodeThemeListThemeListItem["ThemeId"].isNull())
			themeListItemObject.themeId = std::stol(dataNodeThemeListThemeListItem["ThemeId"].asString());
		if(!dataNodeThemeListThemeListItem["ProjectId"].isNull())
			themeListItemObject.projectId = std::stol(dataNodeThemeListThemeListItem["ProjectId"].asString());
		if(!dataNodeThemeListThemeListItem["Name"].isNull())
			themeListItemObject.name = dataNodeThemeListThemeListItem["Name"].asString();
		if(!dataNodeThemeListThemeListItem["Level"].isNull())
			themeListItemObject.level = std::stoi(dataNodeThemeListThemeListItem["Level"].asString());
		if(!dataNodeThemeListThemeListItem["Creator"].isNull())
			themeListItemObject.creator = dataNodeThemeListThemeListItem["Creator"].asString();
		data_.themeList.push_back(themeListItemObject);
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

int ListTableThemeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListTableThemeResult::Data ListTableThemeResult::getData()const
{
	return data_;
}

std::string ListTableThemeResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTableThemeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTableThemeResult::getSuccess()const
{
	return success_;
}

