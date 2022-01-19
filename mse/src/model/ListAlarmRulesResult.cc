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

#include <alibabacloud/mse/model/ListAlarmRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAlarmRulesResult::ListAlarmRulesResult() :
	ServiceResult()
{}

ListAlarmRulesResult::ListAlarmRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlarmRulesResult::~ListAlarmRulesResult()
{}

void ListAlarmRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AlarmRuleModel"];
	for (auto valueDataAlarmRuleModel : allDataNode)
	{
		AlarmRuleModel dataObject;
		if(!valueDataAlarmRuleModel["AlarmStatus"].isNull())
			dataObject.alarmStatus = valueDataAlarmRuleModel["AlarmStatus"].asString();
		if(!valueDataAlarmRuleModel["AlarmRuleId"].isNull())
			dataObject.alarmRuleId = valueDataAlarmRuleModel["AlarmRuleId"].asString();
		if(!valueDataAlarmRuleModel["CreateTime"].isNull())
			dataObject.createTime = valueDataAlarmRuleModel["CreateTime"].asString();
		if(!valueDataAlarmRuleModel["AlarmRuleDetail"].isNull())
			dataObject.alarmRuleDetail = valueDataAlarmRuleModel["AlarmRuleDetail"].asString();
		if(!valueDataAlarmRuleModel["AlarmName"].isNull())
			dataObject.alarmName = valueDataAlarmRuleModel["AlarmName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAlarmRulesResult::getHttpCode()const
{
	return httpCode_;
}

int ListAlarmRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAlarmRulesResult::getMessage()const
{
	return message_;
}

int ListAlarmRulesResult::getPageSize()const
{
	return pageSize_;
}

int ListAlarmRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAlarmRulesResult::AlarmRuleModel> ListAlarmRulesResult::getData()const
{
	return data_;
}

std::string ListAlarmRulesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListAlarmRulesResult::getSuccess()const
{
	return success_;
}

