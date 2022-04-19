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

#include <alibabacloud/sas/model/DescribePropertyUserDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyUserDetailResult::DescribePropertyUserDetailResult() :
	ServiceResult()
{}

DescribePropertyUserDetailResult::DescribePropertyUserDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyUserDetailResult::~DescribePropertyUserDetailResult()
{}

void DescribePropertyUserDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["PropertyUser"];
	for (auto valuePropertysPropertyUser : allPropertysNode)
	{
		PropertyUser propertysObject;
		if(!valuePropertysPropertyUser["Status"].isNull())
			propertysObject.status = valuePropertysPropertyUser["Status"].asString();
		if(!valuePropertysPropertyUser["LastLoginIp"].isNull())
			propertysObject.lastLoginIp = valuePropertysPropertyUser["LastLoginIp"].asString();
		if(!valuePropertysPropertyUser["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertyUser["InternetIp"].asString();
		if(!valuePropertysPropertyUser["LastLoginTime"].isNull())
			propertysObject.lastLoginTime = valuePropertysPropertyUser["LastLoginTime"].asString();
		if(!valuePropertysPropertyUser["IsRoot"].isNull())
			propertysObject.isRoot = valuePropertysPropertyUser["IsRoot"].asString();
		if(!valuePropertysPropertyUser["Ip"].isNull())
			propertysObject.ip = valuePropertysPropertyUser["Ip"].asString();
		if(!valuePropertysPropertyUser["User"].isNull())
			propertysObject.user = valuePropertysPropertyUser["User"].asString();
		if(!valuePropertysPropertyUser["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertyUser["InstanceId"].asString();
		if(!valuePropertysPropertyUser["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertyUser["IntranetIp"].asString();
		if(!valuePropertysPropertyUser["PasswordExpirationDate"].isNull())
			propertysObject.passwordExpirationDate = valuePropertysPropertyUser["PasswordExpirationDate"].asString();
		if(!valuePropertysPropertyUser["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertyUser["Uuid"].asString();
		if(!valuePropertysPropertyUser["LastLoginTimestamp"].isNull())
			propertysObject.lastLoginTimestamp = std::stol(valuePropertysPropertyUser["LastLoginTimestamp"].asString());
		if(!valuePropertysPropertyUser["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertyUser["InstanceName"].asString();
		if(!valuePropertysPropertyUser["AccountsExpirationDate"].isNull())
			propertysObject.accountsExpirationDate = valuePropertysPropertyUser["AccountsExpirationDate"].asString();
		if(!valuePropertysPropertyUser["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertyUser["CreateTimestamp"].asString());
		if(!valuePropertysPropertyUser["LastLoginTimeDt"].isNull())
			propertysObject.lastLoginTimeDt = std::stol(valuePropertysPropertyUser["LastLoginTimeDt"].asString());
		if(!valuePropertysPropertyUser["IsPasswdExpired"].isNull())
			propertysObject.isPasswdExpired = std::stoi(valuePropertysPropertyUser["IsPasswdExpired"].asString());
		if(!valuePropertysPropertyUser["IsPasswdLocked"].isNull())
			propertysObject.isPasswdLocked = std::stoi(valuePropertysPropertyUser["IsPasswdLocked"].asString());
		if(!valuePropertysPropertyUser["IsUserExpired"].isNull())
			propertysObject.isUserExpired = std::stoi(valuePropertysPropertyUser["IsUserExpired"].asString());
		if(!valuePropertysPropertyUser["IsCouldLogin"].isNull())
			propertysObject.isCouldLogin = std::stoi(valuePropertysPropertyUser["IsCouldLogin"].asString());
		if(!valuePropertysPropertyUser["IsSudoer"].isNull())
			propertysObject.isSudoer = std::stoi(valuePropertysPropertyUser["IsSudoer"].asString());
		auto allGroupNames = value["GroupNames"]["GroupName"];
		for (auto value : allGroupNames)
			propertysObject.groupNames.push_back(value.asString());
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribePropertyUserDetailResult::PropertyUser> DescribePropertyUserDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyUserDetailResult::PageInfo DescribePropertyUserDetailResult::getPageInfo()const
{
	return pageInfo_;
}

