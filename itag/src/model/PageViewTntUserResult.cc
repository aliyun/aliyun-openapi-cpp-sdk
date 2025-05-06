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

#include <alibabacloud/itag/model/PageViewTntUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewTntUserResult::PageViewTntUserResult() :
	ServiceResult()
{}

PageViewTntUserResult::PageViewTntUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewTntUserResult::~PageViewTntUserResult()
{}

void PageViewTntUserResult::parse(const std::string &payload)
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
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["Role"].isNull())
			listItemObject.role = resultNodeListListItem["Role"].asString();
		if(!resultNodeListListItem["Self"].isNull())
			listItemObject.self = resultNodeListListItem["Self"].asString() == "true";
		if(!resultNodeListListItem["TntInstId"].isNull())
			listItemObject.tntInstId = resultNodeListListItem["TntInstId"].asString();
		if(!resultNodeListListItem["Email"].isNull())
			listItemObject.email = resultNodeListListItem["Email"].asString();
		if(!resultNodeListListItem["Phone"].isNull())
			listItemObject.phone = resultNodeListListItem["Phone"].asString();
		if(!resultNodeListListItem["SupplierId"].isNull())
			listItemObject.supplierId = resultNodeListListItem["SupplierId"].asString();
		if(!resultNodeListListItem["Org"].isNull())
			listItemObject.org = resultNodeListListItem["Org"].asString();
		if(!resultNodeListListItem["RefUserId"].isNull())
			listItemObject.refUserId = resultNodeListListItem["RefUserId"].asString();
		if(!resultNodeListListItem["UserId"].isNull())
			listItemObject.userId = resultNodeListListItem["UserId"].asString();
		if(!resultNodeListListItem["UserName"].isNull())
			listItemObject.userName = resultNodeListListItem["UserName"].asString();
		if(!resultNodeListListItem["AccountType"].isNull())
			listItemObject.accountType = resultNodeListListItem["AccountType"].asString();
		if(!resultNodeListListItem["AccountNo"].isNull())
			listItemObject.accountNo = resultNodeListListItem["AccountNo"].asString();
		if(!resultNodeListListItem["BizNo"].isNull())
			listItemObject.bizNo = resultNodeListListItem["BizNo"].asString();
		result_.list.push_back(listItemObject);
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

std::string PageViewTntUserResult::getMsg()const
{
	return msg_;
}

bool PageViewTntUserResult::getSucc()const
{
	return succ_;
}

std::string PageViewTntUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewTntUserResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewTntUserResult::getCode()const
{
	return code_;
}

PageViewTntUserResult::Result PageViewTntUserResult::getResult()const
{
	return result_;
}

