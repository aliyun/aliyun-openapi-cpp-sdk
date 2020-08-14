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

#include <alibabacloud/teambition-aliyun/model/GetUserByUidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

GetUserByUidResult::GetUserByUidResult() :
	ServiceResult()
{}

GetUserByUidResult::GetUserByUidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserByUidResult::~GetUserByUidResult()
{}

void GetUserByUidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["Name"].isNull())
		object_.name = objectNode["Name"].asString();
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	if(!objectNode["AliyunPk"].isNull())
		object_.aliyunPk = objectNode["AliyunPk"].asString();
	if(!objectNode["AvatarUrl"].isNull())
		object_.avatarUrl = objectNode["AvatarUrl"].asString();
	if(!objectNode["Email"].isNull())
		object_.email = objectNode["Email"].asString();
	if(!objectNode["Phone"].isNull())
		object_.phone = objectNode["Phone"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string GetUserByUidResult::getErrorMsg()const
{
	return errorMsg_;
}

GetUserByUidResult::Object GetUserByUidResult::getObject()const
{
	return object_;
}

std::string GetUserByUidResult::getErrorCode()const
{
	return errorCode_;
}

bool GetUserByUidResult::getSuccessful()const
{
	return successful_;
}

