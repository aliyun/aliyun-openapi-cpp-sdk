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

#include <alibabacloud/ccc/model/RefreshTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

RefreshTokenResult::RefreshTokenResult() :
	ServiceResult()
{}

RefreshTokenResult::RefreshTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshTokenResult::~RefreshTokenResult()
{}

void RefreshTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allToken = value["Token"];
	for (auto value : allToken)
	{
		Token tokenObject;
		if(!value["Signature"].isNull())
			tokenObject.signature = value["Signature"].asString();
		if(!value["SignData"].isNull())
			tokenObject.signData = value["SignData"].asString();
		token_.push_back(tokenObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string RefreshTokenResult::getMessage()const
{
	return message_;
}

int RefreshTokenResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<RefreshTokenResult::Token> RefreshTokenResult::getToken()const
{
	return token_;
}

std::string RefreshTokenResult::getCode()const
{
	return code_;
}

bool RefreshTokenResult::getSuccess()const
{
	return success_;
}

