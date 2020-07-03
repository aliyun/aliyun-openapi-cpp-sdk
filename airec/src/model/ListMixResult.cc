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

#include <alibabacloud/airec/model/ListMixResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListMixResult::ListMixResult() :
	ServiceResult()
{}

ListMixResult::ListMixResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMixResult::~ListMixResult()
{}

void ListMixResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultResultItem["GmtCreate"].asString();
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = valueResultResultItem["GmtModified"].asString();
		auto _parameterNode = value["Parameter"];
		auto allSettingsNode = _parameterNode["Settings"]["SettingsItem"];
		for (auto _parameterNodeSettingsSettingsItem : allSettingsNode)
		{
			ResultItem::_Parameter::SettingsItem settingsItemObject;
			if(!_parameterNodeSettingsSettingsItem["Name"].isNull())
				settingsItemObject.name = _parameterNodeSettingsSettingsItem["Name"].asString();
			if(!_parameterNodeSettingsSettingsItem["Value"].isNull())
				settingsItemObject.value = std::stoi(_parameterNodeSettingsSettingsItem["Value"].asString());
			resultObject._parameter.settings.push_back(settingsItemObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListMixResult::getMessage()const
{
	return message_;
}

std::string ListMixResult::getCode()const
{
	return code_;
}

std::vector<ListMixResult::ResultItem> ListMixResult::getResult()const
{
	return result_;
}

