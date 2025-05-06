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

#include <alibabacloud/itag/model/PageViewFlowJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewFlowJobResult::PageViewFlowJobResult() :
	ServiceResult()
{}

PageViewFlowJobResult::PageViewFlowJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewFlowJobResult::~PageViewFlowJobResult()
{}

void PageViewFlowJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ITagFlowJobStatResponse"];
	for (auto resultNodeListITagFlowJobStatResponse : allListNode)
	{
		Result::ITagFlowJobStatResponse iTagFlowJobStatResponseObject;
		if(!resultNodeListITagFlowJobStatResponse["RunInstId"].isNull())
			iTagFlowJobStatResponseObject.runInstId = resultNodeListITagFlowJobStatResponse["RunInstId"].asString();
		if(!resultNodeListITagFlowJobStatResponse["FlowId"].isNull())
			iTagFlowJobStatResponseObject.flowId = resultNodeListITagFlowJobStatResponse["FlowId"].asString();
		if(!resultNodeListITagFlowJobStatResponse["State"].isNull())
			iTagFlowJobStatResponseObject.state = resultNodeListITagFlowJobStatResponse["State"].asString();
		if(!resultNodeListITagFlowJobStatResponse["RunMsg"].isNull())
			iTagFlowJobStatResponseObject.runMsg = resultNodeListITagFlowJobStatResponse["RunMsg"].asString();
		if(!resultNodeListITagFlowJobStatResponse["LogView"].isNull())
			iTagFlowJobStatResponseObject.logView = resultNodeListITagFlowJobStatResponse["LogView"].asString();
		if(!resultNodeListITagFlowJobStatResponse["RunRet"].isNull())
			iTagFlowJobStatResponseObject.runRet = resultNodeListITagFlowJobStatResponse["RunRet"].asString();
		if(!resultNodeListITagFlowJobStatResponse["GmtCreate"].isNull())
			iTagFlowJobStatResponseObject.gmtCreate = resultNodeListITagFlowJobStatResponse["GmtCreate"].asString();
		if(!resultNodeListITagFlowJobStatResponse["GmtModified"].isNull())
			iTagFlowJobStatResponseObject.gmtModified = resultNodeListITagFlowJobStatResponse["GmtModified"].asString();
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			iTagFlowJobStatResponseObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			iTagFlowJobStatResponseObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			iTagFlowJobStatResponseObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			iTagFlowJobStatResponseObject.creator.accountNo = creatorNode["AccountNo"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			iTagFlowJobStatResponseObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			iTagFlowJobStatResponseObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			iTagFlowJobStatResponseObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			iTagFlowJobStatResponseObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		result_.list.push_back(iTagFlowJobStatResponseObject);
	}
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

std::string PageViewFlowJobResult::getMsg()const
{
	return msg_;
}

bool PageViewFlowJobResult::getSucc()const
{
	return succ_;
}

std::string PageViewFlowJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewFlowJobResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewFlowJobResult::getCode()const
{
	return code_;
}

PageViewFlowJobResult::Result PageViewFlowJobResult::getResult()const
{
	return result_;
}

