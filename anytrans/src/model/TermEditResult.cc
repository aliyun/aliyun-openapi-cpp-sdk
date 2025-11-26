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

#include <alibabacloud/anytrans/model/TermEditResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

TermEditResult::TermEditResult() :
	ServiceResult()
{}

TermEditResult::TermEditResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TermEditResult::~TermEditResult()
{}

void TermEditResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["failCount"].isNull())
		data_.failCount = std::stol(dataNode["failCount"].asString());
	auto alltermsNode = dataNode["terms"]["termsItem"];
	for (auto dataNodetermstermsItem : alltermsNode)
	{
		Data::TermsItem termsItemObject;
		if(!dataNodetermstermsItem["termId"].isNull())
			termsItemObject.termId = dataNodetermstermsItem["termId"].asString();
		if(!dataNodetermstermsItem["src"].isNull())
			termsItemObject.src = dataNodetermstermsItem["src"].asString();
		if(!dataNodetermstermsItem["tgt"].isNull())
			termsItemObject.tgt = dataNodetermstermsItem["tgt"].asString();
		data_.terms.push_back(termsItemObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = value["httpStatusCode"].asString();

}

std::string TermEditResult::getMessage()const
{
	return message_;
}

std::string TermEditResult::getRequestId()const
{
	return requestId_;
}

std::string TermEditResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

TermEditResult::Data TermEditResult::getData()const
{
	return data_;
}

std::string TermEditResult::getCode()const
{
	return code_;
}

bool TermEditResult::getSuccess()const
{
	return success_;
}

