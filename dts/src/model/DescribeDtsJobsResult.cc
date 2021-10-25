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
		auto allDetail9Node = precheckStatus6Node["Detail"]["PrecheckDetail"];
		for (auto precheckStatus6NodeDetailPrecheckDetail : allDetail9Node)
		{
			DtsJobStatus::ReverseJob::PrecheckStatus6::PrecheckDetail10 precheckDetail10Object;
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetail10Object.checkResult = precheckStatus6NodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetail10Object.checkItemDescription = precheckStatus6NodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetail10Object.checkItem = precheckStatus6NodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetail10Object.repairMethod = precheckStatus6NodeDetailPrecheckDetail["RepairMethod"].asString();
			if(!precheckStatus6NodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetail10Object.failedReason = precheckStatus6NodeDetailPrecheckDetail["FailedReason"].asString();
			dtsJobListObject.reverseJob.precheckStatus6.detail9.push_back(precheckDetail10Object);
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
		dtsJobList_.push_back(dtsJobListObject);
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

bool DescribeDtsJobsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsJobsResult::getErrCode()const
{
	return errCode_;
}

