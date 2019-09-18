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
	auto allPropertys = value["Propertys"]["PropertyUser"];
	for (auto value : allPropertys)
	{
		PropertyUser propertysObject;
		if(!value["LastLoginTime"].isNull())
			propertysObject.lastLoginTime = value["LastLoginTime"].asString();
		if(!value["IsRoot"].isNull())
			propertysObject.isRoot = value["IsRoot"].asString();
		if(!value["InstanceName"].isNull())
			propertysObject.instanceName = value["InstanceName"].asString();
		if(!value["AccountsExpirationDate"].isNull())
			propertysObject.accountsExpirationDate = value["AccountsExpirationDate"].asString();
		if(!value["PasswordExpirationDate"].isNull())
			propertysObject.passwordExpirationDate = value["PasswordExpirationDate"].asString();
		if(!value["Ip"].isNull())
			propertysObject.ip = value["Ip"].asString();
		if(!value["Create"].isNull())
			propertysObject.create = value["Create"].asString();
		if(!value["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["User"].isNull())
			propertysObject.user = value["User"].asString();
		if(!value["Uuid"].isNull())
			propertysObject.uuid = value["Uuid"].asString();
		if(!value["LastLoginIp"].isNull())
			propertysObject.lastLoginIp = value["LastLoginIp"].asString();
		if(!value["InstanceId"].isNull())
			propertysObject.instanceId = value["InstanceId"].asString();
		if(!value["IntranetIp"].isNull())
			propertysObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InternetIp"].isNull())
			propertysObject.internetIp = value["InternetIp"].asString();
		auto allGroupNames = value["GroupNames"]["GroupName"];
		for (auto value : allGroupNames)
			propertysObject.groupNames.push_back(value.asString());
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

std::vector<DescribePropertyUserDetailResult::PropertyUser> DescribePropertyUserDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyUserDetailResult::PageInfo DescribePropertyUserDetailResult::getPageInfo()const
{
	return pageInfo_;
}

