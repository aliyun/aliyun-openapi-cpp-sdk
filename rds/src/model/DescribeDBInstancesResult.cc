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

#include <alibabacloud/rds/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItems = value["Items"]["DBInstance"];
	for (auto value : allItems)
	{
		DBInstance dBInstanceObject;
		dBInstanceObject.insId = std::stoi(value["InsId"].asString());
		dBInstanceObject.dBInstanceId = value["DBInstanceId"].asString();
		dBInstanceObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		dBInstanceObject.payType = value["PayType"].asString();
		dBInstanceObject.dBInstanceType = value["DBInstanceType"].asString();
		dBInstanceObject.regionId = value["RegionId"].asString();
		dBInstanceObject.expireTime = value["ExpireTime"].asString();
		dBInstanceObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		dBInstanceObject.engine = value["Engine"].asString();
		dBInstanceObject.dBInstanceNetType = value["DBInstanceNetType"].asString();
		dBInstanceObject.connectionMode = value["ConnectionMode"].asString();
		dBInstanceObject.lockMode = value["LockMode"].asString();
		dBInstanceObject.dBInstanceClass = value["DBInstanceClass"].asString();
		dBInstanceObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		dBInstanceObject.lockReason = value["LockReason"].asString();
		dBInstanceObject.zoneId = value["ZoneId"].asString();
		dBInstanceObject.mutriORsignle = std::stoi(value["MutriORsignle"].asString());
		dBInstanceObject.createTime = value["CreateTime"].asString();
		dBInstanceObject.engineVersion = value["EngineVersion"].asString();
		dBInstanceObject.guardDBInstanceId = value["GuardDBInstanceId"].asString();
		dBInstanceObject.tempDBInstanceId = value["TempDBInstanceId"].asString();
		dBInstanceObject.masterInstanceId = value["MasterInstanceId"].asString();
		dBInstanceObject.vpcId = value["VpcId"].asString();
		dBInstanceObject.vSwitchId = value["VSwitchId"].asString();
		dBInstanceObject.replicateId = value["ReplicateId"].asString();
		dBInstanceObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allReadOnlyDBInstanceIds = value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceIds)
		{
			DBInstance::ReadOnlyDBInstanceId readOnlyDBInstanceIdObject;
			readOnlyDBInstanceIdObject.dBInstanceId = value["DBInstanceId"].asString();
			dBInstanceObject.readOnlyDBInstanceIds.push_back(readOnlyDBInstanceIdObject);
		}
		items_.push_back(dBInstanceObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeDBInstancesResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeDBInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeDBInstancesResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstancesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

