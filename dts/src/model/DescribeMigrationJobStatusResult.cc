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

#include <alibabacloud/dts/model/DescribeMigrationJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeMigrationJobStatusResult::DescribeMigrationJobStatusResult() :
	ServiceResult()
{}

DescribeMigrationJobStatusResult::DescribeMigrationJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrationJobStatusResult::~DescribeMigrationJobStatusResult()
{}

void DescribeMigrationJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataInitializationStatusNode = value["DataInitializationStatus"];
	if(!dataInitializationStatusNode["ErrorMessage"].isNull())
		dataInitializationStatus_.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
	if(!dataInitializationStatusNode["Percent"].isNull())
		dataInitializationStatus_.percent = dataInitializationStatusNode["Percent"].asString();
	if(!dataInitializationStatusNode["Progress"].isNull())
		dataInitializationStatus_.progress = dataInitializationStatusNode["Progress"].asString();
	if(!dataInitializationStatusNode["Status"].isNull())
		dataInitializationStatus_.status = dataInitializationStatusNode["Status"].asString();
	auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
	if(!dataSynchronizationStatusNode["Checkpoint"].isNull())
		dataSynchronizationStatus_.checkpoint = dataSynchronizationStatusNode["Checkpoint"].asString();
	if(!dataSynchronizationStatusNode["Delay"].isNull())
		dataSynchronizationStatus_.delay = dataSynchronizationStatusNode["Delay"].asString();
	if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
		dataSynchronizationStatus_.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
	if(!dataSynchronizationStatusNode["Percent"].isNull())
		dataSynchronizationStatus_.percent = dataSynchronizationStatusNode["Percent"].asString();
	if(!dataSynchronizationStatusNode["Status"].isNull())
		dataSynchronizationStatus_.status = dataSynchronizationStatusNode["Status"].asString();
	auto destinationEndpointNode = value["DestinationEndpoint"];
	if(!destinationEndpointNode["DatabaseName"].isNull())
		destinationEndpoint_.databaseName = destinationEndpointNode["DatabaseName"].asString();
	if(!destinationEndpointNode["EngineName"].isNull())
		destinationEndpoint_.engineName = destinationEndpointNode["EngineName"].asString();
	if(!destinationEndpointNode["IP"].isNull())
		destinationEndpoint_.iP = destinationEndpointNode["IP"].asString();
	if(!destinationEndpointNode["InstanceId"].isNull())
		destinationEndpoint_.instanceId = destinationEndpointNode["InstanceId"].asString();
	if(!destinationEndpointNode["InstanceType"].isNull())
		destinationEndpoint_.instanceType = destinationEndpointNode["InstanceType"].asString();
	if(!destinationEndpointNode["Port"].isNull())
		destinationEndpoint_.port = destinationEndpointNode["Port"].asString();
	if(!destinationEndpointNode["UserName"].isNull())
		destinationEndpoint_.userName = destinationEndpointNode["UserName"].asString();
	if(!destinationEndpointNode["oracleSID"].isNull())
		destinationEndpoint_.oracleSID = destinationEndpointNode["oracleSID"].asString();
	auto migrationModeNode = value["MigrationMode"];
	if(!migrationModeNode["dataInitialization"].isNull())
		migrationMode_.dataInitialization = migrationModeNode["dataInitialization"].asString() == "true";
	if(!migrationModeNode["dataSynchronization"].isNull())
		migrationMode_.dataSynchronization = migrationModeNode["dataSynchronization"].asString() == "true";
	if(!migrationModeNode["structureInitialization"].isNull())
		migrationMode_.structureInitialization = migrationModeNode["structureInitialization"].asString() == "true";
	auto precheckStatusNode = value["PrecheckStatus"];
	if(!precheckStatusNode["Percent"].isNull())
		precheckStatus_.percent = precheckStatusNode["Percent"].asString();
	if(!precheckStatusNode["Status"].isNull())
		precheckStatus_.status = precheckStatusNode["Status"].asString();
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
	auto sourceEndpointNode = value["SourceEndpoint"];
	if(!sourceEndpointNode["DatabaseName"].isNull())
		sourceEndpoint_.databaseName = sourceEndpointNode["DatabaseName"].asString();
	if(!sourceEndpointNode["EngineName"].isNull())
		sourceEndpoint_.engineName = sourceEndpointNode["EngineName"].asString();
	if(!sourceEndpointNode["IP"].isNull())
		sourceEndpoint_.iP = sourceEndpointNode["IP"].asString();
	if(!sourceEndpointNode["InstanceId"].isNull())
		sourceEndpoint_.instanceId = sourceEndpointNode["InstanceId"].asString();
	if(!sourceEndpointNode["InstanceType"].isNull())
		sourceEndpoint_.instanceType = sourceEndpointNode["InstanceType"].asString();
	if(!sourceEndpointNode["Port"].isNull())
		sourceEndpoint_.port = sourceEndpointNode["Port"].asString();
	if(!sourceEndpointNode["UserName"].isNull())
		sourceEndpoint_.userName = sourceEndpointNode["UserName"].asString();
	if(!sourceEndpointNode["oracleSID"].isNull())
		sourceEndpoint_.oracleSID = sourceEndpointNode["oracleSID"].asString();
	auto structureInitializationStatusNode = value["StructureInitializationStatus"];
	if(!structureInitializationStatusNode["ErrorMessage"].isNull())
		structureInitializationStatus_.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
	if(!structureInitializationStatusNode["Percent"].isNull())
		structureInitializationStatus_.percent = structureInitializationStatusNode["Percent"].asString();
	if(!structureInitializationStatusNode["Progress"].isNull())
		structureInitializationStatus_.progress = structureInitializationStatusNode["Progress"].asString();
	if(!structureInitializationStatusNode["Status"].isNull())
		structureInitializationStatus_.status = structureInitializationStatusNode["Status"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["MigrationJobClass"].isNull())
		migrationJobClass_ = value["MigrationJobClass"].asString();
	if(!value["MigrationJobId"].isNull())
		migrationJobId_ = value["MigrationJobId"].asString();
	if(!value["MigrationJobName"].isNull())
		migrationJobName_ = value["MigrationJobName"].asString();
	if(!value["MigrationJobStatus"].isNull())
		migrationJobStatus_ = value["MigrationJobStatus"].asString();
	if(!value["MigrationObject"].isNull())
		migrationObject_ = value["MigrationObject"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

DescribeMigrationJobStatusResult::DataInitializationStatus DescribeMigrationJobStatusResult::getDataInitializationStatus()const
{
	return dataInitializationStatus_;
}

std::string DescribeMigrationJobStatusResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeMigrationJobStatusResult::getMigrationJobName()const
{
	return migrationJobName_;
}

std::string DescribeMigrationJobStatusResult::getPayType()const
{
	return payType_;
}

std::string DescribeMigrationJobStatusResult::getErrMessage()const
{
	return errMessage_;
}

DescribeMigrationJobStatusResult::MigrationMode DescribeMigrationJobStatusResult::getMigrationMode()const
{
	return migrationMode_;
}

std::string DescribeMigrationJobStatusResult::getMigrationJobStatus()const
{
	return migrationJobStatus_;
}

std::string DescribeMigrationJobStatusResult::getSuccess()const
{
	return success_;
}

std::string DescribeMigrationJobStatusResult::getErrCode()const
{
	return errCode_;
}

std::string DescribeMigrationJobStatusResult::getMigrationJobId()const
{
	return migrationJobId_;
}

DescribeMigrationJobStatusResult::PrecheckStatus DescribeMigrationJobStatusResult::getPrecheckStatus()const
{
	return precheckStatus_;
}

std::string DescribeMigrationJobStatusResult::getMigrationObject()const
{
	return migrationObject_;
}

DescribeMigrationJobStatusResult::DestinationEndpoint DescribeMigrationJobStatusResult::getDestinationEndpoint()const
{
	return destinationEndpoint_;
}

DescribeMigrationJobStatusResult::SourceEndpoint DescribeMigrationJobStatusResult::getSourceEndpoint()const
{
	return sourceEndpoint_;
}

std::string DescribeMigrationJobStatusResult::getMigrationJobClass()const
{
	return migrationJobClass_;
}

DescribeMigrationJobStatusResult::DataSynchronizationStatus DescribeMigrationJobStatusResult::getDataSynchronizationStatus()const
{
	return dataSynchronizationStatus_;
}

DescribeMigrationJobStatusResult::StructureInitializationStatus DescribeMigrationJobStatusResult::getStructureInitializationStatus()const
{
	return structureInitializationStatus_;
}

