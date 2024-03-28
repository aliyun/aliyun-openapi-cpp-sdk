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

#include <alibabacloud/devops/model/CreateWorkitemRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateWorkitemRecordResult::CreateWorkitemRecordResult() :
	ServiceResult()
{}

CreateWorkitemRecordResult::CreateWorkitemRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateWorkitemRecordResult::~CreateWorkitemRecordResult()
{}

void CreateWorkitemRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workitemTimeNode = value["WorkitemTime"];
	if(!workitemTimeNode["identifier"].isNull())
		workitemTime_.identifier = workitemTimeNode["identifier"].asString();
	if(!workitemTimeNode["workitemIdentifier"].isNull())
		workitemTime_.workitemIdentifier = workitemTimeNode["workitemIdentifier"].asString();
	if(!workitemTimeNode["actualTime"].isNull())
		workitemTime_.actualTime = std::stol(workitemTimeNode["actualTime"].asString());
	if(!workitemTimeNode["type"].isNull())
		workitemTime_.type = workitemTimeNode["type"].asString();
	if(!workitemTimeNode["description"].isNull())
		workitemTime_.description = workitemTimeNode["description"].asString();
	if(!workitemTimeNode["gmtStart"].isNull())
		workitemTime_.gmtStart = std::stol(workitemTimeNode["gmtStart"].asString());
	if(!workitemTimeNode["gmtEnd"].isNull())
		workitemTime_.gmtEnd = std::stol(workitemTimeNode["gmtEnd"].asString());
	auto recordUserNode = workitemTimeNode["recordUser"];
	if(!recordUserNode["account"].isNull())
		workitemTime_.recordUser.account = recordUserNode["account"].asString();
	if(!recordUserNode["identifier"].isNull())
		workitemTime_.recordUser.identifier = recordUserNode["identifier"].asString();
	if(!recordUserNode["realName"].isNull())
		workitemTime_.recordUser.realName = recordUserNode["realName"].asString();
	if(!recordUserNode["nickName"].isNull())
		workitemTime_.recordUser.nickName = recordUserNode["nickName"].asString();
	if(!recordUserNode["avatar"].isNull())
		workitemTime_.recordUser.avatar = recordUserNode["avatar"].asString();
	if(!recordUserNode["stamp"].isNull())
		workitemTime_.recordUser.stamp = recordUserNode["stamp"].asString();
	if(!recordUserNode["nameEn"].isNull())
		workitemTime_.recordUser.nameEn = recordUserNode["nameEn"].asString();
	if(!recordUserNode["gender"].isNull())
		workitemTime_.recordUser.gender = recordUserNode["gender"].asString();
	if(!recordUserNode["mobile"].isNull())
		workitemTime_.recordUser.mobile = recordUserNode["mobile"].asString();
	if(!recordUserNode["email"].isNull())
		workitemTime_.recordUser.email = recordUserNode["email"].asString();
	if(!recordUserNode["nickNamePinyin"].isNull())
		workitemTime_.recordUser.nickNamePinyin = recordUserNode["nickNamePinyin"].asString();
	if(!recordUserNode["realNamePinyin"].isNull())
		workitemTime_.recordUser.realNamePinyin = recordUserNode["realNamePinyin"].asString();
	if(!recordUserNode["displayNickName"].isNull())
		workitemTime_.recordUser.displayNickName = recordUserNode["displayNickName"].asString();
	if(!recordUserNode["displayRealName"].isNull())
		workitemTime_.recordUser.displayRealName = recordUserNode["displayRealName"].asString();
	if(!recordUserNode["displayName"].isNull())
		workitemTime_.recordUser.displayName = recordUserNode["displayName"].asString();
	if(!recordUserNode["dingTalkId"].isNull())
		workitemTime_.recordUser.dingTalkId = recordUserNode["dingTalkId"].asString();
	if(!recordUserNode["tbRoleId"].isNull())
		workitemTime_.recordUser.tbRoleId = recordUserNode["tbRoleId"].asString();
	if(!recordUserNode["isDisabled"].isNull())
		workitemTime_.recordUser.isDisabled = recordUserNode["isDisabled"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateWorkitemRecordResult::getRequestId()const
{
	return requestId_;
}

CreateWorkitemRecordResult::WorkitemTime CreateWorkitemRecordResult::getWorkitemTime()const
{
	return workitemTime_;
}

std::string CreateWorkitemRecordResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string CreateWorkitemRecordResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateWorkitemRecordResult::getSuccess()const
{
	return success_;
}

