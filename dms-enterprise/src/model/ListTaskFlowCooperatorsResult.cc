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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowCooperatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowCooperatorsResult::ListTaskFlowCooperatorsResult() :
	ServiceResult()
{}

ListTaskFlowCooperatorsResult::ListTaskFlowCooperatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowCooperatorsResult::~ListTaskFlowCooperatorsResult()
{}

void ListTaskFlowCooperatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCooperatorListNode = value["CooperatorList"]["Cooperator"];
	for (auto valueCooperatorListCooperator : allCooperatorListNode)
	{
		Cooperator cooperatorListObject;
		if(!valueCooperatorListCooperator["NickName"].isNull())
			cooperatorListObject.nickName = valueCooperatorListCooperator["NickName"].asString();
		if(!valueCooperatorListCooperator["Email"].isNull())
			cooperatorListObject.email = valueCooperatorListCooperator["Email"].asString();
		if(!valueCooperatorListCooperator["LoginName"].isNull())
			cooperatorListObject.loginName = valueCooperatorListCooperator["LoginName"].asString();
		if(!valueCooperatorListCooperator["RealName"].isNull())
			cooperatorListObject.realName = valueCooperatorListCooperator["RealName"].asString();
		if(!valueCooperatorListCooperator["UserId"].isNull())
			cooperatorListObject.userId = valueCooperatorListCooperator["UserId"].asString();
		cooperatorList_.push_back(cooperatorListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListTaskFlowCooperatorsResult::Cooperator> ListTaskFlowCooperatorsResult::getCooperatorList()const
{
	return cooperatorList_;
}

std::string ListTaskFlowCooperatorsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowCooperatorsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTaskFlowCooperatorsResult::getSuccess()const
{
	return success_;
}

