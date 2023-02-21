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

#include <alibabacloud/dt-oc-info/model/GetOcOperationBiddingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcOperationBiddingResult::GetOcOperationBiddingResult() :
	ServiceResult()
{}

GetOcOperationBiddingResult::GetOcOperationBiddingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcOperationBiddingResult::~GetOcOperationBiddingResult()
{}

void GetOcOperationBiddingResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["BidTitle"].isNull())
			dataObject.bidTitle = valueDataDataItem["BidTitle"].asString();
		if(!valueDataDataItem["BidType"].isNull())
			dataObject.bidType = valueDataDataItem["BidType"].asString();
		if(!valueDataDataItem["RegionName"].isNull())
			dataObject.regionName = valueDataDataItem["RegionName"].asString();
		if(!valueDataDataItem["BidIndustry"].isNull())
			dataObject.bidIndustry = valueDataDataItem["BidIndustry"].asString();
		if(!valueDataDataItem["PublicDate"].isNull())
			dataObject.publicDate = valueDataDataItem["PublicDate"].asString();
		if(!valueDataDataItem["ProjectNum"].isNull())
			dataObject.projectNum = valueDataDataItem["ProjectNum"].asString();
		if(!valueDataDataItem["ProjectName"].isNull())
			dataObject.projectName = valueDataDataItem["ProjectName"].asString();
		if(!valueDataDataItem["ProjectAmount"].isNull())
			dataObject.projectAmount = valueDataDataItem["ProjectAmount"].asString();
		if(!valueDataDataItem["TenderEntName"].isNull())
			dataObject.tenderEntName = valueDataDataItem["TenderEntName"].asString();
		if(!valueDataDataItem["AgentEntName"].isNull())
			dataObject.agentEntName = valueDataDataItem["AgentEntName"].asString();
		if(!valueDataDataItem["WinnerEntName"].isNull())
			dataObject.winnerEntName = valueDataDataItem["WinnerEntName"].asString();
		if(!valueDataDataItem["Content"].isNull())
			dataObject.content = valueDataDataItem["Content"].asString();
		if(!valueDataDataItem["InfoType"].isNull())
			dataObject.infoType = valueDataDataItem["InfoType"].asString();
		if(!valueDataDataItem["SubType"].isNull())
			dataObject.subType = valueDataDataItem["SubType"].asString();
		if(!valueDataDataItem["OpeningTime"].isNull())
			dataObject.openingTime = valueDataDataItem["OpeningTime"].asString();
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

int GetOcOperationBiddingResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcOperationBiddingResult::getMessage()const
{
	return message_;
}

int GetOcOperationBiddingResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcOperationBiddingResult::DataItem> GetOcOperationBiddingResult::getData()const
{
	return data_;
}

int GetOcOperationBiddingResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcOperationBiddingResult::getCode()const
{
	return code_;
}

bool GetOcOperationBiddingResult::getSuccess()const
{
	return success_;
}

