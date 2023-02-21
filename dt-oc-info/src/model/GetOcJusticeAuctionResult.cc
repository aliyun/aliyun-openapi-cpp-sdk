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

#include <alibabacloud/dt-oc-info/model/GetOcJusticeAuctionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcJusticeAuctionResult::GetOcJusticeAuctionResult() :
	ServiceResult()
{}

GetOcJusticeAuctionResult::GetOcJusticeAuctionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcJusticeAuctionResult::~GetOcJusticeAuctionResult()
{}

void GetOcJusticeAuctionResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["AuctionName"].isNull())
			dataObject.auctionName = valueDataDataItem["AuctionName"].asString();
		if(!valueDataDataItem["Court"].isNull())
			dataObject.court = valueDataDataItem["Court"].asString();
		if(!valueDataDataItem["AuctionDate"].isNull())
			dataObject.auctionDate = valueDataDataItem["AuctionDate"].asString();
		if(!valueDataDataItem["StartPrice"].isNull())
			dataObject.startPrice = valueDataDataItem["StartPrice"].asString();
		if(!valueDataDataItem["EstPrice"].isNull())
			dataObject.estPrice = valueDataDataItem["EstPrice"].asString();
		if(!valueDataDataItem["Owner"].isNull())
			dataObject.owner = valueDataDataItem["Owner"].asString();
		if(!valueDataDataItem["Restrict"].isNull())
			dataObject.restrict = valueDataDataItem["Restrict"].asString();
		if(!valueDataDataItem["Certificate"].isNull())
			dataObject.certificate = valueDataDataItem["Certificate"].asString();
		if(!valueDataDataItem["Document"].isNull())
			dataObject.document = valueDataDataItem["Document"].asString();
		if(!valueDataDataItem["Basis"].isNull())
			dataObject.basis = valueDataDataItem["Basis"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
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

int GetOcJusticeAuctionResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcJusticeAuctionResult::getMessage()const
{
	return message_;
}

int GetOcJusticeAuctionResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcJusticeAuctionResult::DataItem> GetOcJusticeAuctionResult::getData()const
{
	return data_;
}

int GetOcJusticeAuctionResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcJusticeAuctionResult::getCode()const
{
	return code_;
}

bool GetOcJusticeAuctionResult::getSuccess()const
{
	return success_;
}

