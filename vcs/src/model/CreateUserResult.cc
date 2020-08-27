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

#include <alibabacloud/vcs/model/CreateUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

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
	if(!dataNode["UserId"].isNull())
		data_.userId = std::stoi(dataNode["UserId"].asString());
	if(!dataNode["IsvSubId"].isNull())
		data_.isvSubId = dataNode["IsvSubId"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["UserGroupId"].isNull())
		data_.userGroupId = std::stoi(dataNode["UserGroupId"].asString());
	if(!dataNode["IdNumber"].isNull())
		data_.idNumber = dataNode["IdNumber"].asString();
	if(!dataNode["FaceImageUrl"].isNull())
		data_.faceImageUrl = dataNode["FaceImageUrl"].asString();
	if(!dataNode["Address"].isNull())
		data_.address = dataNode["Address"].asString();
	if(!dataNode["Age"].isNull())
		data_.age = dataNode["Age"].asString();
	if(!dataNode["Gender"].isNull())
		data_.gender = dataNode["Gender"].asString();
	if(!dataNode["PlateNo"].isNull())
		data_.plateNo = dataNode["PlateNo"].asString();
	if(!dataNode["PhoneNo"].isNull())
		data_.phoneNo = dataNode["PhoneNo"].asString();
	if(!dataNode["Attachment"].isNull())
		data_.attachment = dataNode["Attachment"].asString();
	if(!dataNode["BizId"].isNull())
		data_.bizId = dataNode["BizId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateUserResult::getMessage()const
{
	return message_;
}

CreateUserResult::Data CreateUserResult::getData()const
{
	return data_;
}

std::string CreateUserResult::getCode()const
{
	return code_;
}

