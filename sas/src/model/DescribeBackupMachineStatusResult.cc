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

#include <alibabacloud/sas/model/DescribeBackupMachineStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupMachineStatusResult::DescribeBackupMachineStatusResult() :
	ServiceResult()
{}

DescribeBackupMachineStatusResult::DescribeBackupMachineStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupMachineStatusResult::~DescribeBackupMachineStatusResult()
{}

void DescribeBackupMachineStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupMachineStatusNode = value["BackupMachineStatus"];
	if(!backupMachineStatusNode["Status"].isNull())
		backupMachineStatus_.status = backupMachineStatusNode["Status"].asString();
	if(!backupMachineStatusNode["Uuid"].isNull())
		backupMachineStatus_.uuid = backupMachineStatusNode["Uuid"].asString();
	if(!backupMachineStatusNode["VaultId"].isNull())
		backupMachineStatus_.vaultId = backupMachineStatusNode["VaultId"].asString();
	if(!backupMachineStatusNode["ErrorCode"].isNull())
		backupMachineStatus_.errorCode = backupMachineStatusNode["ErrorCode"].asString();
	if(!backupMachineStatusNode["SavedBackupCount"].isNull())
		backupMachineStatus_.savedBackupCount = std::stoi(backupMachineStatusNode["SavedBackupCount"].asString());
	if(!backupMachineStatusNode["InstanceId"].isNull())
		backupMachineStatus_.instanceId = backupMachineStatusNode["InstanceId"].asString();
	if(!backupMachineStatusNode["ClientStatus"].isNull())
		backupMachineStatus_.clientStatus = backupMachineStatusNode["ClientStatus"].asString();
	if(!backupMachineStatusNode["RegionId"].isNull())
		backupMachineStatus_.regionId = backupMachineStatusNode["RegionId"].asString();
	if(!backupMachineStatusNode["ClientVersion"].isNull())
		backupMachineStatus_.clientVersion = backupMachineStatusNode["ClientVersion"].asString();
	if(!backupMachineStatusNode["ClientId"].isNull())
		backupMachineStatus_.clientId = backupMachineStatusNode["ClientId"].asString();
	auto allErrorListNode = backupMachineStatusNode["ErrorList"]["BackupErrorMsg"];
	for (auto backupMachineStatusNodeErrorListBackupErrorMsg : allErrorListNode)
	{
		BackupMachineStatus::BackupErrorMsg backupErrorMsgObject;
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["Key"].isNull())
			backupErrorMsgObject.key = backupMachineStatusNodeErrorListBackupErrorMsg["Key"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorFile"].isNull())
			backupErrorMsgObject.errorFile = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorFile"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["RequestId"].isNull())
			backupErrorMsgObject.requestId = backupMachineStatusNodeErrorListBackupErrorMsg["RequestId"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorFileUrl"].isNull())
			backupErrorMsgObject.errorFileUrl = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorFileUrl"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorCode"].isNull())
			backupErrorMsgObject.errorCode = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorCode"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorStatus"].isNull())
			backupErrorMsgObject.errorStatus = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorStatus"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["Path"].isNull())
			backupErrorMsgObject.path = backupMachineStatusNodeErrorListBackupErrorMsg["Path"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorMsg"].isNull())
			backupErrorMsgObject.errorMsg = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorMsg"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorType"].isNull())
			backupErrorMsgObject.errorType = backupMachineStatusNodeErrorListBackupErrorMsg["ErrorType"].asString();
		if(!backupMachineStatusNodeErrorListBackupErrorMsg["ErrorTime"].isNull())
			backupErrorMsgObject.errorTime = std::stol(backupMachineStatusNodeErrorListBackupErrorMsg["ErrorTime"].asString());
		backupMachineStatus_.errorList.push_back(backupErrorMsgObject);
	}

}

DescribeBackupMachineStatusResult::BackupMachineStatus DescribeBackupMachineStatusResult::getBackupMachineStatus()const
{
	return backupMachineStatus_;
}

