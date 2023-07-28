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

#include <alibabacloud/dts/model/DescirbeMigrationJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescirbeMigrationJobsResult::DescirbeMigrationJobsResult() :
	ServiceResult()
{}

DescirbeMigrationJobsResult::DescirbeMigrationJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescirbeMigrationJobsResult::~DescirbeMigrationJobsResult()
{}

void DescirbeMigrationJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMigrationJobsNode = value["MigrationJobs"]["MigrationJob"];
	for (auto valueMigrationJobsMigrationJob : allMigrationJobsNode)
	{
		MigrationJob migrationJobsObject;
		if(!valueMigrationJobsMigrationJob["MigrationJobName"].isNull())
			migrationJobsObject.migrationJobName = valueMigrationJobsMigrationJob["MigrationJobName"].asString();
		if(!valueMigrationJobsMigrationJob["MigrationJobStatus"].isNull())
			migrationJobsObject.migrationJobStatus = valueMigrationJobsMigrationJob["MigrationJobStatus"].asString();
		if(!valueMigrationJobsMigrationJob["MigrationJobClass"].isNull())
			migrationJobsObject.migrationJobClass = valueMigrationJobsMigrationJob["MigrationJobClass"].asString();
		if(!valueMigrationJobsMigrationJob["MigrationJobID"].isNull())
			migrationJobsObject.migrationJobID = valueMigrationJobsMigrationJob["MigrationJobID"].asString();
		if(!valueMigrationJobsMigrationJob["PayType"].isNull())
			migrationJobsObject.payType = valueMigrationJobsMigrationJob["PayType"].asString();
		auto allMigrationObjectNode = valueMigrationJobsMigrationJob["MigrationObject"]["SynchronousObject"];
		for (auto valueMigrationJobsMigrationJobMigrationObjectSynchronousObject : allMigrationObjectNode)
		{
			MigrationJob::SynchronousObject migrationObjectObject;
			if(!valueMigrationJobsMigrationJobMigrationObjectSynchronousObject["DatabaseName"].isNull())
				migrationObjectObject.databaseName = valueMigrationJobsMigrationJobMigrationObjectSynchronousObject["DatabaseName"].asString();
			if(!valueMigrationJobsMigrationJobMigrationObjectSynchronousObject["WholeDatabase"].isNull())
				migrationObjectObject.wholeDatabase = valueMigrationJobsMigrationJobMigrationObjectSynchronousObject["WholeDatabase"].asString();
			auto allTableList = value["TableList"]["Table"];
			for (auto value : allTableList)
				migrationObjectObject.tableList.push_back(value.asString());
			migrationJobsObject.migrationObject.push_back(migrationObjectObject);
		}
		auto sourceEndpointNode = value["SourceEndpoint"];
		if(!sourceEndpointNode["OracleSID"].isNull())
			migrationJobsObject.sourceEndpoint.oracleSID = sourceEndpointNode["OracleSID"].asString();
		if(!sourceEndpointNode["DatabaseName"].isNull())
			migrationJobsObject.sourceEndpoint.databaseName = sourceEndpointNode["DatabaseName"].asString();
		if(!sourceEndpointNode["InstanceID"].isNull())
			migrationJobsObject.sourceEndpoint.instanceID = sourceEndpointNode["InstanceID"].asString();
		if(!sourceEndpointNode["InstanceType"].isNull())
			migrationJobsObject.sourceEndpoint.instanceType = sourceEndpointNode["InstanceType"].asString();
		if(!sourceEndpointNode["IP"].isNull())
			migrationJobsObject.sourceEndpoint.iP = sourceEndpointNode["IP"].asString();
		if(!sourceEndpointNode["Port"].isNull())
			migrationJobsObject.sourceEndpoint.port = sourceEndpointNode["Port"].asString();
		if(!sourceEndpointNode["UserName"].isNull())
			migrationJobsObject.sourceEndpoint.userName = sourceEndpointNode["UserName"].asString();
		if(!sourceEndpointNode["EngineName"].isNull())
			migrationJobsObject.sourceEndpoint.engineName = sourceEndpointNode["EngineName"].asString();
		auto destinationEndpointNode = value["DestinationEndpoint"];
		if(!destinationEndpointNode["OracleSID"].isNull())
			migrationJobsObject.destinationEndpoint.oracleSID = destinationEndpointNode["OracleSID"].asString();
		if(!destinationEndpointNode["DatabaseName"].isNull())
			migrationJobsObject.destinationEndpoint.databaseName = destinationEndpointNode["DatabaseName"].asString();
		if(!destinationEndpointNode["InstanceID"].isNull())
			migrationJobsObject.destinationEndpoint.instanceID = destinationEndpointNode["InstanceID"].asString();
		if(!destinationEndpointNode["InstanceType"].isNull())
			migrationJobsObject.destinationEndpoint.instanceType = destinationEndpointNode["InstanceType"].asString();
		if(!destinationEndpointNode["IP"].isNull())
			migrationJobsObject.destinationEndpoint.iP = destinationEndpointNode["IP"].asString();
		if(!destinationEndpointNode["Port"].isNull())
			migrationJobsObject.destinationEndpoint.port = destinationEndpointNode["Port"].asString();
		if(!destinationEndpointNode["UserName"].isNull())
			migrationJobsObject.destinationEndpoint.userName = destinationEndpointNode["UserName"].asString();
		if(!destinationEndpointNode["EngineName"].isNull())
			migrationJobsObject.destinationEndpoint.engineName = destinationEndpointNode["EngineName"].asString();
		auto migrationModeNode = value["MigrationMode"];
		if(!migrationModeNode["DataInitialization"].isNull())
			migrationJobsObject.migrationMode.dataInitialization = migrationModeNode["DataInitialization"].asString() == "true";
		if(!migrationModeNode["DataSynchronization"].isNull())
			migrationJobsObject.migrationMode.dataSynchronization = migrationModeNode["DataSynchronization"].asString() == "true";
		if(!migrationModeNode["StructureInitialization"].isNull())
			migrationJobsObject.migrationMode.structureInitialization = migrationModeNode["StructureInitialization"].asString() == "true";
		auto precheckNode = value["Precheck"];
		if(!precheckNode["Status"].isNull())
			migrationJobsObject.precheck.status = precheckNode["Status"].asString();
		if(!precheckNode["Percent"].isNull())
			migrationJobsObject.precheck.percent = precheckNode["Percent"].asString();
		auto structureInitializationNode = value["StructureInitialization"];
		if(!structureInitializationNode["Percent"].isNull())
			migrationJobsObject.structureInitialization.percent = structureInitializationNode["Percent"].asString();
		if(!structureInitializationNode["Progress"].isNull())
			migrationJobsObject.structureInitialization.progress = structureInitializationNode["Progress"].asString();
		if(!structureInitializationNode["status"].isNull())
			migrationJobsObject.structureInitialization.status = structureInitializationNode["status"].asString();
		if(!structureInitializationNode["ErrorMessage"].isNull())
			migrationJobsObject.structureInitialization.errorMessage = structureInitializationNode["ErrorMessage"].asString();
		auto dataInitializationNode = value["DataInitialization"];
		if(!dataInitializationNode["Percent"].isNull())
			migrationJobsObject.dataInitialization.percent = dataInitializationNode["Percent"].asString();
		if(!dataInitializationNode["Progress"].isNull())
			migrationJobsObject.dataInitialization.progress = dataInitializationNode["Progress"].asString();
		if(!dataInitializationNode["status"].isNull())
			migrationJobsObject.dataInitialization.status = dataInitializationNode["status"].asString();
		if(!dataInitializationNode["ErrorMessage"].isNull())
			migrationJobsObject.dataInitialization.errorMessage = dataInitializationNode["ErrorMessage"].asString();
		auto dataSynchronizationNode = value["DataSynchronization"];
		if(!dataSynchronizationNode["Delay"].isNull())
			migrationJobsObject.dataSynchronization.delay = dataSynchronizationNode["Delay"].asString();
		if(!dataSynchronizationNode["Percent"].isNull())
			migrationJobsObject.dataSynchronization.percent = dataSynchronizationNode["Percent"].asString();
		if(!dataSynchronizationNode["status"].isNull())
			migrationJobsObject.dataSynchronization.status = dataSynchronizationNode["status"].asString();
		if(!dataSynchronizationNode["ErrorMessage"].isNull())
			migrationJobsObject.dataSynchronization.errorMessage = dataSynchronizationNode["ErrorMessage"].asString();
		migrationJobs_.push_back(migrationJobsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescirbeMigrationJobsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescirbeMigrationJobsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescirbeMigrationJobsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescirbeMigrationJobsResult::MigrationJob> DescirbeMigrationJobsResult::getMigrationJobs()const
{
	return migrationJobs_;
}

