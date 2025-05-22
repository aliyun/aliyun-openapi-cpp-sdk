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

#include <alibabacloud/rds/model/GetDBInstanceTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

GetDBInstanceTopologyResult::GetDBInstanceTopologyResult() :
	ServiceResult()
{}

GetDBInstanceTopologyResult::GetDBInstanceTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDBInstanceTopologyResult::~GetDBInstanceTopologyResult()
{}

void GetDBInstanceTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DBInstanceName"].isNull())
		data_.dBInstanceName = dataNode["DBInstanceName"].asString();
	auto allConnectionsNode = dataNode["Connections"]["Connection"];
	for (auto dataNodeConnectionsConnection : allConnectionsNode)
	{
		Data::Connection connectionObject;
		if(!dataNodeConnectionsConnection["ConnectionString"].isNull())
			connectionObject.connectionString = dataNodeConnectionsConnection["ConnectionString"].asString();
		if(!dataNodeConnectionsConnection["DBInstanceName"].isNull())
			connectionObject.dBInstanceName = dataNodeConnectionsConnection["DBInstanceName"].asString();
		if(!dataNodeConnectionsConnection["NetType"].isNull())
			connectionObject.netType = dataNodeConnectionsConnection["NetType"].asString();
		if(!dataNodeConnectionsConnection["ZoneId"].isNull())
			connectionObject.zoneId = dataNodeConnectionsConnection["ZoneId"].asString();
		data_.connections.push_back(connectionObject);
	}
	auto allNodesNode = dataNode["Nodes"]["Node"];
	for (auto dataNodeNodesNode : allNodesNode)
	{
		Data::Node nodeObject;
		if(!dataNodeNodesNode["DBInstanceName"].isNull())
			nodeObject.dBInstanceName = dataNodeNodesNode["DBInstanceName"].asString();
		if(!dataNodeNodesNode["DedicatedHostGroupId"].isNull())
			nodeObject.dedicatedHostGroupId = dataNodeNodesNode["DedicatedHostGroupId"].asString();
		if(!dataNodeNodesNode["DedicatedHostId"].isNull())
			nodeObject.dedicatedHostId = dataNodeNodesNode["DedicatedHostId"].asString();
		if(!dataNodeNodesNode["NodeId"].isNull())
			nodeObject.nodeId = dataNodeNodesNode["NodeId"].asString();
		if(!dataNodeNodesNode["Role"].isNull())
			nodeObject.role = dataNodeNodesNode["Role"].asString();
		if(!dataNodeNodesNode["ZoneId"].isNull())
			nodeObject.zoneId = dataNodeNodesNode["ZoneId"].asString();
		data_.nodes.push_back(nodeObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetDBInstanceTopologyResult::getMessage()const
{
	return message_;
}

GetDBInstanceTopologyResult::Data GetDBInstanceTopologyResult::getData()const
{
	return data_;
}

std::string GetDBInstanceTopologyResult::getCode()const
{
	return code_;
}

