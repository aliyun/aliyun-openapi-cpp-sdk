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

#include <alibabacloud/bssopenapi/model/QueryPriceEntityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryPriceEntityListResult::QueryPriceEntityListResult() :
	ServiceResult()
{}

QueryPriceEntityListResult::QueryPriceEntityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPriceEntityListResult::~QueryPriceEntityListResult()
{}

void QueryPriceEntityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allPriceEntityInfoListNode = dataNode["PriceEntityInfoList"]["PriceEntityInfoDTO"];
	for (auto dataNodePriceEntityInfoListPriceEntityInfoDTO : allPriceEntityInfoListNode)
	{
		Data::PriceEntityInfoDTO priceEntityInfoDTOObject;
		if(!dataNodePriceEntityInfoListPriceEntityInfoDTO["PriceEntityCode"].isNull())
			priceEntityInfoDTOObject.priceEntityCode = dataNodePriceEntityInfoListPriceEntityInfoDTO["PriceEntityCode"].asString();
		if(!dataNodePriceEntityInfoListPriceEntityInfoDTO["PriceEntityName"].isNull())
			priceEntityInfoDTOObject.priceEntityName = dataNodePriceEntityInfoListPriceEntityInfoDTO["PriceEntityName"].asString();
		auto allPriceFactorListNode = dataNodePriceEntityInfoListPriceEntityInfoDTO["PriceFactorList"]["PriceFactorDTO"];
		for (auto dataNodePriceEntityInfoListPriceEntityInfoDTOPriceFactorListPriceFactorDTO : allPriceFactorListNode)
		{
			Data::PriceEntityInfoDTO::PriceFactorDTO priceFactorListObject;
			if(!dataNodePriceEntityInfoListPriceEntityInfoDTOPriceFactorListPriceFactorDTO["PriceFactorCode"].isNull())
				priceFactorListObject.priceFactorCode = dataNodePriceEntityInfoListPriceEntityInfoDTOPriceFactorListPriceFactorDTO["PriceFactorCode"].asString();
			if(!dataNodePriceEntityInfoListPriceEntityInfoDTOPriceFactorListPriceFactorDTO["PriceFactorName"].isNull())
				priceFactorListObject.priceFactorName = dataNodePriceEntityInfoListPriceEntityInfoDTOPriceFactorListPriceFactorDTO["PriceFactorName"].asString();
			auto allPriceFactorValueList = value["PriceFactorValueList"]["PriceFactorValueDTO"];
			for (auto value : allPriceFactorValueList)
				priceFactorListObject.priceFactorValueList.push_back(value.asString());
			priceEntityInfoDTOObject.priceFactorList.push_back(priceFactorListObject);
		}
		data_.priceEntityInfoList.push_back(priceEntityInfoDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryPriceEntityListResult::getMessage()const
{
	return message_;
}

QueryPriceEntityListResult::Data QueryPriceEntityListResult::getData()const
{
	return data_;
}

std::string QueryPriceEntityListResult::getCode()const
{
	return code_;
}

bool QueryPriceEntityListResult::getSuccess()const
{
	return success_;
}

