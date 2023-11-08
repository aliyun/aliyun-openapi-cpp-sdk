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

#include <alibabacloud/amqp-open/model/CreateAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

CreateAccountResult::CreateAccountResult() :
	ServiceResult()
{}

CreateAccountResult::CreateAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAccountResult::~CreateAccountResult()
{}

void CreateAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccessKey"].isNull())
		data_.accessKey = dataNode["AccessKey"].asString();
	if(!dataNode["Password"].isNull())
		data_.password = dataNode["Password"].asString();
	if(!dataNode["CreateTimeStamp"].isNull())
		data_.createTimeStamp = std::stol(dataNode["CreateTimeStamp"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["MasterUId"].isNull())
		data_.masterUId = std::stol(dataNode["MasterUId"].asString());
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateAccountResult::getMessage()const
{
	return message_;
}

CreateAccountResult::Data CreateAccountResult::getData()const
{
	return data_;
}

int CreateAccountResult::getCode()const
{
	return code_;
}

bool CreateAccountResult::getSuccess()const
{
	return success_;
}

