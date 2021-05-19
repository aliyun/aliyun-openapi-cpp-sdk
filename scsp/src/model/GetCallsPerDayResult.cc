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

#include <alibabacloud/scsp/model/GetCallsPerDayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetCallsPerDayResult::GetCallsPerDayResult() :
	ServiceResult()
{}

GetCallsPerDayResult::GetCallsPerDayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCallsPerDayResult::~GetCallsPerDayResult()
{}

void GetCallsPerDayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalNum"].isNull())
		data_.totalNum = std::stol(dataNode["TotalNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = dataNode["PageNo"].asString();
	auto allCallsPerdayResponseListNode = dataNode["CallsPerdayResponseList"]["CallsPerdayResponseListItem"];
	for (auto dataNodeCallsPerdayResponseListCallsPerdayResponseListItem : allCallsPerdayResponseListNode)
	{
		Data::CallsPerdayResponseListItem callsPerdayResponseListItemObject;
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["DataId"].isNull())
			callsPerdayResponseListItemObject.dataId = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["DataId"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["HourId"].isNull())
			callsPerdayResponseListItemObject.hourId = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["HourId"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["TenantId"].isNull())
			callsPerdayResponseListItemObject.tenantId = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["TenantId"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["TenantName"].isNull())
			callsPerdayResponseListItemObject.tenantName = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["TenantName"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["PhoneNum"].isNull())
			callsPerdayResponseListItemObject.phoneNum = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["PhoneNum"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["CallOutCnt"].isNull())
			callsPerdayResponseListItemObject.callOutCnt = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["CallOutCnt"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["CallInCnt"].isNull())
			callsPerdayResponseListItemObject.callInCnt = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["CallInCnt"].asString();
		if(!dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["MinuteId"].isNull())
			callsPerdayResponseListItemObject.minuteId = dataNodeCallsPerdayResponseListCallsPerdayResponseListItem["MinuteId"].asString();
		data_.callsPerdayResponseList.push_back(callsPerdayResponseListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string GetCallsPerDayResult::getMessage()const
{
	return message_;
}

GetCallsPerDayResult::Data GetCallsPerDayResult::getData()const
{
	return data_;
}

std::string GetCallsPerDayResult::getCode()const
{
	return code_;
}

std::string GetCallsPerDayResult::getSuccess()const
{
	return success_;
}

