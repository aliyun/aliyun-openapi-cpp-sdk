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

#include <alibabacloud/dysmsapi/model/QuerySmsSignResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySmsSignResult::QuerySmsSignResult() :
	ServiceResult()
{}

QuerySmsSignResult::QuerySmsSignResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsSignResult::~QuerySmsSignResult()
{}

void QuerySmsSignResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["SignStatus"].isNull())
		signStatus_ = std::stoi(value["SignStatus"].asString());
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["SignName"].isNull())
		signName_ = value["SignName"].asString();
	if(!value["CreateDate"].isNull())
		createDate_ = value["CreateDate"].asString();

}

std::string QuerySmsSignResult::getMessage()const
{
	return message_;
}

int QuerySmsSignResult::getSignStatus()const
{
	return signStatus_;
}

std::string QuerySmsSignResult::getCode()const
{
	return code_;
}

std::string QuerySmsSignResult::getCreateDate()const
{
	return createDate_;
}

std::string QuerySmsSignResult::getReason()const
{
	return reason_;
}

std::string QuerySmsSignResult::getSignName()const
{
	return signName_;
}

