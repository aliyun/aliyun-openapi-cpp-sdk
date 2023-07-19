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

#include <alibabacloud/dts/model/DescribeSynchronizationJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSynchronizationJobStatusResult::DescribeSynchronizationJobStatusResult() :
	ServiceResult()
{}

DescribeSynchronizationJobStatusResult::DescribeSynchronizationJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSynchronizationJobStatusResult::~DescribeSynchronizationJobStatusResult()
{}

void DescribeSynchronizationJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSynchronizationObjectsNode = value["SynchronizationObjects"]["SynchronizationObject"];
	for (auto valueSynchronizationObjectsSynchronizationObject : allSynchronizationObjectsNode)
	{
		SynchronizationObject synchronizationObjectsObject;
		if(!valueSynchronizationObjectsSynchronizationObject["NewSchemaName"].isNull())
			synchronizationObjectsObject.newSchemaName = valueSynchronizationObjectsSynchronizationObject["NewSchemaName"].asString();
		if(!valueSynchronizationObjectsSynchronizationObject["SchemaName"].isNull())
			synchronizationObjectsObject.schemaName = valueSynchronizationObjectsSynchronizationObject["SchemaName"].asString();
		auto allTableIncludesNode = valueSynchronizationObjectsSynchronizationObject["TableIncludes"]["TableInclude"];
		for (auto valueSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude : allTableIncludesNode)
		{
			SynchronizationObject::TableInclude tableIncludesObject;
			if(!valueSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude["TableName"].isNull())
				tableIncludesObject.tableName = valueSynchronizationObjectsSynchronizationObjectTableIncludesTableInclude["TableName"].asString();
			synchronizationObjectsObject.tableIncludes.push_back(tableIncludesObject);
		}
		auto allTableExcludesNode = valueSynchronizationObjectsSynchronizationObject["TableExcludes"]["TableExclude"];
		for (auto valueSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude : allTableExcludesNode)
		{
			SynchronizationObject::TableExclude tableExcludesObject;
			if(!valueSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude["TableName"].isNull())
				tableExcludesObject.tableName = valueSynchronizationObjectsSynchronizationObjectTableExcludesTableExclude["TableName"].asString();
			synchronizationObjectsObject.tableExcludes.push_back(tableExcludesObject);
		}
		synchronizationObjects_.push_back(synchronizationObjectsObject);
	}
	auto sourceEndpointNode = value["SourceEndpoint"];
	if(!sourceEndpointNode["InstanceId"].isNull())
		sourceEndpoint_.instanceId = sourceEndpointNode["InstanceId"].asString();
	if(!sourceEndpointNode["InstanceType"].isNull())
		sourceEndpoint_.instanceType = sourceEndpointNode["InstanceType"].asString();
	if(!sourceEndpointNode["IP"].isNull())
		sourceEndpoint_.iP = sourceEndpointNode["IP"].asString();
	if(!sourceEndpointNode["Port"].isNull())
		sourceEndpoint_.port = sourceEndpointNode["Port"].asString();
	if(!sourceEndpointNode["UserName"].isNull())
		sourceEndpoint_.userName = sourceEndpointNode["UserName"].asString();
	if(!sourceEndpointNode["EngineName"].isNull())
		sourceEndpoint_.engineName = sourceEndpointNode["EngineName"].asString();
	auto destinationEndpointNode = value["DestinationEndpoint"];
	if(!destinationEndpointNode["InstanceId"].isNull())
		destinationEndpoint_.instanceId = destinationEndpointNode["InstanceId"].asString();
	if(!destinationEndpointNode["InstanceType"].isNull())
		destinationEndpoint_.instanceType = destinationEndpointNode["InstanceType"].asString();
	if(!destinationEndpointNode["IP"].isNull())
		destinationEndpoint_.iP = destinationEndpointNode["IP"].asString();
	if(!destinationEndpointNode["Port"].isNull())
		destinationEndpoint_.port = destinationEndpointNode["Port"].asString();
	if(!destinationEndpointNode["UserName"].isNull())
		destinationEndpoint_.userName = destinationEndpointNode["UserName"].asString();
	if(!destinationEndpointNode["EngineName"].isNull())
		destinationEndpoint_.engineName = destinationEndpointNode["EngineName"].asString();
	auto precheckStatusNode = value["PrecheckStatus"];
	if(!precheckStatusNode["Status"].isNull())
		precheckStatus_.status = precheckStatusNode["Status"].asString();
	if(!precheckStatusNode["Percent"].isNull())
		precheckStatus_.percent = precheckStatusNode["Percent"].asString();
	auto allDetailNode = precheckStatusNode["Detail"]["CheckItem"];
	for (auto precheckStatusNodeDetailCheckItem : allDetailNode)
	{
		PrecheckStatus::CheckItem checkItemObject;
		if(!precheckStatusNodeDetailCheckItem["CheckStatus"].isNull())
			checkItemObject.checkStatus = precheckStatusNodeDetailCheckItem["CheckStatus"].asString();
		if(!precheckStatusNodeDetailCheckItem["ErrorMessage"].isNull())
			checkItemObject.errorMessage = precheckStatusNodeDetailCheckItem["ErrorMessage"].asString();
		if(!precheckStatusNodeDetailCheckItem["ItemName"].isNull())
			checkItemObject.itemName = precheckStatusNodeDetailCheckItem["ItemName"].asString();
		if(!precheckStatusNodeDetailCheckItem["RepairMethod"].isNull())
			checkItemObject.repairMethod = precheckStatusNodeDetailCheckItem["RepairMethod"].asString();
		precheckStatus_.detail.push_back(checkItemObject);
	}
	auto structureInitializationStatusNode = value["StructureInitializationStatus"];
	if(!structureInitializationStatusNode["Status"].isNull())
		structureInitializationStatus_.status = structureInitializationStatusNode["Status"].asString();
	if(!structureInitializationStatusNode["Percent"].isNull())
		structureInitializationStatus_.percent = structureInitializationStatusNode["Percent"].asString();
	if(!structureInitializationStatusNode["Progress"].isNull())
		structureInitializationStatus_.progress = structureInitializationStatusNode["Progress"].asString();
	if(!structureInitializationStatusNode["ErrorMessage"].isNull())
		structureInitializationStatus_.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
	auto dataInitializationStatusNode = value["DataInitializationStatus"];
	if(!dataInitializationStatusNode["Status"].isNull())
		dataInitializationStatus_.status = dataInitializationStatusNode["Status"].asString();
	if(!dataInitializationStatusNode["Percent"].isNull())
		dataInitializationStatus_.percent = dataInitializationStatusNode["Percent"].asString();
	if(!dataInitializationStatusNode["Progress"].isNull())
		dataInitializationStatus_.progress = dataInitializationStatusNode["Progress"].asString();
	if(!dataInitializationStatusNode["ErrorMessage"].isNull())
		dataInitializationStatus_.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
	auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
	if(!dataSynchronizationStatusNode["Status"].isNull())
		dataSynchronizationStatus_.status = dataSynchronizationStatusNode["Status"].asString();
	if(!dataSynchronizationStatusNode["Delay"].isNull())
		dataSynchronizationStatus_.delay = dataSynchronizationStatusNode["Delay"].asString();
	if(!dataSynchronizationStatusNode["Percent"].isNull())
		dataSynchronizationStatus_.percent = dataSynchronizationStatusNode["Percent"].asString();
	if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
		dataSynchronizationStatus_.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
	if(!dataSynchronizationStatusNode["Checkpoint"].isNull())
		dataSynchronizationStatus_.checkpoint = dataSynchronizationStatusNode["Checkpoint"].asString();
	auto performanceNode = value["Performance"];
	if(!performanceNode["RPS"].isNull())
		performance_.rPS = performanceNode["RPS"].asString();
	if(!performanceNode["FLOW"].isNull())
		performance_.fLOW = performanceNode["FLOW"].asString();
	if(!value["SynchronizationJobName"].isNull())
		synchronizationJobName_ = value["SynchronizationJobName"].asString();
	if(!value["DataInitialization"].isNull())
		dataInitialization_ = value["DataInitialization"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Delay"].isNull())
		delay_ = value["Delay"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["StructureInitialization"].isNull())
		structureInitialization_ = value["StructureInitialization"].asString();
	if(!value["SynchronizationJobClass"].isNull())
		synchronizationJobClass_ = value["SynchronizationJobClass"].asString();
	if(!value["SynchronizationJobId"].isNull())
		synchronizationJobId_ = value["SynchronizationJobId"].asString();
	if(!value["SynchronizationDirection"].isNull())
		synchronizationDirection_ = value["SynchronizationDirection"].asString();
	if(!value["Checkpoint"].isNull())
		checkpoint_ = value["Checkpoint"].asString();

}

