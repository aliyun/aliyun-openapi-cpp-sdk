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

#include <alibabacloud/itag/model/ListWorkNodeUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListWorkNodeUsersResult::ListWorkNodeUsersResult() :
	ServiceResult()
{}

ListWorkNodeUsersResult::ListWorkNodeUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkNodeUsersResult::~ListWorkNodeUsersResult()
{}

void ListWorkNodeUsersResult::parse(const std::string &payload)
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
	auto allListNode = resultNode["List"]["ITagSimpleUserVO"];
	for (auto resultNodeListITagSimpleUserVO : allListNode)
	{
		Result::ITagSimpleUserVO iTagSimpleUserVOObject;
		auto iTagSimpleUserVO1Node = value["ITagSimpleUserVO"];
		if(!iTagSimpleUserVO1Node["UserId"].isNull())
			iTagSimpleUserVOObject.iTagSimpleUserVO1.userId = iTagSimpleUserVO1Node["UserId"].asString();
		if(!iTagSimpleUserVO1Node["UserName"].isNull())
			iTagSimpleUserVOObject.iTagSimpleUserVO1.userName = iTagSimpleUserVO1Node["UserName"].asString();
		if(!iTagSimpleUserVO1Node["AccountType"].isNull())
			iTagSimpleUserVOObject.iTagSimpleUserVO1.accountType = iTagSimpleUserVO1Node["AccountType"].asString();
		if(!iTagSimpleUserVO1Node["AccountNo"].isNull())
			iTagSimpleUserVOObject.iTagSimpleUserVO1.accountNo = iTagSimpleUserVO1Node["AccountNo"].asString();
		result_.list.push_back(iTagSimpleUserVOObject);
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

std::string ListWorkNodeUsersResult::getMsg()const
{
	return msg_;
}

bool ListWorkNodeUsersResult::getSucc()const
{
	return succ_;
}

std::string ListWorkNodeUsersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListWorkNodeUsersResult::getErrInfo()const
{
	return errInfo_;
}

std::string ListWorkNodeUsersResult::getCode()const
{
	return code_;
}

ListWorkNodeUsersResult::Result ListWorkNodeUsersResult::getResult()const
{
	return result_;
}

