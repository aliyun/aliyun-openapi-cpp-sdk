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
		if(!valueDBClusterEndpointListDBClusterEndpoint["ReadWriteMode"].isNull())
			dBClusterEndpointListObject.readWriteMode = valueDBClusterEndpointListDBClusterEndpoint["ReadWriteMode"].asString();
		auto allAddressItemsNode = valueDBClusterEndpointListDBClusterEndpoint["AddressItems"]["Address"];
		for (auto valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress : allAddressItemsNode)
		{
			DBClusterEndpoint::Address addressItemsObject;
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["VSwitchId"].isNull())
				addressItemsObject.vSwitchId = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["VSwitchId"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["ConnectionString"].isNull())
				addressItemsObject.connectionString = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["ConnectionString"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["NetType"].isNull())
				addressItemsObject.netType = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["NetType"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["Port"].isNull())
				addressItemsObject.port = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["Port"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["VPCId"].isNull())
				addressItemsObject.vPCId = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["VPCId"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["IPAddress"].isNull())
				addressItemsObject.iPAddress = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["IPAddress"].asString();
			if(!valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["SSLEnabled"].isNull())
				addressItemsObject.sSLEnabled = valueDBClusterEndpointListDBClusterEndpointAddressItemsAddress["SSLEnabled"].asString();
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
		if(!valueRdsEndpointListRdsEndpoint["CustinsType"].isNull())
			rdsEndpointListObject.custinsType = valueRdsEndpointListRdsEndpoint["CustinsType"].asString();
		auto allAddressItems1Node = valueRdsEndpointListRdsEndpoint["AddressItems"]["Address"];
		for (auto valueRdsEndpointListRdsEndpointAddressItemsAddress : allAddressItems1Node)
		{
			RdsEndpoint::Address2 addressItems1Object;
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["VSwitchId"].isNull())
				addressItems1Object.vSwitchId = valueRdsEndpointListRdsEndpointAddressItemsAddress["VSwitchId"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["ConnectionString"].isNull())
				addressItems1Object.connectionString = valueRdsEndpointListRdsEndpointAddressItemsAddress["ConnectionString"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["NetType"].isNull())
				addressItems1Object.netType = valueRdsEndpointListRdsEndpointAddressItemsAddress["NetType"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["Port"].isNull())
				addressItems1Object.port = valueRdsEndpointListRdsEndpointAddressItemsAddress["Port"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["VPCId"].isNull())
				addressItems1Object.vPCId = valueRdsEndpointListRdsEndpointAddressItemsAddress["VPCId"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["IPAddress"].isNull())
				addressItems1Object.iPAddress = valueRdsEndpointListRdsEndpointAddressItemsAddress["IPAddress"].asString();
			if(!valueRdsEndpointListRdsEndpointAddressItemsAddress["SSLEnabled"].isNull())
				addressItems1Object.sSLEnabled = valueRdsEndpointListRdsEndpointAddressItemsAddress["SSLEnabled"].asString();
			rdsEndpointListObject.addressItems1.push_back(addressItems1Object);
		}
		rdsEndpointList_.push_back(rdsEndpointListObject);
	}
	auto allSrcDtsJobListNode = value["SrcDtsJobList"]["SrcDtsJob"];
	for (auto valueSrcDtsJobListSrcDtsJob : allSrcDtsJobListNode)
	{
		SrcDtsJob srcDtsJobListObject;
		if(!valueSrcDtsJobListSrcDtsJob["DtsJobId"].isNull())
			srcDtsJobListObject.dtsJobId = valueSrcDtsJobListSrcDtsJob["DtsJobId"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["DtsJobName"].isNull())
			srcDtsJobListObject.dtsJobName = valueSrcDtsJobListSrcDtsJob["DtsJobName"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["DtsInstanceID"].isNull())
			srcDtsJobListObject.dtsInstanceID = valueSrcDtsJobListSrcDtsJob["DtsInstanceID"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["DtsJobDirection"].isNull())
			srcDtsJobListObject.dtsJobDirection = valueSrcDtsJobListSrcDtsJob["DtsJobDirection"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["Status"].isNull())
			srcDtsJobListObject.status = valueSrcDtsJobListSrcDtsJob["Status"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["SourceEndpoint"].isNull())
			srcDtsJobListObject.sourceEndpoint = valueSrcDtsJobListSrcDtsJob["SourceEndpoint"].asString();
		if(!valueSrcDtsJobListSrcDtsJob["DestinationEndpoint"].isNull())
			srcDtsJobListObject.destinationEndpoint = valueSrcDtsJobListSrcDtsJob["DestinationEndpoint"].asString();
		srcDtsJobList_.push_back(srcDtsJobListObject);
	}
	auto allDstDtsJobListNode = value["DstDtsJobList"]["DstDtsJob"];
	for (auto valueDstDtsJobListDstDtsJob : allDstDtsJobListNode)
	{
		DstDtsJob dstDtsJobListObject;
		if(!valueDstDtsJobListDstDtsJob["DtsJobId"].isNull())
			dstDtsJobListObject.dtsJobId = valueDstDtsJobListDstDtsJob["DtsJobId"].asString();
		if(!valueDstDtsJobListDstDtsJob["DtsJobName"].isNull())
			dstDtsJobListObject.dtsJobName = valueDstDtsJobListDstDtsJob["DtsJobName"].asString();
		if(!valueDstDtsJobListDstDtsJob["DtsInstanceId"].isNull())
			dstDtsJobListObject.dtsInstanceId = valueDstDtsJobListDstDtsJob["DtsInstanceId"].asString();
		if(!valueDstDtsJobListDstDtsJob["DtsJobDirection"].isNull())
			dstDtsJobListObject.dtsJobDirection = valueDstDtsJobListDstDtsJob["DtsJobDirection"].asString();
		if(!valueDstDtsJobListDstDtsJob["Status"].isNull())
			dstDtsJobListObject.status = valueDstDtsJobListDstDtsJob["Status"].asString();
		if(!valueDstDtsJobListDstDtsJob["SourceEndpoint"].isNull())
			dstDtsJobListObject.sourceEndpoint = valueDstDtsJobListDstDtsJob["SourceEndpoint"].asString();
		if(!valueDstDtsJobListDstDtsJob["DestinationEndpoint"].isNull())
			dstDtsJobListObject.destinationEndpoint = valueDstDtsJobListDstDtsJob["DestinationEndpoint"].asString();
		dstDtsJobList_.push_back(dstDtsJobListObject);
	}
	if(!value["Comment"].isNull())
		comment_ = value["Comment"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["Topologies"].isNull())
		topologies_ = value["Topologies"].asString();
	if(!value["RdsReadWriteMode"].isNull())
		rdsReadWriteMode_ = value["RdsReadWriteMode"].asString();
	if(!value["SourceRDSDBInstanceId"].isNull())
		sourceRDSDBInstanceId_ = value["SourceRDSDBInstanceId"].asString();
	if(!value["DBClusterReadWriteMode"].isNull())
		dBClusterReadWriteMode_ = value["DBClusterReadWriteMode"].asString();
	if(!value["DelayedSeconds"].isNull())
		delayedSeconds_ = std::stoi(value["DelayedSeconds"].asString());
	if(!value["MigrationStatus"].isNull())
		migrationStatus_ = value["MigrationStatus"].asString();
	if(!value["DtsInstanceId"].isNull())
		dtsInstanceId_ = value["DtsInstanceId"].asString();
	if(!value["SrcDbType"].isNull())
		srcDbType_ = value["SrcDbType"].asString();
	if(!value["MigrationSwitch"].isNull())
		migrationSwitch_ = value["MigrationSwitch"].asString();
	if(!value["MigrationDtsJobEndpoint"].isNull())
		migrationDtsJobEndpoint_ = value["MigrationDtsJobEndpoint"].asString();
	if(!value["DstBinlogPosition"].isNull())
		dstBinlogPosition_ = value["DstBinlogPosition"].asString();
	if(!value["SrcBinlogPosition"].isNull())
		srcBinlogPosition_ = value["SrcBinlogPosition"].asString();
	if(!value["MigrationProgress"].isNull())
		migrationProgress_ = value["MigrationProgress"].asString();

}