std::string DescribeSynchronizationJobStatusResult::getStatus()const
{
	return status_;
}

std::vector<DescribeSynchronizationJobStatusResult::SynchronizationObject> DescribeSynchronizationJobStatusResult::getSynchronizationObjects()const
{
	return synchronizationObjects_;
}

DescribeSynchronizationJobStatusResult::DataInitializationStatus DescribeSynchronizationJobStatusResult::getDataInitializationStatus()const
{
	return dataInitializationStatus_;
}

std::string DescribeSynchronizationJobStatusResult::getSynchronizationJobName()const
{
	return synchronizationJobName_;
}

std::string DescribeSynchronizationJobStatusResult::getPayType()const
{
	return payType_;
}

std::string DescribeSynchronizationJobStatusResult::getDelay()const
{
	return delay_;
}

DescribeSynchronizationJobStatusResult::PrecheckStatus DescribeSynchronizationJobStatusResult::getPrecheckStatus()const
{
	return precheckStatus_;
}

std::string DescribeSynchronizationJobStatusResult::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

std::string DescribeSynchronizationJobStatusResult::getCheckpoint()const
{
	return checkpoint_;
}

std::string DescribeSynchronizationJobStatusResult::getDataInitialization()const
{
	return dataInitialization_;
}

DescribeSynchronizationJobStatusResult::DestinationEndpoint DescribeSynchronizationJobStatusResult::getDestinationEndpoint()const
{
	return destinationEndpoint_;
}

DescribeSynchronizationJobStatusResult::SourceEndpoint DescribeSynchronizationJobStatusResult::getSourceEndpoint()const
{
	return sourceEndpoint_;
}

std::string DescribeSynchronizationJobStatusResult::getStructureInitialization()const
{
	return structureInitialization_;
}

DescribeSynchronizationJobStatusResult::Performance DescribeSynchronizationJobStatusResult::getPerformance()const
{
	return performance_;
}

std::string DescribeSynchronizationJobStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeSynchronizationJobStatusResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeSynchronizationJobStatusResult::getSynchronizationJobClass()const
{
	return synchronizationJobClass_;
}

std::string DescribeSynchronizationJobStatusResult::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

DescribeSynchronizationJobStatusResult::StructureInitializationStatus DescribeSynchronizationJobStatusResult::getStructureInitializationStatus()const
{
	return structureInitializationStatus_;
}

DescribeSynchronizationJobStatusResult::DataSynchronizationStatus DescribeSynchronizationJobStatusResult::getDataSynchronizationStatus()const
{
	return dataSynchronizationStatus_;
}

