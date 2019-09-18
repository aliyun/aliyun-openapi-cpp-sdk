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

#include <alibabacloud/trademark/model/CheckLoaFillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

CheckLoaFillResult::CheckLoaFillResult() :
	ServiceResult()
{}

CheckLoaFillResult::CheckLoaFillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckLoaFillResult::~CheckLoaFillResult()
{}

void CheckLoaFillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["StampFill"].isNull())
		data_.stampFill = dataNode["StampFill"].asString() == "true";
	if(!dataNode["AddressFill"].isNull())
		data_.addressFill = dataNode["AddressFill"].asString() == "true";
	if(!dataNode["TradeMarkNameFill"].isNull())
		data_.tradeMarkNameFill = dataNode["TradeMarkNameFill"].asString() == "true";
	if(!dataNode["CountryFill"].isNull())
		data_.countryFill = dataNode["CountryFill"].asString() == "true";
	if(!dataNode["NationalityFill"].isNull())
		data_.nationalityFill = dataNode["NationalityFill"].asString() == "true";
	if(!dataNode["MaterialNameFill"].isNull())
		data_.materialNameFill = dataNode["MaterialNameFill"].asString() == "true";
	if(!dataNode["TemplateUrl"].isNull())
		data_.templateUrl = dataNode["TemplateUrl"].asString();
		auto allErrorMsgs = dataNode["ErrorMsgs"]["ErrorMsg"];
		for (auto value : allErrorMsgs)
			data_.errorMsgs.push_back(value.asString());

}

CheckLoaFillResult::Data CheckLoaFillResult::getData()const
{
	return data_;
}

