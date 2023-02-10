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

#include <alibabacloud/eas/model/ListServiceInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListServiceInstancesResult::ListServiceInstancesResult() :
	ServiceResult()
{}

ListServiceInstancesResult::ListServiceInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceInstancesResult::~ListServiceInstancesResult()
{}

void ListServiceInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["HostIP"].isNull())
			instancesObject.hostIP = valueInstancesInstancesItem["HostIP"].asString();
		if(!valueInstancesInstancesItem["HostName"].isNull())
			instancesObject.hostName = valueInstancesInstancesItem["HostName"].asString();
		if(!valueInstancesInstancesItem["InnerIP"].isNull())
			instancesObject.innerIP = valueInstancesInstancesItem["InnerIP"].asString();
		if(!valueInstancesInstancesItem["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstancesItem["InstanceName"].asString();
		if(!valueInstancesInstancesItem["InstancePort"].isNull())
			instancesObject.instancePort = std::stoi(valueInstancesInstancesItem["InstancePort"].asString());
		if(!valueInstancesInstancesItem["Namespace"].isNull())
			instancesObject._namespace = valueInstancesInstancesItem["Namespace"].asString();
		if(!valueInstancesInstancesItem["Reason"].isNull())
			instancesObject.reason = valueInstancesInstancesItem["Reason"].asString();
		if(!valueInstancesInstancesItem["RestartCount"].isNull())
			instancesObject.restartCount = std::stoi(valueInstancesInstancesItem["RestartCount"].asString());
		if(!valueInstancesInstancesItem["Status"].isNull())
			instancesObject.status = valueInstancesInstancesItem["Status"].asString();
		if(!valueInstancesInstancesItem["TotalProcesses"].isNull())
			instancesObject.totalProcesses = std::stoi(valueInstancesInstancesItem["TotalProcesses"].asString());
		if(!valueInstancesInstancesItem["ReadyProcesses"].isNull())
			instancesObject.readyProcesses = std::stoi(valueInstancesInstancesItem["ReadyProcesses"].asString());
		if(!valueInstancesInstancesItem["StartAt"].isNull())
			instancesObject.startAt = valueInstancesInstancesItem["StartAt"].asString();
		if(!valueInstancesInstancesItem["Role"].isNull())
			instancesObject.role = valueInstancesInstancesItem["Role"].asString();
		if(!valueInstancesInstancesItem["ResourceType"].isNull())
			instancesObject.resourceType = valueInstancesInstancesItem["ResourceType"].asString();
		if(!valueInstancesInstancesItem["TenantInstanceIP"].isNull())
			instancesObject.tenantInstanceIP = valueInstancesInstancesItem["TenantInstanceIP"].asString();
		if(!valueInstancesInstancesItem["TenantHostIP"].isNull())
			instancesObject.tenantHostIP = valueInstancesInstancesItem["TenantHostIP"].asString();
		auto allLastState = value["LastState"]["null"];
		for (auto value : allLastState)
			instancesObject.lastState.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListServiceInstancesResult::InstancesItem> ListServiceInstancesResult::getInstances()const
{
	return instances_;
}

int ListServiceInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListServiceInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListServiceInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

