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

#include <alibabacloud/edas/model/GetSubAccountInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetSubAccountInfoResult::GetSubAccountInfoResult() :
	ServiceResult()
{}

GetSubAccountInfoResult::GetSubAccountInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubAccountInfoResult::~GetSubAccountInfoResult()
{}

void GetSubAccountInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authorizationNode = value["Authorization"];
	if(!authorizationNode["AdminUserId"].isNull())
		authorization_.adminUserId = authorizationNode["AdminUserId"].asString();
	if(!authorizationNode["AdminEdasId"].isNull())
		authorization_.adminEdasId = authorizationNode["AdminEdasId"].asString();
	if(!authorizationNode["UserId"].isNull())
		authorization_.userId = authorizationNode["UserId"].asString();
	if(!authorizationNode["EdasId"].isNull())
		authorization_.edasId = authorizationNode["EdasId"].asString();
	if(!authorizationNode["AppIdData"].isNull())
		authorization_.appIdData = authorizationNode["AppIdData"].asString();
	if(!authorizationNode["RoleIdData"].isNull())
		authorization_.roleIdData = authorizationNode["RoleIdData"].asString();
	if(!authorizationNode["CreateTime"].isNull())
		authorization_.createTime = std::stol(authorizationNode["CreateTime"].asString());
	if(!authorizationNode["UpdateTime"].isNull())
		authorization_.updateTime = std::stol(authorizationNode["UpdateTime"].asString());
	if(!authorizationNode["ResGroupId"].isNull())
		authorization_.resGroupId = std::stol(authorizationNode["ResGroupId"].asString());
	if(!authorizationNode["ResGroupIdData"].isNull())
		authorization_.resGroupIdData = authorizationNode["ResGroupIdData"].asString();
	if(!authorizationNode["IsRamSlave"].isNull())
		authorization_.isRamSlave = authorizationNode["IsRamSlave"].asString() == "true";
	if(!authorizationNode["IsRamDel"].isNull())
		authorization_.isRamDel = authorizationNode["IsRamDel"].asString() == "true";
	if(!authorizationNode["SubUserKp"].isNull())
		authorization_.subUserKp = authorizationNode["SubUserKp"].asString();
	if(!authorizationNode["RamOperation"].isNull())
		authorization_.ramOperation = authorizationNode["RamOperation"].asString() == "true";
	if(!authorizationNode["DelegateAdmin"].isNull())
		authorization_.delegateAdmin = authorizationNode["DelegateAdmin"].asString() == "true";
	if(!authorizationNode["Sts"].isNull())
		authorization_.sts = authorizationNode["Sts"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

GetSubAccountInfoResult::Authorization GetSubAccountInfoResult::getAuthorization()const
{
	return authorization_;
}

std::string GetSubAccountInfoResult::getMessage()const
{
	return message_;
}

int GetSubAccountInfoResult::getCode()const
{
	return code_;
}

