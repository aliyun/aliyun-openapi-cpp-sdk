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

#include <alibabacloud/polardb/model/DescribeEncryptionDBRolePrivilegeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeEncryptionDBRolePrivilegeResult::DescribeEncryptionDBRolePrivilegeResult() :
	ServiceResult()
{}

DescribeEncryptionDBRolePrivilegeResult::DescribeEncryptionDBRolePrivilegeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEncryptionDBRolePrivilegeResult::~DescribeEncryptionDBRolePrivilegeResult()
{}

void DescribeEncryptionDBRolePrivilegeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRolePrivilegeListNode = dataNode["RolePrivilegeList"]["RolePrivilegeListItem"];
	for (auto dataNodeRolePrivilegeListRolePrivilegeListItem : allRolePrivilegeListNode)
	{
		Data::RolePrivilegeListItem rolePrivilegeListItemObject;
		if(!dataNodeRolePrivilegeListRolePrivilegeListItem["RolePrivilegeName"].isNull())
			rolePrivilegeListItemObject.rolePrivilegeName = dataNodeRolePrivilegeListRolePrivilegeListItem["RolePrivilegeName"].asString();
		if(!dataNodeRolePrivilegeListRolePrivilegeListItem["Negation"].isNull())
			rolePrivilegeListItemObject.negation = dataNodeRolePrivilegeListRolePrivilegeListItem["Negation"].asString();
		if(!dataNodeRolePrivilegeListRolePrivilegeListItem["Encryption"].isNull())
			rolePrivilegeListItemObject.encryption = dataNodeRolePrivilegeListRolePrivilegeListItem["Encryption"].asString();
		if(!dataNodeRolePrivilegeListRolePrivilegeListItem["NotEncryption"].isNull())
			rolePrivilegeListItemObject.notEncryption = dataNodeRolePrivilegeListRolePrivilegeListItem["NotEncryption"].asString();
		data_.rolePrivilegeList.push_back(rolePrivilegeListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeEncryptionDBRolePrivilegeResult::getMessage()const
{
	return message_;
}

std::string DescribeEncryptionDBRolePrivilegeResult::getDBClusterId()const
{
	return dBClusterId_;
}

DescribeEncryptionDBRolePrivilegeResult::Data DescribeEncryptionDBRolePrivilegeResult::getData()const
{
	return data_;
}

bool DescribeEncryptionDBRolePrivilegeResult::getSuccess()const
{
	return success_;
}

