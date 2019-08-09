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

#include <alibabacloud/r-kvstore/model/DescribeInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAttributeResult::~DescribeInstanceAttributeResult()
{}

void DescribeInstanceAttributeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allInstances = value["Instances"]["DBInstanceAttribute"];
	for (auto value : allInstances)
	{
		DBInstanceAttribute instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		if(!value["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = value["ConnectionDomain"].asString();
		if(!value["Port"].isNull())
			instancesObject.port = std::stol(value["Port"].asString());
		if(!value["InstanceStatus"].isNull())
			instancesObject.instanceStatus = value["InstanceStatus"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["Capacity"].isNull())
			instancesObject.capacity = std::stol(value["Capacity"].asString());
		if(!value["InstanceClass"].isNull())
			instancesObject.instanceClass = value["InstanceClass"].asString();
		if(!value["QPS"].isNull())
			instancesObject.qPS = std::stol(value["QPS"].asString());
		if(!value["Bandwidth"].isNull())
			instancesObject.bandwidth = std::stol(value["Bandwidth"].asString());
		if(!value["Connections"].isNull())
			instancesObject.connections = std::stol(value["Connections"].asString());
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["Config"].isNull())
			instancesObject.config = value["Config"].asString();
		if(!value["ChargeType"].isNull())
			instancesObject.chargeType = value["ChargeType"].asString();
		if(!value["NodeType"].isNull())
			instancesObject.nodeType = value["NodeType"].asString();
		if(!value["NetworkType"].isNull())
			instancesObject.networkType = value["NetworkType"].asString();
		if(!value["VpcId"].isNull())
			instancesObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			instancesObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["PrivateIp"].isNull())
			instancesObject.privateIp = value["PrivateIp"].asString();
		if(!value["CreateTime"].isNull())
			instancesObject.createTime = value["CreateTime"].asString();
		if(!value["EndTime"].isNull())
			instancesObject.endTime = value["EndTime"].asString();
		if(!value["HasRenewChangeOrder"].isNull())
			instancesObject.hasRenewChangeOrder = value["HasRenewChangeOrder"].asString();
		if(!value["IsRds"].isNull())
			instancesObject.isRds = value["IsRds"].asString() == "true";
		if(!value["Engine"].isNull())
			instancesObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			instancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["MaintainStartTime"].isNull())
			instancesObject.maintainStartTime = value["MaintainStartTime"].asString();
		if(!value["MaintainEndTime"].isNull())
			instancesObject.maintainEndTime = value["MaintainEndTime"].asString();
		if(!value["AvailabilityValue"].isNull())
			instancesObject.availabilityValue = value["AvailabilityValue"].asString();
		if(!value["SecurityIPList"].isNull())
			instancesObject.securityIPList = value["SecurityIPList"].asString();
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["ArchitectureType"].isNull())
			instancesObject.architectureType = value["ArchitectureType"].asString();
		if(!value["NodeType"].isNull())
			instancesObject.nodeType1 = value["NodeType"].asString();
		if(!value["PackageType"].isNull())
			instancesObject.packageType = value["PackageType"].asString();
		if(!value["ReplicaId"].isNull())
			instancesObject.replicaId = value["ReplicaId"].asString();
		if(!value["VpcAuthMode"].isNull())
			instancesObject.vpcAuthMode = value["VpcAuthMode"].asString();
		if(!value["AuditLogRetention"].isNull())
			instancesObject.auditLogRetention = value["AuditLogRetention"].asString();
		if(!value["ReplicationMode"].isNull())
			instancesObject.replicationMode = value["ReplicationMode"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstanceAttribute::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
	}

}

std::vector<DescribeInstanceAttributeResult::DBInstanceAttribute> DescribeInstanceAttributeResult::getInstances()const
{
	return instances_;
}

