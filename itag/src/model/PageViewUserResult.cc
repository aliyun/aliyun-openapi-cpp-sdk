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

#include <alibabacloud/itag/model/PageViewUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewUserResult::PageViewUserResult() :
	ServiceResult()
{}

PageViewUserResult::PageViewUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewUserResult::~PageViewUserResult()
{}

void PageViewUserResult::parse(const std::string &payload)
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
	if(!listNode["UserId"].isNull())
		result_.list.userId = listNode["UserId"].asString();
	if(!listNode["UserName"].isNull())
		result_.list.userName = listNode["UserName"].asString();
	if(!listNode["AccountType"].isNull())
		result_.list.accountType = listNode["AccountType"].asString();
	if(!listNode["AccountNo"].isNull())
		result_.list.accountNo = listNode["AccountNo"].asString();
	if(!listNode["Email"].isNull())
		result_.list.email = listNode["Email"].asString();
	if(!listNode["Phone"].isNull())
		result_.list.phone = listNode["Phone"].asString();
	if(!listNode["SupplierId"].isNull())
		result_.list.supplierId = listNode["SupplierId"].asString();
	if(!listNode["Org"].isNull())
		result_.list.org = listNode["Org"].asString();
	if(!listNode["RefUserId"].isNull())
		result_.list.refUserId = listNode["RefUserId"].asString();
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

std::string PageViewUserResult::getMsg()const
{
	return msg_;
}

bool PageViewUserResult::getSucc()const
{
	return succ_;
}

std::string PageViewUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewUserResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewUserResult::getCode()const
{
	return code_;
}

PageViewUserResult::Result PageViewUserResult::getResult()const
{
	return result_;
}

