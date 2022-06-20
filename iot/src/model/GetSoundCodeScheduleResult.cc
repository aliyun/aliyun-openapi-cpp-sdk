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

#include <alibabacloud/iot/model/GetSoundCodeScheduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetSoundCodeScheduleResult::GetSoundCodeScheduleResult() :
	ServiceResult()
{}

GetSoundCodeScheduleResult::GetSoundCodeScheduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSoundCodeScheduleResult::~GetSoundCodeScheduleResult()
{}

void GetSoundCodeScheduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ScheduleCode"].isNull())
		data_.scheduleCode = dataNode["ScheduleCode"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = dataNode["StartTime"].asString();
	if(!dataNode["EndTime"].isNull())
		data_.endTime = dataNode["EndTime"].asString();
	if(!dataNode["StartDate"].isNull())
		data_.startDate = dataNode["StartDate"].asString();
	if(!dataNode["EndDate"].isNull())
		data_.endDate = dataNode["EndDate"].asString();
	if(!dataNode["OpenType"].isNull())
		data_.openType = dataNode["OpenType"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetSoundCodeScheduleResult::Data GetSoundCodeScheduleResult::getData()const
{
	return data_;
}

std::string GetSoundCodeScheduleResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetSoundCodeScheduleResult::getCode()const
{
	return code_;
}

bool GetSoundCodeScheduleResult::getSuccess()const
{
	return success_;
}

