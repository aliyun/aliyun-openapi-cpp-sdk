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

#include <alibabacloud/polardb/model/DescribeDBClusterMigrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterMigrationResult::DescribeDBClusterMigrationResult() :
	ServiceResult()
{}

DescribeDBClusterMigrationResult::DescribeDBClusterMigrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterMigrationResult::~DescribeDBClusterMigrationResult()
{}

void DescribeDBClusterMigrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBClusterEndpointListNode = value["DBClusterEndpointList"]["DBClusterEndpoint"];
	for (auto valueDBClusterEndpointListDBClusterEndpoint : allDBClusterEndpointListNode)
	{
		DBClusterEndpoint dBClusterEndpointListObject;
		if(!valueDBClusterEndpointListDBClusterEndpoint["DBEndpointId"].isNull())
			dBClusterEndpointListObject.dBEndpointId = valueDBClusterEndpointListDBClusterEndpoint["DBEndpointId"].asString();
		if(!valueDBClusterEndpointListDBClusterEndpoint["EndpointType"].isNull())
			dBClusterEndpointListObject.endpointType = valueDBClusterEndpointListDBClusterEndpoint["EndpointType"].asString();
		auto allAddressItemsNode = allDBClusterEndpointListNode["AddressItems"]["Address"];
		for (auto allDBClusterEndpointListNodeAddressItemsAddress : allAddressItemsNode)
		{
			DBClusterEndpoint::Address addressItemsObject;
			if(!allDBClusterEndpointListNodeAddressItemsAddress["ConnectionString"].isNull())
				addressItemsObject.connectionString = allDBClusterEndpointListNodeAddressItemsAddress["ConnectionString"].asString();
			if(!allDBClusterEndpointListNodeAddressItemsAddress["IPAddress"].isNull())
				addressItemsObject.iPAddress = allDBClusterEndpointListNodeAddressItemsAddress["IPAddress"].asString();
			if(!allDBClusterEndpointListNodeAddressItemsAddress["NetType"].isNull())
				addressItemsObject.netType = allDBClusterEndpointListNodeAddressItemsAddress["NetType"].asString();
			if(!allDBClusterEndpointListNodeAddressItemsAddress["Port"].isNull())
				addressItemsObject.port = allDBClusterEndpointListNodeAddressItemsAddress["Port"].asString();
			if(!allDBClusterEndpointListNodeAddressItemsAddress["VPCId"].isNull())
				addressItemsObject.vPCId = allDBClusterEndpointListNodeAddressItemsAddress["VPCId"].asString();
			if(!allDBClusterEndpointListNodeAddressItemsAddress["VSwitchId"].isNull())
				addressItemsObject.vSwitchId = allDBClusterEndpointListNodeAddressItemsAddress["VSwitchId"].asString();
			dBClusterEndpointListObject.addressItems.push_back(addressItemsObject);
		}
		dBClusterEndpointList_.push_back(dBClusterEndpointListObject);
	}
	auto allRdsEndpointListNode = value["RdsEndpointList"]["RdsEndpoint"];
	for (auto valueRdsEndpointListRdsEndpoint : allRdsEndpointListNode)
	{
		RdsEndpoint rdsEndpointListObject;
		if(!valueRdsEndpointListRdsEndpoint["DBEndpointId"].isNull())
			rdsEndpointListObject.dBEndpointId = valueRdsEndpointListRdsEndpoint["DBEndpointId"].asString();
		if(!valueRdsEndpointListRdsEndpoint["EndpointType"].isNull())
			rdsEndpointListObject.endpointType = valueRdsEndpointListRdsEndpoint["EndpointType"].asString();
		auto allAddressItems1Node = allRdsEndpointListNode["AddressItems"]["Address"];
		for (auto allRdsEndpointListNodeAddressItemsAddress : allAddressItems1Node)
		{
			RdsEndpoint::Address2 addressItems1Object;
			if(!allRdsEndpointListNodeAddressItemsAddress["ConnectionString"].isNull())
				addressItems1Object.connectionString = allRdsEndpointListNodeAddressItemsAddress["ConnectionString"].asString();
			if(!allRdsEndpointListNodeAddressItemsAddress["IPAddress"].isNull())
				addressItems1Object.iPAddress = allRdsEndpointListNodeAddressItemsAddress["IPAddress"].asString();
			if(!allRdsEndpointListNodeAddressItemsAddress["NetType"].isNull())
				addressItems1Object.netType = allRdsEndpointListNodeAddressItemsAddress["NetType"].asString();
			if(!allRdsEndpointListNodeAddressItemsAddress["Port"].isNull())
				addressItems1Object.port = allRdsEndpointListNodeAddressItemsAddress["Port"].asString();
			if(!allRdsEndpointListNodeAddressItemsAddress["VPCId"].isNull())
				addressItems1Object.vPCId = allRdsEndpointListNodeAddressItemsAddress["VPCId"].asString();
			if(!allRdsEndpointListNodeAddressItemsAddress["VSwitchId"].isNull())
				addressItems1Object.vSwitchId = allRdsEndpointListNodeAddressItemsAddress["VSwitchId"].asString();
			rdsEndpointListObject.addressItems1.push_back(addressItems1Object);
		}
		rdsEndpointList_.push_back(rdsEndpointListObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["SourceRDSDBInstanceId"].isNull())
		sourceRDSDBInstanceId_ = value["SourceRDSDBInstanceId"].asString();
	if(!value["MigrationStatus"].isNull())
		migrationStatus_ = value["MigrationStatus"].asString();
	if(!value["Topologies"].isNull())
		topologies_ = value["Topologies"].asString();
	if(!value["DelayedSeconds"].isNull())
		delayedSeconds_ = std::stoi(value["DelayedSeconds"].asString());
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["RdsReadWriteMode"].isNull())
		rdsReadWriteMode_ = value["RdsReadWriteMode"].asString();
	if(!value["DBClusterReadWriteMode"].isNull())
		dBClusterReadWriteMode_ = value["DBClusterReadWriteMode"].asString();
	if(!value["Comment"].isNull())
		comment_ = value["Comment"].asString();

}

std::vector<DescribeDBClusterMigrationResult::DBClusterEndpoint> DescribeDBClusterMigrationResult::getDBClusterEndpointList()const
{
	return dBClusterEndpointList_;
}

std::string DescribeDBClusterMigrationResult::getComment()const
{
	return comment_;
}

std::string DescribeDBClusterMigrationResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterMigrationResult::getTopologies()const
{
	return topologies_;
}

std::string DescribeDBClusterMigrationResult::getRdsReadWriteMode()const
{
	return rdsReadWriteMode_;
}

std::string DescribeDBClusterMigrationResult::getSourceRDSDBInstanceId()const
{
	return sourceRDSDBInstanceId_;
}

int DescribeDBClusterMigrationResult::getDelayedSeconds()const
{
	return delayedSeconds_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterReadWriteMode()const
{
	return dBClusterReadWriteMode_;
}

std::string DescribeDBClusterMigrationResult::getMigrationStatus()const
{
	return migrationStatus_;
}

std::vector<DescribeDBClusterMigrationResult::RdsEndpoint> DescribeDBClusterMigrationResult::getRdsEndpointList()const
{
	return rdsEndpointList_;
}

