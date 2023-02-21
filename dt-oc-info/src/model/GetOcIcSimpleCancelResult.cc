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

#include <alibabacloud/dt-oc-info/model/GetOcIcSimpleCancelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcSimpleCancelResult::GetOcIcSimpleCancelResult() :
	ServiceResult()
{}

GetOcIcSimpleCancelResult::GetOcIcSimpleCancelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcSimpleCancelResult::~GetOcIcSimpleCancelResult()
{}

void GetOcIcSimpleCancelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EntName"].isNull())
			dataObject.entName = valueDataDataItem["EntName"].asString();
		if(!valueDataDataItem["SocialCreditCode"].isNull())
			dataObject.socialCreditCode = valueDataDataItem["SocialCreditCode"].asString();
		if(!valueDataDataItem["Department"].isNull())
			dataObject.department = valueDataDataItem["Department"].asString();
		if(!valueDataDataItem["NoticePeriod"].isNull())
			dataObject.noticePeriod = valueDataDataItem["NoticePeriod"].asString();
		if(!valueDataDataItem["ScaProposer"].isNull())
			dataObject.scaProposer = valueDataDataItem["ScaProposer"].asString();
		if(!valueDataDataItem["ScaDate"].isNull())
			dataObject.scaDate = valueDataDataItem["ScaDate"].asString();
		if(!valueDataDataItem["ScaContent"].isNull())
			dataObject.scaContent = valueDataDataItem["ScaContent"].asString();
		if(!valueDataDataItem["ScaResult"].isNull())
			dataObject.scaResult = valueDataDataItem["ScaResult"].asString();
		if(!valueDataDataItem["ScaResultDate"].isNull())
			dataObject.scaResultDate = valueDataDataItem["ScaResultDate"].asString();
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

int GetOcIcSimpleCancelResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcSimpleCancelResult::getMessage()const
{
	return message_;
}

int GetOcIcSimpleCancelResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIcSimpleCancelResult::DataItem> GetOcIcSimpleCancelResult::getData()const
{
	return data_;
}

int GetOcIcSimpleCancelResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcSimpleCancelResult::getCode()const
{
	return code_;
}

bool GetOcIcSimpleCancelResult::getSuccess()const
{
	return success_;
}

