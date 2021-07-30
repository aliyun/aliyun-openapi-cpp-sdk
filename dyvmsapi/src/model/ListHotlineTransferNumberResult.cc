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

#include <alibabacloud/dyvmsapi/model/ListHotlineTransferNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

ListHotlineTransferNumberResult::ListHotlineTransferNumberResult() :
	ServiceResult()
{}

ListHotlineTransferNumberResult::ListHotlineTransferNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHotlineTransferNumberResult::~ListHotlineTransferNumberResult()
{}

void ListHotlineTransferNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allValuesNode = dataNode["Values"]["ValuesItem"];
	for (auto dataNodeValuesValuesItem : allValuesNode)
	{
		Data::ValuesItem valuesItemObject;
		if(!dataNodeValuesValuesItem["QualificationId"].isNull())
			valuesItemObject.qualificationId = dataNodeValuesValuesItem["QualificationId"].asString();
		if(!dataNodeValuesValuesItem["PhoneNumber"].isNull())
			valuesItemObject.phoneNumber = dataNodeValuesValuesItem["PhoneNumber"].asString();
		if(!dataNodeValuesValuesItem["NumberOwnerName"].isNull())
			valuesItemObject.numberOwnerName = dataNodeValuesValuesItem["NumberOwnerName"].asString();
		if(!dataNodeValuesValuesItem["IdentityCard"].isNull())
			valuesItemObject.identityCard = dataNodeValuesValuesItem["IdentityCard"].asString();
		if(!dataNodeValuesValuesItem["ResUniqueCode"].isNull())
			valuesItemObject.resUniqueCode = dataNodeValuesValuesItem["ResUniqueCode"].asString();
		if(!dataNodeValuesValuesItem["HotlineNumber"].isNull())
			valuesItemObject.hotlineNumber = dataNodeValuesValuesItem["HotlineNumber"].asString();
		data_.values.push_back(valuesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListHotlineTransferNumberResult::getMessage()const
{
	return message_;
}

ListHotlineTransferNumberResult::Data ListHotlineTransferNumberResult::getData()const
{
	return data_;
}

std::string ListHotlineTransferNumberResult::getCode()const
{
	return code_;
}

