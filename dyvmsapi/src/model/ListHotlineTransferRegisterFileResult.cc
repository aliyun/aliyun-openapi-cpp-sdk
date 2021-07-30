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

#include <alibabacloud/dyvmsapi/model/ListHotlineTransferRegisterFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

ListHotlineTransferRegisterFileResult::ListHotlineTransferRegisterFileResult() :
	ServiceResult()
{}

ListHotlineTransferRegisterFileResult::ListHotlineTransferRegisterFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHotlineTransferRegisterFileResult::~ListHotlineTransferRegisterFileResult()
{}

void ListHotlineTransferRegisterFileResult::parse(const std::string &payload)
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
		if(!dataNodeValuesValuesItem["CorpName"].isNull())
			valuesItemObject.corpName = dataNodeValuesValuesItem["CorpName"].asString();
		if(!dataNodeValuesValuesItem["MngOpName"].isNull())
			valuesItemObject.mngOpName = dataNodeValuesValuesItem["MngOpName"].asString();
		if(!dataNodeValuesValuesItem["MngOpMail"].isNull())
			valuesItemObject.mngOpMail = dataNodeValuesValuesItem["MngOpMail"].asString();
		if(!dataNodeValuesValuesItem["MngOpMobile"].isNull())
			valuesItemObject.mngOpMobile = dataNodeValuesValuesItem["MngOpMobile"].asString();
		if(!dataNodeValuesValuesItem["MngOpIdentityCard"].isNull())
			valuesItemObject.mngOpIdentityCard = dataNodeValuesValuesItem["MngOpIdentityCard"].asString();
		if(!dataNodeValuesValuesItem["Agree"].isNull())
			valuesItemObject.agree = dataNodeValuesValuesItem["Agree"].asString();
		if(!dataNodeValuesValuesItem["ResUniqueCode"].isNull())
			valuesItemObject.resUniqueCode = std::stol(dataNodeValuesValuesItem["ResUniqueCode"].asString());
		if(!dataNodeValuesValuesItem["HotlineNumber"].isNull())
			valuesItemObject.hotlineNumber = dataNodeValuesValuesItem["HotlineNumber"].asString();
		data_.values.push_back(valuesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListHotlineTransferRegisterFileResult::getMessage()const
{
	return message_;
}

ListHotlineTransferRegisterFileResult::Data ListHotlineTransferRegisterFileResult::getData()const
{
	return data_;
}

std::string ListHotlineTransferRegisterFileResult::getCode()const
{
	return code_;
}

