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

#include <alibabacloud/itag/model/GetFlowJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetFlowJobResult::GetFlowJobResult() :
	ServiceResult()
{}

GetFlowJobResult::GetFlowJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFlowJobResult::~GetFlowJobResult()
{}

void GetFlowJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["RunInstId"].isNull())
		result_.runInstId = resultNode["RunInstId"].asString();
	if(!resultNode["FlowId"].isNull())
		result_.flowId = resultNode["FlowId"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	if(!resultNode["RunMsg"].isNull())
		result_.runMsg = resultNode["RunMsg"].asString();
	if(!resultNode["LogView"].isNull())
		result_.logView = resultNode["LogView"].asString();
	if(!resultNode["RunRet"].isNull())
		result_.runRet = resultNode["RunRet"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto creatorNode = resultNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.creator.accountNo = creatorNode["AccountNo"].asString();
	auto modifierNode = resultNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.modifier.accountNo = modifierNode["AccountNo"].asString();
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

std::string GetFlowJobResult::getMsg()const
{
	return msg_;
}

bool GetFlowJobResult::getSucc()const
{
	return succ_;
}

std::string GetFlowJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFlowJobResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetFlowJobResult::getCode()const
{
	return code_;
}

GetFlowJobResult::Result GetFlowJobResult::getResult()const
{
	return result_;
}

