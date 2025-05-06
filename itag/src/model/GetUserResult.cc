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

#include <alibabacloud/itag/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Email"].isNull())
		result_.email = resultNode["Email"].asString();
	if(!resultNode["Phone"].isNull())
		result_.phone = resultNode["Phone"].asString();
	if(!resultNode["SupplierId"].isNull())
		result_.supplierId = resultNode["SupplierId"].asString();
	if(!resultNode["Org"].isNull())
		result_.org = resultNode["Org"].asString();
	if(!resultNode["RefUserId"].isNull())
		result_.refUserId = resultNode["RefUserId"].asString();
	if(!resultNode["UserId"].isNull())
		result_.userId = resultNode["UserId"].asString();
	if(!resultNode["UserName"].isNull())
		result_.userName = resultNode["UserName"].asString();
	if(!resultNode["AccountType"].isNull())
		result_.accountType = resultNode["AccountType"].asString();
	if(!resultNode["AccountNo"].isNull())
		result_.accountNo = resultNode["AccountNo"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetUserResult::getMsg()const
{
	return msg_;
}

bool GetUserResult::getSucc()const
{
	return succ_;
}

std::string GetUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetUserResult::getCode()const
{
	return code_;
}

GetUserResult::Result GetUserResult::getResult()const
{
	return result_;
}

