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
		if(!valueDtsJobListDtsJobStatus["DtsInstanceID"].isNull())
			dtsJobListObject.dtsInstanceID = valueDtsJobListDtsJobStatus["DtsInstanceID"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobId"].isNull())
			dtsJobListObject.dtsJobId = valueDtsJobListDtsJobStatus["DtsJobId"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobName"].isNull())
			dtsJobListObject.dtsJobName = valueDtsJobListDtsJobStatus["DtsJobName"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobClass"].isNull())
			dtsJobListObject.dtsJobClass = valueDtsJobListDtsJobStatus["DtsJobClass"].asString();
		if(!valueDtsJobListDtsJobStatus["DtsJobDirection"].isNull())
			dtsJobListObject.dtsJobDirection = valueDtsJobListDtsJobStatus["DtsJobDirection"].asString();
		if(!valueDtsJobListDtsJobStatus["PayType"].isNull())
			dtsJobListObject.payType = valueDtsJobListDtsJobStatus["PayType"].asString();
		if(!valueDtsJobListDtsJobStatus["ExpireTime"].isNull())
			dtsJobListObject.expireTime = valueDtsJobListDtsJobStatus["ExpireTime"].asString();
		if(!valueDtsJobListDtsJobStatus["CreateTime"].isNull())
			dtsJobListObject.createTime = valueDtsJobListDtsJobStatus["CreateTime"].asString();
		if(!valueDtsJobListDtsJobStatus["Status"].isNull())
			dtsJobListObject.status = valueDtsJobListDtsJobStatus["Status"].asString();
		if(!valueDtsJobListDtsJobStatus["ErrorMessage"].isNull())
			dtsJobListObject.errorMessage = valueDtsJobListDtsJobStatus["ErrorMessage"].asString();
		if(!valueDtsJobListDtsJobStatus["Delay"].isNull())
			dtsJobListObject.delay = std::stoi(valueDtsJobListDtsJobStatus["Delay"].asString());
		if(!valueDtsJobListDtsJobStatus["Checkpoint"].isNull())
			dtsJobListObject.checkpoint = valueDtsJobListDtsJobStatus["Checkpoint"].asString();
		if(!valueDtsJobListDtsJobStatus["DbObject"].isNull())
			dtsJobListObject.dbObject = valueDtsJobListDtsJobStatus["DbObject"].asString();
		if(!valueDtsJobListDtsJobStatus["Reserved"].isNull())
			dtsJobListObject.reserved = valueDtsJobListDtsJobStatus["Reserved"].asString();
		auto allTagListNode = valueDtsJobListDtsJobStatus["TagList"]["DtsTag"];
		for (auto valueDtsJobListDtsJobStatusTagListDtsTag : allTagListNode)
		{
			DtsJobStatus::DtsTag tagListObject;
			if(!valueDtsJobListDtsJobStatusTagListDtsTag["TagKey"].isNull())
				tagListObject.tagKey = valueDtsJobListDtsJobStatusTagListDtsTag["TagKey"].asString();
			if(!valueDtsJobListDtsJobStatusTagListDtsTag["TagValue"].isNull())
				tagListObject.tagValue = valueDtsJobListDtsJobStatusTagListDtsTag["TagValue"].asString();
			dtsJobListObject.tagList.push_back(tagListObject);
		}
		auto sourceEndpointNode = value["SourceEndpoint"];
		if(!sourceEndpointNode["InstanceID"].isNull())
			dtsJobListObject.sourceEndpoint.instanceID = sourceEndpointNode["InstanceID"].asString();
		if(!sourceEndpointNode["InstanceType"].isNull())
			dtsJobListObject.sourceEndpoint.instanceType = sourceEndpointNode["InstanceType"].asString();
		if(!sourceEndpointNode["EngineName"].isNull())
			dtsJobListObject.sourceEndpoint.engineName = sourceEndpointNode["EngineName"].asString();
		if(!sourceEndpointNode["Ip"].isNull())
			dtsJobListObject.sourceEndpoint.ip = sourceEndpointNode["Ip"].asString();
		if(!sourceEndpointNode["Port"].isNull())
			dtsJobListObject.sourceEndpoint.port = sourceEndpointNode["Port"].asString();
		if(!sourceEndpointNode["DatabaseName"].isNull())
			dtsJobListObject.sourceEndpoint.databaseName = sourceEndpointNode["DatabaseName"].asString();
		if(!sourceEndpointNode["OracleSID"].isNull())
			dtsJobListObject.sourceEndpoint.oracleSID = sourceEndpointNode["OracleSID"].asString();
		if(!sourceEndpointNode["UserName"].isNull())
			dtsJobListObject.sourceEndpoint.userName = sourceEndpointNode["UserName"].asString();
		if(!sourceEndpointNode["SslSolutionEnum"].isNull())
			dtsJobListObject.sourceEndpoint.sslSolutionEnum = sourceEndpointNode["SslSolutionEnum"].asString();
		if(!sourceEndpointNode["Region"].isNull())
			dtsJobListObject.sourceEndpoint.region = sourceEndpointNode["Region"].asString();
		auto destinationEndpointNode = value["DestinationEndpoint"];
		if(!destinationEndpointNode["InstanceID"].isNull())
			dtsJobListObject.destinationEndpoint.instanceID = destinationEndpointNode["InstanceID"].asString();
		if(!destinationEndpointNode["InstanceType"].isNull())
			dtsJobListObject.destinationEndpoint.instanceType = destinationEndpointNode["InstanceType"].asString();
		if(!destinationEndpointNode["EngineName"].isNull())
			dtsJobListObject.destinationEndpoint.engineName = destinationEndpointNode["EngineName"].asString();
		if(!destinationEndpointNode["Ip"].isNull())
			dtsJobListObject.destinationEndpoint.ip = destinationEndpointNode["Ip"].asString();
		if(!destinationEndpointNode["Port"].isNull())
			dtsJobListObject.destinationEndpoint.port = destinationEndpointNode["Port"].asString();
		if(!destinationEndpointNode["DatabaseName"].isNull())
			dtsJobListObject.destinationEndpoint.databaseName = destinationEndpointNode["DatabaseName"].asString();
		if(!destinationEndpointNode["OracleSID"].isNull())
			dtsJobListObject.destinationEndpoint.oracleSID = destinationEndpointNode["OracleSID"].asString();
		if(!destinationEndpointNode["UserName"].isNull())
			dtsJobListObject.destinationEndpoint.userName = destinationEndpointNode["UserName"].asString();
		if(!destinationEndpointNode["SslSolutionEnum"].isNull())
			dtsJobListObject.destinationEndpoint.sslSolutionEnum = destinationEndpointNode["SslSolutionEnum"].asString();
		if(!destinationEndpointNode["Region"].isNull())
			dtsJobListObject.destinationEndpoint.region = destinationEndpointNode["Region"].asString();
		auto migrationModeNode = value["MigrationMode"];
		if(!migrationModeNode["StructureInitialization"].isNull())
			dtsJobListObject.migrationMode.structureInitialization = migrationModeNode["StructureInitialization"].asString() == "true";
		if(!migrationModeNode["DataInitialization"].isNull())
			dtsJobListObject.migrationMode.dataInitialization = migrationModeNode["DataInitialization"].asString() == "true";
		if(!migrationModeNode["DataSynchronization"].isNull())
			dtsJobListObject.migrationMode.dataSynchronization = migrationModeNode["DataSynchronization"].asString() == "true";
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
			if(!precheckStatusNodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetailObject.checkItem = precheckStatusNodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetailObject.checkItemDescription = precheckStatusNodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetailObject.checkResult = precheckStatusNodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetailObject.failedReason = precheckStatusNodeDetailPrecheckDetail["FailedReason"].asString();
			if(!precheckStatusNodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetailObject.repairMethod = precheckStatusNodeDetailPrecheckDetail["RepairMethod"].asString();
			dtsJobListObject.precheckStatus.detail.push_back(precheckDetailObject);
		}
		auto structureInitializationStatusNode = value["StructureInitializationStatus"];
		if(!structureInitializationStatusNode["Status"].isNull())
			dtsJobListObject.structureInitializationStatus.status = structureInitializationStatusNode["Status"].asString();
		if(!structureInitializationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.structureInitializationStatus.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
		if(!structureInitializationStatusNode["Percent"].isNull())
			dtsJobListObject.structureInitializationStatus.percent = structureInitializationStatusNode["Percent"].asString();
		if(!structureInitializationStatusNode["Progress"].isNull())
			dtsJobListObject.structureInitializationStatus.progress = structureInitializationStatusNode["Progress"].asString();
		auto dataInitializationStatusNode = value["DataInitializationStatus"];
		if(!dataInitializationStatusNode["Status"].isNull())
			dtsJobListObject.dataInitializationStatus.status = dataInitializationStatusNode["Status"].asString();
		if(!dataInitializationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataInitializationStatus.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
		if(!dataInitializationStatusNode["Percent"].isNull())
			dtsJobListObject.dataInitializationStatus.percent = dataInitializationStatusNode["Percent"].asString();
		if(!dataInitializationStatusNode["Progress"].isNull())
			dtsJobListObject.dataInitializationStatus.progress = dataInitializationStatusNode["Progress"].asString();
		auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatusNode["Status"].isNull())
			dtsJobListObject.dataSynchronizationStatus.status = dataSynchronizationStatusNode["Status"].asString();
		if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
			dtsJobListObject.dataSynchronizationStatus.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
		if(!dataSynchronizationStatusNode["Percent"].isNull())
			dtsJobListObject.dataSynchronizationStatus.percent = dataSynchronizationStatusNode["Percent"].asString();
		if(!dataSynchronizationStatusNode["Progress"].isNull())
			dtsJobListObject.dataSynchronizationStatus.progress = dataSynchronizationStatusNode["Progress"].asString();
		auto performanceNode = value["Performance"];
		if(!performanceNode["Rps"].isNull())
			dtsJobListObject.performance.rps = performanceNode["Rps"].asString();
		if(!performanceNode["Flow"].isNull())
			dtsJobListObject.performance.flow = performanceNode["Flow"].asString();
		auto reverseJobNode = value["ReverseJob"];
		if(!reverseJobNode["DtsInstanceID"].isNull())
			dtsJobListObject.reverseJob.dtsInstanceID = reverseJobNode["DtsInstanceID"].asString();
		if(!reverseJobNode["DtsJobId"].isNull())
			dtsJobListObject.reverseJob.dtsJobId = reverseJobNode["DtsJobId"].asString();
		if(!reverseJobNode["DtsJobName"].isNull())
			dtsJobListObject.reverseJob.dtsJobName = reverseJobNode["DtsJobName"].asString();
		if(!reverseJobNode["DtsJobClass"].isNull())
			dtsJobListObject.reverseJob.dtsJobClass = reverseJobNode["DtsJobClass"].asString();
		if(!reverseJobNode["DtsJobDirection"].isNull())
			dtsJobListObject.reverseJob.dtsJobDirection = reverseJobNode["DtsJobDirection"].asString();
		if(!reverseJobNode["PayType"].isNull())
			dtsJobListObject.reverseJob.payType = reverseJobNode["PayType"].asString();
		if(!reverseJobNode["ExpireTime"].isNull())
			dtsJobListObject.reverseJob.expireTime = reverseJobNode["ExpireTime"].asString();
		if(!reverseJobNode["CreateTime"].isNull())
			dtsJobListObject.reverseJob.createTime = reverseJobNode["CreateTime"].asString();
		if(!reverseJobNode["Status"].isNull())
			dtsJobListObject.reverseJob.status = reverseJobNode["Status"].asString();
		if(!reverseJobNode["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.errorMessage = reverseJobNode["ErrorMessage"].asString();
		if(!reverseJobNode["Delay"].isNull())
			dtsJobListObject.reverseJob.delay = std::stoi(reverseJobNode["Delay"].asString());
		if(!reverseJobNode["Checkpoint"].isNull())
			dtsJobListObject.reverseJob.checkpoint = reverseJobNode["Checkpoint"].asString();
		if(!reverseJobNode["DbObject"].isNull())
			dtsJobListObject.reverseJob.dbObject = reverseJobNode["DbObject"].asString();
		if(!reverseJobNode["Reserved"].isNull())
			dtsJobListObject.reverseJob.reserved = reverseJobNode["Reserved"].asString();
		auto sourceEndpoint1Node = reverseJobNode["SourceEndpoint"];
		if(!sourceEndpoint1Node["InstanceID"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.instanceID = sourceEndpoint1Node["InstanceID"].asString();
		if(!sourceEndpoint1Node["InstanceType"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.instanceType = sourceEndpoint1Node["InstanceType"].asString();
		if(!sourceEndpoint1Node["EngineName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.engineName = sourceEndpoint1Node["EngineName"].asString();
		if(!sourceEndpoint1Node["Ip"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.ip = sourceEndpoint1Node["Ip"].asString();
		if(!sourceEndpoint1Node["Port"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.port = sourceEndpoint1Node["Port"].asString();
		if(!sourceEndpoint1Node["DatabaseName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.databaseName = sourceEndpoint1Node["DatabaseName"].asString();
		if(!sourceEndpoint1Node["OracleSID"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.oracleSID = sourceEndpoint1Node["OracleSID"].asString();
		if(!sourceEndpoint1Node["UserName"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.userName = sourceEndpoint1Node["UserName"].asString();
		if(!sourceEndpoint1Node["SslSolutionEnum"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.sslSolutionEnum = sourceEndpoint1Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint1Node["Region"].isNull())
			dtsJobListObject.reverseJob.sourceEndpoint1.region = sourceEndpoint1Node["Region"].asString();
		auto destinationEndpoint2Node = reverseJobNode["DestinationEndpoint"];
		if(!destinationEndpoint2Node["InstanceID"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.instanceID = destinationEndpoint2Node["InstanceID"].asString();
		if(!destinationEndpoint2Node["InstanceType"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.instanceType = destinationEndpoint2Node["InstanceType"].asString();
		if(!destinationEndpoint2Node["EngineName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.engineName = destinationEndpoint2Node["EngineName"].asString();
		if(!destinationEndpoint2Node["Ip"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.ip = destinationEndpoint2Node["Ip"].asString();
		if(!destinationEndpoint2Node["Port"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.port = destinationEndpoint2Node["Port"].asString();
		if(!destinationEndpoint2Node["DatabaseName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.databaseName = destinationEndpoint2Node["DatabaseName"].asString();
		if(!destinationEndpoint2Node["OracleSID"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.oracleSID = destinationEndpoint2Node["OracleSID"].asString();
		if(!destinationEndpoint2Node["UserName"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.userName = destinationEndpoint2Node["UserName"].asString();
		if(!destinationEndpoint2Node["SslSolutionEnum"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.sslSolutionEnum = destinationEndpoint2Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint2Node["Region"].isNull())
			dtsJobListObject.reverseJob.destinationEndpoint2.region = destinationEndpoint2Node["Region"].asString();
		auto migrationMode3Node = reverseJobNode["MigrationMode"];
		if(!migrationMode3Node["StructureInitialization"].isNull())
			dtsJobListObject.reverseJob.migrationMode3.structureInitialization = migrationMode3Node["StructureInitialization"].asString() == "true";
		if(!migrationMode3Node["DataInitialization"].isNull())
			dtsJobListObject.reverseJob.migrationMode3.dataInitialization = migrationMode3Node["DataInitialization"].asString() == "true";
		if(!migrationMode3Node["DataSynchronization"].isNull())
			dtsJobListObject.reverseJob.migrationMode3.dataSynchronization = migrationMode3Node["DataSynchronization"].asString() == "true";
		auto precheckStatus4Node = reverseJobNode["PrecheckStatus"];
		if(!precheckStatus4Node["Status"].isNull())
			dtsJobListObject.reverseJob.precheckStatus4.status = precheckStatus4Node["Status"].asString();
		if(!precheckStatus4Node["Percent"].isNull())
			dtsJobListObject.reverseJob.precheckStatus4.percent = precheckStatus4Node["Percent"].asString();
		if(!precheckStatus4Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.precheckStatus4.errorMessage = precheckStatus4Node["ErrorMessage"].asString();
		auto allDetail9Node = precheckStatus4Node["Detail"]["PrecheckDetail"];
		for (auto precheckStatus4NodeDetailPrecheckDetail : allDetail9Node)
		{
			DtsJobStatus::ReverseJob::PrecheckStatus4::PrecheckDetail10 precheckDetail10Object;
			if(!precheckStatus4NodeDetailPrecheckDetail["CheckItem"].isNull())
				precheckDetail10Object.checkItem = precheckStatus4NodeDetailPrecheckDetail["CheckItem"].asString();
			if(!precheckStatus4NodeDetailPrecheckDetail["CheckItemDescription"].isNull())
				precheckDetail10Object.checkItemDescription = precheckStatus4NodeDetailPrecheckDetail["CheckItemDescription"].asString();
			if(!precheckStatus4NodeDetailPrecheckDetail["CheckResult"].isNull())
				precheckDetail10Object.checkResult = precheckStatus4NodeDetailPrecheckDetail["CheckResult"].asString();
			if(!precheckStatus4NodeDetailPrecheckDetail["FailedReason"].isNull())
				precheckDetail10Object.failedReason = precheckStatus4NodeDetailPrecheckDetail["FailedReason"].asString();
			if(!precheckStatus4NodeDetailPrecheckDetail["RepairMethod"].isNull())
				precheckDetail10Object.repairMethod = precheckStatus4NodeDetailPrecheckDetail["RepairMethod"].asString();
			dtsJobListObject.reverseJob.precheckStatus4.detail9.push_back(precheckDetail10Object);
		}
		auto structureInitializationStatus5Node = reverseJobNode["StructureInitializationStatus"];
		if(!structureInitializationStatus5Node["Status"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus5.status = structureInitializationStatus5Node["Status"].asString();
		if(!structureInitializationStatus5Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus5.errorMessage = structureInitializationStatus5Node["ErrorMessage"].asString();
		if(!structureInitializationStatus5Node["Percent"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus5.percent = structureInitializationStatus5Node["Percent"].asString();
		if(!structureInitializationStatus5Node["Progress"].isNull())
			dtsJobListObject.reverseJob.structureInitializationStatus5.progress = structureInitializationStatus5Node["Progress"].asString();
		auto dataInitializationStatus6Node = reverseJobNode["DataInitializationStatus"];
		if(!dataInitializationStatus6Node["Status"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus6.status = dataInitializationStatus6Node["Status"].asString();
		if(!dataInitializationStatus6Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus6.errorMessage = dataInitializationStatus6Node["ErrorMessage"].asString();
		if(!dataInitializationStatus6Node["Percent"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus6.percent = dataInitializationStatus6Node["Percent"].asString();
		if(!dataInitializationStatus6Node["Progress"].isNull())
			dtsJobListObject.reverseJob.dataInitializationStatus6.progress = dataInitializationStatus6Node["Progress"].asString();
		auto dataSynchronizationStatus7Node = reverseJobNode["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus7Node["Status"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus7.status = dataSynchronizationStatus7Node["Status"].asString();
		if(!dataSynchronizationStatus7Node["ErrorMessage"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus7.errorMessage = dataSynchronizationStatus7Node["ErrorMessage"].asString();
		if(!dataSynchronizationStatus7Node["Percent"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus7.percent = dataSynchronizationStatus7Node["Percent"].asString();
		if(!dataSynchronizationStatus7Node["Progress"].isNull())
			dtsJobListObject.reverseJob.dataSynchronizationStatus7.progress = dataSynchronizationStatus7Node["Progress"].asString();
		auto performance8Node = reverseJobNode["Performance"];
		if(!performance8Node["Rps"].isNull())
			dtsJobListObject.reverseJob.performance8.rps = performance8Node["Rps"].asString();
		if(!performance8Node["Flow"].isNull())
			dtsJobListObject.reverseJob.performance8.flow = performance8Node["Flow"].asString();
		dtsJobList_.push_back(dtsJobListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

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

