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

#include <alibabacloud/bssopenapi/model/QueryPriceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryPriceListResult::QueryPriceListResult() :
	ServiceResult()
{}

QueryPriceListResult::QueryPriceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPriceListResult::~QueryPriceListResult()
{}

void QueryPriceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Currency"].isNull())
		data_.currency = dataNode["Currency"].asString();
	auto allModules = value["Modules"]["Module"];
	for (auto value : allModules)
	{
		Data::Module moduleObject;
		if(!value["ModuleCode"].isNull())
			moduleObject.moduleCode = value["ModuleCode"].asString();
		if(!value["Region"].isNull())
			moduleObject.region = value["Region"].asString();
		if(!value["Config"].isNull())
			moduleObject.config = value["Config"].asString();
		if(!value["PriceUnitQuantity"].isNull())
			moduleObject.priceUnitQuantity = value["PriceUnitQuantity"].asString();
		if(!value["PriceUnit"].isNull())
			moduleObject.priceUnit = value["PriceUnit"].asString();
		auto allTierPrices = value["TierPrices"]["TierPrice"];
		for (auto value : allTierPrices)
		{
			Data::Module::TierPrice tierPricesObject;
			if(!value["TierStart"].isNull())
				tierPricesObject.tierStart = value["TierStart"].asString();
			if(!value["StartSymbol"].isNull())
				tierPricesObject.startSymbol = value["StartSymbol"].asString();
			if(!value["TierEnd"].isNull())
				tierPricesObject.tierEnd = value["TierEnd"].asString();
			if(!value["EndSymbol"].isNull())
				tierPricesObject.endSymbol = value["EndSymbol"].asString();
			if(!value["TierType"].isNull())
				tierPricesObject.tierType = value["TierType"].asString();
			if(!value["PriceType"].isNull())
				tierPricesObject.priceType = value["PriceType"].asString();
			if(!value["Price"].isNull())
				tierPricesObject.price = value["Price"].asString();
			moduleObject.tierPrices.push_back(tierPricesObject);
		}
		data_.modules.push_back(moduleObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryPriceListResult::getMessage()const
{
	return message_;
}

QueryPriceListResult::Data QueryPriceListResult::getData()const
{
	return data_;
}

std::string QueryPriceListResult::getCode()const
{
	return code_;
}

bool QueryPriceListResult::getSuccess()const
{
	return success_;
}

