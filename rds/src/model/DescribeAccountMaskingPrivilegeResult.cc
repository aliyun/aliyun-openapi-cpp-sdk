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

#include <alibabacloud/rds/model/DescribeAccountMaskingPrivilegeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAccountMaskingPrivilegeResult::DescribeAccountMaskingPrivilegeResult() :
	ServiceResult()
{}

DescribeAccountMaskingPrivilegeResult::DescribeAccountMaskingPrivilegeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountMaskingPrivilegeResult::~DescribeAccountMaskingPrivilegeResult()
{}

void DescribeAccountMaskingPrivilegeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allUserPrivilegeNode = dataNode["UserPrivilege"]["userPrivilegeItem"];
	for (auto dataNodeUserPrivilegeuserPrivilegeItem : allUserPrivilegeNode)
	{
		Data::UserPrivilegeItem userPrivilegeItemObject;
		if(!dataNodeUserPrivilegeuserPrivilegeItem["ExpireTime"].isNull())
			userPrivilegeItemObject.expireTime = dataNodeUserPrivilegeuserPrivilegeItem["ExpireTime"].asString();
		if(!dataNodeUserPrivilegeuserPrivilegeItem["Privilege"].isNull())
			userPrivilegeItemObject.privilege = dataNodeUserPrivilegeuserPrivilegeItem["Privilege"].asString();
		if(!dataNodeUserPrivilegeuserPrivilegeItem["UserName"].isNull())
			userPrivilegeItemObject.userName = dataNodeUserPrivilegeuserPrivilegeItem["UserName"].asString();
		data_.userPrivilege.push_back(userPrivilegeItemObject);
	}

}

DescribeAccountMaskingPrivilegeResult::Data DescribeAccountMaskingPrivilegeResult::getData()const
{
	return data_;
}

