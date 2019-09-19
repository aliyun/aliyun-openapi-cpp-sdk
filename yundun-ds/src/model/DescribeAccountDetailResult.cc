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

#include <alibabacloud/yundun-ds/model/DescribeAccountDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeAccountDetailResult::DescribeAccountDetailResult() :
	ServiceResult()
{}

DescribeAccountDetailResult::DescribeAccountDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountDetailResult::~DescribeAccountDetailResult()
{}

void DescribeAccountDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountNode = value["Account"];
	if(!accountNode["Id"].isNull())
		account_.id = std::stol(accountNode["Id"].asString());
	if(!accountNode["UserId"].isNull())
		account_.userId = std::stol(accountNode["UserId"].asString());
	if(!accountNode["FirstLevelDepartId"].isNull())
		account_.firstLevelDepartId = std::stol(accountNode["FirstLevelDepartId"].asString());
	if(!accountNode["LoginName"].isNull())
		account_.loginName = accountNode["LoginName"].asString();
	if(!accountNode["FullName"].isNull())
		account_.fullName = accountNode["FullName"].asString();
	if(!accountNode["CellphoneNum"].isNull())
		account_.cellphoneNum = accountNode["CellphoneNum"].asString();
	if(!accountNode["TelephoneNum"].isNull())
		account_.telephoneNum = accountNode["TelephoneNum"].asString();
	if(!accountNode["Email"].isNull())
		account_.email = accountNode["Email"].asString();
	if(!accountNode["ActiveStatus"].isNull())
		account_.activeStatus = accountNode["ActiveStatus"].asString();
	if(!accountNode["DeleteStatus"].isNull())
		account_.deleteStatus = accountNode["DeleteStatus"].asString();
	if(!accountNode["DataInstance"].isNull())
		account_.dataInstance = accountNode["DataInstance"].asString();
	if(!accountNode["CreateTime"].isNull())
		account_.createTime = std::stol(accountNode["CreateTime"].asString());
	if(!accountNode["LoginDataTime"].isNull())
		account_.loginDataTime = std::stol(accountNode["LoginDataTime"].asString());
	if(!accountNode["LoginPolicyName"].isNull())
		account_.loginPolicyName = accountNode["LoginPolicyName"].asString();
	if(!accountNode["FirstLevelDepartName"].isNull())
		account_.firstLevelDepartName = accountNode["FirstLevelDepartName"].asString();
	if(!accountNode["RoleNames"].isNull())
		account_.roleNames = accountNode["RoleNames"].asString();
	if(!accountNode["AliUid"].isNull())
		account_.aliUid = std::stol(accountNode["AliUid"].asString());
	auto allPrivilegeListNode = accountNode["PrivilegeList"]["Privilege"];
	for (auto accountNodePrivilegeListPrivilege : allPrivilegeListNode)
	{
		Account::Privilege privilegeObject;
		if(!accountNodePrivilegeListPrivilege["ProductName"].isNull())
			privilegeObject.productName = accountNodePrivilegeListPrivilege["ProductName"].asString();
		if(!accountNodePrivilegeListPrivilege["UseAccountId"].isNull())
			privilegeObject.useAccountId = accountNodePrivilegeListPrivilege["UseAccountId"].asString();
		if(!accountNodePrivilegeListPrivilege["UseAccountType"].isNull())
			privilegeObject.useAccountType = std::stoi(accountNodePrivilegeListPrivilege["UseAccountType"].asString());
		if(!accountNodePrivilegeListPrivilege["UseAccountTypeName"].isNull())
			privilegeObject.useAccountTypeName = accountNodePrivilegeListPrivilege["UseAccountTypeName"].asString();
		if(!accountNodePrivilegeListPrivilege["UseAccountCreateTime"].isNull())
			privilegeObject.useAccountCreateTime = std::stol(accountNodePrivilegeListPrivilege["UseAccountCreateTime"].asString());
		if(!accountNodePrivilegeListPrivilege["UseAccountName"].isNull())
			privilegeObject.useAccountName = accountNodePrivilegeListPrivilege["UseAccountName"].asString();
		account_.privilegeList.push_back(privilegeObject);
	}
	auto eventCountNode = accountNode["EventCount"];
	auto totalNode = eventCountNode["Total"];
	if(!totalNode["TotalCount"].isNull())
		account_.eventCount.total.totalCount = std::stol(totalNode["TotalCount"].asString());
	if(!totalNode["UndealCount"].isNull())
		account_.eventCount.total.undealCount = std::stol(totalNode["UndealCount"].asString());
	if(!totalNode["ConfirmCount"].isNull())
		account_.eventCount.total.confirmCount = std::stol(totalNode["ConfirmCount"].asString());
	if(!totalNode["ExcludeCount"].isNull())
		account_.eventCount.total.excludeCount = std::stol(totalNode["ExcludeCount"].asString());

}

DescribeAccountDetailResult::Account DescribeAccountDetailResult::getAccount()const
{
	return account_;
}

