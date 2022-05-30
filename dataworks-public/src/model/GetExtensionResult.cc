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

#include <alibabacloud/dataworks-public/model/GetExtensionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetExtensionResult::GetExtensionResult() :
	ServiceResult()
{}

GetExtensionResult::GetExtensionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetExtensionResult::~GetExtensionResult()
{}

void GetExtensionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto extensionNode = value["Extension"];
	if(!extensionNode["ExtensionCode"].isNull())
		extension_.extensionCode = extensionNode["ExtensionCode"].asString();
	if(!extensionNode["ExtensionName"].isNull())
		extension_.extensionName = extensionNode["ExtensionName"].asString();
	if(!extensionNode["ExtensionDesc"].isNull())
		extension_.extensionDesc = extensionNode["ExtensionDesc"].asString();
	if(!extensionNode["HelpDocUrl"].isNull())
		extension_.helpDocUrl = extensionNode["HelpDocUrl"].asString();
	if(!extensionNode["Status"].isNull())
		extension_.status = std::stoi(extensionNode["Status"].asString());
	if(!extensionNode["ProjectTesting"].isNull())
		extension_.projectTesting = std::stol(extensionNode["ProjectTesting"].asString());
	if(!extensionNode["DetailUrl"].isNull())
		extension_.detailUrl = extensionNode["DetailUrl"].asString();
	if(!extensionNode["ParameterSetting"].isNull())
		extension_.parameterSetting = extensionNode["ParameterSetting"].asString();
	if(!extensionNode["OptionSetting"].isNull())
		extension_.optionSetting = extensionNode["OptionSetting"].asString();
	auto allBindEventListNode = extensionNode["BindEventList"]["BindEventListItem"];
	for (auto extensionNodeBindEventListBindEventListItem : allBindEventListNode)
	{
		Extension::BindEventListItem bindEventListItemObject;
		if(!extensionNodeBindEventListBindEventListItem["EventCode"].isNull())
			bindEventListItemObject.eventCode = extensionNodeBindEventListBindEventListItem["EventCode"].asString();
		if(!extensionNodeBindEventListBindEventListItem["EventName"].isNull())
			bindEventListItemObject.eventName = extensionNodeBindEventListBindEventListItem["EventName"].asString();
		extension_.bindEventList.push_back(bindEventListItemObject);
	}
	auto allEventCategoryListNode = extensionNode["EventCategoryList"]["EventCategoryListItem"];
	for (auto extensionNodeEventCategoryListEventCategoryListItem : allEventCategoryListNode)
	{
		Extension::EventCategoryListItem eventCategoryListItemObject;
		if(!extensionNodeEventCategoryListEventCategoryListItem["CategoryCode"].isNull())
			eventCategoryListItemObject.categoryCode = extensionNodeEventCategoryListEventCategoryListItem["CategoryCode"].asString();
		if(!extensionNodeEventCategoryListEventCategoryListItem["CategoryName"].isNull())
			eventCategoryListItemObject.categoryName = extensionNodeEventCategoryListEventCategoryListItem["CategoryName"].asString();
		extension_.eventCategoryList.push_back(eventCategoryListItemObject);
	}

}

GetExtensionResult::Extension GetExtensionResult::getExtension()const
{
	return extension_;
}

