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

#include <alibabacloud/itag/model/PageViewUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewUserGroupResult::PageViewUserGroupResult() :
	ServiceResult()
{}

PageViewUserGroupResult::PageViewUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewUserGroupResult::~PageViewUserGroupResult()
{}

void PageViewUserGroupResult::parse(const std::string &payload)
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
	if(!listNode["TntInstId"].isNull())
		result_.list.tntInstId = listNode["TntInstId"].asString();
	if(!listNode["GroupId"].isNull())
		result_.list.groupId = listNode["GroupId"].asString();
	if(!listNode["GroupName"].isNull())
		result_.list.groupName = listNode["GroupName"].asString();
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

std::string PageViewUserGroupResult::getMsg()const
{
	return msg_;
}

bool PageViewUserGroupResult::getSucc()const
{
	return succ_;
}

std::string PageViewUserGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewUserGroupResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewUserGroupResult::getCode()const
{
	return code_;
}

PageViewUserGroupResult::Result PageViewUserGroupResult::getResult()const
{
	return result_;
}

