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

#include <alibabacloud/dds/model/DescribeReplicasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allReplicas = value["Replicas"]["Items"];
	for (auto value : allReplicas)
	{
		Items replicasObject;
		if(!value["ReplicaId"].isNull())
			replicasObject.replicaId = value["ReplicaId"].asString();
		if(!value["ReplicaDescription"].isNull())
			replicasObject.replicaDescription = value["ReplicaDescription"].asString();
		if(!value["ReplicaStatus"].isNull())
			replicasObject.replicaStatus = value["ReplicaStatus"].asString();
		if(!value["ReplicaMode"].isNull())
			replicasObject.replicaMode = value["ReplicaMode"].asString();
		if(!value["DomainMode"].isNull())
			replicasObject.domainMode = value["DomainMode"].asString();
		auto allDBInstances = value["DBInstances"]["Items"];
		for (auto value : allDBInstances)
		{
			Items::Items1 dBInstancesObject;
			if(!value["DBInstanceId"].isNull())
				dBInstancesObject.dBInstanceId = value["DBInstanceId"].asString();
			if(!value["Role"].isNull())
				dBInstancesObject.role = value["Role"].asString();
			if(!value["ReadWriteType"].isNull())
				dBInstancesObject.readWriteType = value["ReadWriteType"].asString();
			if(!value["InstanceNetworkType"].isNull())
				dBInstancesObject.instanceNetworkType = value["InstanceNetworkType"].asString();
			if(!value["DBInstanceDescription"].isNull())
				dBInstancesObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
			if(!value["DBInstanceStatus"].isNull())
				dBInstancesObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
			if(!value["Engine"].isNull())
				dBInstancesObject.engine = value["Engine"].asString();
			if(!value["RegionId"].isNull())
				dBInstancesObject.regionId = value["RegionId"].asString();
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

