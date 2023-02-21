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

#include <alibabacloud/dt-oc-info/model/GetOcIcEquityFrozenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcEquityFrozenResult::GetOcIcEquityFrozenResult() :
	ServiceResult()
{}

GetOcIcEquityFrozenResult::GetOcIcEquityFrozenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcEquityFrozenResult::~GetOcIcEquityFrozenResult()
{}

void GetOcIcEquityFrozenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["FreezeExecPerson"].isNull())
			dataObject.freezeExecPerson = valueDataDataItem["FreezeExecPerson"].asString();
		if(!valueDataDataItem["FreezeAmount"].isNull())
			dataObject.freezeAmount = valueDataDataItem["FreezeAmount"].asString();
		if(!valueDataDataItem["FreezeCourt"].isNull())
			dataObject.freezeCourt = valueDataDataItem["FreezeCourt"].asString();
		if(!valueDataDataItem["FreezeNoticeNum"].isNull())
			dataObject.freezeNoticeNum = valueDataDataItem["FreezeNoticeNum"].asString();
		if(!valueDataDataItem["FreezePublishDate"].isNull())
			dataObject.freezePublishDate = valueDataDataItem["FreezePublishDate"].asString();
		if(!valueDataDataItem["FreezeCardType"].isNull())
			dataObject.freezeCardType = valueDataDataItem["FreezeCardType"].asString();
		if(!valueDataDataItem["FreezeCardNum"].isNull())
			dataObject.freezeCardNum = valueDataDataItem["FreezeCardNum"].asString();
		if(!valueDataDataItem["FreezeExecItem"].isNull())
			dataObject.freezeExecItem = valueDataDataItem["FreezeExecItem"].asString();
		if(!valueDataDataItem["FreezeStartDate"].isNull())
			dataObject.freezeStartDate = valueDataDataItem["FreezeStartDate"].asString();
		if(!valueDataDataItem["FreezeEndDate"].isNull())
			dataObject.freezeEndDate = valueDataDataItem["FreezeEndDate"].asString();
		if(!valueDataDataItem["UnfreezeCourt"].isNull())
			dataObject.unfreezeCourt = valueDataDataItem["UnfreezeCourt"].asString();
		if(!valueDataDataItem["UnfreezeAdjustNum"].isNull())
			dataObject.unfreezeAdjustNum = valueDataDataItem["UnfreezeAdjustNum"].asString();
		if(!valueDataDataItem["UnfreezeReason"].isNull())
			dataObject.unfreezeReason = valueDataDataItem["UnfreezeReason"].asString();
		if(!valueDataDataItem["UnfreezeDate"].isNull())
			dataObject.unfreezeDate = valueDataDataItem["UnfreezeDate"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());

}

int GetOcIcEquityFrozenResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcEquityFrozenResult::getMessage()const
{
	return message_;
}

int GetOcIcEquityFrozenResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIcEquityFrozenResult::DataItem> GetOcIcEquityFrozenResult::getData()const
{
	return data_;
}

int GetOcIcEquityFrozenResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcEquityFrozenResult::getCode()const
{
	return code_;
}

bool GetOcIcEquityFrozenResult::getSuccess()const
{
	return success_;
}

