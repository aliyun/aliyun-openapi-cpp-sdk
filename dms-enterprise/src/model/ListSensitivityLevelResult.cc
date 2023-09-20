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

#include <alibabacloud/dms-enterprise/model/ListSensitivityLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSensitivityLevelResult::ListSensitivityLevelResult() :
	ServiceResult()
{}

ListSensitivityLevelResult::ListSensitivityLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSensitivityLevelResult::~ListSensitivityLevelResult()
{}

void ListSensitivityLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitivityLevelListNode = value["SensitivityLevelList"]["SensitivityLevelListItem"];
	for (auto valueSensitivityLevelListSensitivityLevelListItem : allSensitivityLevelListNode)
	{
		SensitivityLevelListItem sensitivityLevelListObject;
		if(!valueSensitivityLevelListSensitivityLevelListItem["Name"].isNull())
			sensitivityLevelListObject.name = valueSensitivityLevelListSensitivityLevelListItem["Name"].asString();
		if(!valueSensitivityLevelListSensitivityLevelListItem["TemplateId"].isNull())
			sensitivityLevelListObject.templateId = valueSensitivityLevelListSensitivityLevelListItem["TemplateId"].asString();
		if(!valueSensitivityLevelListSensitivityLevelListItem["TemplateType"].isNull())
			sensitivityLevelListObject.templateType = valueSensitivityLevelListSensitivityLevelListItem["TemplateType"].asString();
		if(!valueSensitivityLevelListSensitivityLevelListItem["IsPlain"].isNull())
			sensitivityLevelListObject.isPlain = valueSensitivityLevelListSensitivityLevelListItem["IsPlain"].asString() == "true";
		sensitivityLevelList_.push_back(sensitivityLevelListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListSensitivityLevelResult::SensitivityLevelListItem> ListSensitivityLevelResult::getSensitivityLevelList()const
{
	return sensitivityLevelList_;
}

std::string ListSensitivityLevelResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSensitivityLevelResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSensitivityLevelResult::getSuccess()const
{
	return success_;
}

