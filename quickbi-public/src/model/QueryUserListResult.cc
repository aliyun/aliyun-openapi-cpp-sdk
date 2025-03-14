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

#include <alibabacloud/quickbi-public/model/QueryUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserListResult::QueryUserListResult() :
	ServiceResult()
{}

QueryUserListResult::QueryUserListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserListResult::~QueryUserListResult()
{}

void QueryUserListResult::parse(const std::string &payload)
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
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stoi(resultNode["TotalNum"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	auto allDataNode = resultNode["Data"]["DataItem"];
	for (auto resultNodeDataDataItem : allDataNode)
	{
		Result::DataItem dataItemObject;
		if(!resultNodeDataDataItem["AccountId"].isNull())
			dataItemObject.accountId = resultNodeDataDataItem["AccountId"].asString();
		if(!resultNodeDataDataItem["AccountName"].isNull())
			dataItemObject.accountName = resultNodeDataDataItem["AccountName"].asString();
		if(!resultNodeDataDataItem["AdminUser"].isNull())
			dataItemObject.adminUser = resultNodeDataDataItem["AdminUser"].asString() == "true";
		if(!resultNodeDataDataItem["AuthAdminUser"].isNull())
			dataItemObject.authAdminUser = resultNodeDataDataItem["AuthAdminUser"].asString() == "true";
		if(!resultNodeDataDataItem["Email"].isNull())
			dataItemObject.email = resultNodeDataDataItem["Email"].asString();
		if(!resultNodeDataDataItem["JoinedDate"].isNull())
			dataItemObject.joinedDate = std::stol(resultNodeDataDataItem["JoinedDate"].asString());
		if(!resultNodeDataDataItem["LastLoginTime"].isNull())
			dataItemObject.lastLoginTime = std::stol(resultNodeDataDataItem["LastLoginTime"].asString());
		if(!resultNodeDataDataItem["NickName"].isNull())
			dataItemObject.nickName = resultNodeDataDataItem["NickName"].asString();
		if(!resultNodeDataDataItem["Phone"].isNull())
			dataItemObject.phone = resultNodeDataDataItem["Phone"].asString();
		if(!resultNodeDataDataItem["UserId"].isNull())
			dataItemObject.userId = resultNodeDataDataItem["UserId"].asString();
		if(!resultNodeDataDataItem["UserType"].isNull())
			dataItemObject.userType = std::stoi(resultNodeDataDataItem["UserType"].asString());
		if(!resultNodeDataDataItem["IsDeleted"].isNull())
			dataItemObject.isDeleted = resultNodeDataDataItem["IsDeleted"].asString() == "true";
		auto allRoleIdList = value["RoleIdList"]["roleIdList"];
		for (auto value : allRoleIdList)
			dataItemObject.roleIdList.push_back(value.asString());
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserListResult::getSuccess()const
{
	return success_;
}

QueryUserListResult::Result QueryUserListResult::getResult()const
{
	return result_;
}

