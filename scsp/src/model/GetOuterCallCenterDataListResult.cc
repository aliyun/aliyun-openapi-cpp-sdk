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

#include <alibabacloud/scsp/model/GetOuterCallCenterDataListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetOuterCallCenterDataListResult::GetOuterCallCenterDataListResult() :
	ServiceResult()
{}

GetOuterCallCenterDataListResult::GetOuterCallCenterDataListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOuterCallCenterDataListResult::~GetOuterCallCenterDataListResult()
{}

void GetOuterCallCenterDataListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EndReason"].isNull())
			dataObject.endReason = valueDataDataItem["EndReason"].asString();
		if(!valueDataDataItem["CallType"].isNull())
			dataObject.callType = valueDataDataItem["CallType"].asString();
		if(!valueDataDataItem["Acid"].isNull())
			dataObject.acid = valueDataDataItem["Acid"].asString();
		if(!valueDataDataItem["ToPhoneNum"].isNull())
			dataObject.toPhoneNum = valueDataDataItem["ToPhoneNum"].asString();
		if(!valueDataDataItem["UserInfo"].isNull())
			dataObject.userInfo = valueDataDataItem["UserInfo"].asString();
		if(!valueDataDataItem["InterveneTime"].isNull())
			dataObject.interveneTime = valueDataDataItem["InterveneTime"].asString();
		if(!valueDataDataItem["BizId"].isNull())
			dataObject.bizId = valueDataDataItem["BizId"].asString();
		if(!valueDataDataItem["SessionId"].isNull())
			dataObject.sessionId = valueDataDataItem["SessionId"].asString();
		if(!valueDataDataItem["FromPhoneNum"].isNull())
			dataObject.fromPhoneNum = valueDataDataItem["FromPhoneNum"].asString();
		if(!valueDataDataItem["ExtInfo"].isNull())
			dataObject.extInfo = valueDataDataItem["ExtInfo"].asString();
		if(!valueDataDataItem["BizType"].isNull())
			dataObject.bizType = valueDataDataItem["BizType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());

}

std::string GetOuterCallCenterDataListResult::getMessage()const
{
	return message_;
}

long GetOuterCallCenterDataListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetOuterCallCenterDataListResult::DataItem> GetOuterCallCenterDataListResult::getData()const
{
	return data_;
}

std::string GetOuterCallCenterDataListResult::getCode()const
{
	return code_;
}

bool GetOuterCallCenterDataListResult::getSuccess()const
{
	return success_;
}

