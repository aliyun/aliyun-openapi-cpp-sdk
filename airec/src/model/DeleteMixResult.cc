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

#include <alibabacloud/airec/model/DeleteMixResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DeleteMixResult::DeleteMixResult() :
	ServiceResult()
{}

DeleteMixResult::DeleteMixResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMixResult::~DeleteMixResult()
{}

void DeleteMixResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto _parameterNode = resultNode["Parameter"];
	auto allSettingsNode = _parameterNode["Settings"]["SettingsItem"];
	for (auto _parameterNodeSettingsSettingsItem : allSettingsNode)
	{
		Result::_Parameter::SettingsItem settingsItemObject;
		if(!_parameterNodeSettingsSettingsItem["Name"].isNull())
			settingsItemObject.name = _parameterNodeSettingsSettingsItem["Name"].asString();
		if(!_parameterNodeSettingsSettingsItem["Value"].isNull())
			settingsItemObject.value = _parameterNodeSettingsSettingsItem["Value"].asString();
		result_._parameter.settings.push_back(settingsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DeleteMixResult::getMessage()const
{
	return message_;
}

std::string DeleteMixResult::getCode()const
{
	return code_;
}

DeleteMixResult::Result DeleteMixResult::getResult()const
{
	return result_;
}

