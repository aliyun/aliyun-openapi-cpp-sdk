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

#include <alibabacloud/r-kvstore/model/DescribeReplicasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeReplicasResult::DescribeReplicasResult() :
	ServiceResult()
{}

DescribeReplicasResult::DescribeReplicasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicasResult::~DescribeReplicasResult()
{}

void DescribeReplicasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReplicasNode = value["Replicas"]["Items"];
	for (auto valueReplicasItems : allReplicasNode)
	{
		Items replicasObject;
		if(!valueReplicasItems["ReplicaId"].isNull())
			replicasObject.replicaId = valueReplicasItems["ReplicaId"].asString();
		if(!valueReplicasItems["ReplicaDescription"].isNull())
			replicasObject.replicaDescription = valueReplicasItems["ReplicaDescription"].asString();
		if(!valueReplicasItems["ReplicaStatus"].isNull())
			replicasObject.replicaStatus = valueReplicasItems["ReplicaStatus"].asString();
		if(!valueReplicasItems["ReplicaMode"].isNull())
			replicasObject.replicaMode = valueReplicasItems["ReplicaMode"].asString();
		if(!valueReplicasItems["DomainMode"].isNull())
			replicasObject.domainMode = valueReplicasItems["DomainMode"].asString();
		auto allDBInstancesNode = allReplicasNode["DBInstances"]["Items"];
		for (auto allReplicasNodeDBInstancesItems : allDBInstancesNode)
		{
			Items::Items1 dBInstancesObject;
			if(!allReplicasNodeDBInstancesItems["DBInstanceId"].isNull())
				dBInstancesObject.dBInstanceId = allReplicasNodeDBInstancesItems["DBInstanceId"].asString();
			if(!allReplicasNodeDBInstancesItems["Role"].isNull())
				dBInstancesObject.role = allReplicasNodeDBInstancesItems["Role"].asString();
			if(!allReplicasNodeDBInstancesItems["ReadWriteType"].isNull())
				dBInstancesObject.readWriteType = allReplicasNodeDBInstancesItems["ReadWriteType"].asString();
			if(!allReplicasNodeDBInstancesItems["InstanceNetworkType"].isNull())
				dBInstancesObject.instanceNetworkType = allReplicasNodeDBInstancesItems["InstanceNetworkType"].asString();
			if(!allReplicasNodeDBInstancesItems["DBInstanceDescription"].isNull())
				dBInstancesObject.dBInstanceDescription = allReplicasNodeDBInstancesItems["DBInstanceDescription"].asString();
			if(!allReplicasNodeDBInstancesItems["DBInstanceStatus"].isNull())
				dBInstancesObject.dBInstanceStatus = allReplicasNodeDBInstancesItems["DBInstanceStatus"].asString();
			if(!allReplicasNodeDBInstancesItems["Engine"].isNull())
				dBInstancesObject.engine = allReplicasNodeDBInstancesItems["Engine"].asString();
			if(!allReplicasNodeDBInstancesItems["RegionId"].isNull())
				dBInstancesObject.regionId = allReplicasNodeDBInstancesItems["RegionId"].asString();
			replicasObject.dBInstances.push_back(dBInstancesObject);
		}
		replicas_.push_back(replicasObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeReplicasResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeReplicasResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeReplicasResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeReplicasResult::Items> DescribeReplicasResult::getReplicas()const
{
	return replicas_;
}

