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

#include <alibabacloud/linkvisual/model/QueryEventRecordPlanDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryEventRecordPlanDetailResult::QueryEventRecordPlanDetailResult() :
	ServiceResult()
{}

QueryEventRecordPlanDetailResult::QueryEventRecordPlanDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEventRecordPlanDetailResult::~QueryEventRecordPlanDetailResult()
{}

void QueryEventRecordPlanDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PreRecordDuration"].isNull())
		data_.preRecordDuration = std::stoi(dataNode["PreRecordDuration"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PlanId"].isNull())
		data_.planId = dataNode["PlanId"].asString();
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = dataNode["TemplateId"].asString();
	if(!dataNode["RecordDuration"].isNull())
		data_.recordDuration = std::stoi(dataNode["RecordDuration"].asString());
	auto templateInfoNode = dataNode["TemplateInfo"];
	if(!templateInfoNode["AllDay"].isNull())
		data_.templateInfo.allDay = std::stoi(templateInfoNode["AllDay"].asString());
	if(!templateInfoNode["Default"].isNull())
		data_.templateInfo._default = std::stoi(templateInfoNode["Default"].asString());
	if(!templateInfoNode["Name"].isNull())
		data_.templateInfo.name = templateInfoNode["Name"].asString();
	if(!templateInfoNode["TemplateId"].isNull())
		data_.templateInfo.templateId = templateInfoNode["TemplateId"].asString();
	auto allTimeSectionListNode = templateInfoNode["TimeSectionList"]["TimeSectionListItem"];
	for (auto templateInfoNodeTimeSectionListTimeSectionListItem : allTimeSectionListNode)
	{
		Data::TemplateInfo::TimeSectionListItem timeSectionListItemObject;
		if(!templateInfoNodeTimeSectionListTimeSectionListItem["End"].isNull())
			timeSectionListItemObject.end = std::stoi(templateInfoNodeTimeSectionListTimeSectionListItem["End"].asString());
		if(!templateInfoNodeTimeSectionListTimeSectionListItem["DayOfWeek"].isNull())
			timeSectionListItemObject.dayOfWeek = std::stoi(templateInfoNodeTimeSectionListTimeSectionListItem["DayOfWeek"].asString());
		if(!templateInfoNodeTimeSectionListTimeSectionListItem["Begin"].isNull())
			timeSectionListItemObject.begin = std::stoi(templateInfoNodeTimeSectionListTimeSectionListItem["Begin"].asString());
		data_.templateInfo.timeSectionList.push_back(timeSectionListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryEventRecordPlanDetailResult::Data QueryEventRecordPlanDetailResult::getData()const
{
	return data_;
}

std::string QueryEventRecordPlanDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryEventRecordPlanDetailResult::getCode()const
{
	return code_;
}

bool QueryEventRecordPlanDetailResult::getSuccess()const
{
	return success_;
}

