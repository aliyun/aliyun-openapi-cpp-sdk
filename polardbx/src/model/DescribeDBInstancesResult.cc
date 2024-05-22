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

#include <alibabacloud/polardbx/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDBInstancesResult::DescribeDBInstancesResult() :
	ServiceResult()
{}

DescribeDBInstancesResult::DescribeDBInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesResult::~DescribeDBInstancesResult()
{}

void DescribeDBInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstancesNode = value["DBInstances"]["DBInstance"];
	for (auto valueDBInstancesDBInstance : allDBInstancesNode)
	{
		DBInstance dBInstancesObject;
		if(!valueDBInstancesDBInstance["Type"].isNull())
			dBInstancesObject.type = valueDBInstancesDBInstance["Type"].asString();
		if(!valueDBInstancesDBInstance["Status"].isNull())
			dBInstancesObject.status = valueDBInstancesDBInstance["Status"].asString();
		if(!valueDBInstancesDBInstance["CommodityCode"].isNull())
			dBInstancesObject.commodityCode = valueDBInstancesDBInstance["CommodityCode"].asString();
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["Expired"].isNull())
			dBInstancesObject.expired = valueDBInstancesDBInstance["Expired"].asString() == "true";
		if(!valueDBInstancesDBInstance["CreateTime"].isNull())
			dBInstancesObject.createTime = valueDBInstancesDBInstance["CreateTime"].asString();
		if(!valueDBInstancesDBInstance["PayType"].isNull())
			dBInstancesObject.payType = valueDBInstancesDBInstance["PayType"].asString();
		if(!valueDBInstancesDBInstance["LockReason"].isNull())
			dBInstancesObject.lockReason = valueDBInstancesDBInstance["LockReason"].asString();
		if(!valueDBInstancesDBInstance["DBType"].isNull())
			dBInstancesObject.dBType = valueDBInstancesDBInstance["DBType"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["VPCId"].isNull())
			dBInstancesObject.vPCId = valueDBInstancesDBInstance["VPCId"].asString();
		if(!valueDBInstancesDBInstance["MinorVersion"].isNull())
			dBInstancesObject.minorVersion = valueDBInstancesDBInstance["MinorVersion"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["Network"].isNull())
			dBInstancesObject.network = valueDBInstancesDBInstance["Network"].asString();
		if(!valueDBInstancesDBInstance["DBVersion"].isNull())
			dBInstancesObject.dBVersion = valueDBInstancesDBInstance["DBVersion"].asString();
		if(!valueDBInstancesDBInstance["Description"].isNull())
			dBInstancesObject.description = valueDBInstancesDBInstance["Description"].asString();
		if(!valueDBInstancesDBInstance["NodeClass"].isNull())
			dBInstancesObject.nodeClass = valueDBInstancesDBInstance["NodeClass"].asString();
		if(!valueDBInstancesDBInstance["StorageUsed"].isNull())
			dBInstancesObject.storageUsed = std::stol(valueDBInstancesDBInstance["StorageUsed"].asString());
		if(!valueDBInstancesDBInstance["NodeCount"].isNull())
			dBInstancesObject.nodeCount = std::stoi(valueDBInstancesDBInstance["NodeCount"].asString());
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["Engine"].isNull())
			dBInstancesObject.engine = valueDBInstancesDBInstance["Engine"].asString();
		if(!valueDBInstancesDBInstance["Id"].isNull())
			dBInstancesObject.id = valueDBInstancesDBInstance["Id"].asString();
		if(!valueDBInstancesDBInstance["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = valueDBInstancesDBInstance["ResourceGroupId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceName"].isNull())
			dBInstancesObject.dBInstanceName = valueDBInstancesDBInstance["DBInstanceName"].asString();
		if(!valueDBInstancesDBInstance["DnNodeCount"].isNull())
			dBInstancesObject.dnNodeCount = std::stoi(valueDBInstancesDBInstance["DnNodeCount"].asString());
		if(!valueDBInstancesDBInstance["CnNodeCount"].isNull())
			dBInstancesObject.cnNodeCount = std::stoi(valueDBInstancesDBInstance["CnNodeCount"].asString());
		if(!valueDBInstancesDBInstance["CnNodeClassCode"].isNull())
			dBInstancesObject.cnNodeClassCode = valueDBInstancesDBInstance["CnNodeClassCode"].asString();
		if(!valueDBInstancesDBInstance["DnNodeClassCode"].isNull())
			dBInstancesObject.dnNodeClassCode = valueDBInstancesDBInstance["DnNodeClassCode"].asString();
		if(!valueDBInstancesDBInstance["Series"].isNull())
			dBInstancesObject.series = valueDBInstancesDBInstance["Series"].asString();
		if(!valueDBInstancesDBInstance["ContainBinlogX"].isNull())
			dBInstancesObject.containBinlogX = valueDBInstancesDBInstance["ContainBinlogX"].asString() == "true";
		if(!valueDBInstancesDBInstance["SupportBinlogX"].isNull())
			dBInstancesObject.supportBinlogX = valueDBInstancesDBInstance["SupportBinlogX"].asString() == "true";
		if(!valueDBInstancesDBInstance["CdcInstanceName"].isNull())
			dBInstancesObject.cdcInstanceName = valueDBInstancesDBInstance["CdcInstanceName"].asString();
		if(!valueDBInstancesDBInstance["TopologyType"].isNull())
			dBInstancesObject.topologyType = valueDBInstancesDBInstance["TopologyType"].asString();
		if(!valueDBInstancesDBInstance["TertiaryZone"].isNull())
			dBInstancesObject.tertiaryZone = valueDBInstancesDBInstance["TertiaryZone"].asString();
		if(!valueDBInstancesDBInstance["PrimaryZone"].isNull())
			dBInstancesObject.primaryZone = valueDBInstancesDBInstance["PrimaryZone"].asString();
		if(!valueDBInstancesDBInstance["SecondaryZone"].isNull())
			dBInstancesObject.secondaryZone = valueDBInstancesDBInstance["SecondaryZone"].asString();
		if(!valueDBInstancesDBInstance["ColumnarInstanceName"].isNull())
			dBInstancesObject.columnarInstanceName = valueDBInstancesDBInstance["ColumnarInstanceName"].asString();
		if(!valueDBInstancesDBInstance["isInGdn"].isNull())
			dBInstancesObject.isInGdn = valueDBInstancesDBInstance["isInGdn"].asString() == "true";
		if(!valueDBInstancesDBInstance["gdnRole"].isNull())
			dBInstancesObject.gdnRole = valueDBInstancesDBInstance["gdnRole"].asString();
		if(!valueDBInstancesDBInstance["CpuType"].isNull())
			dBInstancesObject.cpuType = valueDBInstancesDBInstance["CpuType"].asString();
		auto allNodesNode = valueDBInstancesDBInstance["Nodes"]["PolarDBXNode"];
		for (auto valueDBInstancesDBInstanceNodesPolarDBXNode : allNodesNode)
		{
			DBInstance::PolarDBXNode nodesObject;
			if(!valueDBInstancesDBInstanceNodesPolarDBXNode["ZoneId"].isNull())
				nodesObject.zoneId = valueDBInstancesDBInstanceNodesPolarDBXNode["ZoneId"].asString();
			if(!valueDBInstancesDBInstanceNodesPolarDBXNode["Id"].isNull())
				nodesObject.id = valueDBInstancesDBInstanceNodesPolarDBXNode["Id"].asString();
			if(!valueDBInstancesDBInstanceNodesPolarDBXNode["ClassCode"].isNull())
				nodesObject.classCode = valueDBInstancesDBInstanceNodesPolarDBXNode["ClassCode"].asString();
			if(!valueDBInstancesDBInstanceNodesPolarDBXNode["RegionId"].isNull())
				nodesObject.regionId = valueDBInstancesDBInstanceNodesPolarDBXNode["RegionId"].asString();
			dBInstancesObject.nodes.push_back(nodesObject);
		}
		auto allTagSetNode = valueDBInstancesDBInstance["TagSet"]["TagSetItem"];
		for (auto valueDBInstancesDBInstanceTagSetTagSetItem : allTagSetNode)
		{
			DBInstance::TagSetItem tagSetObject;
			if(!valueDBInstancesDBInstanceTagSetTagSetItem["Key"].isNull())
				tagSetObject.key = valueDBInstancesDBInstanceTagSetTagSetItem["Key"].asString();
			if(!valueDBInstancesDBInstanceTagSetTagSetItem["Value"].isNull())
				tagSetObject.value = valueDBInstancesDBInstanceTagSetTagSetItem["Value"].asString();
			dBInstancesObject.tagSet.push_back(tagSetObject);
		}
		auto allReadDBInstances = value["ReadDBInstances"]["ReadDBInstance"];
		for (auto value : allReadDBInstances)
			dBInstancesObject.readDBInstances.push_back(value.asString());
		auto allColumnarReadDBInstances = value["ColumnarReadDBInstances"]["ColumnarReadDBInstances"];
		for (auto value : allColumnarReadDBInstances)
			dBInstancesObject.columnarReadDBInstances.push_back(value.asString());
		dBInstances_.push_back(dBInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNumber"].isNull())
		totalNumber_ = std::stoi(value["TotalNumber"].asString());

}

int DescribeDBInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDBInstancesResult::getTotalNumber()const
{
	return totalNumber_;
}

std::vector<DescribeDBInstancesResult::DBInstance> DescribeDBInstancesResult::getDBInstances()const
{
	return dBInstances_;
}

