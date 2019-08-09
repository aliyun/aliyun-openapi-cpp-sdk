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

#include <alibabacloud/cms/model/AccessKeyGetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

AccessKeyGetResult::AccessKeyGetResult() :
	ServiceResult()
{}

AccessKeyGetResult::AccessKeyGetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AccessKeyGetResult::~AccessKeyGetResult()
{}

void AccessKeyGetResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["UserId"].isNull())
		userId_ = std::stol(value["UserId"].asString());
	if(!value["AccessKey"].isNull())
		accessKey_ = value["AccessKey"].asString();
	if(!value["SecretKey"].isNull())
		secretKey_ = value["SecretKey"].asString();

}

std::string AccessKeyGetResult::getSecretKey()const
{
	return secretKey_;
}

long AccessKeyGetResult::getUserId()const
{
	return userId_;
}

int AccessKeyGetResult::getErrorCode()const
{
	return errorCode_;
}

std::string AccessKeyGetResult::getAccessKey()const
{
	return accessKey_;
}

std::string AccessKeyGetResult::getErrorMessage()const
{
	return errorMessage_;
}

bool AccessKeyGetResult::getSuccess()const
{
	return success_;
}

