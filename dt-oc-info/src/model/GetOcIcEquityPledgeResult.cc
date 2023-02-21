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

#include <alibabacloud/dt-oc-info/model/GetOcIcEquityPledgeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIcEquityPledgeResult::GetOcIcEquityPledgeResult() :
	ServiceResult()
{}

GetOcIcEquityPledgeResult::GetOcIcEquityPledgeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIcEquityPledgeResult::~GetOcIcEquityPledgeResult()
{}

void GetOcIcEquityPledgeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Number"].isNull())
			dataObject.number = valueDataDataItem["Number"].asString();
		if(!valueDataDataItem["Pledgor"].isNull())
			dataObject.pledgor = valueDataDataItem["Pledgor"].asString();
		if(!valueDataDataItem["RelatedComp"].isNull())
			dataObject.relatedComp = valueDataDataItem["RelatedComp"].asString();
		if(!valueDataDataItem["Pawnee"].isNull())
			dataObject.pawnee = valueDataDataItem["Pawnee"].asString();
		if(!valueDataDataItem["RegDate"].isNull())
			dataObject.regDate = valueDataDataItem["RegDate"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["PledgorAmount"].isNull())
			dataObject.pledgorAmount = valueDataDataItem["PledgorAmount"].asString();
		if(!valueDataDataItem["PawneeIdentifyNo"].isNull())
			dataObject.pawneeIdentifyNo = valueDataDataItem["PawneeIdentifyNo"].asString();
		if(!valueDataDataItem["PledgorIdentifyNo"].isNull())
			dataObject.pledgorIdentifyNo = valueDataDataItem["PledgorIdentifyNo"].asString();
		if(!valueDataDataItem["PublicDate"].isNull())
			dataObject.publicDate = valueDataDataItem["PublicDate"].asString();
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

int GetOcIcEquityPledgeResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIcEquityPledgeResult::getMessage()const
{
	return message_;
}

int GetOcIcEquityPledgeResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIcEquityPledgeResult::DataItem> GetOcIcEquityPledgeResult::getData()const
{
	return data_;
}

int GetOcIcEquityPledgeResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIcEquityPledgeResult::getCode()const
{
	return code_;
}

bool GetOcIcEquityPledgeResult::getSuccess()const
{
	return success_;
}

