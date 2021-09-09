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

#include <alibabacloud/companyreg/model/GetTaxationCalendarResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetTaxationCalendarResult::GetTaxationCalendarResult() :
	ServiceResult()
{}

GetTaxationCalendarResult::GetTaxationCalendarResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaxationCalendarResult::~GetTaxationCalendarResult()
{}

void GetTaxationCalendarResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCalendarListNode = value["CalendarList"]["CalendarListItem"];
	for (auto valueCalendarListCalendarListItem : allCalendarListNode)
	{
		CalendarListItem calendarListObject;
		if(!valueCalendarListCalendarListItem["DeclareEndDate"].isNull())
			calendarListObject.declareEndDate = valueCalendarListCalendarListItem["DeclareEndDate"].asString();
		if(!valueCalendarListCalendarListItem["DeclareProgress"].isNull())
			calendarListObject.declareProgress = valueCalendarListCalendarListItem["DeclareProgress"].asString();
		if(!valueCalendarListCalendarListItem["DeclareStartDate"].isNull())
			calendarListObject.declareStartDate = valueCalendarListCalendarListItem["DeclareStartDate"].asString();
		if(!valueCalendarListCalendarListItem["Period"].isNull())
			calendarListObject.period = valueCalendarListCalendarListItem["Period"].asString();
		if(!valueCalendarListCalendarListItem["UserTaxStartDate"].isNull())
			calendarListObject.userTaxStartDate = valueCalendarListCalendarListItem["UserTaxStartDate"].asString();
		if(!valueCalendarListCalendarListItem["UserTaxEndDate"].isNull())
			calendarListObject.userTaxEndDate = valueCalendarListCalendarListItem["UserTaxEndDate"].asString();
		if(!valueCalendarListCalendarListItem["BookkeepingStartDate"].isNull())
			calendarListObject.bookkeepingStartDate = valueCalendarListCalendarListItem["BookkeepingStartDate"].asString();
		if(!valueCalendarListCalendarListItem["BookkeepingEndDate"].isNull())
			calendarListObject.bookkeepingEndDate = valueCalendarListCalendarListItem["BookkeepingEndDate"].asString();
		if(!valueCalendarListCalendarListItem["IsCanBookkeeping"].isNull())
			calendarListObject.isCanBookkeeping = valueCalendarListCalendarListItem["IsCanBookkeeping"].asString() == "true";
		calendarList_.push_back(calendarListObject);
	}

}

std::vector<GetTaxationCalendarResult::CalendarListItem> GetTaxationCalendarResult::getCalendarList()const
{
	return calendarList_;
}

