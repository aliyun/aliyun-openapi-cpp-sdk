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

#include <alibabacloud/bssopenapi/model/QueryCommodityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryCommodityListResult::QueryCommodityListResult() :
	ServiceResult()
{}

QueryCommodityListResult::QueryCommodityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCommodityListResult::~QueryCommodityListResult()
{}

void QueryCommodityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allCommodityListNode = dataNode["CommodityList"]["CommodityDTO"];
	for (auto dataNodeCommodityListCommodityDTO : allCommodityListNode)
	{
		Data::CommodityDTO commodityDTOObject;
		if(!dataNodeCommodityListCommodityDTO["CommodityCode"].isNull())
			commodityDTOObject.commodityCode = dataNodeCommodityListCommodityDTO["CommodityCode"].asString();
		if(!dataNodeCommodityListCommodityDTO["CommodityName"].isNull())
			commodityDTOObject.commodityName = dataNodeCommodityListCommodityDTO["CommodityName"].asString();
		if(!dataNodeCommodityListCommodityDTO["ChargeType"].isNull())
			commodityDTOObject.chargeType = dataNodeCommodityListCommodityDTO["ChargeType"].asString();
		data_.commodityList.push_back(commodityDTOObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string QueryCommodityListResult::getMessage()const
{
	return message_;
}

QueryCommodityListResult::Data QueryCommodityListResult::getData()const
{
	return data_;
}

std::string QueryCommodityListResult::getCode()const
{
	return code_;
}

bool QueryCommodityListResult::getSuccess()const
{
	return success_;
}

