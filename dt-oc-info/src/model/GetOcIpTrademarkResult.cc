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

#include <alibabacloud/dt-oc-info/model/GetOcIpTrademarkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIpTrademarkResult::GetOcIpTrademarkResult() :
	ServiceResult()
{}

GetOcIpTrademarkResult::GetOcIpTrademarkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIpTrademarkResult::~GetOcIpTrademarkResult()
{}

void GetOcIpTrademarkResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["TrademarkName"].isNull())
			dataObject.trademarkName = valueDataDataItem["TrademarkName"].asString();
		if(!valueDataDataItem["RegNum"].isNull())
			dataObject.regNum = valueDataDataItem["RegNum"].asString();
		if(!valueDataDataItem["TrademarkType"].isNull())
			dataObject.trademarkType = valueDataDataItem["TrademarkType"].asString();
		if(!valueDataDataItem["TrademarkForm"].isNull())
			dataObject.trademarkForm = valueDataDataItem["TrademarkForm"].asString();
		if(!valueDataDataItem["TrademarkStatus"].isNull())
			dataObject.trademarkStatus = valueDataDataItem["TrademarkStatus"].asString();
		if(!valueDataDataItem["ApplyDate"].isNull())
			dataObject.applyDate = valueDataDataItem["ApplyDate"].asString();
		if(!valueDataDataItem["ImageUrl"].isNull())
			dataObject.imageUrl = valueDataDataItem["ImageUrl"].asString();
		if(!valueDataDataItem["TypeName"].isNull())
			dataObject.typeName = valueDataDataItem["TypeName"].asString();
		if(!valueDataDataItem["Period"].isNull())
			dataObject.period = valueDataDataItem["Period"].asString();
		if(!valueDataDataItem["Agent"].isNull())
			dataObject.agent = valueDataDataItem["Agent"].asString();
		if(!valueDataDataItem["RegPubNo"].isNull())
			dataObject.regPubNo = valueDataDataItem["RegPubNo"].asString();
		if(!valueDataDataItem["RegPubDate"].isNull())
			dataObject.regPubDate = valueDataDataItem["RegPubDate"].asString();
		if(!valueDataDataItem["FirstPubNo"].isNull())
			dataObject.firstPubNo = valueDataDataItem["FirstPubNo"].asString();
		if(!valueDataDataItem["FirstPubDate"].isNull())
			dataObject.firstPubDate = valueDataDataItem["FirstPubDate"].asString();
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

int GetOcIpTrademarkResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIpTrademarkResult::getMessage()const
{
	return message_;
}

int GetOcIpTrademarkResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIpTrademarkResult::DataItem> GetOcIpTrademarkResult::getData()const
{
	return data_;
}

int GetOcIpTrademarkResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIpTrademarkResult::getCode()const
{
	return code_;
}

bool GetOcIpTrademarkResult::getSuccess()const
{
	return success_;
}

