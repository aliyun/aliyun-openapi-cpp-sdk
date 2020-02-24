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

#include <alibabacloud/voicenavigator/model/ListNavigationScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListNavigationScriptsResult::ListNavigationScriptsResult() :
	ServiceResult()
{}

ListNavigationScriptsResult::ListNavigationScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNavigationScriptsResult::~ListNavigationScriptsResult()
{}

void ListNavigationScriptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNavigationScriptsNode = value["NavigationScripts"]["NavigationScript"];
	for (auto valueNavigationScriptsNavigationScript : allNavigationScriptsNode)
	{
		NavigationScript navigationScriptsObject;
		if(!valueNavigationScriptsNavigationScript["NavigationScriptId"].isNull())
			navigationScriptsObject.navigationScriptId = valueNavigationScriptsNavigationScript["NavigationScriptId"].asString();
		if(!valueNavigationScriptsNavigationScript["Title"].isNull())
			navigationScriptsObject.title = valueNavigationScriptsNavigationScript["Title"].asString();
		if(!valueNavigationScriptsNavigationScript["ModifyTime"].isNull())
			navigationScriptsObject.modifyTime = std::stol(valueNavigationScriptsNavigationScript["ModifyTime"].asString());
		if(!valueNavigationScriptsNavigationScript["Type"].isNull())
			navigationScriptsObject.type = valueNavigationScriptsNavigationScript["Type"].asString();
		navigationScripts_.push_back(navigationScriptsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long ListNavigationScriptsResult::getTotalCount()const
{
	return totalCount_;
}

int ListNavigationScriptsResult::getPageSize()const
{
	return pageSize_;
}

int ListNavigationScriptsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListNavigationScriptsResult::NavigationScript> ListNavigationScriptsResult::getNavigationScripts()const
{
	return navigationScripts_;
}

