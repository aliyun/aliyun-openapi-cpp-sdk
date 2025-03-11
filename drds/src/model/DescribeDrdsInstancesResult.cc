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

#include <alibabacloud/drds/model/DescribeDrdsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult() :
	ServiceResult()
{}

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstancesResult::~DescribeDrdsInstancesResult()
{}

void DescribeDrdsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesInstance["VpcId"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["Type"].isNull())
			instancesObject.type = valueInstancesInstance["Type"].asString();
		if(!valueInstancesInstance["CommodityCode"].isNull())
			instancesObject.commodityCode = valueInstancesInstance["CommodityCode"].asString();
		if(!valueInstancesInstance["MachineType"].isNull())
			instancesObject.machineType = valueInstancesInstance["MachineType"].asString();
		if(!valueInstancesInstance["CreateTime"].isNull())
			instancesObject.createTime = std::stol(valueInstancesInstance["CreateTime"].asString());
		if(!valueInstancesInstance["VersionAction"].isNull())
			instancesObject.versionAction = valueInstancesInstance["VersionAction"].asString();
		if(!valueInstancesInstance["InstanceSeries"].isNull())
			instancesObject.instanceSeries = valueInstancesInstance["InstanceSeries"].asString();
		if(!valueInstancesInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesInstance["NetworkType"].asString();
		if(!valueInstancesInstance["Label"].isNull())
			instancesObject.label = valueInstancesInstance["Label"].asString();
		if(!valueInstancesInstance["ProductVersion"].isNull())
			instancesObject.productVersion = valueInstancesInstance["ProductVersion"].asString();
		if(!valueInstancesInstance["InstanceSpec"].isNull())
			instancesObject.instanceSpec = valueInstancesInstance["InstanceSpec"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["VpcCloudInstanceId"].isNull())
			instancesObject.vpcCloudInstanceId = valueInstancesInstance["VpcCloudInstanceId"].asString();
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["Version"].isNull())
			instancesObject.version = std::stol(valueInstancesInstance["Version"].asString());
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["DrdsInstanceId"].isNull())
			instancesObject.drdsInstanceId = valueInstancesInstance["DrdsInstanceId"].asString();
		if(!valueInstancesInstance["ExpireDate"].isNull())
			instancesObject.expireDate = std::stol(valueInstancesInstance["ExpireDate"].asString());
		if(!valueInstancesInstance["MasterInstanceId"].isNull())
			instancesObject.masterInstanceId = valueInstancesInstance["MasterInstanceId"].asString();
		if(!valueInstancesInstance["OrderInstanceId"].isNull())
			instancesObject.orderInstanceId = valueInstancesInstance["OrderInstanceId"].asString();
		if(!valueInstancesInstance["InstRole"].isNull())
			instancesObject.instRole = valueInstancesInstance["InstRole"].asString();
		if(!valueInstancesInstance["series"].isNull())
			instancesObject.series = valueInstancesInstance["series"].asString();
		auto allVipsNode = valueInstancesInstance["Vips"]["Vip"];
		for (auto valueInstancesInstanceVipsVip : allVipsNode)
		{
			Instance::Vip vipsObject;
			if(!valueInstancesInstanceVipsVip["VpcId"].isNull())
				vipsObject.vpcId = valueInstancesInstanceVipsVip["VpcId"].asString();
			if(!valueInstancesInstanceVipsVip["Type"].isNull())
				vipsObject.type = valueInstancesInstanceVipsVip["Type"].asString();
			if(!valueInstancesInstanceVipsVip["VswitchId"].isNull())
				vipsObject.vswitchId = valueInstancesInstanceVipsVip["VswitchId"].asString();
			if(!valueInstancesInstanceVipsVip["Port"].isNull())
				vipsObject.port = valueInstancesInstanceVipsVip["Port"].asString();
			if(!valueInstancesInstanceVipsVip["IP"].isNull())
				vipsObject.iP = valueInstancesInstanceVipsVip["IP"].asString();
			if(!valueInstancesInstanceVipsVip["dns"].isNull())
				vipsObject.dns = valueInstancesInstanceVipsVip["dns"].asString();
			instancesObject.vips.push_back(vipsObject);
		}
		auto allReadOnlyDBInstanceIds = value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceIds)
			instancesObject.readOnlyDBInstanceIds.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeDrdsInstancesResult::Instance> DescribeDrdsInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeDrdsInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDrdsInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDrdsInstancesResult::getTotal()const
{
	return total_;
}

