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

#include <alibabacloud/ocr/model/RecognizeBankCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeBankCardResult::RecognizeBankCardResult() :
	ServiceResult()
{}

RecognizeBankCardResult::RecognizeBankCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeBankCardResult::~RecognizeBankCardResult()
{}

void RecognizeBankCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CardNumber"].isNull())
		data_.cardNumber = dataNode["CardNumber"].asString();
	if(!dataNode["ValidDate"].isNull())
		data_.validDate = dataNode["ValidDate"].asString();
	if(!dataNode["BankName"].isNull())
		data_.bankName = dataNode["BankName"].asString();
	if(!dataNode["CardType"].isNull())
		data_.cardType = dataNode["CardType"].asString();

}

RecognizeBankCardResult::Data RecognizeBankCardResult::getData()const
{
	return data_;
}

