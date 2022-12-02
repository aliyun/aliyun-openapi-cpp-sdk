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

#include <alibabacloud/sas/model/DescribeBackupClientsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupClientsResult::DescribeBackupClientsResult() :
	ServiceResult()
{}

DescribeBackupClientsResult::DescribeBackupClientsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupClientsResult::~DescribeBackupClientsResult()
{}

void DescribeBackupClientsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientsNode = value["Clients"]["BackupMachineDTO"];
	for (auto valueClientsBackupMachineDTO : allClientsNode)
	{
		BackupMachineDTO clientsObject;
		if(!valueClientsBackupMachineDTO["Uuid"].isNull())
			clientsObject.uuid = valueClientsBackupMachineDTO["Uuid"].asString();
		if(!valueClientsBackupMachineDTO["InstanceId"].isNull())
			clientsObject.instanceId = valueClientsBackupMachineDTO["InstanceId"].asString();
		if(!valueClientsBackupMachineDTO["ClientStatus"].isNull())
			clientsObject.clientStatus = valueClientsBackupMachineDTO["ClientStatus"].asString();
		if(!valueClientsBackupMachineDTO["ClientId"].isNull())
			clientsObject.clientId = valueClientsBackupMachineDTO["ClientId"].asString();
		if(!valueClientsBackupMachineDTO["ClientVersion"].isNull())
			clientsObject.clientVersion = valueClientsBackupMachineDTO["ClientVersion"].asString();
		clients_.push_back(clientsObject);
	}

}

std::vector<DescribeBackupClientsResult::BackupMachineDTO> DescribeBackupClientsResult::getClients()const
{
	return clients_;
}

