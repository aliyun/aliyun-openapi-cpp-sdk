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

#include <alibabacloud/itag/model/GetTntUserRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetTntUserRoleResult::GetTntUserRoleResult() :
	ServiceResult()
{}

GetTntUserRoleResult::GetTntUserRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTntUserRoleResult::~GetTntUserRoleResult()
{}

void GetTntUserRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Role"].isNull())
		result_.role = resultNode["Role"].asString();
	if(!resultNode["Self"].isNull())
		result_.self = resultNode["Self"].asString() == "true";
	if(!resultNode["TntInstId"].isNull())
		result_.tntInstId = resultNode["TntInstId"].asString();
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
	if(!resultNode["BizNo"].isNull())
		result_.bizNo = resultNode["BizNo"].asString();
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

std::string GetTntUserRoleResult::getMsg()const
{
	return msg_;
}

bool GetTntUserRoleResult::getSucc()const
{
	return succ_;
}

std::string GetTntUserRoleResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTntUserRoleResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetTntUserRoleResult::getCode()const
{
	return code_;
}

GetTntUserRoleResult::Result GetTntUserRoleResult::getResult()const
{
	return result_;
}

