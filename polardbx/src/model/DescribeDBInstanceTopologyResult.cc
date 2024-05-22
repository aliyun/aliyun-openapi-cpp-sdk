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

#include <alibabacloud/polardbx/model/DescribeDBInstanceTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDBInstanceTopologyResult::DescribeDBInstanceTopologyResult() :
	ServiceResult()
{}

DescribeDBInstanceTopologyResult::DescribeDBInstanceTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceTopologyResult::~DescribeDBInstanceTopologyResult()
{}

void DescribeDBInstanceTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto logicInstanceTopologyNode = dataNode["LogicInstanceTopology"];
	if(!logicInstanceTopologyNode["DBInstanceName"].isNull())
		data_.logicInstanceTopology.dBInstanceName = logicInstanceTopologyNode["DBInstanceName"].asString();
	if(!logicInstanceTopologyNode["DBInstanceCreateTime"].isNull())
		data_.logicInstanceTopology.dBInstanceCreateTime = logicInstanceTopologyNode["DBInstanceCreateTime"].asString();
	if(!logicInstanceTopologyNode["MaintainStartTime"].isNull())
		data_.logicInstanceTopology.maintainStartTime = logicInstanceTopologyNode["MaintainStartTime"].asString();
	if(!logicInstanceTopologyNode["MaintainEndTime"].isNull())
		data_.logicInstanceTopology.maintainEndTime = logicInstanceTopologyNode["MaintainEndTime"].asString();
	if(!logicInstanceTopologyNode["LockReason"].isNull())
		data_.logicInstanceTopology.lockReason = logicInstanceTopologyNode["LockReason"].asString();
	if(!logicInstanceTopologyNode["DBInstanceStatus"].isNull())
		data_.logicInstanceTopology.dBInstanceStatus = std::stoi(logicInstanceTopologyNode["DBInstanceStatus"].asString());
	if(!logicInstanceTopologyNode["LockMode"].isNull())
		data_.logicInstanceTopology.lockMode = std::stoi(logicInstanceTopologyNode["LockMode"].asString());
	if(!logicInstanceTopologyNode["EngineVersion"].isNull())
		data_.logicInstanceTopology.engineVersion = logicInstanceTopologyNode["EngineVersion"].asString();
	if(!logicInstanceTopologyNode["DBInstanceStorage"].isNull())
		data_.logicInstanceTopology.dBInstanceStorage = std::stoi(logicInstanceTopologyNode["DBInstanceStorage"].asString());
	if(!logicInstanceTopologyNode["DBInstanceConnType"].isNull())
		data_.logicInstanceTopology.dBInstanceConnType = logicInstanceTopologyNode["DBInstanceConnType"].asString();
	if(!logicInstanceTopologyNode["DBInstanceId"].isNull())
		data_.logicInstanceTopology.dBInstanceId = logicInstanceTopologyNode["DBInstanceId"].asString();
	if(!logicInstanceTopologyNode["Engine"].isNull())
		data_.logicInstanceTopology.engine = logicInstanceTopologyNode["Engine"].asString();
	if(!logicInstanceTopologyNode["DBInstanceDescription"].isNull())
		data_.logicInstanceTopology.dBInstanceDescription = logicInstanceTopologyNode["DBInstanceDescription"].asString();
	if(!logicInstanceTopologyNode["DBInstanceStatusDescription"].isNull())
		data_.logicInstanceTopology.dBInstanceStatusDescription = logicInstanceTopologyNode["DBInstanceStatusDescription"].asString();
	auto allItemsNode = logicInstanceTopologyNode["Items"]["ItemsItem"];
	for (auto logicInstanceTopologyNodeItemsItemsItem : allItemsNode)
	{
		Data::LogicInstanceTopology::ItemsItem itemsItemObject;
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceCreateTime"].isNull())
			itemsItemObject.dBInstanceCreateTime = logicInstanceTopologyNodeItemsItemsItem["DBInstanceCreateTime"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceName"].isNull())
			itemsItemObject.dBInstanceName = logicInstanceTopologyNodeItemsItemsItem["DBInstanceName"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["CharacterType"].isNull())
			itemsItemObject.characterType = logicInstanceTopologyNodeItemsItemsItem["CharacterType"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["MaintainStartTime"].isNull())
			itemsItemObject.maintainStartTime = logicInstanceTopologyNodeItemsItemsItem["MaintainStartTime"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["DiskSize"].isNull())
			itemsItemObject.diskSize = std::stol(logicInstanceTopologyNodeItemsItemsItem["DiskSize"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["MaintainEndTime"].isNull())
			itemsItemObject.maintainEndTime = logicInstanceTopologyNodeItemsItemsItem["MaintainEndTime"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["LockReason"].isNull())
			itemsItemObject.lockReason = logicInstanceTopologyNodeItemsItemsItem["LockReason"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceStatus"].isNull())
			itemsItemObject.dBInstanceStatus = std::stoi(logicInstanceTopologyNodeItemsItemsItem["DBInstanceStatus"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["LockMode"].isNull())
			itemsItemObject.lockMode = std::stoi(logicInstanceTopologyNodeItemsItemsItem["LockMode"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["EngineVersion"].isNull())
			itemsItemObject.engineVersion = logicInstanceTopologyNodeItemsItemsItem["EngineVersion"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceConnType"].isNull())
			itemsItemObject.dBInstanceConnType = std::stoi(logicInstanceTopologyNodeItemsItemsItem["DBInstanceConnType"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["MaxConnections"].isNull())
			itemsItemObject.maxConnections = std::stoi(logicInstanceTopologyNodeItemsItemsItem["MaxConnections"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceId"].isNull())
			itemsItemObject.dBInstanceId = logicInstanceTopologyNodeItemsItemsItem["DBInstanceId"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Engine"].isNull())
			itemsItemObject.engine = logicInstanceTopologyNodeItemsItemsItem["Engine"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["MaxIops"].isNull())
			itemsItemObject.maxIops = std::stoi(logicInstanceTopologyNodeItemsItemsItem["MaxIops"].asString());
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceDescription"].isNull())
			itemsItemObject.dBInstanceDescription = logicInstanceTopologyNodeItemsItemsItem["DBInstanceDescription"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["DBInstanceStatusDescription"].isNull())
			itemsItemObject.dBInstanceStatusDescription = logicInstanceTopologyNodeItemsItemsItem["DBInstanceStatusDescription"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Region"].isNull())
			itemsItemObject.region = logicInstanceTopologyNodeItemsItemsItem["Region"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Azone"].isNull())
			itemsItemObject.azone = logicInstanceTopologyNodeItemsItemsItem["Azone"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Role"].isNull())
			itemsItemObject.role = logicInstanceTopologyNodeItemsItemsItem["Role"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Activated"].isNull())
			itemsItemObject.activated = logicInstanceTopologyNodeItemsItemsItem["Activated"].asString() == "true";
		if(!logicInstanceTopologyNodeItemsItemsItem["Status"].isNull())
			itemsItemObject.status = logicInstanceTopologyNodeItemsItemsItem["Status"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["NodeClass"].isNull())
			itemsItemObject.nodeClass = logicInstanceTopologyNodeItemsItemsItem["NodeClass"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["Version"].isNull())
			itemsItemObject.version = logicInstanceTopologyNodeItemsItemsItem["Version"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["PhyInstanceName"].isNull())
			itemsItemObject.phyInstanceName = logicInstanceTopologyNodeItemsItemsItem["PhyInstanceName"].asString();
		if(!logicInstanceTopologyNodeItemsItemsItem["StorageUsed"].isNull())
			itemsItemObject.storageUsed = logicInstanceTopologyNodeItemsItemsItem["StorageUsed"].asString();
		auto allConnectionIpNode = logicInstanceTopologyNodeItemsItemsItem["ConnectionIp"]["ConnectionIpItem"];
		for (auto logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem : allConnectionIpNode)
		{
			Data::LogicInstanceTopology::ItemsItem::ConnectionIpItem connectionIpObject;
			if(!logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["Port"].isNull())
				connectionIpObject.port = logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["Port"].asString();
			if(!logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["DBInstanceNetType"].isNull())
				connectionIpObject.dBInstanceNetType = std::stoi(logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["DBInstanceNetType"].asString());
			if(!logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["ConnectionString"].isNull())
				connectionIpObject.connectionString = logicInstanceTopologyNodeItemsItemsItemConnectionIpConnectionIpItem["ConnectionString"].asString();
			itemsItemObject.connectionIp.push_back(connectionIpObject);
		}
		auto allAzoneRoleListNode = logicInstanceTopologyNodeItemsItemsItem["AzoneRoleList"]["aoneRoleMap"];
		for (auto logicInstanceTopologyNodeItemsItemsItemAzoneRoleListaoneRoleMap : allAzoneRoleListNode)
		{
			Data::LogicInstanceTopology::ItemsItem::AoneRoleMap azoneRoleListObject;
			if(!logicInstanceTopologyNodeItemsItemsItemAzoneRoleListaoneRoleMap["Azone"].isNull())
				azoneRoleListObject.azone = logicInstanceTopologyNodeItemsItemsItemAzoneRoleListaoneRoleMap["Azone"].asString();
			if(!logicInstanceTopologyNodeItemsItemsItemAzoneRoleListaoneRoleMap["Role"].isNull())
				azoneRoleListObject.role = logicInstanceTopologyNodeItemsItemsItemAzoneRoleListaoneRoleMap["Role"].asString();
			itemsItemObject.azoneRoleList.push_back(azoneRoleListObject);
		}
		data_.logicInstanceTopology.items.push_back(itemsItemObject);
	}
	auto allHistoryItemsNode = logicInstanceTopologyNode["HistoryItems"]["historyItemsItem"];
	for (auto logicInstanceTopologyNodeHistoryItemshistoryItemsItem : allHistoryItemsNode)
	{
		Data::LogicInstanceTopology::HistoryItemsItem historyItemsItemObject;
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["CharacterType"].isNull())
			historyItemsItemObject.characterType = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["CharacterType"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Role"].isNull())
			historyItemsItemObject.role = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Role"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["DBInstanceName"].isNull())
			historyItemsItemObject.dBInstanceName = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["DBInstanceName"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["DBInstanceId"].isNull())
			historyItemsItemObject.dBInstanceId = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["DBInstanceId"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Region"].isNull())
			historyItemsItemObject.region = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Region"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Azone"].isNull())
			historyItemsItemObject.azone = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Azone"].asString();
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Activated"].isNull())
			historyItemsItemObject.activated = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["Activated"].asString() == "true";
		if(!logicInstanceTopologyNodeHistoryItemshistoryItemsItem["PhyInstanceName"].isNull())
			historyItemsItemObject.phyInstanceName = logicInstanceTopologyNodeHistoryItemshistoryItemsItem["PhyInstanceName"].asString();
		data_.logicInstanceTopology.historyItems.push_back(historyItemsItemObject);
	}

}

DescribeDBInstanceTopologyResult::Data DescribeDBInstanceTopologyResult::getData()const
{
	return data_;
}

