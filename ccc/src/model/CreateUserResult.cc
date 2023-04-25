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

#include <alibabacloud/ccc/model/CreateUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateUserResult::CreateUserResult() :
	ServiceResult()
{}

CreateUserResult::CreateUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUserResult::~CreateUserResult()
{}

void CreateUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DisplayName"].isNull())
		data_.displayName = dataNode["DisplayName"].asString();
	if(!dataNode["Extension"].isNull())
		data_.extension = dataNode["Extension"].asString();
	if(!dataNode["Email"].isNull())
		data_.email = dataNode["Email"].asString();
	if(!dataNode["LoginName"].isNull())
		data_.loginName = dataNode["LoginName"].asString();
	if(!dataNode["WorkMode"].isNull())
		data_.workMode = dataNode["WorkMode"].asString();
	if(!dataNode["Mobile"].isNull())
		data_.mobile = dataNode["Mobile"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateUserResult::getMessage()const
{
	return message_;
}

int CreateUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateUserResult::Data CreateUserResult::getData()const
{
	return data_;
}

std::string CreateUserResult::getCode()const
{
	return code_;
}

