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

#include <alibabacloud/ccc/model/CallOnlinePrivacyNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CallOnlinePrivacyNumberResult::CallOnlinePrivacyNumberResult() :
	ServiceResult()
{}

CallOnlinePrivacyNumberResult::CallOnlinePrivacyNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CallOnlinePrivacyNumberResult::~CallOnlinePrivacyNumberResult()
{}

void CallOnlinePrivacyNumberResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["StatusCode"].isNull())
		data_.statusCode = dataNode["StatusCode"].asString();
	if(!dataNode["DateCreated"].isNull())
		data_.dateCreated = dataNode["DateCreated"].asString();
	if(!dataNode["Represent"].isNull())
		data_.represent = dataNode["Represent"].asString();
	if(!dataNode["TelX"].isNull())
		data_.telX = dataNode["TelX"].asString();
	if(!dataNode["CallId"].isNull())
		data_.callId = dataNode["CallId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CallOnlinePrivacyNumberResult::getMessage()const
{
	return message_;
}

int CallOnlinePrivacyNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CallOnlinePrivacyNumberResult::Data CallOnlinePrivacyNumberResult::getData()const
{
	return data_;
}

std::string CallOnlinePrivacyNumberResult::getCode()const
{
	return code_;
}

bool CallOnlinePrivacyNumberResult::getSuccess()const
{
	return success_;
}

