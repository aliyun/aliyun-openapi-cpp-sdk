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

#include <alibabacloud/bssopenapi/model/QuerySkuPriceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QuerySkuPriceListResult::QuerySkuPriceListResult() :
	ServiceResult()
{}

QuerySkuPriceListResult::QuerySkuPriceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySkuPriceListResult::~QuerySkuPriceListResult()
{}

void QuerySkuPriceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto skuPricePageNode = dataNode["SkuPricePage"];
	if(!skuPricePageNode["TotalCount"].isNull())
		data_.skuPricePage.totalCount = std::stoi(skuPricePageNode["TotalCount"].asString());
	if(!skuPricePageNode["NextPageToken"].isNull())
		data_.skuPricePage.nextPageToken = skuPricePageNode["NextPageToken"].asString();
	auto allSkuPriceListNode = skuPricePageNode["SkuPriceList"]["SkuPricePageDTO"];
	for (auto skuPricePageNodeSkuPriceListSkuPricePageDTO : allSkuPriceListNode)
	{
		Data::SkuPricePage::SkuPricePageDTO skuPricePageDTOObject;
		if(!skuPricePageNodeSkuPriceListSkuPricePageDTO["SkuCode"].isNull())
			skuPricePageDTOObject.skuCode = skuPricePageNodeSkuPriceListSkuPricePageDTO["SkuCode"].asString();
		if(!skuPricePageNodeSkuPriceListSkuPricePageDTO["SkuFactorMap"].isNull())
			skuPricePageDTOObject.skuFactorMap = skuPricePageNodeSkuPriceListSkuPricePageDTO["SkuFactorMap"].asString();
		auto allCskuPriceListNode = skuPricePageNodeSkuPriceListSkuPricePageDTO["CskuPriceList"]["CSkuPriceDTO"];
		for (auto skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO : allCskuPriceListNode)
		{
			Data::SkuPricePage::SkuPricePageDTO::CSkuPriceDTO cskuPriceListObject;
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["CskuCode"].isNull())
				cskuPriceListObject.cskuCode = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["CskuCode"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["Currency"].isNull())
				cskuPriceListObject.currency = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["Currency"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["UsageUnit"].isNull())
				cskuPriceListObject.usageUnit = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["UsageUnit"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceType"].isNull())
				cskuPriceListObject.priceType = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceType"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceMode"].isNull())
				cskuPriceListObject.priceMode = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceMode"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["Price"].isNull())
				cskuPriceListObject.price = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["Price"].asString();
			if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceUnit"].isNull())
				cskuPriceListObject.priceUnit = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["PriceUnit"].asString();
			auto allRangeListNode = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTO["RangeList"]["RangeDTO"];
			for (auto skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO : allRangeListNode)
			{
				Data::SkuPricePage::SkuPricePageDTO::CSkuPriceDTO::RangeDTO rangeListObject;
				if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["FactorCode"].isNull())
					rangeListObject.factorCode = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["FactorCode"].asString();
				if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Min"].isNull())
					rangeListObject.min = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Min"].asString();
				if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Max"].isNull())
					rangeListObject.max = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Max"].asString();
				if(!skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Type"].isNull())
					rangeListObject.type = skuPricePageNodeSkuPriceListSkuPricePageDTOCskuPriceListCSkuPriceDTORangeListRangeDTO["Type"].asString();
				cskuPriceListObject.rangeList.push_back(rangeListObject);
			}
			skuPricePageDTOObject.cskuPriceList.push_back(cskuPriceListObject);
		}
		data_.skuPricePage.skuPriceList.push_back(skuPricePageDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QuerySkuPriceListResult::getMessage()const
{
	return message_;
}

QuerySkuPriceListResult::Data QuerySkuPriceListResult::getData()const
{
	return data_;
}

std::string QuerySkuPriceListResult::getCode()const
{
	return code_;
}

bool QuerySkuPriceListResult::getSuccess()const
{
	return success_;
}

