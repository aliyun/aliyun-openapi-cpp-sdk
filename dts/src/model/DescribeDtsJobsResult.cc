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

#include <alibabacloud/dts/model/DescribeDtsJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsJobsResult::DescribeDtsJobsResult() :
	ServiceResult()
{}

DescribeDtsJobsResult::DescribeDtsJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsJobsResult::~DescribeDtsJobsResult()
{}

void DescribeDtsJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDtsJobListNode = value["DtsJobList"]["DtsJobStatus"];
	for (auto valueDtsJobListDtsJobStatus : allDtsJobListNode)
	{
		DtsJobStatus dtsJobListObject;
		if(!valueDtsJobListDtsJobStatus["Status"].isNull())
			dtsJobListObject.status = valueDtsJobListDtsJobStatus["Status"].asString();
		if(!valueDtsJobListDtsJobStatus["OriginType"].isNull())
			dtsJobListObject.originType = valueDtsJobListDtsJobStatus["OriginType"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobName"].isNull())
			dtsJobListObject.dtsJobName = valueDtsJobListDtsJobStatus["DtsJobName"].asString();
		if(!valueDtsJobListDtsJobStatus["Delay"].isNull())
			dtsJobListObject.delay = std::stol(valueDtsJobListDtsJobStatus["Delay"].asString());
		if(!valueDtsJobListDtsJobStatus["ErrorMessage"].isNull())
			dtsJobListObject.errorMessage = valueDtsJobListDtsJobStatus["ErrorMessage"].asString();
		if(!valueDtsJobListDtsJobStatus["ExpireTime"].isNull())
			dtsJobListObject.expireTime = valueDtsJobListDtsJobStatus["ExpireTime"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobId"].isNull())
			dtsJobListObject.dtsJobId = valueDtsJobListDtsJobStatus["DtsJobId"].asString();
		if(!valueDtsJobListDtsJobStatus["CreateTime"].isNull())
			dtsJobListObject.createTime = valueDtsJobListDtsJobStatus["CreateTime"].asString();
		if(!valueDtsJobListDtsJobStatus["PayType"].isNull())
			dtsJobListObject.payType = valueDtsJobListDtsJobStatus["PayType"].asString();
		if(!valueDtsJobListDtsJobStatus["Reserved"].isNull())
			dtsJobListObject.reserved = valueDtsJobListDtsJobStatus["Reserved"].asString();
		if(!valueDtsJobListDtsJobStatus["ConsumptionClient"].isNull())
			dtsJobListObject.consumptionClient = valueDtsJobListDtsJobStatus["ConsumptionClient"].asString();
		if(!valueDtsJobListDtsJobStatus["DbObject"].isNull())
			dtsJobListObject.dbObject = valueDtsJobListDtsJobStatus["DbObject"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobClass"].isNull())
			dtsJobListObject.dtsJobClass = valueDtsJobListDtsJobStatus["DtsJobClass"].asString();
		if(!valueDtsJobListDtsJobStatus["ConsumptionCheckpoint"].isNull())
			dtsJobListObject.consumptionCheckpoint = valueDtsJobListDtsJobStatus["ConsumptionCheckpoint"].asString();
		if(!valueDtsJobListDtsJobStatus["EndTimestamp"].isNull())
			dtsJobListObject.endTimestamp = valueDtsJobListDtsJobStatus["EndTimestamp"].asString();
		if(!valueDtsJobListDtsJobStatus["AppName"].isNull())
			dtsJobListObject.appName = valueDtsJobListDtsJobStatus["AppName"].asString();
		if(!valueDtsJobListDtsJobStatus["BeginTimestamp"].isNull())
			dtsJobListObject.beginTimestamp = valueDtsJobListDtsJobStatus["BeginTimestamp"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsInstanceID"].isNull())
			dtsJobListObject.dtsInstanceID = valueDtsJobListDtsJobStatus["DtsInstanceID"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobDirection"].isNull())
			dtsJobListObject.dtsJobDirection = valueDtsJobListDtsJobStatus["DtsJobDirection"].asString();
		if(!valueDtsJobListDtsJobStatus["Checkpoint"].isNull())
			dtsJobListObject.checkpoint = valueDtsJobListDtsJobStatus["Checkpoint"].asString();
		if(!valueDtsJobListDtsJobStatus["JobType"].isNull())
			dtsJobListObject.jobType = valueDtsJobListDtsJobStatus["JobType"].asString();
		if(!valueDtsJobListDtsJobStatus["DuUsage"].isNull())
			dtsJobListObject.duUsage = std::stol(valueDtsJobListDtsJobStatus["DuUsage"].asString());
		if(!valueDtsJobListDtsJobStatus["CpuUsage"].isNull())
			dtsJobListObject.cpuUsage = valueDtsJobListDtsJobStatus["CpuUsage"].asString();
		if(!valueDtsJobListDtsJobStatus["MemUsage"].isNull())
			dtsJobListObject.memUsage = valueDtsJobListDtsJobStatus["MemUsage"].asString();
		if(!valueDtsJobListDtsJobStatus["DedicatedClusterId"].isNull())
			dtsJobListObject.dedicatedClusterId = valueDtsJobListDtsJobStatus["DedicatedClusterId"].asString();
		if(!valueDtsJobListDtsJobStatus["ResourceGroupId"].isNull())
			dtsJobListObject.resourceGroupId = valueDtsJobListDtsJobStatus["ResourceGroupId"].asString();
		if(!valueDtsJobListDtsJobStatus["ResourceGroupDisplayName"].isNull())
			dtsJobListObject.resourceGroupDisplayName = valueDtsJobListDtsJobStatus["ResourceGroupDisplayName"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrMsg"].isNull())
			dtsJobListObject.migrationErrMsg = valueDtsJobListDtsJobStatus["MigrationErrMsg"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrHelpDocId"].isNull())
			dtsJobListObject.migrationErrHelpDocId = valueDtsJobListDtsJobStatus["MigrationErrHelpDocId"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrWorkaround"].isNull())
			dtsJobListObject.migrationErrWorkaround = valueDtsJobListDtsJobStatus["MigrationErrWorkaround"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrCode"].isNull())
			dtsJobListObject.migrationErrCode = valueDtsJobListDtsJobStatus["MigrationErrCode"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrHelpDocKey"].isNull())
			dtsJobListObject.migrationErrHelpDocKey = valueDtsJobListDtsJobStatus["MigrationErrHelpDocKey"].asString();
		if(!valueDtsJobListDtsJobStatus["MigrationErrType"].isNull())
			dtsJobListObject.migrationErrType = valueDtsJobListDtsJobStatus["MigrationErrType"].asString();
		if(!valueDtsJobListDtsJobStatus["EtlSafeCheckpoint"].isNull())
			dtsJobListObject.etlSafeCheckpoint = valueDtsJobListDtsJobStatus["EtlSafeCheckpoint"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsBisLabel"].isNull())
			dtsJobListObject.dtsBisLabel = valueDtsJobListDtsJobStatus["DtsBisLabel"].asString();
		auto allTagListNode = valueDtsJobListDtsJobStatus["TagList"]["DtsTag"];
		for (auto valueDtsJobListDtsJobStatusTagListDtsTag : allTagListNode)
		{
			DtsJobStatus::DtsTag tagListObject;
			if(!valueDtsJobListDtsJobStatusTagListDtsTag["TagValue"].isNull())
				tagListObject.tagValue = valueDtsJobListDtsJobStatusTagListDtsTag["TagValue"].asString();
			if(!valueDtsJobListDtsJobStatusTagListDtsTag["TagKey"].isNull())
				tagListObject.tagKey = valueDtsJobListDtsJobStatusTagListDtsTag["TagKey"].asString();
			dtsJobListObject.tagList.push_back(tagListObject);
		}
		auto allErrorDetailsNode = valueDtsJobListDtsJobStatus["ErrorDetails"]["ErrorDetail"];
		for (auto valueDtsJobListDtsJobStatusErrorDetailsErrorDetail : allErrorDetailsNode)
		{
			DtsJobStatus::ErrorDetail errorDetailsObject;
			if(!valueDtsJobListDtsJobStatusErrorDetailsErrorDetail["ErrorCode"].isNull())
				errorDetailsObject.errorCode = valueDtsJobListDtsJobStatusErrorDetailsErrorDetail["ErrorCode"].asString();
			if(!valueDtsJobListDtsJobStatusErrorDetailsErrorDetail["HelpUrl"].isNull())
				errorDetailsObject.helpUrl = valueDtsJobListDtsJobStatusErrorDetailsErrorDetail["HelpUrl"].asString();
			dtsJobListObject.errorDetails.push_back(errorDetailsObject);
		}
		auto dataInitializationStatusNode = value["DataInitializationStatus"];
		if(!dataInitializationStatusNode["Status"].isNull())
			dtsJobListObject.dataInitializationStatus.status = dataInitializationStatusNode["Status"].asString();
		if(!dataInitializationStatusNode["Percent"].isNull())
			dtsJobListObject.dataInitializationStatus.percent = dataInitializationStatusNode["Percent"].asString();
		if(!dataInitializationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataInitializationStatus.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
		if(!dataInitializationStatusNode["Progress"].isNull())
			dtsJobListObject.dataInitializationStatus.progress = dataInitializationStatusNode["Progress"].asString();
		auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatusNode["Status"].isNull())
			dtsJobListObject.dataSynchronizationStatus.status = dataSynchronizationStatusNode["Status"].asString();
		if(!dataSynchronizationStatusNode["NeedUpgrade"].isNull())
			dtsJobListObject.dataSynchronizationStatus.needUpgrade = dataSynchronizationStatusNode["NeedUpgrade"].asString() == "true";
		if(!dataSynchronizationStatusNode["Percent"].isNull())
			dtsJobListObject.dataSynchronizationStatus.percent = dataSynchronizationStatusNode["Percent"].asString();
		if(!dataSynchronizationStatusNode["Progress"].isNull())
			dtsJobListObject.dataSynchronizationStatus.progress = dataSynchronizationStatusNode["Progress"].asString();
		if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataSynchronizationStatus.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
		auto dataEtlStatusNode = value["DataEtlStatus"];
		if(!dataEtlStatusNode["Status"].isNull())
			dtsJobListObject.dataEtlStatus.status = dataEtlStatusNode["Status"].asString();
		if(!dataEtlStatusNode["Percent"].isNull())
			dtsJobListObject.dataEtlStatus.percent = dataEtlStatusNode["Percent"].asString();
		if(!dataEtlStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataEtlStatus.errorMessage = dataEtlStatusNode["ErrorMessage"].asString();
		if(!dataEtlStatusNode["Progress"].isNull())
			dtsJobListObject.dataEtlStatus.progress = dataEtlStatusNode["Progress"].asString();
		auto destinationEndpointNode = value["DestinationEndpoint"];
		if(!destinationEndpointNode["SslSolutionEnum"].isNull())
			dtsJobListObject.destinationEndpoint.sslSolutionEnum = destinationEndpointNode["SslSolutionEnum"].asString();
		if(!destinationEndpointNode["OracleSID"].isNull())
			dtsJobListObject.destinationEndpoint.oracleSID = destinationEndpointNode["OracleSID"].asString();
		if(!destinationEndpointNode["Region"].isNull())
			dtsJobListObject.destinationEndpoint.region = destinationEndpointNode["Region"].asString();
		if(!destinationEndpointNode["DatabaseName"].isNull())
			dtsJobListObject.destinationEndpoint.databaseName = destinationEndpointNode["DatabaseName"].asString();
		if(!destinationEndpointNode["Ip"].isNull())
			dtsJobListObject.destinationEndpoint.ip = destinationEndpointNode["Ip"].asString();
		if(!destinationEndpointNode["InstanceID"].isNull())
			dtsJobListObject.destinationEndpoint.instanceID = destinationEndpointNode["InstanceID"].asString();
		if(!destinationEndpointNode["Port"].isNull())
			dtsJobListObject.destinationEndpoint.port = destinationEndpointNode["Port"].asString();
		if(!destinationEndpointNode["InstanceType"].isNull())
			dtsJobListObject.destinationEndpoint.instanceType = destinationEndpointNode["InstanceType"].asString();
		if(!destinationEndpointNode["UserName"].isNull())
			dtsJobListObject.destinationEndpoint.userName = destinationEndpointNode["UserName"].asString();
		if(!destinationEndpointNode["EngineName"].isNull())
			dtsJobListObject.destinationEndpoint.engineName = destinationEndpointNode["EngineName"].asString();
		auto migrationModeNode = value["MigrationMode"];
		if(!migrationModeNode["DataInitialization"].isNull())
			dtsJobListObject.migrationMode.dataInitialization = migrationModeNode["DataInitialization"].asString() == "true";
		if(!migrationModeNode["DataSynchronization"].isNull())
			dtsJobListObject.migrationMode.dataSynchronization = migrationModeNode["DataSynchronization"].asString() == "true";
		if(!migrationModeNode["StructureInitialization"].isNull())
			dtsJobListObject.migrationMode.structureInitialization = migrationModeNode["StructureInitialization"].asString() == "true";
		if(!migrationModeNode["FullDataCheck"].isNull())
			dtsJobListObject.migrationMode.fullDataCheck = migrationModeNode["FullDataCheck"].asString() == "true";
		if(!migrationModeNode["IncDataCheck"].isNull())
			dtsJobListObject.migrationMode.incDataCheck = migrationModeNode["IncDataCheck"].asString() == "true";
		auto performanceNode = value["Performance"];
		if(!performanceNode["Rps"].isNull())
			dtsJobListObject.performance.rps = performanceNode["Rps"].asString();
		if(!performanceNode["Flow"].isNull())
			dtsJobListObject.performance.flow = performanceNode["Flow"].asString();
		auto precheckStatusNode = value["PrecheckStatus"];
		if(!precheckStatusNode["Status"].isNull())
			dtsJobListObject.precheckStatus.status = precheckStatusNode["Status"].asString();
		if(!precheckStatusNode["Percent"].isNull())
			dtsJobListObject.precheckStatus.percent = precheckStatusNode["Percent"].asString();
		if(!precheckStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.precheckStatus.errorMessage = precheckStatusNode["ErrorMessage"].asString();
		auto allDetailNode = precheckStatusNode["Detail"]["PrecheckDetail"];
		for (auto precheckStatusNodeDetailPrecheckDetail : allDetailNode)
		{
			DtsJobStatus::PrecheckStatus::PrecheckDetail precheckDetailObject;
			if(!precheckStatusNodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetailObject.checkResult = precheckStatusNodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetailObject.checkItemDescription = precheckStatusNodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetailObject.checkItem = precheckStatusNodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetailObject.repairMethod = precheckStatusNodeDetailPrecheckDetail["RepairMethod"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetailObject.failedReason = precheckStatusNodeDetailPrecheckDetail["FailedReason"].asString();
			dtsJobListObject.precheckStatus.detail.push_back(precheckDetailObject);
		}
		auto reverseJobNode = value["ReverseJob"];
		if(!reverseJobNode["Status"].isNull())
			dtsJobListObject.reverseJob.status = reverseJobNode["Status"].asString();
		if(!reverseJobNode["DtsJobName"].isNull())
			dtsJobListObject.reverseJob.dtsJobName = reverseJobNode["DtsJobName"].asString();
		if(!reverseJobNode["Delay"].isNull())
			dtsJobListObject.reverseJob.delay = std::stol(reverseJobNode["Delay"].asString());
		if(!reverseJobNode["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.errorMessage = reverseJobNode["ErrorMessage"].asString();
		if(!reverseJobNode["DtsJobId"].isNull())
			dtsJobListObject.reverseJob.dtsJobId = reverseJobNode["DtsJobId"].asString();
		if(!reverseJobNode["ExpireTime"].isNull())
			dtsJobListObject.reverseJob.expireTime = reverseJobNode["ExpireTime"].asString();
		if(!reverseJobNode["CreateTime"].isNull())
			dtsJobListObject.reverseJob.createTime = reverseJobNode["CreateTime"].asString();
		if(!reverseJobNode["PayType"].isNull())
			dtsJobListObject.reverseJob.payType = reverseJobNode["PayType"].asString();
		if(!reverseJobNode["Reserved"].isNull())
			dtsJobListObject.reverseJob.reserved = reverseJobNode["Reserved"].asString();
		if(!reverseJobNode["DbObject"].isNull())
			dtsJobListObject.reverseJob.dbObject = reverseJobNode["DbObject"].asString();
		if(!reverseJobNode["DtsJobClass"].isNull())
			dtsJobListObject.reverseJob.dtsJobClass = reverseJobNode["DtsJobClass"].asString();
		if(!reverseJobNode["DtsInstanceID"].isNull())
			dtsJobListObject.reverseJob.dtsInstanceID = reverseJobNode["DtsInstanceID"].asString();
		if(!reverseJobNode["DtsJobDirection"].isNull())
			dtsJobListObject.reverseJob.dtsJobDirection = reverseJobNode["DtsJobDirection"].asString();
		if(!reverseJobNode["Checkpoint"].isNull())
			dtsJobListObject.reverseJob.checkpoint = reverseJobNode["Checkpoint"].asString();
		if(!reverseJobNode["DuUsage"].isNull())
			dtsJobListObject.reverseJob.duUsage = std::stol(reverseJobNode["DuUsage"].asString());
		if(!reverseJobNode["CpuUsage"].isNull())
			dtsJobListObject.reverseJob.cpuUsage = reverseJobNode["CpuUsage"].asString();
		if(!reverseJobNode["MemUsage"].isNull())
			dtsJobListObject.reverseJob.memUsage = reverseJobNode["MemUsage"].asString();
		if(!reverseJobNode["DedicatedClusterId"].isNull())
			dtsJobListObject.reverseJob.dedicatedClusterId = reverseJobNode["DedicatedClusterId"].asString();
		if(!reverseJobNode["EtlSafeCheckpoint"].isNull())
			dtsJobListObject.reverseJob.etlSafeCheckpoint = reverseJobNode["EtlSafeCheckpoint"].asString();
		auto allErrorDetails9Node = reverseJobNode["ErrorDetails"]["ErrorDetail"];
		for (auto reverseJobNodeErrorDetailsErrorDetail : allErrorDetails9Node)
		{
			DtsJobStatus::ReverseJob::ErrorDetail10 errorDetail10Object;
			if(!reverseJobNodeErrorDetailsErrorDetail["ErrorCode"].isNull())
				errorDetail10Object.errorCode = reverseJobNodeErrorDetailsErrorDetail["ErrorCode"].asString();
			if(!reverseJobNodeErrorDetailsErrorDetail["HelpUrl"].isNull())
				errorDetail10Object.helpUrl = reverseJobNodeErrorDetailsErrorDetail["HelpUrl"].asString();
			dtsJobListObject.reverseJob.errorDetails9.push_back(errorDetail10Object);
		}
		auto dataInitializationStatus1Node = reverseJobNode["DataInitializationStatus"];
		if(!dataInitializationStatus1Node["Status"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus1.status = dataInitializationStatus1Node["Status"].asString();
		if(!dataInitializationStatus1Node["Percent"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus1.percent = dataInitializationStatus1Node["Percent"].asString();
		if(!dataInitializationStatus1Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus1.errorMessage = dataInitializationStatus1Node["ErrorMessage"].asString();
		if(!dataInitializationStatus1Node["Progress"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus1.progress = dataInitializationStatus1Node["Progress"].asString();
		auto dataSynchronizationStatus2Node = reverseJobNode["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus2Node["Status"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus2.status = dataSynchronizationStatus2Node["Status"].asString();
		if(!dataSynchronizationStatus2Node["NeedUpgrade"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus2.needUpgrade = dataSynchronizationStatus2Node["NeedUpgrade"].asString() == "true";
		if(!dataSynchronizationStatus2Node["Percent"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus2.percent = dataSynchronizationStatus2Node["Percent"].asString();
		if(!dataSynchronizationStatus2Node["Progress"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus2.progress = dataSynchronizationStatus2Node["Progress"].asString();
		if(!dataSynchronizationStatus2Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus2.errorMessage = dataSynchronizationStatus2Node["ErrorMessage"].asString();
		auto destinationEndpoint3Node = reverseJobNode["DestinationEndpoint"];
		if(!destinationEndpoint3Node["SslSolutionEnum"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.sslSolutionEnum = destinationEndpoint3Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint3Node["OracleSID"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.oracleSID = destinationEndpoint3Node["OracleSID"].asString();
		if(!destinationEndpoint3Node["Region"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.region = destinationEndpoint3Node["Region"].asString();
		if(!destinationEndpoint3Node["DatabaseName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.databaseName = destinationEndpoint3Node["DatabaseName"].asString();
		if(!destinationEndpoint3Node["Ip"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.ip = destinationEndpoint3Node["Ip"].asString();
		if(!destinationEndpoint3Node["InstanceID"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.instanceID = destinationEndpoint3Node["InstanceID"].asString();
		if(!destinationEndpoint3Node["Port"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.port = destinationEndpoint3Node["Port"].asString();
		if(!destinationEndpoint3Node["InstanceType"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.instanceType = destinationEndpoint3Node["InstanceType"].asString();
		if(!destinationEndpoint3Node["UserName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.userName = destinationEndpoint3Node["UserName"].asString();
		if(!destinationEndpoint3Node["EngineName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint3.engineName = destinationEndpoint3Node["EngineName"].asString();
		auto migrationMode4Node = reverseJobNode["MigrationMode"];
		if(!migrationMode4Node["DataInitialization"].isNull())
			dtsJobListObject.reverseJob.migrationMode4.dataInitialization = migrationMode4Node["DataInitialization"].asString() == "true";
		if(!migrationMode4Node["DataSynchronization"].isNull())
			dtsJobListObject.reverseJob.migrationMode4.dataSynchronization = migrationMode4Node["DataSynchronization"].asString() == "true";
		if(!migrationMode4Node["StructureInitialization"].isNull())
			dtsJobListObject.reverseJob.migrationMode4.structureInitialization = migrationMode4Node["StructureInitialization"].asString() == "true";
		auto performance5Node = reverseJobNode["Performance"];
		if(!performance5Node["Rps"].isNull())
			dtsJobListObject.reverseJob.performance5.rps = performance5Node["Rps"].asString();
		if(!performance5Node["Flow"].isNull())
			dtsJobListObject.reverseJob.performance5.flow = performance5Node["Flow"].asString();
		auto precheckStatus6Node = reverseJobNode["PrecheckStatus"];
		if(!precheckStatus6Node["Status"].isNull())
			dtsJobListObject.reverseJob.precheckStatus6.status = precheckStatus6Node["Status"].asString();
		if(!precheckStatus6Node["Percent"].isNull())
			dtsJobListObject.reverseJob.precheckStatus6.percent = precheckStatus6Node["Percent"].asString();
		if(!precheckStatus6Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.precheckStatus6.errorMessage = precheckStatus6Node["ErrorMessage"].asString();
		auto allDetail11Node = precheckStatus6Node["Detail"]["PrecheckDetail"];
		for (auto precheckStatus6NodeDetailPrecheckDetail : allDetail11Node)
		{
			DtsJobStatus::ReverseJob::PrecheckStatus6::PrecheckDetail12 precheckDetail12Object;
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetail12Object.checkResult = precheckStatus6NodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetail12Object.checkItemDescription = precheckStatus6NodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetail12Object.checkItem = precheckStatus6NodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetail12Object.repairMethod = precheckStatus6NodeDetailPrecheckDetail["RepairMethod"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetail12Object.failedReason = precheckStatus6NodeDetailPrecheckDetail["FailedReason"].asString();
			dtsJobListObject.reverseJob.precheckStatus6.detail11.push_back(precheckDetail12Object);
		}
		auto sourceEndpoint7Node = reverseJobNode["SourceEndpoint"];
		if(!sourceEndpoint7Node["SslSolutionEnum"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.sslSolutionEnum = sourceEndpoint7Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint7Node["OracleSID"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.oracleSID = sourceEndpoint7Node["OracleSID"].asString();
		if(!sourceEndpoint7Node["Region"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.region = sourceEndpoint7Node["Region"].asString();
		if(!sourceEndpoint7Node["DatabaseName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.databaseName = sourceEndpoint7Node["DatabaseName"].asString();
		if(!sourceEndpoint7Node["Ip"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.ip = sourceEndpoint7Node["Ip"].asString();
		if(!sourceEndpoint7Node["InstanceID"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.instanceID = sourceEndpoint7Node["InstanceID"].asString();
		if(!sourceEndpoint7Node["Port"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.port = sourceEndpoint7Node["Port"].asString();
		if(!sourceEndpoint7Node["InstanceType"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.instanceType = sourceEndpoint7Node["InstanceType"].asString();
		if(!sourceEndpoint7Node["UserName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.userName = sourceEndpoint7Node["UserName"].asString();
		if(!sourceEndpoint7Node["EngineName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint7.engineName = sourceEndpoint7Node["EngineName"].asString();
		auto structureInitializationStatus8Node = reverseJobNode["StructureInitializationStatus"];
		if(!structureInitializationStatus8Node["Status"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus8.status = structureInitializationStatus8Node["Status"].asString();
		if(!structureInitializationStatus8Node["Percent"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus8.percent = structureInitializationStatus8Node["Percent"].asString();
		if(!structureInitializationStatus8Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus8.errorMessage = structureInitializationStatus8Node["ErrorMessage"].asString();
		if(!structureInitializationStatus8Node["Progress"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus8.progress = structureInitializationStatus8Node["Progress"].asString();
		auto sourceEndpointNode = value["SourceEndpoint"];
		if(!sourceEndpointNode["SslSolutionEnum"].isNull())
			dtsJobListObject.sourceEndpoint.sslSolutionEnum = sourceEndpointNode["SslSolutionEnum"].asString();
		if(!sourceEndpointNode["OracleSID"].isNull())
			dtsJobListObject.sourceEndpoint.oracleSID = sourceEndpointNode["OracleSID"].asString();
		if(!sourceEndpointNode["Region"].isNull())
			dtsJobListObject.sourceEndpoint.region = sourceEndpointNode["Region"].asString();
		if(!sourceEndpointNode["DatabaseName"].isNull())
			dtsJobListObject.sourceEndpoint.databaseName = sourceEndpointNode["DatabaseName"].asString();
		if(!sourceEndpointNode["Ip"].isNull())
			dtsJobListObject.sourceEndpoint.ip = sourceEndpointNode["Ip"].asString();
		if(!sourceEndpointNode["InstanceID"].isNull())
			dtsJobListObject.sourceEndpoint.instanceID = sourceEndpointNode["InstanceID"].asString();
		if(!sourceEndpointNode["Port"].isNull())
			dtsJobListObject.sourceEndpoint.port = sourceEndpointNode["Port"].asString();
		if(!sourceEndpointNode["InstanceType"].isNull())
			dtsJobListObject.sourceEndpoint.instanceType = sourceEndpointNode["InstanceType"].asString();
		if(!sourceEndpointNode["UserName"].isNull())
			dtsJobListObject.sourceEndpoint.userName = sourceEndpointNode["UserName"].asString();
		if(!sourceEndpointNode["EngineName"].isNull())
			dtsJobListObject.sourceEndpoint.engineName = sourceEndpointNode["EngineName"].asString();
		auto structureInitializationStatusNode = value["StructureInitializationStatus"];
		if(!structureInitializationStatusNode["Status"].isNull())
			dtsJobListObject.structureInitializationStatus.status = structureInitializationStatusNode["Status"].asString();
		if(!structureInitializationStatusNode["Percent"].isNull())
			dtsJobListObject.structureInitializationStatus.percent = structureInitializationStatusNode["Percent"].asString();
		if(!structureInitializationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.structureInitializationStatus.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
		if(!structureInitializationStatusNode["Progress"].isNull())
			dtsJobListObject.structureInitializationStatus.progress = structureInitializationStatusNode["Progress"].asString();
		auto retryStateNode = value["RetryState"];
		if(!retryStateNode["RetryCount"].isNull())
			dtsJobListObject.retryState.retryCount = std::stoi(retryStateNode["RetryCount"].asString());
		if(!retryStateNode["MaxRetryTime"].isNull())
			dtsJobListObject.retryState.maxRetryTime = std::stoi(retryStateNode["MaxRetryTime"].asString());
		if(!retryStateNode["ErrMessage"].isNull())
			dtsJobListObject.retryState.errMessage = retryStateNode["ErrMessage"].asString();
		if(!retryStateNode["RetryTarget"].isNull())
			dtsJobListObject.retryState.retryTarget = retryStateNode["RetryTarget"].asString();
		if(!retryStateNode["RetryTime"].isNull())
			dtsJobListObject.retryState.retryTime = std::stoi(retryStateNode["RetryTime"].asString());
		if(!retryStateNode["Module"].isNull())
			dtsJobListObject.retryState.module = retryStateNode["Module"].asString();
		if(!retryStateNode["JobId"].isNull())
			dtsJobListObject.retryState.jobId = retryStateNode["JobId"].asString();
		if(!retryStateNode["Retrying"].isNull())
			dtsJobListObject.retryState.retrying = retryStateNode["Retrying"].asString() == "true";
		if(!retryStateNode["MigrationErrHelpDocId"].isNull())
			dtsJobListObject.retryState.migrationErrHelpDocId = retryStateNode["MigrationErrHelpDocId"].asString();
		if(!retryStateNode["MigrationErrHelpDocKey"].isNull())
			dtsJobListObject.retryState.migrationErrHelpDocKey = retryStateNode["MigrationErrHelpDocKey"].asString();
		if(!retryStateNode["MigrationErrCode"].isNull())
			dtsJobListObject.retryState.migrationErrCode = retryStateNode["MigrationErrCode"].asString();
		if(!retryStateNode["MigrationErrType"].isNull())
			dtsJobListObject.retryState.migrationErrType = retryStateNode["MigrationErrType"].asString();
		if(!retryStateNode["MigrationErrMsg"].isNull())
			dtsJobListObject.retryState.migrationErrMsg = retryStateNode["MigrationErrMsg"].asString();
		if(!retryStateNode["MigrationErrWorkaround"].isNull())
			dtsJobListObject.retryState.migrationErrWorkaround = retryStateNode["MigrationErrWorkaround"].asString();
		auto dataCloudStatusNode = value["DataCloudStatus"];
		if(!dataCloudStatusNode["Status"].isNull())
			dtsJobListObject.dataCloudStatus.status = dataCloudStatusNode["Status"].asString();
		if(!dataCloudStatusNode["NeedUpgrade"].isNull())
			dtsJobListObject.dataCloudStatus.needUpgrade = dataCloudStatusNode["NeedUpgrade"].asString() == "true";
		if(!dataCloudStatusNode["Percent"].isNull())
			dtsJobListObject.dataCloudStatus.percent = dataCloudStatusNode["Percent"].asString();
		if(!dataCloudStatusNode["Progress"].isNull())
			dtsJobListObject.dataCloudStatus.progress = dataCloudStatusNode["Progress"].asString();
		if(!dataCloudStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataCloudStatus.errorMessage = dataCloudStatusNode["ErrorMessage"].asString();
		auto fullDataCheckStatusNode = value["FullDataCheckStatus"];
		if(!fullDataCheckStatusNode["Status"].isNull())
			dtsJobListObject.fullDataCheckStatus.status = fullDataCheckStatusNode["Status"].asString();
		if(!fullDataCheckStatusNode["Percent"].isNull())
			dtsJobListObject.fullDataCheckStatus.percent = fullDataCheckStatusNode["Percent"].asString();
		if(!fullDataCheckStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.fullDataCheckStatus.errorMessage = fullDataCheckStatusNode["ErrorMessage"].asString();
		if(!fullDataCheckStatusNode["Progress"].isNull())
			dtsJobListObject.fullDataCheckStatus.progress = fullDataCheckStatusNode["Progress"].asString();
		auto incDataCheckStatusNode = value["IncDataCheckStatus"];
		if(!incDataCheckStatusNode["Status"].isNull())
			dtsJobListObject.incDataCheckStatus.status = incDataCheckStatusNode["Status"].asString();
		if(!incDataCheckStatusNode["Percent"].isNull())
			dtsJobListObject.incDataCheckStatus.percent = incDataCheckStatusNode["Percent"].asString();
		if(!incDataCheckStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.incDataCheckStatus.errorMessage = incDataCheckStatusNode["ErrorMessage"].asString();
		if(!incDataCheckStatusNode["Progress"].isNull())
			dtsJobListObject.incDataCheckStatus.progress = incDataCheckStatusNode["Progress"].asString();
		dtsJobList_.push_back(dtsJobListObject);
	}
	auto allEtlDemoListNode = value["EtlDemoList"]["DtsJobStatus"];
	for (auto valueEtlDemoListDtsJobStatus : allEtlDemoListNode)
	{
		DtsJobStatus13 etlDemoListObject;
		if(!valueEtlDemoListDtsJobStatus["Status"].isNull())
			etlDemoListObject.status = valueEtlDemoListDtsJobStatus["Status"].asString();
		if(!valueEtlDemoListDtsJobStatus["OriginType"].isNull())
			etlDemoListObject.originType = valueEtlDemoListDtsJobStatus["OriginType"].asString();
		if(!valueEtlDemoListDtsJobStatus["DtsJobName"].isNull())
			etlDemoListObject.dtsJobName = valueEtlDemoListDtsJobStatus["DtsJobName"].asString();
		if(!valueEtlDemoListDtsJobStatus["Delay"].isNull())
			etlDemoListObject.delay = std::stol(valueEtlDemoListDtsJobStatus["Delay"].asString());
		if(!valueEtlDemoListDtsJobStatus["ErrorMessage"].isNull())
			etlDemoListObject.errorMessage = valueEtlDemoListDtsJobStatus["ErrorMessage"].asString();
		if(!valueEtlDemoListDtsJobStatus["ExpireTime"].isNull())
			etlDemoListObject.expireTime = valueEtlDemoListDtsJobStatus["ExpireTime"].asString();
		if(!valueEtlDemoListDtsJobStatus["DtsJobId"].isNull())
			etlDemoListObject.dtsJobId = valueEtlDemoListDtsJobStatus["DtsJobId"].asString();
		if(!valueEtlDemoListDtsJobStatus["CreateTime"].isNull())
			etlDemoListObject.createTime = valueEtlDemoListDtsJobStatus["CreateTime"].asString();
		if(!valueEtlDemoListDtsJobStatus["PayType"].isNull())
			etlDemoListObject.payType = valueEtlDemoListDtsJobStatus["PayType"].asString();
		if(!valueEtlDemoListDtsJobStatus["Reserved"].isNull())
			etlDemoListObject.reserved = valueEtlDemoListDtsJobStatus["Reserved"].asString();
		if(!valueEtlDemoListDtsJobStatus["ConsumptionClient"].isNull())
			etlDemoListObject.consumptionClient = valueEtlDemoListDtsJobStatus["ConsumptionClient"].asString();
		if(!valueEtlDemoListDtsJobStatus["DbObject"].isNull())
			etlDemoListObject.dbObject = valueEtlDemoListDtsJobStatus["DbObject"].asString();
		if(!valueEtlDemoListDtsJobStatus["DtsJobClass"].isNull())
			etlDemoListObject.dtsJobClass = valueEtlDemoListDtsJobStatus["DtsJobClass"].asString();
		if(!valueEtlDemoListDtsJobStatus["ConsumptionCheckpoint"].isNull())
			etlDemoListObject.consumptionCheckpoint = valueEtlDemoListDtsJobStatus["ConsumptionCheckpoint"].asString();
		if(!valueEtlDemoListDtsJobStatus["EndTimestamp"].isNull())
			etlDemoListObject.endTimestamp = valueEtlDemoListDtsJobStatus["EndTimestamp"].asString();
		if(!valueEtlDemoListDtsJobStatus["AppName"].isNull())
			etlDemoListObject.appName = valueEtlDemoListDtsJobStatus["AppName"].asString();
		if(!valueEtlDemoListDtsJobStatus["BeginTimestamp"].isNull())
			etlDemoListObject.beginTimestamp = valueEtlDemoListDtsJobStatus["BeginTimestamp"].asString();
		if(!valueEtlDemoListDtsJobStatus["DtsInstanceID"].isNull())
			etlDemoListObject.dtsInstanceID = valueEtlDemoListDtsJobStatus["DtsInstanceID"].asString();
		if(!valueEtlDemoListDtsJobStatus["DtsJobDirection"].isNull())
			etlDemoListObject.dtsJobDirection = valueEtlDemoListDtsJobStatus["DtsJobDirection"].asString();
		if(!valueEtlDemoListDtsJobStatus["Checkpoint"].isNull())
			etlDemoListObject.checkpoint = valueEtlDemoListDtsJobStatus["Checkpoint"].asString();
		if(!valueEtlDemoListDtsJobStatus["JobType"].isNull())
			etlDemoListObject.jobType = valueEtlDemoListDtsJobStatus["JobType"].asString();
		if(!valueEtlDemoListDtsJobStatus["ResourceGroupId"].isNull())
			etlDemoListObject.resourceGroupId = valueEtlDemoListDtsJobStatus["ResourceGroupId"].asString();
		if(!valueEtlDemoListDtsJobStatus["ResourceGroupDisplayName"].isNull())
			etlDemoListObject.resourceGroupDisplayName = valueEtlDemoListDtsJobStatus["ResourceGroupDisplayName"].asString();
		if(!valueEtlDemoListDtsJobStatus["EtlSafeCheckpoint"].isNull())
			etlDemoListObject.etlSafeCheckpoint = valueEtlDemoListDtsJobStatus["EtlSafeCheckpoint"].asString();
		auto allTagList25Node = valueEtlDemoListDtsJobStatus["TagList"]["DtsTag"];
		for (auto valueEtlDemoListDtsJobStatusTagListDtsTag : allTagList25Node)
		{
			DtsJobStatus13::DtsTag tagList25Object;
			if(!valueEtlDemoListDtsJobStatusTagListDtsTag["TagValue"].isNull())
				tagList25Object.tagValue = valueEtlDemoListDtsJobStatusTagListDtsTag["TagValue"].asString();
			if(!valueEtlDemoListDtsJobStatusTagListDtsTag["TagKey"].isNull())
				tagList25Object.tagKey = valueEtlDemoListDtsJobStatusTagListDtsTag["TagKey"].asString();
			etlDemoListObject.tagList25.push_back(tagList25Object);
		}
		auto dataInitializationStatus14Node = value["DataInitializationStatus"];
		if(!dataInitializationStatus14Node["Status"].isNull())
			etlDemoListObject.dataInitializationStatus14.status = dataInitializationStatus14Node["Status"].asString();
		if(!dataInitializationStatus14Node["Percent"].isNull())
			etlDemoListObject.dataInitializationStatus14.percent = dataInitializationStatus14Node["Percent"].asString();
		if(!dataInitializationStatus14Node["ErrorMessage"].isNull())
			etlDemoListObject.dataInitializationStatus14.errorMessage = dataInitializationStatus14Node["ErrorMessage"].asString();
		if(!dataInitializationStatus14Node["Progress"].isNull())
			etlDemoListObject.dataInitializationStatus14.progress = dataInitializationStatus14Node["Progress"].asString();
		auto dataSynchronizationStatus15Node = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus15Node["Status"].isNull())
			etlDemoListObject.dataSynchronizationStatus15.status = dataSynchronizationStatus15Node["Status"].asString();
		if(!dataSynchronizationStatus15Node["NeedUpgrade"].isNull())
			etlDemoListObject.dataSynchronizationStatus15.needUpgrade = dataSynchronizationStatus15Node["NeedUpgrade"].asString() == "true";
		if(!dataSynchronizationStatus15Node["Percent"].isNull())
			etlDemoListObject.dataSynchronizationStatus15.percent = dataSynchronizationStatus15Node["Percent"].asString();
		if(!dataSynchronizationStatus15Node["Progress"].isNull())
			etlDemoListObject.dataSynchronizationStatus15.progress = dataSynchronizationStatus15Node["Progress"].asString();
		if(!dataSynchronizationStatus15Node["ErrorMessage"].isNull())
			etlDemoListObject.dataSynchronizationStatus15.errorMessage = dataSynchronizationStatus15Node["ErrorMessage"].asString();
		auto dataEtlStatus16Node = value["DataEtlStatus"];
		if(!dataEtlStatus16Node["Status"].isNull())
			etlDemoListObject.dataEtlStatus16.status = dataEtlStatus16Node["Status"].asString();
		if(!dataEtlStatus16Node["Percent"].isNull())
			etlDemoListObject.dataEtlStatus16.percent = dataEtlStatus16Node["Percent"].asString();
		if(!dataEtlStatus16Node["ErrorMessage"].isNull())
			etlDemoListObject.dataEtlStatus16.errorMessage = dataEtlStatus16Node["ErrorMessage"].asString();
		if(!dataEtlStatus16Node["Progress"].isNull())
			etlDemoListObject.dataEtlStatus16.progress = dataEtlStatus16Node["Progress"].asString();
		auto destinationEndpoint17Node = value["DestinationEndpoint"];
		if(!destinationEndpoint17Node["SslSolutionEnum"].isNull())
			etlDemoListObject.destinationEndpoint17.sslSolutionEnum = destinationEndpoint17Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint17Node["OracleSID"].isNull())
			etlDemoListObject.destinationEndpoint17.oracleSID = destinationEndpoint17Node["OracleSID"].asString();
		if(!destinationEndpoint17Node["Region"].isNull())
			etlDemoListObject.destinationEndpoint17.region = destinationEndpoint17Node["Region"].asString();
		if(!destinationEndpoint17Node["DatabaseName"].isNull())
			etlDemoListObject.destinationEndpoint17.databaseName = destinationEndpoint17Node["DatabaseName"].asString();
		if(!destinationEndpoint17Node["Ip"].isNull())
			etlDemoListObject.destinationEndpoint17.ip = destinationEndpoint17Node["Ip"].asString();
		if(!destinationEndpoint17Node["InstanceID"].isNull())
			etlDemoListObject.destinationEndpoint17.instanceID = destinationEndpoint17Node["InstanceID"].asString();
		if(!destinationEndpoint17Node["Port"].isNull())
			etlDemoListObject.destinationEndpoint17.port = destinationEndpoint17Node["Port"].asString();
		if(!destinationEndpoint17Node["InstanceType"].isNull())
			etlDemoListObject.destinationEndpoint17.instanceType = destinationEndpoint17Node["InstanceType"].asString();
		if(!destinationEndpoint17Node["UserName"].isNull())
			etlDemoListObject.destinationEndpoint17.userName = destinationEndpoint17Node["UserName"].asString();
		if(!destinationEndpoint17Node["EngineName"].isNull())
			etlDemoListObject.destinationEndpoint17.engineName = destinationEndpoint17Node["EngineName"].asString();
		auto migrationMode18Node = value["MigrationMode"];
		if(!migrationMode18Node["DataInitialization"].isNull())
			etlDemoListObject.migrationMode18.dataInitialization = migrationMode18Node["DataInitialization"].asString() == "true";
		if(!migrationMode18Node["DataSynchronization"].isNull())
			etlDemoListObject.migrationMode18.dataSynchronization = migrationMode18Node["DataSynchronization"].asString() == "true";
		if(!migrationMode18Node["StructureInitialization"].isNull())
			etlDemoListObject.migrationMode18.structureInitialization = migrationMode18Node["StructureInitialization"].asString() == "true";
		auto performance19Node = value["Performance"];
		if(!performance19Node["Rps"].isNull())
			etlDemoListObject.performance19.rps = performance19Node["Rps"].asString();
		if(!performance19Node["Flow"].isNull())
			etlDemoListObject.performance19.flow = performance19Node["Flow"].asString();
		auto precheckStatus20Node = value["PrecheckStatus"];
		if(!precheckStatus20Node["Status"].isNull())
			etlDemoListObject.precheckStatus20.status = precheckStatus20Node["Status"].asString();
		if(!precheckStatus20Node["Percent"].isNull())
			etlDemoListObject.precheckStatus20.percent = precheckStatus20Node["Percent"].asString();
		if(!precheckStatus20Node["ErrorMessage"].isNull())
			etlDemoListObject.precheckStatus20.errorMessage = precheckStatus20Node["ErrorMessage"].asString();
		auto allDetailNode = precheckStatus20Node["Detail"]["PrecheckDetail"];
		for (auto precheckStatus20NodeDetailPrecheckDetail : allDetailNode)
		{
			DtsJobStatus13::PrecheckStatus20::PrecheckDetail precheckDetailObject;
			if(!precheckStatus20NodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetailObject.checkResult = precheckStatus20NodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatus20NodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetailObject.checkItemDescription = precheckStatus20NodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatus20NodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetailObject.checkItem = precheckStatus20NodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatus20NodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetailObject.repairMethod = precheckStatus20NodeDetailPrecheckDetail["RepairMethod"].asString();
			if(!precheckStatus20NodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetailObject.failedReason = precheckStatus20NodeDetailPrecheckDetail["FailedReason"].asString();
			etlDemoListObject.precheckStatus20.detail.push_back(precheckDetailObject);
		}
		auto reverseJob21Node = value["ReverseJob"];
		if(!reverseJob21Node["Status"].isNull())
			etlDemoListObject.reverseJob21.status = reverseJob21Node["Status"].asString();
		if(!reverseJob21Node["DtsJobName"].isNull())
			etlDemoListObject.reverseJob21.dtsJobName = reverseJob21Node["DtsJobName"].asString();
		if(!reverseJob21Node["Delay"].isNull())
			etlDemoListObject.reverseJob21.delay = std::stol(reverseJob21Node["Delay"].asString());
		if(!reverseJob21Node["ErrorMessage"].isNull())
			etlDemoListObject.reverseJob21.errorMessage = reverseJob21Node["ErrorMessage"].asString();
		if(!reverseJob21Node["DtsJobId"].isNull())
			etlDemoListObject.reverseJob21.dtsJobId = reverseJob21Node["DtsJobId"].asString();
		if(!reverseJob21Node["ExpireTime"].isNull())
			etlDemoListObject.reverseJob21.expireTime = reverseJob21Node["ExpireTime"].asString();
		if(!reverseJob21Node["CreateTime"].isNull())
			etlDemoListObject.reverseJob21.createTime = reverseJob21Node["CreateTime"].asString();
		if(!reverseJob21Node["PayType"].isNull())
			etlDemoListObject.reverseJob21.payType = reverseJob21Node["PayType"].asString();
		if(!reverseJob21Node["Reserved"].isNull())
			etlDemoListObject.reverseJob21.reserved = reverseJob21Node["Reserved"].asString();
		if(!reverseJob21Node["DbObject"].isNull())
			etlDemoListObject.reverseJob21.dbObject = reverseJob21Node["DbObject"].asString();
		if(!reverseJob21Node["DtsJobClass"].isNull())
			etlDemoListObject.reverseJob21.dtsJobClass = reverseJob21Node["DtsJobClass"].asString();
		if(!reverseJob21Node["DtsInstanceID"].isNull())
			etlDemoListObject.reverseJob21.dtsInstanceID = reverseJob21Node["DtsInstanceID"].asString();
		if(!reverseJob21Node["DtsJobDirection"].isNull())
			etlDemoListObject.reverseJob21.dtsJobDirection = reverseJob21Node["DtsJobDirection"].asString();
		if(!reverseJob21Node["Checkpoint"].isNull())
			etlDemoListObject.reverseJob21.checkpoint = reverseJob21Node["Checkpoint"].asString();
		if(!reverseJob21Node["EtlSafeCheckpoint"].isNull())
			etlDemoListObject.reverseJob21.etlSafeCheckpoint = reverseJob21Node["EtlSafeCheckpoint"].asString();
		auto dataInitializationStatus26Node = reverseJob21Node["DataInitializationStatus"];
		if(!dataInitializationStatus26Node["Status"].isNull())
			etlDemoListObject.reverseJob21.dataInitializationStatus26.status = dataInitializationStatus26Node["Status"].asString();
		if(!dataInitializationStatus26Node["Percent"].isNull())
			etlDemoListObject.reverseJob21.dataInitializationStatus26.percent = dataInitializationStatus26Node["Percent"].asString();
		if(!dataInitializationStatus26Node["ErrorMessage"].isNull())
			etlDemoListObject.reverseJob21.dataInitializationStatus26.errorMessage = dataInitializationStatus26Node["ErrorMessage"].asString();
		if(!dataInitializationStatus26Node["Progress"].isNull())
			etlDemoListObject.reverseJob21.dataInitializationStatus26.progress = dataInitializationStatus26Node["Progress"].asString();
		auto dataSynchronizationStatus27Node = reverseJob21Node["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus27Node["Status"].isNull())
			etlDemoListObject.reverseJob21.dataSynchronizationStatus27.status = dataSynchronizationStatus27Node["Status"].asString();
		if(!dataSynchronizationStatus27Node["NeedUpgrade"].isNull())
			etlDemoListObject.reverseJob21.dataSynchronizationStatus27.needUpgrade = dataSynchronizationStatus27Node["NeedUpgrade"].asString() == "true";
		if(!dataSynchronizationStatus27Node["Percent"].isNull())
			etlDemoListObject.reverseJob21.dataSynchronizationStatus27.percent = dataSynchronizationStatus27Node["Percent"].asString();
		if(!dataSynchronizationStatus27Node["Progress"].isNull())
			etlDemoListObject.reverseJob21.dataSynchronizationStatus27.progress = dataSynchronizationStatus27Node["Progress"].asString();
		if(!dataSynchronizationStatus27Node["ErrorMessage"].isNull())
			etlDemoListObject.reverseJob21.dataSynchronizationStatus27.errorMessage = dataSynchronizationStatus27Node["ErrorMessage"].asString();
		auto destinationEndpoint28Node = reverseJob21Node["DestinationEndpoint"];
		if(!destinationEndpoint28Node["SslSolutionEnum"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.sslSolutionEnum = destinationEndpoint28Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint28Node["OracleSID"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.oracleSID = destinationEndpoint28Node["OracleSID"].asString();
		if(!destinationEndpoint28Node["Region"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.region = destinationEndpoint28Node["Region"].asString();
		if(!destinationEndpoint28Node["DatabaseName"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.databaseName = destinationEndpoint28Node["DatabaseName"].asString();
		if(!destinationEndpoint28Node["Ip"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.ip = destinationEndpoint28Node["Ip"].asString();
		if(!destinationEndpoint28Node["InstanceID"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.instanceID = destinationEndpoint28Node["InstanceID"].asString();
		if(!destinationEndpoint28Node["Port"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.port = destinationEndpoint28Node["Port"].asString();
		if(!destinationEndpoint28Node["InstanceType"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.instanceType = destinationEndpoint28Node["InstanceType"].asString();
		if(!destinationEndpoint28Node["UserName"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.userName = destinationEndpoint28Node["UserName"].asString();
		if(!destinationEndpoint28Node["EngineName"].isNull())
			etlDemoListObject.reverseJob21.destinationEndpoint28.engineName = destinationEndpoint28Node["EngineName"].asString();
		auto migrationMode29Node = reverseJob21Node["MigrationMode"];
		if(!migrationMode29Node["DataInitialization"].isNull())
			etlDemoListObject.reverseJob21.migrationMode29.dataInitialization = migrationMode29Node["DataInitialization"].asString() == "true";
		if(!migrationMode29Node["DataSynchronization"].isNull())
			etlDemoListObject.reverseJob21.migrationMode29.dataSynchronization = migrationMode29Node["DataSynchronization"].asString() == "true";
		if(!migrationMode29Node["StructureInitialization"].isNull())
			etlDemoListObject.reverseJob21.migrationMode29.structureInitialization = migrationMode29Node["StructureInitialization"].asString() == "true";
		auto performance30Node = reverseJob21Node["Performance"];
		if(!performance30Node["Rps"].isNull())
			etlDemoListObject.reverseJob21.performance30.rps = performance30Node["Rps"].asString();
		if(!performance30Node["Flow"].isNull())
			etlDemoListObject.reverseJob21.performance30.flow = performance30Node["Flow"].asString();
		auto precheckStatus31Node = reverseJob21Node["PrecheckStatus"];
		if(!precheckStatus31Node["Status"].isNull())
			etlDemoListObject.reverseJob21.precheckStatus31.status = precheckStatus31Node["Status"].asString();
		if(!precheckStatus31Node["Percent"].isNull())
			etlDemoListObject.reverseJob21.precheckStatus31.percent = precheckStatus31Node["Percent"].asString();
		if(!precheckStatus31Node["ErrorMessage"].isNull())
			etlDemoListObject.reverseJob21.precheckStatus31.errorMessage = precheckStatus31Node["ErrorMessage"].asString();
		auto allDetail34Node = precheckStatus31Node["Detail"]["PrecheckDetail"];
		for (auto precheckStatus31NodeDetailPrecheckDetail : allDetail34Node)
		{
			DtsJobStatus13::ReverseJob21::PrecheckStatus31::PrecheckDetail35 precheckDetail35Object;
			if(!precheckStatus31NodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetail35Object.checkResult = precheckStatus31NodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatus31NodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetail35Object.checkItemDescription = precheckStatus31NodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatus31NodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetail35Object.checkItem = precheckStatus31NodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatus31NodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetail35Object.repairMethod = precheckStatus31NodeDetailPrecheckDetail["RepairMethod"].asString();
			if(!precheckStatus31NodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetail35Object.failedReason = precheckStatus31NodeDetailPrecheckDetail["FailedReason"].asString();
			etlDemoListObject.reverseJob21.precheckStatus31.detail34.push_back(precheckDetail35Object);
		}
		auto sourceEndpoint32Node = reverseJob21Node["SourceEndpoint"];
		if(!sourceEndpoint32Node["SslSolutionEnum"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.sslSolutionEnum = sourceEndpoint32Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint32Node["OracleSID"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.oracleSID = sourceEndpoint32Node["OracleSID"].asString();
		if(!sourceEndpoint32Node["Region"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.region = sourceEndpoint32Node["Region"].asString();
		if(!sourceEndpoint32Node["DatabaseName"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.databaseName = sourceEndpoint32Node["DatabaseName"].asString();
		if(!sourceEndpoint32Node["Ip"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.ip = sourceEndpoint32Node["Ip"].asString();
		if(!sourceEndpoint32Node["InstanceID"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.instanceID = sourceEndpoint32Node["InstanceID"].asString();
		if(!sourceEndpoint32Node["Port"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.port = sourceEndpoint32Node["Port"].asString();
		if(!sourceEndpoint32Node["InstanceType"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.instanceType = sourceEndpoint32Node["InstanceType"].asString();
		if(!sourceEndpoint32Node["UserName"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.userName = sourceEndpoint32Node["UserName"].asString();
		if(!sourceEndpoint32Node["EngineName"].isNull())
			etlDemoListObject.reverseJob21.sourceEndpoint32.engineName = sourceEndpoint32Node["EngineName"].asString();
		auto structureInitializationStatus33Node = reverseJob21Node["StructureInitializationStatus"];
		if(!structureInitializationStatus33Node["Status"].isNull())
			etlDemoListObject.reverseJob21.structureInitializationStatus33.status = structureInitializationStatus33Node["Status"].asString();
		if(!structureInitializationStatus33Node["Percent"].isNull())
			etlDemoListObject.reverseJob21.structureInitializationStatus33.percent = structureInitializationStatus33Node["Percent"].asString();
		if(!structureInitializationStatus33Node["ErrorMessage"].isNull())
			etlDemoListObject.reverseJob21.structureInitializationStatus33.errorMessage = structureInitializationStatus33Node["ErrorMessage"].asString();
		if(!structureInitializationStatus33Node["Progress"].isNull())
			etlDemoListObject.reverseJob21.structureInitializationStatus33.progress = structureInitializationStatus33Node["Progress"].asString();
		auto sourceEndpoint22Node = value["SourceEndpoint"];
		if(!sourceEndpoint22Node["SslSolutionEnum"].isNull())
			etlDemoListObject.sourceEndpoint22.sslSolutionEnum = sourceEndpoint22Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint22Node["OracleSID"].isNull())
			etlDemoListObject.sourceEndpoint22.oracleSID = sourceEndpoint22Node["OracleSID"].asString();
		if(!sourceEndpoint22Node["Region"].isNull())
			etlDemoListObject.sourceEndpoint22.region = sourceEndpoint22Node["Region"].asString();
		if(!sourceEndpoint22Node["DatabaseName"].isNull())
			etlDemoListObject.sourceEndpoint22.databaseName = sourceEndpoint22Node["DatabaseName"].asString();
		if(!sourceEndpoint22Node["Ip"].isNull())
			etlDemoListObject.sourceEndpoint22.ip = sourceEndpoint22Node["Ip"].asString();
		if(!sourceEndpoint22Node["InstanceID"].isNull())
			etlDemoListObject.sourceEndpoint22.instanceID = sourceEndpoint22Node["InstanceID"].asString();
		if(!sourceEndpoint22Node["Port"].isNull())
			etlDemoListObject.sourceEndpoint22.port = sourceEndpoint22Node["Port"].asString();
		if(!sourceEndpoint22Node["InstanceType"].isNull())
			etlDemoListObject.sourceEndpoint22.instanceType = sourceEndpoint22Node["InstanceType"].asString();
		if(!sourceEndpoint22Node["UserName"].isNull())
			etlDemoListObject.sourceEndpoint22.userName = sourceEndpoint22Node["UserName"].asString();
		if(!sourceEndpoint22Node["EngineName"].isNull())
			etlDemoListObject.sourceEndpoint22.engineName = sourceEndpoint22Node["EngineName"].asString();
		auto structureInitializationStatus23Node = value["StructureInitializationStatus"];
		if(!structureInitializationStatus23Node["Status"].isNull())
			etlDemoListObject.structureInitializationStatus23.status = structureInitializationStatus23Node["Status"].asString();
		if(!structureInitializationStatus23Node["Percent"].isNull())
			etlDemoListObject.structureInitializationStatus23.percent = structureInitializationStatus23Node["Percent"].asString();
		if(!structureInitializationStatus23Node["ErrorMessage"].isNull())
			etlDemoListObject.structureInitializationStatus23.errorMessage = structureInitializationStatus23Node["ErrorMessage"].asString();
		if(!structureInitializationStatus23Node["Progress"].isNull())
			etlDemoListObject.structureInitializationStatus23.progress = structureInitializationStatus23Node["Progress"].asString();
		auto retryState24Node = value["RetryState"];
		if(!retryState24Node["RetryCount"].isNull())
			etlDemoListObject.retryState24.retryCount = std::stoi(retryState24Node["RetryCount"].asString());
		if(!retryState24Node["MaxRetryTime"].isNull())
			etlDemoListObject.retryState24.maxRetryTime = std::stoi(retryState24Node["MaxRetryTime"].asString());
		if(!retryState24Node["ErrMessage"].isNull())
			etlDemoListObject.retryState24.errMessage = retryState24Node["ErrMessage"].asString();
		if(!retryState24Node["RetryTarget"].isNull())
			etlDemoListObject.retryState24.retryTarget = retryState24Node["RetryTarget"].asString();
		if(!retryState24Node["RetryTime"].isNull())
			etlDemoListObject.retryState24.retryTime = std::stoi(retryState24Node["RetryTime"].asString());
		if(!retryState24Node["Module"].isNull())
			etlDemoListObject.retryState24.module = retryState24Node["Module"].asString();
		if(!retryState24Node["JobId"].isNull())
			etlDemoListObject.retryState24.jobId = retryState24Node["JobId"].asString();
		if(!retryState24Node["Retrying"].isNull())
			etlDemoListObject.retryState24.retrying = retryState24Node["Retrying"].asString() == "true";
		etlDemoList_.push_back(etlDemoListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

int DescribeDtsJobsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeDtsJobsResult::DtsJobStatus> DescribeDtsJobsResult::getDtsJobList()const
{
	return dtsJobList_;
}

int DescribeDtsJobsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDtsJobsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDtsJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDtsJobsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDtsJobsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsJobsResult::getErrMessage()const
{
	return errMessage_;
}

std::vector<DescribeDtsJobsResult::DtsJobStatus13> DescribeDtsJobsResult::getEtlDemoList()const
{
	return etlDemoList_;
}

bool DescribeDtsJobsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsJobsResult::getErrCode()const
{
	return errCode_;
}

