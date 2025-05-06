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

#include <alibabacloud/itag/model/PageViewMyTntResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewMyTntResult::PageViewMyTntResult() :
	ServiceResult()
{}

PageViewMyTntResult::PageViewMyTntResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewMyTntResult::~PageViewMyTntResult()
{}

void PageViewMyTntResult::parse(const std::string &payload)
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
	auto listNode = resultNode["List"];
	if(!listNode["GmtCreate"].isNull())
		result_.list.gmtCreate = listNode["GmtCreate"].asString();
	if(!listNode["GmtModified"].isNull())
		result_.list.gmtModified = listNode["GmtModified"].asString();
	if(!listNode["TntInstId"].isNull())
		result_.list.tntInstId = listNode["TntInstId"].asString();
	if(!listNode["Name"].isNull())
		result_.list.name = listNode["Name"].asString();
	if(!listNode["BizNO"].isNull())
		result_.list.bizNO = listNode["BizNO"].asString();
	if(!listNode["Role"].isNull())
		result_.list.role = listNode["Role"].asString();
	auto creatorNode = listNode["Creator"];
	if(!creatorNode["UserId"].isNull())
		result_.list.creator.userId = creatorNode["UserId"].asString();
	if(!creatorNode["UserName"].isNull())
		result_.list.creator.userName = creatorNode["UserName"].asString();
	if(!creatorNode["AccountType"].isNull())
		result_.list.creator.accountType = creatorNode["AccountType"].asString();
	if(!creatorNode["AccountNo"].isNull())
		result_.list.creator.accountNo = creatorNode["AccountNo"].asString();
	auto modifierNode = listNode["Modifier"];
	if(!modifierNode["UserId"].isNull())
		result_.list.modifier.userId = modifierNode["UserId"].asString();
	if(!modifierNode["UserName"].isNull())
		result_.list.modifier.userName = modifierNode["UserName"].asString();
	if(!modifierNode["AccountType"].isNull())
		result_.list.modifier.accountType = modifierNode["AccountType"].asString();
	if(!modifierNode["AccountNo"].isNull())
		result_.list.modifier.accountNo = modifierNode["AccountNo"].asString();
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

std::string PageViewMyTntResult::getMsg()const
{
	return msg_;
}

bool PageViewMyTntResult::getSucc()const
{
	return succ_;
}

std::string PageViewMyTntResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewMyTntResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewMyTntResult::getCode()const
{
	return code_;
}

PageViewMyTntResult::Result PageViewMyTntResult::getResult()const
{
	return result_;
}

