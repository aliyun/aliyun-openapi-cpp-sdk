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

#include <alibabacloud/devops-rdc/model/GetUserByAliyunUidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetUserByAliyunUidResult::GetUserByAliyunUidResult() :
	ServiceResult()
{}

GetUserByAliyunUidResult::GetUserByAliyunUidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserByAliyunUidResult::~GetUserByAliyunUidResult()
{}

void GetUserByAliyunUidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["AliyunPk"].isNull())
		object_.aliyunPk = objectNode["AliyunPk"].asString();
	if(!objectNode["Email"].isNull())
		object_.email = objectNode["Email"].asString();
	if(!objectNode["AvatarUrl"].isNull())
		object_.avatarUrl = objectNode["AvatarUrl"].asString();
	if(!objectNode["Name"].isNull())
		object_.name = objectNode["Name"].asString();
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	if(!objectNode["Phone"].isNull())
		object_.phone = objectNode["Phone"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetUserByAliyunUidResult::getErrorMsg()const
{
	return errorMsg_;
}

GetUserByAliyunUidResult::Object GetUserByAliyunUidResult::getObject()const
{
	return object_;
}

std::string GetUserByAliyunUidResult::getErrorCode()const
{
	return errorCode_;
}

bool GetUserByAliyunUidResult::getSuccessful()const
{
	return successful_;
}

