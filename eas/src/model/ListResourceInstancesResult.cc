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

#include <alibabacloud/eas/model/ListResourceInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListResourceInstancesResult::ListResourceInstancesResult() :
	ServiceResult()
{}

ListResourceInstancesResult::ListResourceInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceInstancesResult::~ListResourceInstancesResult()
{}

void ListResourceInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstancesItem["InstanceId"].asString();
		if(!valueInstancesInstancesItem["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstancesItem["InstanceName"].asString();
		if(!valueInstancesInstancesItem["InstanceIp"].isNull())
			instancesObject.instanceIp = valueInstancesInstancesItem["InstanceIp"].asString();
		if(!valueInstancesInstancesItem["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesInstancesItem["InstanceStatus"].asString();
		if(!valueInstancesInstancesItem["InstanceCpuCount"].isNull())
			instancesObject.instanceCpuCount = std::stoi(valueInstancesInstancesItem["InstanceCpuCount"].asString());
		if(!valueInstancesInstancesItem["InstanceGpuCount"].isNull())
			instancesObject.instanceGpuCount = std::stoi(valueInstancesInstancesItem["InstanceGpuCount"].asString());
		if(!valueInstancesInstancesItem["InstanceMemory"].isNull())
			instancesObject.instanceMemory = valueInstancesInstancesItem["InstanceMemory"].asString();
		if(!valueInstancesInstancesItem["InstanceGpuMemory"].isNull())
			instancesObject.instanceGpuMemory = valueInstancesInstancesItem["InstanceGpuMemory"].asString();
		if(!valueInstancesInstancesItem["InstanceUsedCpu"].isNull())
			instancesObject.instanceUsedCpu = std::stof(valueInstancesInstancesItem["InstanceUsedCpu"].asString());
		if(!valueInstancesInstancesItem["InstanceUsedGpu"].isNull())
			instancesObject.instanceUsedGpu = std::stof(valueInstancesInstancesItem["InstanceUsedGpu"].asString());
		if(!valueInstancesInstancesItem["InstanceUsedMemory"].isNull())
			instancesObject.instanceUsedMemory = valueInstancesInstancesItem["InstanceUsedMemory"].asString();
		if(!valueInstancesInstancesItem["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstancesItem["InstanceType"].asString();
		if(!valueInstancesInstancesItem["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesInstancesItem["CreateTime"].asString();
		if(!valueInstancesInstancesItem["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesInstancesItem["ChargeType"].asString();
		if(!valueInstancesInstancesItem["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstancesItem["ExpiredTime"].asString();
		if(!valueInstancesInstancesItem["AutoRenewal"].isNull())
			instancesObject.autoRenewal = valueInstancesInstancesItem["AutoRenewal"].asString() == "true";
		if(!valueInstancesInstancesItem["Arch"].isNull())
			instancesObject.arch = valueInstancesInstancesItem["Arch"].asString();
		if(!valueInstancesInstancesItem["Region"].isNull())
			instancesObject.region = valueInstancesInstancesItem["Region"].asString();
		if(!valueInstancesInstancesItem["Zone"].isNull())
			instancesObject.zone = valueInstancesInstancesItem["Zone"].asString();
		if(!valueInstancesInstancesItem["InstanceTenantIp"].isNull())
			instancesObject.instanceTenantIp = valueInstancesInstancesItem["InstanceTenantIp"].asString();
		if(!valueInstancesInstancesItem["InstanceUsedGpuMemory"].isNull())
			instancesObject.instanceUsedGpuMemory = valueInstancesInstancesItem["InstanceUsedGpuMemory"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListResourceInstancesResult::InstancesItem> ListResourceInstancesResult::getInstances()const
{
	return instances_;
}

int ListResourceInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListResourceInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListResourceInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

