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

#include <alibabacloud/dyplsapi/model/CreatePickUpWaybillPreQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

CreatePickUpWaybillPreQueryResult::CreatePickUpWaybillPreQueryResult() :
	ServiceResult()
{}

CreatePickUpWaybillPreQueryResult::CreatePickUpWaybillPreQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePickUpWaybillPreQueryResult::~CreatePickUpWaybillPreQueryResult()
{}

void CreatePickUpWaybillPreQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["ErrorCode"].isNull())
		data_.errorCode = dataNode["ErrorCode"].asString();
	if(!dataNode["ErrorMsg"].isNull())
		data_.errorMsg = dataNode["ErrorMsg"].asString();
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto allCpTimeSelectListNode = dataNode["CpTimeSelectList"]["TdTimeSelect"];
	for (auto dataNodeCpTimeSelectListTdTimeSelect : allCpTimeSelectListNode)
	{
		Data::TdTimeSelect tdTimeSelectObject;
		if(!dataNodeCpTimeSelectListTdTimeSelect["PrePrice"].isNull())
			tdTimeSelectObject.prePrice = dataNodeCpTimeSelectListTdTimeSelect["PrePrice"].asString();
		auto allAppointTimesNode = dataNodeCpTimeSelectListTdTimeSelect["AppointTimes"]["TdAppointTimeDTO"];
		for (auto dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO : allAppointTimesNode)
		{
			Data::TdTimeSelect::TdAppointTimeDTO appointTimesObject;
			if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO["Date"].isNull())
				appointTimesObject.date = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO["Date"].asString();
			if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO["DateSelectable"].isNull())
				appointTimesObject.dateSelectable = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO["DateSelectable"].asString() == "true";
			auto allTimeListNode = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTO["TimeList"]["TdAppointTimeSlotDTO"];
			for (auto dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO : allTimeListNode)
			{
				Data::TdTimeSelect::TdAppointTimeDTO::TdAppointTimeSlotDTO timeListObject;
				if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["StartTime"].isNull())
					timeListObject.startTime = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["StartTime"].asString();
				if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["EndTime"].isNull())
					timeListObject.endTime = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["EndTime"].asString();
				if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["Selectable"].isNull())
					timeListObject.selectable = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["Selectable"].asString() == "true";
				if(!dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["SelectDisableTip"].isNull())
					timeListObject.selectDisableTip = dataNodeCpTimeSelectListTdTimeSelectAppointTimesTdAppointTimeDTOTimeListTdAppointTimeSlotDTO["SelectDisableTip"].asString();
				appointTimesObject.timeList.push_back(timeListObject);
			}
			tdTimeSelectObject.appointTimes.push_back(appointTimesObject);
		}
		auto realTimeNode = value["RealTime"];
		if(!realTimeNode["Name"].isNull())
			tdTimeSelectObject.realTime.name = realTimeNode["Name"].asString();
		if(!realTimeNode["Selectable"].isNull())
			tdTimeSelectObject.realTime.selectable = realTimeNode["Selectable"].asString() == "true";
		if(!realTimeNode["SelectDisableTip"].isNull())
			tdTimeSelectObject.realTime.selectDisableTip = realTimeNode["SelectDisableTip"].asString();
		data_.cpTimeSelectList.push_back(tdTimeSelectObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreatePickUpWaybillPreQueryResult::getMessage()const
{
	return message_;
}

int CreatePickUpWaybillPreQueryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreatePickUpWaybillPreQueryResult::Data CreatePickUpWaybillPreQueryResult::getData()const
{
	return data_;
}

