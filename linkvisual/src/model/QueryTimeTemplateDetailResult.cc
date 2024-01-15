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

#include <alibabacloud/linkvisual/model/QueryTimeTemplateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryTimeTemplateDetailResult::QueryTimeTemplateDetailResult() :
	ServiceResult()
{}

QueryTimeTemplateDetailResult::QueryTimeTemplateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTimeTemplateDetailResult::~QueryTimeTemplateDetailResult()
{}

void QueryTimeTemplateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AllDay"].isNull())
		data_.allDay = std::stoi(dataNode["AllDay"].asString());
	if(!dataNode["Default"].isNull())
		data_._default = std::stoi(dataNode["Default"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = dataNode["TemplateId"].asString();
	auto allTimeSectionListNode = dataNode["TimeSectionList"]["TimeSectionListItem"];
	for (auto dataNodeTimeSectionListTimeSectionListItem : allTimeSectionListNode)
	{
		Data::TimeSectionListItem timeSectionListItemObject;
		if(!dataNodeTimeSectionListTimeSectionListItem["End"].isNull())
			timeSectionListItemObject.end = std::stoi(dataNodeTimeSectionListTimeSectionListItem["End"].asString());
		if(!dataNodeTimeSectionListTimeSectionListItem["DayOfWeek"].isNull())
			timeSectionListItemObject.dayOfWeek = std::stoi(dataNodeTimeSectionListTimeSectionListItem["DayOfWeek"].asString());
		if(!dataNodeTimeSectionListTimeSectionListItem["Begin"].isNull())
			timeSectionListItemObject.begin = std::stoi(dataNodeTimeSectionListTimeSectionListItem["Begin"].asString());
		data_.timeSectionList.push_back(timeSectionListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryTimeTemplateDetailResult::Data QueryTimeTemplateDetailResult::getData()const
{
	return data_;
}

std::string QueryTimeTemplateDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryTimeTemplateDetailResult::getCode()const
{
	return code_;
}

bool QueryTimeTemplateDetailResult::getSuccess()const
{
	return success_;
}