std::string DescribeDBClusterMigrationResult::getComment()const
{
	return comment_;
}

std::string DescribeDBClusterMigrationResult::getSrcBinlogPosition()const
{
	return srcBinlogPosition_;
}

std::string DescribeDBClusterMigrationResult::getMigrationDtsJobEndpoint()const
{
	return migrationDtsJobEndpoint_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterMigrationResult::getSrcDbType()const
{
	return srcDbType_;
}

std::string DescribeDBClusterMigrationResult::getSourceRDSDBInstanceId()const
{
	return sourceRDSDBInstanceId_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterReadWriteMode()const
{
	return dBClusterReadWriteMode_;
}

std::string DescribeDBClusterMigrationResult::getMigrationProgress()const
{
	return migrationProgress_;
}

std::string DescribeDBClusterMigrationResult::getMigrationStatus()const
{
	return migrationStatus_;
}

std::string DescribeDBClusterMigrationResult::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

std::vector<DescribeDBClusterMigrationResult::RdsEndpoint> DescribeDBClusterMigrationResult::getRdsEndpointList()const
{
	return rdsEndpointList_;
}

std::vector<DescribeDBClusterMigrationResult::SrcDtsJob> DescribeDBClusterMigrationResult::getSrcDtsJobList()const
{
	return srcDtsJobList_;
}

std::vector<DescribeDBClusterMigrationResult::DBClusterEndpoint> DescribeDBClusterMigrationResult::getDBClusterEndpointList()const
{
	return dBClusterEndpointList_;
}

std::string DescribeDBClusterMigrationResult::getDstBinlogPosition()const
{
	return dstBinlogPosition_;
}

std::string DescribeDBClusterMigrationResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeDBClusterMigrationResult::getMigrationSwitch()const
{
	return migrationSwitch_;
}

std::string DescribeDBClusterMigrationResult::getTopologies()const
{
	return topologies_;
}

std::string DescribeDBClusterMigrationResult::getRdsReadWriteMode()const
{
	return rdsReadWriteMode_;
}

std::vector<DescribeDBClusterMigrationResult::DstDtsJob> DescribeDBClusterMigrationResult::getDstDtsJobList()const
{
	return dstDtsJobList_;
}

int DescribeDBClusterMigrationResult::getDelayedSeconds()const
{
	return delayedSeconds_;
}

