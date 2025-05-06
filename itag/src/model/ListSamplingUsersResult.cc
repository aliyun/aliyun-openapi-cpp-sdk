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

#include <alibabacloud/itag/model/ListSamplingUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListSamplingUsersResult::ListSamplingUsersResult() :
	ServiceResult()
{}

ListSamplingUsersResult::ListSamplingUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSamplingUsersResult::~ListSamplingUsersResult()
{}

void ListSamplingUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["UserId"].isNull())
			listItemObject.userId = resultNodeListListItem["UserId"].asString();
		if(!resultNodeListListItem["UserName"].isNull())
			listItemObject.userName = resultNodeListListItem["UserName"].asString();
		if(!resultNodeListListItem["AccountType"].isNull())
			listItemObject.accountType = resultNodeListListItem["AccountType"].asString();
		if(!resultNodeListListItem["AccountNo"].isNull())
			listItemObject.accountNo = resultNodeListListItem["AccountNo"].asString();
		if(!resultNodeListListItem["Email"].isNull())
			listItemObject.email = resultNodeListListItem["Email"].asString();
		if(!resultNodeListListItem["PamNo"].isNull())
			listItemObject.pamNo = resultNodeListListItem["PamNo"].asString();
		if(!resultNodeListListItem["SupplierId"].isNull())
			listItemObject.supplierId = resultNodeListListItem["SupplierId"].asString();
		if(!resultNodeListListItem["SupplierName"].isNull())
			listItemObject.supplierName = resultNodeListListItem["SupplierName"].asString();
		result_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListSamplingUsersResult::getMsg()const
{
	return msg_;
}

long ListSamplingUsersResult::getRt()const
{
	return rt_;
}

bool ListSamplingUsersResult::getSucc()const
{
	return succ_;
}

std::string ListSamplingUsersResult::getHost()const
{
	return host_;
}

std::string ListSamplingUsersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSamplingUsersResult::getErrInfo()const
{
	return errInfo_;
}

int ListSamplingUsersResult::getCode()const
{
	return code_;
}

ListSamplingUsersResult::Result ListSamplingUsersResult::getResult()const
{
	return result_;
}

