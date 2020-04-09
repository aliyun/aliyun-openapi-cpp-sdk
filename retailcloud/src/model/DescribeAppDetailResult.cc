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

#include <alibabacloud/retailcloud/model/DescribeAppDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeAppDetailResult::DescribeAppDetailResult() :
	ServiceResult()
{}

DescribeAppDetailResult::DescribeAppDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppDetailResult::~DescribeAppDetailResult()
{}

void DescribeAppDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["ServiceType"].isNull())
		result_.serviceType = resultNode["ServiceType"].asString();
	if(!resultNode["BizTitle"].isNull())
		result_.bizTitle = resultNode["BizTitle"].asString();
	if(!resultNode["BizName"].isNull())
		result_.bizName = resultNode["BizName"].asString();
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["Language"].isNull())
		result_.language = resultNode["Language"].asString();
	if(!resultNode["Title"].isNull())
		result_.title = resultNode["Title"].asString();
	if(!resultNode["OperatingSystem"].isNull())
		result_.operatingSystem = resultNode["OperatingSystem"].asString();
	if(!resultNode["DeployType"].isNull())
		result_.deployType = resultNode["DeployType"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["AppStateType"].isNull())
		result_.appStateType = resultNode["AppStateType"].asString();
	auto allUserRolesNode = resultNode["UserRoles"]["UserRole"];
	for (auto resultNodeUserRolesUserRole : allUserRolesNode)
	{
		Result::UserRole userRoleObject;
		if(!resultNodeUserRolesUserRole["UserId"].isNull())
			userRoleObject.userId = resultNodeUserRolesUserRole["UserId"].asString();
		if(!resultNodeUserRolesUserRole["UserType"].isNull())
			userRoleObject.userType = resultNodeUserRolesUserRole["UserType"].asString();
		if(!resultNodeUserRolesUserRole["RealName"].isNull())
			userRoleObject.realName = resultNodeUserRolesUserRole["RealName"].asString();
		if(!resultNodeUserRolesUserRole["RoleName"].isNull())
			userRoleObject.roleName = resultNodeUserRolesUserRole["RoleName"].asString();
		result_.userRoles.push_back(userRoleObject);
	}
	auto allMiddleWareInfoListNode = resultNode["MiddleWareInfoList"]["MiddleWareInfo"];
	for (auto resultNodeMiddleWareInfoListMiddleWareInfo : allMiddleWareInfoListNode)
	{
		Result::MiddleWareInfo middleWareInfoObject;
		if(!resultNodeMiddleWareInfoListMiddleWareInfo["AppId"].isNull())
			middleWareInfoObject.appId = std::stol(resultNodeMiddleWareInfoListMiddleWareInfo["AppId"].asString());
		if(!resultNodeMiddleWareInfoListMiddleWareInfo["Code"].isNull())
			middleWareInfoObject.code = std::stoi(resultNodeMiddleWareInfoListMiddleWareInfo["Code"].asString());
		if(!resultNodeMiddleWareInfoListMiddleWareInfo["Name"].isNull())
			middleWareInfoObject.name = resultNodeMiddleWareInfoListMiddleWareInfo["Name"].asString();
		result_.middleWareInfoList.push_back(middleWareInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string DescribeAppDetailResult::getErrMessage()const
{
	return errMessage_;
}

long DescribeAppDetailResult::getCode()const
{
	return code_;
}

DescribeAppDetailResult::Result DescribeAppDetailResult::getResult()const
{
	return result_;
}

