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

#include <alibabacloud/dts/model/DescribeSynchronizationJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSynchronizationJobsResult::DescribeSynchronizationJobsResult() :
	ServiceResult()
{}

DescribeSynchronizationJobsResult::DescribeSynchronizationJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSynchronizationJobsResult::~DescribeSynchronizationJobsResult()
{}

void DescribeSynchronizationJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSynchronizationInstancesNode = value["SynchronizationInstances"]["SynchronizationInstance"];
	for (auto valueSynchronizationInstancesSynchronizationInstance : allSynchronizationInstancesNode)
	{
		SynchronizationInstance synchronizationInstancesObject;
		if(!valueSynchronizationInstancesSynchronizationInstance["Status"].isNull())
			synchronizationInstancesObject.status = valueSynchronizationInstancesSynchronizationInstance["Status"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["DataInitialization"].isNull())
			synchronizationInstancesObject.dataInitialization = valueSynchronizationInstancesSynchronizationInstance["DataInitialization"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobName"].isNull())
			synchronizationInstancesObject.synchronizationJobName = valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobName"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["Delay"].isNull())
			synchronizationInstancesObject.delay = valueSynchronizationInstancesSynchronizationInstance["Delay"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["ErrorMessage"].isNull())
			synchronizationInstancesObject.errorMessage = valueSynchronizationInstancesSynchronizationInstance["ErrorMessage"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["ExpireTime"].isNull())
			synchronizationInstancesObject.expireTime = valueSynchronizationInstancesSynchronizationInstance["ExpireTime"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobId"].isNull())
			synchronizationInstancesObject.synchronizationJobId = valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobId"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["StructureInitialization"].isNull())
			synchronizationInstancesObject.structureInitialization = valueSynchronizationInstancesSynchronizationInstance["StructureInitialization"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["PayType"].isNull())
			synchronizationInstancesObject.payType = valueSynchronizationInstancesSynchronizationInstance["PayType"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobClass"].isNull())
			synchronizationInstancesObject.synchronizationJobClass = valueSynchronizationInstancesSynchronizationInstance["SynchronizationJobClass"].asString();
		if(!valueSynchronizationInstancesSynchronizationInstance["SynchronizationDirection"].isNull())
			synchronizationInstancesObject.synchronizationDirection = valueSynchronizationInstancesSynchronizationInstance["SynchronizationDirection"].asString();
		auto allSynchronizationObjectsNode = valueSynchronizationInstancesSynchronizationInstance["SynchronizationObjects"]["SynchronizationObject"];
		for (auto valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject : allSynchronizationObjectsNode)
		{
			SynchronizationInstance::SynchronizationObject synchronizationObjectsObject;
			if(!valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["NewSchemaName"].isNull())
				synchronizationObjectsObject.newSchemaName = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["NewSchemaName"].asString();
			if(!valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["SchemaName"].isNull())
				synchronizationObjectsObject.schemaName = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["SchemaName"].asString();
			auto allTableIncludesNode = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["TableIncludes"]["TableInclude"];
			for (auto valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude : allTableIncludesNode)
			{
				SynchronizationInstance::SynchronizationObject::TableInclude tableIncludesObject;
				if(!valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude["TableName"].isNull())
					tableIncludesObject.tableName = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude["TableName"].asString();
				synchronizationObjectsObject.tableIncludes.push_back(tableIncludesObject);
			}
			auto allTableExcludesNode = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObject["TableExcludes"]["TableExclude"];
			for (auto valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude : allTableExcludesNode)
			{
				SynchronizationInstance::SynchronizationObject::TableExclude tableExcludesObject;
				if(!valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude["TableName"].isNull())
					tableExcludesObject.tableName = valueSynchronizationInstancesSynchronizationInstanceSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude["TableName"].asString();
				synchronizationObjectsObject.tableExcludes.push_back(tableExcludesObject);
			}
			synchronizationInstancesObject.synchronizationObjects.push_back(synchronizationObjectsObject);
		}
		auto sourceEndpointNode = value["SourceEndpoint"];
		if(!sourceEndpointNode["InstanceId"].isNull())
			synchronizationInstancesObject.sourceEndpoint.instanceId = sourceEndpointNode["InstanceId"].asString();
		if(!sourceEndpointNode["InstanceType"].isNull())
			synchronizationInstancesObject.sourceEndpoint.instanceType = sourceEndpointNode["InstanceType"].asString();
		if(!sourceEndpointNode["IP"].isNull())
			synchronizationInstancesObject.sourceEndpoint.iP = sourceEndpointNode["IP"].asString();
		if(!sourceEndpointNode["Port"].isNull())
			synchronizationInstancesObject.sourceEndpoint.port = sourceEndpointNode["Port"].asString();
		if(!sourceEndpointNode["UserName"].isNull())
			synchronizationInstancesObject.sourceEndpoint.userName = sourceEndpointNode["UserName"].asString();
		if(!sourceEndpointNode["EngineName"].isNull())
			synchronizationInstancesObject.sourceEndpoint.engineName = sourceEndpointNode["EngineName"].asString();
		auto destinationEndpointNode = value["DestinationEndpoint"];
		if(!destinationEndpointNode["InstanceId"].isNull())
			synchronizationInstancesObject.destinationEndpoint.instanceId = destinationEndpointNode["InstanceId"].asString();
		if(!destinationEndpointNode["InstanceType"].isNull())
			synchronizationInstancesObject.destinationEndpoint.instanceType = destinationEndpointNode["InstanceType"].asString();
		if(!destinationEndpointNode["IP"].isNull())
			synchronizationInstancesObject.destinationEndpoint.iP = destinationEndpointNode["IP"].asString();
		if(!destinationEndpointNode["Port"].isNull())
			synchronizationInstancesObject.destinationEndpoint.port = destinationEndpointNode["Port"].asString();
		if(!destinationEndpointNode["UserName"].isNull())
			synchronizationInstancesObject.destinationEndpoint.userName = destinationEndpointNode["UserName"].asString();
		if(!destinationEndpointNode["EngineName"].isNull())
			synchronizationInstancesObject.destinationEndpoint.engineName = destinationEndpointNode["EngineName"].asString();
		auto precheckStatusNode = value["PrecheckStatus"];
		if(!precheckStatusNode["Status"].isNull())
			synchronizationInstancesObject.precheckStatus.status = precheckStatusNode["Status"].asString();
		if(!precheckStatusNode["Percent"].isNull())
			synchronizationInstancesObject.precheckStatus.percent = precheckStatusNode["Percent"].asString();
		auto allDetailNode = precheckStatusNode["Detail"]["CheckItem"];
		for (auto precheckStatusNodeDetailCheckItem : allDetailNode)
		{
			SynchronizationInstance::PrecheckStatus::CheckItem checkItemObject;
			if(!precheckStatusNodeDetailCheckItem["CheckStatus"].isNull())
				checkItemObject.checkStatus = precheckStatusNodeDetailCheckItem["CheckStatus"].asString();
			if(!precheckStatusNodeDetailCheckItem["ErrorMessage"].isNull())
				checkItemObject.errorMessage = precheckStatusNodeDetailCheckItem["ErrorMessage"].asString();
			if(!precheckStatusNodeDetailCheckItem["ItemName"].isNull())
				checkItemObject.itemName = precheckStatusNodeDetailCheckItem["ItemName"].asString();
			if(!precheckStatusNodeDetailCheckItem["RepairMethod"].isNull())
				checkItemObject.repairMethod = precheckStatusNodeDetailCheckItem["RepairMethod"].asString();
			synchronizationInstancesObject.precheckStatus.detail.push_back(checkItemObject);
		}
		auto structureInitializationStatusNode = value["StructureInitializationStatus"];
		if(!structureInitializationStatusNode["Status"].isNull())
			synchronizationInstancesObject.structureInitializationStatus.status = structureInitializationStatusNode["Status"].asString();
		if(!structureInitializationStatusNode["Percent"].isNull())
			synchronizationInstancesObject.structureInitializationStatus.percent = structureInitializationStatusNode["Percent"].asString();
		if(!structureInitializationStatusNode["Progress"].isNull())
			synchronizationInstancesObject.structureInitializationStatus.progress = structureInitializationStatusNode["Progress"].asString();
		if(!structureInitializationStatusNode["ErrorMessage"].isNull())
			synchronizationInstancesObject.structureInitializationStatus.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
		auto dataInitializationStatusNode = value["DataInitializationStatus"];
		if(!dataInitializationStatusNode["Status"].isNull())
			synchronizationInstancesObject.dataInitializationStatus.status = dataInitializationStatusNode["Status"].asString();
		if(!dataInitializationStatusNode["Percent"].isNull())
			synchronizationInstancesObject.dataInitializationStatus.percent = dataInitializationStatusNode["Percent"].asString();
		if(!dataInitializationStatusNode["Progress"].isNull())
			synchronizationInstancesObject.dataInitializationStatus.progress = dataInitializationStatusNode["Progress"].asString();
		if(!dataInitializationStatusNode["ErrorMessage"].isNull())
			synchronizationInstancesObject.dataInitializationStatus.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
		auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatusNode["Status"].isNull())
			synchronizationInstancesObject.dataSynchronizationStatus.status = dataSynchronizationStatusNode["Status"].asString();
		if(!dataSynchronizationStatusNode["Delay"].isNull())
			synchronizationInstancesObject.dataSynchronizationStatus.delay = dataSynchronizationStatusNode["Delay"].asString();
		if(!dataSynchronizationStatusNode["Percent"].isNull())
			synchronizationInstancesObject.dataSynchronizationStatus.percent = dataSynchronizationStatusNode["Percent"].asString();
		if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
			synchronizationInstancesObject.dataSynchronizationStatus.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
		auto performanceNode = value["Performance"];
		if(!performanceNode["RPS"].isNull())
			synchronizationInstancesObject.performance.rPS = performanceNode["RPS"].asString();
		if(!performanceNode["FLOW"].isNull())
			synchronizationInstancesObject.performance.fLOW = performanceNode["FLOW"].asString();
		synchronizationInstances_.push_back(synchronizationInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeSynchronizationJobsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeSynchronizationJobsResult::SynchronizationInstance> DescribeSynchronizationJobsResult::getSynchronizationInstances()const
{
	return synchronizationInstances_;
}

int DescribeSynchronizationJobsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSynchronizationJobsResult::getPageNumber()const
{
	return pageNumber_;
}

