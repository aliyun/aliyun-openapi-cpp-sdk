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

#include <alibabacloud/sas/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupPolicyResult::DescribeBackupPolicyResult() :
	ServiceResult()
{}

DescribeBackupPolicyResult::DescribeBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPolicyResult::~DescribeBackupPolicyResult()
{}

void DescribeBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupPolicyDetailNode = value["BackupPolicyDetail"];
	if(!backupPolicyDetailNode["Status"].isNull())
		backupPolicyDetail_.status = backupPolicyDetailNode["Status"].asString();
	if(!backupPolicyDetailNode["PolicyVersion"].isNull())
		backupPolicyDetail_.policyVersion = backupPolicyDetailNode["PolicyVersion"].asString();
	if(!backupPolicyDetailNode["Policy"].isNull())
		backupPolicyDetail_.policy = backupPolicyDetailNode["Policy"].asString();
	if(!backupPolicyDetailNode["ClientStatus"].isNull())
		backupPolicyDetail_.clientStatus = backupPolicyDetailNode["ClientStatus"].asString();
	if(!backupPolicyDetailNode["Name"].isNull())
		backupPolicyDetail_.name = backupPolicyDetailNode["Name"].asString();
	if(!backupPolicyDetailNode["Id"].isNull())
		backupPolicyDetail_.id = std::stol(backupPolicyDetailNode["Id"].asString());
	if(!backupPolicyDetailNode["RegionId"].isNull())
		backupPolicyDetail_.regionId = backupPolicyDetailNode["RegionId"].asString();
		auto allUuidList = backupPolicyDetailNode["UuidList"]["StringItem"];
		for (auto value : allUuidList)
			backupPolicyDetail_.uuidList.push_back(value.asString());

}

DescribeBackupPolicyResult::BackupPolicyDetail DescribeBackupPolicyResult::getBackupPolicyDetail()const
{
	return backupPolicyDetail_;
}

