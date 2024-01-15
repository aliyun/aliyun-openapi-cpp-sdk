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

#include <alibabacloud/linkvisual/model/QueryVoiceIntercomResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryVoiceIntercomResult::QueryVoiceIntercomResult() :
	ServiceResult()
{}

QueryVoiceIntercomResult::QueryVoiceIntercomResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVoiceIntercomResult::~QueryVoiceIntercomResult()
{}

void QueryVoiceIntercomResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	auto cryptoKeyNode = dataNode["CryptoKey"];
	if(!cryptoKeyNode["Key"].isNull())
		data_.cryptoKey.key = cryptoKeyNode["Key"].asString();
	if(!cryptoKeyNode["Iv"].isNull())
		data_.cryptoKey.iv = cryptoKeyNode["Iv"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryVoiceIntercomResult::Data QueryVoiceIntercomResult::getData()const
{
	return data_;
}

std::string QueryVoiceIntercomResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryVoiceIntercomResult::getCode()const
{
	return code_;
}

bool QueryVoiceIntercomResult::getSuccess()const
{
	return success_;
}

