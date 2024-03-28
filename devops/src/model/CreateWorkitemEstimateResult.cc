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

#include <alibabacloud/devops/model/CreateWorkitemEstimateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateWorkitemEstimateResult::CreateWorkitemEstimateResult() :
	ServiceResult()
{}

CreateWorkitemEstimateResult::CreateWorkitemEstimateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateWorkitemEstimateResult::~CreateWorkitemEstimateResult()
{}

void CreateWorkitemEstimateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workitemTimeEstimateNode = value["WorkitemTimeEstimate"];
	if(!workitemTimeEstimateNode["identifier"].isNull())
		workitemTimeEstimate_.identifier = workitemTimeEstimateNode["identifier"].asString();
	if(!workitemTimeEstimateNode["workitemIdentifier"].isNull())
		workitemTimeEstimate_.workitemIdentifier = workitemTimeEstimateNode["workitemIdentifier"].asString();
	if(!workitemTimeEstimateNode["spentTime"].isNull())
		workitemTimeEstimate_.spentTime = std::stol(workitemTimeEstimateNode["spentTime"].asString());
	if(!workitemTimeEstimateNode["type"].isNull())
		workitemTimeEstimate_.type = workitemTimeEstimateNode["type"].asString();
	if(!workitemTimeEstimateNode["description"].isNull())
		workitemTimeEstimate_.description = workitemTimeEstimateNode["description"].asString();
	auto recordUserNode = workitemTimeEstimateNode["recordUser"];
	if(!recordUserNode["account"].isNull())
		workitemTimeEstimate_.recordUser.account = recordUserNode["account"].asString();
	if(!recordUserNode["identifier"].isNull())
		workitemTimeEstimate_.recordUser.identifier = recordUserNode["identifier"].asString();
	if(!recordUserNode["realName"].isNull())
		workitemTimeEstimate_.recordUser.realName = recordUserNode["realName"].asString();
	if(!recordUserNode["nickName"].isNull())
		workitemTimeEstimate_.recordUser.nickName = recordUserNode["nickName"].asString();
	if(!recordUserNode["avatar"].isNull())
		workitemTimeEstimate_.recordUser.avatar = recordUserNode["avatar"].asString();
	if(!recordUserNode["stamp"].isNull())
		workitemTimeEstimate_.recordUser.stamp = recordUserNode["stamp"].asString();
	if(!recordUserNode["nameEn"].isNull())
		workitemTimeEstimate_.recordUser.nameEn = recordUserNode["nameEn"].asString();
	if(!recordUserNode["gender"].isNull())
		workitemTimeEstimate_.recordUser.gender = recordUserNode["gender"].asString();
	if(!recordUserNode["mobile"].isNull())
		workitemTimeEstimate_.recordUser.mobile = recordUserNode["mobile"].asString();
	if(!recordUserNode["email"].isNull())
		workitemTimeEstimate_.recordUser.email = recordUserNode["email"].asString();
	if(!recordUserNode["nickNamePinyin"].isNull())
		workitemTimeEstimate_.recordUser.nickNamePinyin = recordUserNode["nickNamePinyin"].asString();
	if(!recordUserNode["realNamePinyin"].isNull())
		workitemTimeEstimate_.recordUser.realNamePinyin = recordUserNode["realNamePinyin"].asString();
	if(!recordUserNode["displayNickName"].isNull())
		workitemTimeEstimate_.recordUser.displayNickName = recordUserNode["displayNickName"].asString();
	if(!recordUserNode["displayRealName"].isNull())
		workitemTimeEstimate_.recordUser.displayRealName = recordUserNode["displayRealName"].asString();
	if(!recordUserNode["displayName"].isNull())
		workitemTimeEstimate_.recordUser.displayName = recordUserNode["displayName"].asString();
	if(!recordUserNode["dingTalkId"].isNull())
		workitemTimeEstimate_.recordUser.dingTalkId = recordUserNode["dingTalkId"].asString();
	if(!recordUserNode["tbRoleId"].isNull())
		workitemTimeEstimate_.recordUser.tbRoleId = recordUserNode["tbRoleId"].asString();
	if(!recordUserNode["isDisabled"].isNull())
		workitemTimeEstimate_.recordUser.isDisabled = recordUserNode["isDisabled"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

CreateWorkitemEstimateResult::WorkitemTimeEstimate CreateWorkitemEstimateResult::getWorkitemTimeEstimate()const
{
	return workitemTimeEstimate_;
}

std::string CreateWorkitemEstimateResult::getRequestId()const
{
	return requestId_;
}

std::string CreateWorkitemEstimateResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string CreateWorkitemEstimateResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateWorkitemEstimateResult::getSuccess()const
{
	return success_;
}

