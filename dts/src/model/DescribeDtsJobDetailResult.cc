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

#include <alibabacloud/dts/model/DescribeDtsJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsJobDetailResult::DescribeDtsJobDetailResult() :
	ServiceResult()
{}

DescribeDtsJobDetailResult::DescribeDtsJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsJobDetailResult::~DescribeDtsJobDetailResult()
{}

void DescribeDtsJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubDistributedJobNode = value["SubDistributedJob"]["SubDistributedJobItem"];
	for (auto valueSubDistributedJobSubDistributedJobItem : allSubDistributedJobNode)
	{
		SubDistributedJobItem subDistributedJobObject;
		if(!valueSubDistributedJobSubDistributedJobItem["DtsInstanceID"].isNull())
			subDistributedJobObject.dtsInstanceID = valueSubDistributedJobSubDistributedJobItem["DtsInstanceID"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DtsJobId"].isNull())
			subDistributedJobObject.dtsJobId = valueSubDistributedJobSubDistributedJobItem["DtsJobId"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DtsJobName"].isNull())
			subDistributedJobObject.dtsJobName = valueSubDistributedJobSubDistributedJobItem["DtsJobName"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["GroupId"].isNull())
			subDistributedJobObject.groupId = valueSubDistributedJobSubDistributedJobItem["GroupId"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DatabaseCount"].isNull())
			subDistributedJobObject.databaseCount = std::stoi(valueSubDistributedJobSubDistributedJobItem["DatabaseCount"].asString());
		if(!valueSubDistributedJobSubDistributedJobItem["DtsJobClass"].isNull())
			subDistributedJobObject.dtsJobClass = valueSubDistributedJobSubDistributedJobItem["DtsJobClass"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DtsJobDirection"].isNull())
			subDistributedJobObject.dtsJobDirection = valueSubDistributedJobSubDistributedJobItem["DtsJobDirection"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["SynchronizationDirection"].isNull())
			subDistributedJobObject.synchronizationDirection = valueSubDistributedJobSubDistributedJobItem["SynchronizationDirection"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["PayType"].isNull())
			subDistributedJobObject.payType = valueSubDistributedJobSubDistributedJobItem["PayType"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["ExpireTime"].isNull())
			subDistributedJobObject.expireTime = valueSubDistributedJobSubDistributedJobItem["ExpireTime"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["CreateTime"].isNull())
			subDistributedJobObject.createTime = valueSubDistributedJobSubDistributedJobItem["CreateTime"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["FinishTime"].isNull())
			subDistributedJobObject.finishTime = valueSubDistributedJobSubDistributedJobItem["FinishTime"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DbObject"].isNull())
			subDistributedJobObject.dbObject = valueSubDistributedJobSubDistributedJobItem["DbObject"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["Status"].isNull())
			subDistributedJobObject.status = valueSubDistributedJobSubDistributedJobItem["Status"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["ErrorMessage"].isNull())
			subDistributedJobObject.errorMessage = valueSubDistributedJobSubDistributedJobItem["ErrorMessage"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["Delay"].isNull())
			subDistributedJobObject.delay = std::stol(valueSubDistributedJobSubDistributedJobItem["Delay"].asString());
		if(!valueSubDistributedJobSubDistributedJobItem["Checkpoint"].isNull())
			subDistributedJobObject.checkpoint = valueSubDistributedJobSubDistributedJobItem["Checkpoint"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["Reserved"].isNull())
			subDistributedJobObject.reserved = valueSubDistributedJobSubDistributedJobItem["Reserved"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["SubscribeTopic"].isNull())
			subDistributedJobObject.subscribeTopic = valueSubDistributedJobSubDistributedJobItem["SubscribeTopic"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["ConsumptionCheckpoint"].isNull())
			subDistributedJobObject.consumptionCheckpoint = valueSubDistributedJobSubDistributedJobItem["ConsumptionCheckpoint"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["BeginTimestamp"].isNull())
			subDistributedJobObject.beginTimestamp = valueSubDistributedJobSubDistributedJobItem["BeginTimestamp"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["EndTimestamp"].isNull())
			subDistributedJobObject.endTimestamp = valueSubDistributedJobSubDistributedJobItem["EndTimestamp"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["ConsumptionClient"].isNull())
			subDistributedJobObject.consumptionClient = valueSubDistributedJobSubDistributedJobItem["ConsumptionClient"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["DestNetType"].isNull())
			subDistributedJobObject.destNetType = valueSubDistributedJobSubDistributedJobItem["DestNetType"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["AppName"].isNull())
			subDistributedJobObject.appName = valueSubDistributedJobSubDistributedJobItem["AppName"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["EtlCalculator"].isNull())
			subDistributedJobObject.etlCalculator = valueSubDistributedJobSubDistributedJobItem["EtlCalculator"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["OriginType"].isNull())
			subDistributedJobObject.originType = valueSubDistributedJobSubDistributedJobItem["OriginType"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["JobType"].isNull())
			subDistributedJobObject.jobType = valueSubDistributedJobSubDistributedJobItem["JobType"].asString();
		if(!valueSubDistributedJobSubDistributedJobItem["IsDemoJob"].isNull())
			subDistributedJobObject.isDemoJob = valueSubDistributedJobSubDistributedJobItem["IsDemoJob"].asString() == "true";
		if(!valueSubDistributedJobSubDistributedJobItem["TaskType"].isNull())
			subDistributedJobObject.taskType = valueSubDistributedJobSubDistributedJobItem["TaskType"].asString();
		auto allTagListNode = valueSubDistributedJobSubDistributedJobItem["TagList"]["TagListItem"];
		for (auto valueSubDistributedJobSubDistributedJobItemTagListTagListItem : allTagListNode)
		{
			SubDistributedJobItem::TagListItem tagListObject;
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Id"].isNull())
				tagListObject.id = std::stol(valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Id"].asString());
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["GmtCreate"].isNull())
				tagListObject.gmtCreate = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["GmtCreate"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["GmtModified"].isNull())
				tagListObject.gmtModified = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["GmtModified"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["ResourceId"].isNull())
				tagListObject.resourceId = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["ResourceId"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["ResourceType"].isNull())
				tagListObject.resourceType = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["ResourceType"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["RegionId"].isNull())
				tagListObject.regionId = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["RegionId"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["AliUid"].isNull())
				tagListObject.aliUid = std::stol(valueSubDistributedJobSubDistributedJobItemTagListTagListItem["AliUid"].asString());
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagKey"].isNull())
				tagListObject.tagKey = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagKey"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagValue"].isNull())
				tagListObject.tagValue = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagValue"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagCategory"].isNull())
				tagListObject.tagCategory = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["TagCategory"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["SrcRegion"].isNull())
				tagListObject.srcRegion = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["SrcRegion"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Scope"].isNull())
				tagListObject.scope = valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Scope"].asString();
			if(!valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Creator"].isNull())
				tagListObject.creator = std::stol(valueSubDistributedJobSubDistributedJobItemTagListTagListItem["Creator"].asString());
			subDistributedJobObject.tagList.push_back(tagListObject);
		}
		auto sourceEndpoint2Node = value["SourceEndpoint"];
		if(!sourceEndpoint2Node["InstanceID"].isNull())
			subDistributedJobObject.sourceEndpoint2.instanceID = sourceEndpoint2Node["InstanceID"].asString();
		if(!sourceEndpoint2Node["Region"].isNull())
			subDistributedJobObject.sourceEndpoint2.region = sourceEndpoint2Node["Region"].asString();
		if(!sourceEndpoint2Node["InstanceType"].isNull())
			subDistributedJobObject.sourceEndpoint2.instanceType = sourceEndpoint2Node["InstanceType"].asString();
		if(!sourceEndpoint2Node["EngineName"].isNull())
			subDistributedJobObject.sourceEndpoint2.engineName = sourceEndpoint2Node["EngineName"].asString();
		if(!sourceEndpoint2Node["Ip"].isNull())
			subDistributedJobObject.sourceEndpoint2.ip = sourceEndpoint2Node["Ip"].asString();
		if(!sourceEndpoint2Node["Port"].isNull())
			subDistributedJobObject.sourceEndpoint2.port = sourceEndpoint2Node["Port"].asString();
		if(!sourceEndpoint2Node["DatabaseName"].isNull())
			subDistributedJobObject.sourceEndpoint2.databaseName = sourceEndpoint2Node["DatabaseName"].asString();
		if(!sourceEndpoint2Node["OracleSID"].isNull())
			subDistributedJobObject.sourceEndpoint2.oracleSID = sourceEndpoint2Node["OracleSID"].asString();
		if(!sourceEndpoint2Node["UserName"].isNull())
			subDistributedJobObject.sourceEndpoint2.userName = sourceEndpoint2Node["UserName"].asString();
		if(!sourceEndpoint2Node["SslSolutionEnum"].isNull())
			subDistributedJobObject.sourceEndpoint2.sslSolutionEnum = sourceEndpoint2Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint2Node["RoleName"].isNull())
			subDistributedJobObject.sourceEndpoint2.roleName = sourceEndpoint2Node["RoleName"].asString();
		if(!sourceEndpoint2Node["AliyunUid"].isNull())
			subDistributedJobObject.sourceEndpoint2.aliyunUid = sourceEndpoint2Node["AliyunUid"].asString();
		auto destinationEndpoint3Node = value["DestinationEndpoint"];
		if(!destinationEndpoint3Node["InstanceID"].isNull())
			subDistributedJobObject.destinationEndpoint3.instanceID = destinationEndpoint3Node["InstanceID"].asString();
		if(!destinationEndpoint3Node["Region"].isNull())
			subDistributedJobObject.destinationEndpoint3.region = destinationEndpoint3Node["Region"].asString();
		if(!destinationEndpoint3Node["InstanceType"].isNull())
			subDistributedJobObject.destinationEndpoint3.instanceType = destinationEndpoint3Node["InstanceType"].asString();
		if(!destinationEndpoint3Node["EngineName"].isNull())
			subDistributedJobObject.destinationEndpoint3.engineName = destinationEndpoint3Node["EngineName"].asString();
		if(!destinationEndpoint3Node["Ip"].isNull())
			subDistributedJobObject.destinationEndpoint3.ip = destinationEndpoint3Node["Ip"].asString();
		if(!destinationEndpoint3Node["Port"].isNull())
			subDistributedJobObject.destinationEndpoint3.port = destinationEndpoint3Node["Port"].asString();
		if(!destinationEndpoint3Node["DatabaseName"].isNull())
			subDistributedJobObject.destinationEndpoint3.databaseName = destinationEndpoint3Node["DatabaseName"].asString();
		if(!destinationEndpoint3Node["OracleSID"].isNull())
			subDistributedJobObject.destinationEndpoint3.oracleSID = destinationEndpoint3Node["OracleSID"].asString();
		if(!destinationEndpoint3Node["UserName"].isNull())
			subDistributedJobObject.destinationEndpoint3.userName = destinationEndpoint3Node["UserName"].asString();
		if(!destinationEndpoint3Node["SslSolutionEnum"].isNull())
			subDistributedJobObject.destinationEndpoint3.sslSolutionEnum = destinationEndpoint3Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint3Node["RoleName"].isNull())
			subDistributedJobObject.destinationEndpoint3.roleName = destinationEndpoint3Node["RoleName"].asString();
		if(!destinationEndpoint3Node["AliyunUid"].isNull())
			subDistributedJobObject.destinationEndpoint3.aliyunUid = destinationEndpoint3Node["AliyunUid"].asString();
		auto migrationMode4Node = value["MigrationMode"];
		if(!migrationMode4Node["StructureInitialization"].isNull())
			subDistributedJobObject.migrationMode4.structureInitialization = migrationMode4Node["StructureInitialization"].asString() == "true";
		if(!migrationMode4Node["DataInitialization"].isNull())
			subDistributedJobObject.migrationMode4.dataInitialization = migrationMode4Node["DataInitialization"].asString() == "true";
		if(!migrationMode4Node["DataSynchronization"].isNull())
			subDistributedJobObject.migrationMode4.dataSynchronization = migrationMode4Node["DataSynchronization"].asString() == "true";
		if(!migrationMode4Node["DataExtractTransformLoad"].isNull())
			subDistributedJobObject.migrationMode4.dataExtractTransformLoad = migrationMode4Node["DataExtractTransformLoad"].asString() == "true";
		auto precheckStatusNode = value["PrecheckStatus"];
		if(!precheckStatusNode["Status"].isNull())
			subDistributedJobObject.precheckStatus.status = precheckStatusNode["Status"].asString();
		if(!precheckStatusNode["Percent"].isNull())
			subDistributedJobObject.precheckStatus.percent = precheckStatusNode["Percent"].asString();
		if(!precheckStatusNode["ErrorMessage"].isNull())
			subDistributedJobObject.precheckStatus.errorMessage = precheckStatusNode["ErrorMessage"].asString();
		auto allDetailNode = precheckStatusNode["Detail"]["DetailItem"];
		for (auto precheckStatusNodeDetailDetailItem : allDetailNode)
		{
			SubDistributedJobItem::PrecheckStatus::DetailItem detailItemObject;
			if(!precheckStatusNodeDetailDetailItem["CheckItem"].isNull())
				detailItemObject.checkItem = precheckStatusNodeDetailDetailItem["CheckItem"].asString();
			if(!precheckStatusNodeDetailDetailItem["CheckItemDescription"].isNull())
				detailItemObject.checkItemDescription = precheckStatusNodeDetailDetailItem["CheckItemDescription"].asString();
			if(!precheckStatusNodeDetailDetailItem["CheckResult"].isNull())
				detailItemObject.checkResult = precheckStatusNodeDetailDetailItem["CheckResult"].asString();
			if(!precheckStatusNodeDetailDetailItem["FailedReason"].isNull())
				detailItemObject.failedReason = precheckStatusNodeDetailDetailItem["FailedReason"].asString();
			if(!precheckStatusNodeDetailDetailItem["RepairMethod"].isNull())
				detailItemObject.repairMethod = precheckStatusNodeDetailDetailItem["RepairMethod"].asString();
			subDistributedJobObject.precheckStatus.detail.push_back(detailItemObject);
		}
		auto structureInitializationStatusNode = value["StructureInitializationStatus"];
		if(!structureInitializationStatusNode["Status"].isNull())
			subDistributedJobObject.structureInitializationStatus.status = structureInitializationStatusNode["Status"].asString();
		if(!structureInitializationStatusNode["ErrorMessage"].isNull())
			subDistributedJobObject.structureInitializationStatus.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
		if(!structureInitializationStatusNode["Percent"].isNull())
			subDistributedJobObject.structureInitializationStatus.percent = structureInitializationStatusNode["Percent"].asString();
		if(!structureInitializationStatusNode["Progress"].isNull())
			subDistributedJobObject.structureInitializationStatus.progress = structureInitializationStatusNode["Progress"].asString();
		if(!structureInitializationStatusNode["NeedUpgrade"].isNull())
			subDistributedJobObject.structureInitializationStatus.needUpgrade = structureInitializationStatusNode["NeedUpgrade"].asString() == "true";
		auto dataInitializationStatusNode = value["DataInitializationStatus"];
		if(!dataInitializationStatusNode["Status"].isNull())
			subDistributedJobObject.dataInitializationStatus.status = dataInitializationStatusNode["Status"].asString();
		if(!dataInitializationStatusNode["ErrorMessage"].isNull())
			subDistributedJobObject.dataInitializationStatus.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
		if(!dataInitializationStatusNode["Percent"].isNull())
			subDistributedJobObject.dataInitializationStatus.percent = dataInitializationStatusNode["Percent"].asString();
		if(!dataInitializationStatusNode["Progress"].isNull())
			subDistributedJobObject.dataInitializationStatus.progress = dataInitializationStatusNode["Progress"].asString();
		if(!dataInitializationStatusNode["NeedUpgrade"].isNull())
			subDistributedJobObject.dataInitializationStatus.needUpgrade = dataInitializationStatusNode["NeedUpgrade"].asString() == "true";
		auto dataSynchronizationStatus5Node = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus5Node["Status"].isNull())
			subDistributedJobObject.dataSynchronizationStatus5.status = dataSynchronizationStatus5Node["Status"].asString();
		if(!dataSynchronizationStatus5Node["ErrorMessage"].isNull())
			subDistributedJobObject.dataSynchronizationStatus5.errorMessage = dataSynchronizationStatus5Node["ErrorMessage"].asString();
		if(!dataSynchronizationStatus5Node["Percent"].isNull())
			subDistributedJobObject.dataSynchronizationStatus5.percent = dataSynchronizationStatus5Node["Percent"].asString();
		if(!dataSynchronizationStatus5Node["Progress"].isNull())
			subDistributedJobObject.dataSynchronizationStatus5.progress = dataSynchronizationStatus5Node["Progress"].asString();
		if(!dataSynchronizationStatus5Node["NeedUpgrade"].isNull())
			subDistributedJobObject.dataSynchronizationStatus5.needUpgrade = dataSynchronizationStatus5Node["NeedUpgrade"].asString() == "true";
		auto dataEtlStatusNode = value["DataEtlStatus"];
		if(!dataEtlStatusNode["Status"].isNull())
			subDistributedJobObject.dataEtlStatus.status = dataEtlStatusNode["Status"].asString();
		if(!dataEtlStatusNode["ErrorMessage"].isNull())
			subDistributedJobObject.dataEtlStatus.errorMessage = dataEtlStatusNode["ErrorMessage"].asString();
		if(!dataEtlStatusNode["Percent"].isNull())
			subDistributedJobObject.dataEtlStatus.percent = dataEtlStatusNode["Percent"].asString();
		if(!dataEtlStatusNode["Progress"].isNull())
			subDistributedJobObject.dataEtlStatus.progress = dataEtlStatusNode["Progress"].asString();
		if(!dataEtlStatusNode["NeedUpgrade"].isNull())
			subDistributedJobObject.dataEtlStatus.needUpgrade = dataEtlStatusNode["NeedUpgrade"].asString() == "true";
		auto performanceNode = value["Performance"];
		if(!performanceNode["Rps"].isNull())
			subDistributedJobObject.performance.rps = performanceNode["Rps"].asString();
		if(!performanceNode["Flow"].isNull())
			subDistributedJobObject.performance.flow = performanceNode["Flow"].asString();
		auto reverseJobNode = value["ReverseJob"];
		if(!reverseJobNode["DtsInstanceID"].isNull())
			subDistributedJobObject.reverseJob.dtsInstanceID = reverseJobNode["DtsInstanceID"].asString();
		if(!reverseJobNode["DtsJobId"].isNull())
			subDistributedJobObject.reverseJob.dtsJobId = reverseJobNode["DtsJobId"].asString();
		if(!reverseJobNode["DtsJobName"].isNull())
			subDistributedJobObject.reverseJob.dtsJobName = reverseJobNode["DtsJobName"].asString();
		if(!reverseJobNode["GroupId"].isNull())
			subDistributedJobObject.reverseJob.groupId = reverseJobNode["GroupId"].asString();
		if(!reverseJobNode["DatabaseCount"].isNull())
			subDistributedJobObject.reverseJob.databaseCount = std::stoi(reverseJobNode["DatabaseCount"].asString());
		if(!reverseJobNode["DtsJobClass"].isNull())
			subDistributedJobObject.reverseJob.dtsJobClass = reverseJobNode["DtsJobClass"].asString();
		if(!reverseJobNode["DtsJobDirection"].isNull())
			subDistributedJobObject.reverseJob.dtsJobDirection = reverseJobNode["DtsJobDirection"].asString();
		if(!reverseJobNode["SynchronizationDirection"].isNull())
			subDistributedJobObject.reverseJob.synchronizationDirection = reverseJobNode["SynchronizationDirection"].asString();
		if(!reverseJobNode["PayType"].isNull())
			subDistributedJobObject.reverseJob.payType = reverseJobNode["PayType"].asString();
		if(!reverseJobNode["ExpireTime"].isNull())
			subDistributedJobObject.reverseJob.expireTime = reverseJobNode["ExpireTime"].asString();
		if(!reverseJobNode["CreateTime"].isNull())
			subDistributedJobObject.reverseJob.createTime = reverseJobNode["CreateTime"].asString();
		if(!reverseJobNode["FinishTime"].isNull())
			subDistributedJobObject.reverseJob.finishTime = reverseJobNode["FinishTime"].asString();
		if(!reverseJobNode["DbObject"].isNull())
			subDistributedJobObject.reverseJob.dbObject = reverseJobNode["DbObject"].asString();
		if(!reverseJobNode["Status"].isNull())
			subDistributedJobObject.reverseJob.status = reverseJobNode["Status"].asString();
		if(!reverseJobNode["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.errorMessage = reverseJobNode["ErrorMessage"].asString();
		if(!reverseJobNode["Delay"].isNull())
			subDistributedJobObject.reverseJob.delay = std::stol(reverseJobNode["Delay"].asString());
		if(!reverseJobNode["Checkpoint"].isNull())
			subDistributedJobObject.reverseJob.checkpoint = reverseJobNode["Checkpoint"].asString();
		if(!reverseJobNode["ReverseJob"].isNull())
			subDistributedJobObject.reverseJob.reverseJob = reverseJobNode["ReverseJob"].asString();
		if(!reverseJobNode["Reserved"].isNull())
			subDistributedJobObject.reverseJob.reserved = reverseJobNode["Reserved"].asString();
		if(!reverseJobNode["SubscribeTopic"].isNull())
			subDistributedJobObject.reverseJob.subscribeTopic = reverseJobNode["SubscribeTopic"].asString();
		if(!reverseJobNode["ConsumptionCheckpoint"].isNull())
			subDistributedJobObject.reverseJob.consumptionCheckpoint = reverseJobNode["ConsumptionCheckpoint"].asString();
		if(!reverseJobNode["BeginTimestamp"].isNull())
			subDistributedJobObject.reverseJob.beginTimestamp = reverseJobNode["BeginTimestamp"].asString();
		if(!reverseJobNode["EndTimestamp"].isNull())
			subDistributedJobObject.reverseJob.endTimestamp = reverseJobNode["EndTimestamp"].asString();
		if(!reverseJobNode["ConsumptionClient"].isNull())
			subDistributedJobObject.reverseJob.consumptionClient = reverseJobNode["ConsumptionClient"].asString();
		if(!reverseJobNode["DestNetType"].isNull())
			subDistributedJobObject.reverseJob.destNetType = reverseJobNode["DestNetType"].asString();
		if(!reverseJobNode["AppName"].isNull())
			subDistributedJobObject.reverseJob.appName = reverseJobNode["AppName"].asString();
		if(!reverseJobNode["EtlCalculator"].isNull())
			subDistributedJobObject.reverseJob.etlCalculator = reverseJobNode["EtlCalculator"].asString();
		if(!reverseJobNode["OriginType"].isNull())
			subDistributedJobObject.reverseJob.originType = reverseJobNode["OriginType"].asString();
		if(!reverseJobNode["JobType"].isNull())
			subDistributedJobObject.reverseJob.jobType = reverseJobNode["JobType"].asString();
		if(!reverseJobNode["IsDemoJob"].isNull())
			subDistributedJobObject.reverseJob.isDemoJob = reverseJobNode["IsDemoJob"].asString() == "true";
		if(!reverseJobNode["TaskType"].isNull())
			subDistributedJobObject.reverseJob.taskType = reverseJobNode["TaskType"].asString();
		auto allTagList21Node = reverseJobNode["TagList"]["TagListItem"];
		for (auto reverseJobNodeTagListTagListItem : allTagList21Node)
		{
			SubDistributedJobItem::ReverseJob::TagListItem22 tagListItem22Object;
			if(!reverseJobNodeTagListTagListItem["Id"].isNull())
				tagListItem22Object.id = std::stol(reverseJobNodeTagListTagListItem["Id"].asString());
			if(!reverseJobNodeTagListTagListItem["GmtCreate"].isNull())
				tagListItem22Object.gmtCreate = reverseJobNodeTagListTagListItem["GmtCreate"].asString();
			if(!reverseJobNodeTagListTagListItem["GmtModified"].isNull())
				tagListItem22Object.gmtModified = reverseJobNodeTagListTagListItem["GmtModified"].asString();
			if(!reverseJobNodeTagListTagListItem["ResourceId"].isNull())
				tagListItem22Object.resourceId = reverseJobNodeTagListTagListItem["ResourceId"].asString();
			if(!reverseJobNodeTagListTagListItem["ResourceType"].isNull())
				tagListItem22Object.resourceType = reverseJobNodeTagListTagListItem["ResourceType"].asString();
			if(!reverseJobNodeTagListTagListItem["RegionId"].isNull())
				tagListItem22Object.regionId = reverseJobNodeTagListTagListItem["RegionId"].asString();
			if(!reverseJobNodeTagListTagListItem["AliUid"].isNull())
				tagListItem22Object.aliUid = std::stol(reverseJobNodeTagListTagListItem["AliUid"].asString());
			if(!reverseJobNodeTagListTagListItem["TagKey"].isNull())
				tagListItem22Object.tagKey = reverseJobNodeTagListTagListItem["TagKey"].asString();
			if(!reverseJobNodeTagListTagListItem["TagValue"].isNull())
				tagListItem22Object.tagValue = reverseJobNodeTagListTagListItem["TagValue"].asString();
			if(!reverseJobNodeTagListTagListItem["TagCategory"].isNull())
				tagListItem22Object.tagCategory = reverseJobNodeTagListTagListItem["TagCategory"].asString();
			if(!reverseJobNodeTagListTagListItem["SrcRegion"].isNull())
				tagListItem22Object.srcRegion = reverseJobNodeTagListTagListItem["SrcRegion"].asString();
			if(!reverseJobNodeTagListTagListItem["Scope"].isNull())
				tagListItem22Object.scope = reverseJobNodeTagListTagListItem["Scope"].asString();
			if(!reverseJobNodeTagListTagListItem["Creator"].isNull())
				tagListItem22Object.creator = std::stol(reverseJobNodeTagListTagListItem["Creator"].asString());
			subDistributedJobObject.reverseJob.tagList21.push_back(tagListItem22Object);
		}
		auto sourceEndpoint9Node = reverseJobNode["SourceEndpoint"];
		if(!sourceEndpoint9Node["InstanceID"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.instanceID = sourceEndpoint9Node["InstanceID"].asString();
		if(!sourceEndpoint9Node["Region"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.region = sourceEndpoint9Node["Region"].asString();
		if(!sourceEndpoint9Node["InstanceType"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.instanceType = sourceEndpoint9Node["InstanceType"].asString();
		if(!sourceEndpoint9Node["EngineName"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.engineName = sourceEndpoint9Node["EngineName"].asString();
		if(!sourceEndpoint9Node["Ip"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.ip = sourceEndpoint9Node["Ip"].asString();
		if(!sourceEndpoint9Node["Port"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.port = sourceEndpoint9Node["Port"].asString();
		if(!sourceEndpoint9Node["DatabaseName"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.databaseName = sourceEndpoint9Node["DatabaseName"].asString();
		if(!sourceEndpoint9Node["OracleSID"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.oracleSID = sourceEndpoint9Node["OracleSID"].asString();
		if(!sourceEndpoint9Node["UserName"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.userName = sourceEndpoint9Node["UserName"].asString();
		if(!sourceEndpoint9Node["SslSolutionEnum"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.sslSolutionEnum = sourceEndpoint9Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint9Node["RoleName"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.roleName = sourceEndpoint9Node["RoleName"].asString();
		if(!sourceEndpoint9Node["AliyunUid"].isNull())
			subDistributedJobObject.reverseJob.sourceEndpoint9.aliyunUid = sourceEndpoint9Node["AliyunUid"].asString();
		auto destinationEndpoint10Node = reverseJobNode["DestinationEndpoint"];
		if(!destinationEndpoint10Node["InstanceID"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.instanceID = destinationEndpoint10Node["InstanceID"].asString();
		if(!destinationEndpoint10Node["Region"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.region = destinationEndpoint10Node["Region"].asString();
		if(!destinationEndpoint10Node["InstanceType"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.instanceType = destinationEndpoint10Node["InstanceType"].asString();
		if(!destinationEndpoint10Node["EngineName"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.engineName = destinationEndpoint10Node["EngineName"].asString();
		if(!destinationEndpoint10Node["Ip"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.ip = destinationEndpoint10Node["Ip"].asString();
		if(!destinationEndpoint10Node["Port"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.port = destinationEndpoint10Node["Port"].asString();
		if(!destinationEndpoint10Node["DatabaseName"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.databaseName = destinationEndpoint10Node["DatabaseName"].asString();
		if(!destinationEndpoint10Node["OracleSID"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.oracleSID = destinationEndpoint10Node["OracleSID"].asString();
		if(!destinationEndpoint10Node["UserName"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.userName = destinationEndpoint10Node["UserName"].asString();
		if(!destinationEndpoint10Node["SslSolutionEnum"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.sslSolutionEnum = destinationEndpoint10Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint10Node["RoleName"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.roleName = destinationEndpoint10Node["RoleName"].asString();
		if(!destinationEndpoint10Node["AliyunUid"].isNull())
			subDistributedJobObject.reverseJob.destinationEndpoint10.aliyunUid = destinationEndpoint10Node["AliyunUid"].asString();
		auto migrationMode11Node = reverseJobNode["MigrationMode"];
		if(!migrationMode11Node["StructureInitialization"].isNull())
			subDistributedJobObject.reverseJob.migrationMode11.structureInitialization = migrationMode11Node["StructureInitialization"].asString() == "true";
		if(!migrationMode11Node["DataInitialization"].isNull())
			subDistributedJobObject.reverseJob.migrationMode11.dataInitialization = migrationMode11Node["DataInitialization"].asString() == "true";
		if(!migrationMode11Node["DataSynchronization"].isNull())
			subDistributedJobObject.reverseJob.migrationMode11.dataSynchronization = migrationMode11Node["DataSynchronization"].asString() == "true";
		if(!migrationMode11Node["DataExtractTransformLoad"].isNull())
			subDistributedJobObject.reverseJob.migrationMode11.dataExtractTransformLoad = migrationMode11Node["DataExtractTransformLoad"].asString() == "true";
		auto precheckStatus12Node = reverseJobNode["PrecheckStatus"];
		if(!precheckStatus12Node["Status"].isNull())
			subDistributedJobObject.reverseJob.precheckStatus12.status = precheckStatus12Node["Status"].asString();
		if(!precheckStatus12Node["Percent"].isNull())
			subDistributedJobObject.reverseJob.precheckStatus12.percent = precheckStatus12Node["Percent"].asString();
		if(!precheckStatus12Node["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.precheckStatus12.errorMessage = precheckStatus12Node["ErrorMessage"].asString();
		auto allDetail23Node = precheckStatus12Node["Detail"]["DetailItem"];
		for (auto precheckStatus12NodeDetailDetailItem : allDetail23Node)
		{
			SubDistributedJobItem::ReverseJob::PrecheckStatus12::DetailItem24 detailItem24Object;
			if(!precheckStatus12NodeDetailDetailItem["CheckItem"].isNull())
				detailItem24Object.checkItem = precheckStatus12NodeDetailDetailItem["CheckItem"].asString();
			if(!precheckStatus12NodeDetailDetailItem["CheckItemDescription"].isNull())
				detailItem24Object.checkItemDescription = precheckStatus12NodeDetailDetailItem["CheckItemDescription"].asString();
			if(!precheckStatus12NodeDetailDetailItem["CheckResult"].isNull())
				detailItem24Object.checkResult = precheckStatus12NodeDetailDetailItem["CheckResult"].asString();
			if(!precheckStatus12NodeDetailDetailItem["FailedReason"].isNull())
				detailItem24Object.failedReason = precheckStatus12NodeDetailDetailItem["FailedReason"].asString();
			if(!precheckStatus12NodeDetailDetailItem["RepairMethod"].isNull())
				detailItem24Object.repairMethod = precheckStatus12NodeDetailDetailItem["RepairMethod"].asString();
			subDistributedJobObject.reverseJob.precheckStatus12.detail23.push_back(detailItem24Object);
		}
		auto structureInitializationStatus13Node = reverseJobNode["StructureInitializationStatus"];
		if(!structureInitializationStatus13Node["Status"].isNull())
			subDistributedJobObject.reverseJob.structureInitializationStatus13.status = structureInitializationStatus13Node["Status"].asString();
		if(!structureInitializationStatus13Node["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.structureInitializationStatus13.errorMessage = structureInitializationStatus13Node["ErrorMessage"].asString();
		if(!structureInitializationStatus13Node["Percent"].isNull())
			subDistributedJobObject.reverseJob.structureInitializationStatus13.percent = structureInitializationStatus13Node["Percent"].asString();
		if(!structureInitializationStatus13Node["Progress"].isNull())
			subDistributedJobObject.reverseJob.structureInitializationStatus13.progress = structureInitializationStatus13Node["Progress"].asString();
		if(!structureInitializationStatus13Node["NeedUpgrade"].isNull())
			subDistributedJobObject.reverseJob.structureInitializationStatus13.needUpgrade = structureInitializationStatus13Node["NeedUpgrade"].asString() == "true";
		auto dataInitializationStatus14Node = reverseJobNode["DataInitializationStatus"];
		if(!dataInitializationStatus14Node["Status"].isNull())
			subDistributedJobObject.reverseJob.dataInitializationStatus14.status = dataInitializationStatus14Node["Status"].asString();
		if(!dataInitializationStatus14Node["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.dataInitializationStatus14.errorMessage = dataInitializationStatus14Node["ErrorMessage"].asString();
		if(!dataInitializationStatus14Node["Percent"].isNull())
			subDistributedJobObject.reverseJob.dataInitializationStatus14.percent = dataInitializationStatus14Node["Percent"].asString();
		if(!dataInitializationStatus14Node["Progress"].isNull())
			subDistributedJobObject.reverseJob.dataInitializationStatus14.progress = dataInitializationStatus14Node["Progress"].asString();
		if(!dataInitializationStatus14Node["NeedUpgrade"].isNull())
			subDistributedJobObject.reverseJob.dataInitializationStatus14.needUpgrade = dataInitializationStatus14Node["NeedUpgrade"].asString() == "true";
		auto dataSynchronizationStatus15Node = reverseJobNode["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus15Node["Status"].isNull())
			subDistributedJobObject.reverseJob.dataSynchronizationStatus15.status = dataSynchronizationStatus15Node["Status"].asString();
		if(!dataSynchronizationStatus15Node["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.dataSynchronizationStatus15.errorMessage = dataSynchronizationStatus15Node["ErrorMessage"].asString();
		if(!dataSynchronizationStatus15Node["Percent"].isNull())
			subDistributedJobObject.reverseJob.dataSynchronizationStatus15.percent = dataSynchronizationStatus15Node["Percent"].asString();
		if(!dataSynchronizationStatus15Node["Progress"].isNull())
			subDistributedJobObject.reverseJob.dataSynchronizationStatus15.progress = dataSynchronizationStatus15Node["Progress"].asString();
		if(!dataSynchronizationStatus15Node["NeedUpgrade"].isNull())
			subDistributedJobObject.reverseJob.dataSynchronizationStatus15.needUpgrade = dataSynchronizationStatus15Node["NeedUpgrade"].asString() == "true";
		auto dataEtlStatus16Node = reverseJobNode["DataEtlStatus"];
		if(!dataEtlStatus16Node["Status"].isNull())
			subDistributedJobObject.reverseJob.dataEtlStatus16.status = dataEtlStatus16Node["Status"].asString();
		if(!dataEtlStatus16Node["ErrorMessage"].isNull())
			subDistributedJobObject.reverseJob.dataEtlStatus16.errorMessage = dataEtlStatus16Node["ErrorMessage"].asString();
		if(!dataEtlStatus16Node["Percent"].isNull())
			subDistributedJobObject.reverseJob.dataEtlStatus16.percent = dataEtlStatus16Node["Percent"].asString();
		if(!dataEtlStatus16Node["Progress"].isNull())
			subDistributedJobObject.reverseJob.dataEtlStatus16.progress = dataEtlStatus16Node["Progress"].asString();
		if(!dataEtlStatus16Node["NeedUpgrade"].isNull())
			subDistributedJobObject.reverseJob.dataEtlStatus16.needUpgrade = dataEtlStatus16Node["NeedUpgrade"].asString() == "true";
		auto performance17Node = reverseJobNode["Performance"];
		if(!performance17Node["Rps"].isNull())
			subDistributedJobObject.reverseJob.performance17.rps = performance17Node["Rps"].asString();
		if(!performance17Node["Flow"].isNull())
			subDistributedJobObject.reverseJob.performance17.flow = performance17Node["Flow"].asString();
		auto subscriptionHost18Node = reverseJobNode["SubscriptionHost"];
		if(!subscriptionHost18Node["PublicHost"].isNull())
			subDistributedJobObject.reverseJob.subscriptionHost18.publicHost = subscriptionHost18Node["PublicHost"].asString();
		if(!subscriptionHost18Node["PrivateHost"].isNull())
			subDistributedJobObject.reverseJob.subscriptionHost18.privateHost = subscriptionHost18Node["PrivateHost"].asString();
		if(!subscriptionHost18Node["VpcHost"].isNull())
			subDistributedJobObject.reverseJob.subscriptionHost18.vpcHost = subscriptionHost18Node["VpcHost"].asString();
		auto subscriptionDataType19Node = reverseJobNode["SubscriptionDataType"];
		if(!subscriptionDataType19Node["Ddl"].isNull())
			subDistributedJobObject.reverseJob.subscriptionDataType19.ddl = subscriptionDataType19Node["Ddl"].asString() == "true";
		if(!subscriptionDataType19Node["Dml"].isNull())
			subDistributedJobObject.reverseJob.subscriptionDataType19.dml = subscriptionDataType19Node["Dml"].asString() == "true";
		auto retryState20Node = reverseJobNode["RetryState"];
		if(!retryState20Node["JobId"].isNull())
			subDistributedJobObject.reverseJob.retryState20.jobId = retryState20Node["JobId"].asString();
		if(!retryState20Node["MaxRetryTime"].isNull())
			subDistributedJobObject.reverseJob.retryState20.maxRetryTime = std::stoi(retryState20Node["MaxRetryTime"].asString());
		if(!retryState20Node["RetryTime"].isNull())
			subDistributedJobObject.reverseJob.retryState20.retryTime = std::stoi(retryState20Node["RetryTime"].asString());
		if(!retryState20Node["RetryCount"].isNull())
			subDistributedJobObject.reverseJob.retryState20.retryCount = std::stoi(retryState20Node["RetryCount"].asString());
		if(!retryState20Node["Retrying"].isNull())
			subDistributedJobObject.reverseJob.retryState20.retrying = retryState20Node["Retrying"].asString() == "true";
		if(!retryState20Node["Module"].isNull())
			subDistributedJobObject.reverseJob.retryState20.module = retryState20Node["Module"].asString();
		if(!retryState20Node["RetryTarget"].isNull())
			subDistributedJobObject.reverseJob.retryState20.retryTarget = retryState20Node["RetryTarget"].asString();
		if(!retryState20Node["ErrMsg"].isNull())
			subDistributedJobObject.reverseJob.retryState20.errMsg = retryState20Node["ErrMsg"].asString();
		auto subscriptionHost6Node = value["SubscriptionHost"];
		if(!subscriptionHost6Node["PublicHost"].isNull())
			subDistributedJobObject.subscriptionHost6.publicHost = subscriptionHost6Node["PublicHost"].asString();
		if(!subscriptionHost6Node["PrivateHost"].isNull())
			subDistributedJobObject.subscriptionHost6.privateHost = subscriptionHost6Node["PrivateHost"].asString();
		if(!subscriptionHost6Node["VpcHost"].isNull())
			subDistributedJobObject.subscriptionHost6.vpcHost = subscriptionHost6Node["VpcHost"].asString();
		auto subscriptionDataType7Node = value["SubscriptionDataType"];
		if(!subscriptionDataType7Node["Ddl"].isNull())
			subDistributedJobObject.subscriptionDataType7.ddl = subscriptionDataType7Node["Ddl"].asString() == "true";
		if(!subscriptionDataType7Node["Dml"].isNull())
			subDistributedJobObject.subscriptionDataType7.dml = subscriptionDataType7Node["Dml"].asString() == "true";
		auto retryState8Node = value["RetryState"];
		if(!retryState8Node["JobId"].isNull())
			subDistributedJobObject.retryState8.jobId = retryState8Node["JobId"].asString();
		if(!retryState8Node["MaxRetryTime"].isNull())
			subDistributedJobObject.retryState8.maxRetryTime = std::stoi(retryState8Node["MaxRetryTime"].asString());
		if(!retryState8Node["RetryTime"].isNull())
			subDistributedJobObject.retryState8.retryTime = std::stoi(retryState8Node["RetryTime"].asString());
		if(!retryState8Node["RetryCount"].isNull())
			subDistributedJobObject.retryState8.retryCount = std::stoi(retryState8Node["RetryCount"].asString());
		if(!retryState8Node["Retrying"].isNull())
			subDistributedJobObject.retryState8.retrying = retryState8Node["Retrying"].asString() == "true";
		if(!retryState8Node["Module"].isNull())
			subDistributedJobObject.retryState8.module = retryState8Node["Module"].asString();
		if(!retryState8Node["RetryTarget"].isNull())
			subDistributedJobObject.retryState8.retryTarget = retryState8Node["RetryTarget"].asString();
		if(!retryState8Node["ErrMsg"].isNull())
			subDistributedJobObject.retryState8.errMsg = retryState8Node["ErrMsg"].asString();
		auto allSubSyncJob1 = value["SubSyncJob"]["SubSyncJob"];
		for (auto value : allSubSyncJob1)
			subDistributedJobObject.subSyncJob1.push_back(value.asString());
		subDistributedJob_.push_back(subDistributedJobObject);
	}
	auto allSubSyncJobNode = value["SubSyncJob"]["SubSyncJobItem"];
	for (auto valueSubSyncJobSubSyncJobItem : allSubSyncJobNode)
	{
		SubSyncJobItem subSyncJobObject;
		if(!valueSubSyncJobSubSyncJobItem["DtsInstanceID"].isNull())
			subSyncJobObject.dtsInstanceID = valueSubSyncJobSubSyncJobItem["DtsInstanceID"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DtsJobId"].isNull())
			subSyncJobObject.dtsJobId = valueSubSyncJobSubSyncJobItem["DtsJobId"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DtsJobName"].isNull())
			subSyncJobObject.dtsJobName = valueSubSyncJobSubSyncJobItem["DtsJobName"].asString();
		if(!valueSubSyncJobSubSyncJobItem["GroupId"].isNull())
			subSyncJobObject.groupId = valueSubSyncJobSubSyncJobItem["GroupId"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DatabaseCount"].isNull())
			subSyncJobObject.databaseCount = std::stoi(valueSubSyncJobSubSyncJobItem["DatabaseCount"].asString());
		if(!valueSubSyncJobSubSyncJobItem["DtsJobClass"].isNull())
			subSyncJobObject.dtsJobClass = valueSubSyncJobSubSyncJobItem["DtsJobClass"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DtsJobDirection"].isNull())
			subSyncJobObject.dtsJobDirection = valueSubSyncJobSubSyncJobItem["DtsJobDirection"].asString();
		if(!valueSubSyncJobSubSyncJobItem["SynchronizationDirection"].isNull())
			subSyncJobObject.synchronizationDirection = valueSubSyncJobSubSyncJobItem["SynchronizationDirection"].asString();
		if(!valueSubSyncJobSubSyncJobItem["PayType"].isNull())
			subSyncJobObject.payType = valueSubSyncJobSubSyncJobItem["PayType"].asString();
		if(!valueSubSyncJobSubSyncJobItem["ExpireTime"].isNull())
			subSyncJobObject.expireTime = valueSubSyncJobSubSyncJobItem["ExpireTime"].asString();
		if(!valueSubSyncJobSubSyncJobItem["CreateTime"].isNull())
			subSyncJobObject.createTime = valueSubSyncJobSubSyncJobItem["CreateTime"].asString();
		if(!valueSubSyncJobSubSyncJobItem["FinishTime"].isNull())
			subSyncJobObject.finishTime = valueSubSyncJobSubSyncJobItem["FinishTime"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DbObject"].isNull())
			subSyncJobObject.dbObject = valueSubSyncJobSubSyncJobItem["DbObject"].asString();
		if(!valueSubSyncJobSubSyncJobItem["Status"].isNull())
			subSyncJobObject.status = valueSubSyncJobSubSyncJobItem["Status"].asString();
		if(!valueSubSyncJobSubSyncJobItem["ErrorMessage"].isNull())
			subSyncJobObject.errorMessage = valueSubSyncJobSubSyncJobItem["ErrorMessage"].asString();
		if(!valueSubSyncJobSubSyncJobItem["Delay"].isNull())
			subSyncJobObject.delay = std::stol(valueSubSyncJobSubSyncJobItem["Delay"].asString());
		if(!valueSubSyncJobSubSyncJobItem["Checkpoint"].isNull())
			subSyncJobObject.checkpoint = valueSubSyncJobSubSyncJobItem["Checkpoint"].asString();
		if(!valueSubSyncJobSubSyncJobItem["Reserved"].isNull())
			subSyncJobObject.reserved = valueSubSyncJobSubSyncJobItem["Reserved"].asString();
		if(!valueSubSyncJobSubSyncJobItem["SubscribeTopic"].isNull())
			subSyncJobObject.subscribeTopic = valueSubSyncJobSubSyncJobItem["SubscribeTopic"].asString();
		if(!valueSubSyncJobSubSyncJobItem["ConsumptionCheckpoint"].isNull())
			subSyncJobObject.consumptionCheckpoint = valueSubSyncJobSubSyncJobItem["ConsumptionCheckpoint"].asString();
		if(!valueSubSyncJobSubSyncJobItem["BeginTimestamp"].isNull())
			subSyncJobObject.beginTimestamp = valueSubSyncJobSubSyncJobItem["BeginTimestamp"].asString();
		if(!valueSubSyncJobSubSyncJobItem["EndTimestamp"].isNull())
			subSyncJobObject.endTimestamp = valueSubSyncJobSubSyncJobItem["EndTimestamp"].asString();
		if(!valueSubSyncJobSubSyncJobItem["ConsumptionClient"].isNull())
			subSyncJobObject.consumptionClient = valueSubSyncJobSubSyncJobItem["ConsumptionClient"].asString();
		if(!valueSubSyncJobSubSyncJobItem["DestNetType"].isNull())
			subSyncJobObject.destNetType = valueSubSyncJobSubSyncJobItem["DestNetType"].asString();
		if(!valueSubSyncJobSubSyncJobItem["AppName"].isNull())
			subSyncJobObject.appName = valueSubSyncJobSubSyncJobItem["AppName"].asString();
		if(!valueSubSyncJobSubSyncJobItem["EtlCalculator"].isNull())
			subSyncJobObject.etlCalculator = valueSubSyncJobSubSyncJobItem["EtlCalculator"].asString();
		if(!valueSubSyncJobSubSyncJobItem["OriginType"].isNull())
			subSyncJobObject.originType = valueSubSyncJobSubSyncJobItem["OriginType"].asString();
		if(!valueSubSyncJobSubSyncJobItem["JobType"].isNull())
			subSyncJobObject.jobType = valueSubSyncJobSubSyncJobItem["JobType"].asString();
		if(!valueSubSyncJobSubSyncJobItem["IsDemoJob"].isNull())
			subSyncJobObject.isDemoJob = valueSubSyncJobSubSyncJobItem["IsDemoJob"].asString() == "true";
		if(!valueSubSyncJobSubSyncJobItem["TaskType"].isNull())
			subSyncJobObject.taskType = valueSubSyncJobSubSyncJobItem["TaskType"].asString();
		auto allTagList39Node = valueSubSyncJobSubSyncJobItem["TagList"]["TagListItem"];
		for (auto valueSubSyncJobSubSyncJobItemTagListTagListItem : allTagList39Node)
		{
			SubSyncJobItem::TagListItem40 tagList39Object;
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["Id"].isNull())
				tagList39Object.id = std::stol(valueSubSyncJobSubSyncJobItemTagListTagListItem["Id"].asString());
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["GmtCreate"].isNull())
				tagList39Object.gmtCreate = valueSubSyncJobSubSyncJobItemTagListTagListItem["GmtCreate"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["GmtModified"].isNull())
				tagList39Object.gmtModified = valueSubSyncJobSubSyncJobItemTagListTagListItem["GmtModified"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["ResourceId"].isNull())
				tagList39Object.resourceId = valueSubSyncJobSubSyncJobItemTagListTagListItem["ResourceId"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["ResourceType"].isNull())
				tagList39Object.resourceType = valueSubSyncJobSubSyncJobItemTagListTagListItem["ResourceType"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["RegionId"].isNull())
				tagList39Object.regionId = valueSubSyncJobSubSyncJobItemTagListTagListItem["RegionId"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["AliUid"].isNull())
				tagList39Object.aliUid = std::stol(valueSubSyncJobSubSyncJobItemTagListTagListItem["AliUid"].asString());
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["TagKey"].isNull())
				tagList39Object.tagKey = valueSubSyncJobSubSyncJobItemTagListTagListItem["TagKey"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["TagValue"].isNull())
				tagList39Object.tagValue = valueSubSyncJobSubSyncJobItemTagListTagListItem["TagValue"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["TagCategory"].isNull())
				tagList39Object.tagCategory = valueSubSyncJobSubSyncJobItemTagListTagListItem["TagCategory"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["SrcRegion"].isNull())
				tagList39Object.srcRegion = valueSubSyncJobSubSyncJobItemTagListTagListItem["SrcRegion"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["Scope"].isNull())
				tagList39Object.scope = valueSubSyncJobSubSyncJobItemTagListTagListItem["Scope"].asString();
			if(!valueSubSyncJobSubSyncJobItemTagListTagListItem["Creator"].isNull())
				tagList39Object.creator = std::stol(valueSubSyncJobSubSyncJobItemTagListTagListItem["Creator"].asString());
			subSyncJobObject.tagList39.push_back(tagList39Object);
		}
		auto sourceEndpoint26Node = value["SourceEndpoint"];
		if(!sourceEndpoint26Node["InstanceID"].isNull())
			subSyncJobObject.sourceEndpoint26.instanceID = sourceEndpoint26Node["InstanceID"].asString();
		if(!sourceEndpoint26Node["Region"].isNull())
			subSyncJobObject.sourceEndpoint26.region = sourceEndpoint26Node["Region"].asString();
		if(!sourceEndpoint26Node["InstanceType"].isNull())
			subSyncJobObject.sourceEndpoint26.instanceType = sourceEndpoint26Node["InstanceType"].asString();
		if(!sourceEndpoint26Node["EngineName"].isNull())
			subSyncJobObject.sourceEndpoint26.engineName = sourceEndpoint26Node["EngineName"].asString();
		if(!sourceEndpoint26Node["Ip"].isNull())
			subSyncJobObject.sourceEndpoint26.ip = sourceEndpoint26Node["Ip"].asString();
		if(!sourceEndpoint26Node["Port"].isNull())
			subSyncJobObject.sourceEndpoint26.port = sourceEndpoint26Node["Port"].asString();
		if(!sourceEndpoint26Node["DatabaseName"].isNull())
			subSyncJobObject.sourceEndpoint26.databaseName = sourceEndpoint26Node["DatabaseName"].asString();
		if(!sourceEndpoint26Node["OracleSID"].isNull())
			subSyncJobObject.sourceEndpoint26.oracleSID = sourceEndpoint26Node["OracleSID"].asString();
		if(!sourceEndpoint26Node["UserName"].isNull())
			subSyncJobObject.sourceEndpoint26.userName = sourceEndpoint26Node["UserName"].asString();
		if(!sourceEndpoint26Node["SslSolutionEnum"].isNull())
			subSyncJobObject.sourceEndpoint26.sslSolutionEnum = sourceEndpoint26Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint26Node["RoleName"].isNull())
			subSyncJobObject.sourceEndpoint26.roleName = sourceEndpoint26Node["RoleName"].asString();
		if(!sourceEndpoint26Node["AliyunUid"].isNull())
			subSyncJobObject.sourceEndpoint26.aliyunUid = sourceEndpoint26Node["AliyunUid"].asString();
		auto destinationEndpoint27Node = value["DestinationEndpoint"];
		if(!destinationEndpoint27Node["InstanceID"].isNull())
			subSyncJobObject.destinationEndpoint27.instanceID = destinationEndpoint27Node["InstanceID"].asString();
		if(!destinationEndpoint27Node["Region"].isNull())
			subSyncJobObject.destinationEndpoint27.region = destinationEndpoint27Node["Region"].asString();
		if(!destinationEndpoint27Node["InstanceType"].isNull())
			subSyncJobObject.destinationEndpoint27.instanceType = destinationEndpoint27Node["InstanceType"].asString();
		if(!destinationEndpoint27Node["EngineName"].isNull())
			subSyncJobObject.destinationEndpoint27.engineName = destinationEndpoint27Node["EngineName"].asString();
		if(!destinationEndpoint27Node["Ip"].isNull())
			subSyncJobObject.destinationEndpoint27.ip = destinationEndpoint27Node["Ip"].asString();
		if(!destinationEndpoint27Node["Port"].isNull())
			subSyncJobObject.destinationEndpoint27.port = destinationEndpoint27Node["Port"].asString();
		if(!destinationEndpoint27Node["DatabaseName"].isNull())
			subSyncJobObject.destinationEndpoint27.databaseName = destinationEndpoint27Node["DatabaseName"].asString();
		if(!destinationEndpoint27Node["OracleSID"].isNull())
			subSyncJobObject.destinationEndpoint27.oracleSID = destinationEndpoint27Node["OracleSID"].asString();
		if(!destinationEndpoint27Node["UserName"].isNull())
			subSyncJobObject.destinationEndpoint27.userName = destinationEndpoint27Node["UserName"].asString();
		if(!destinationEndpoint27Node["SslSolutionEnum"].isNull())
			subSyncJobObject.destinationEndpoint27.sslSolutionEnum = destinationEndpoint27Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint27Node["RoleName"].isNull())
			subSyncJobObject.destinationEndpoint27.roleName = destinationEndpoint27Node["RoleName"].asString();
		if(!destinationEndpoint27Node["AliyunUid"].isNull())
			subSyncJobObject.destinationEndpoint27.aliyunUid = destinationEndpoint27Node["AliyunUid"].asString();
		auto migrationMode28Node = value["MigrationMode"];
		if(!migrationMode28Node["StructureInitialization"].isNull())
			subSyncJobObject.migrationMode28.structureInitialization = migrationMode28Node["StructureInitialization"].asString() == "true";
		if(!migrationMode28Node["DataInitialization"].isNull())
			subSyncJobObject.migrationMode28.dataInitialization = migrationMode28Node["DataInitialization"].asString() == "true";
		if(!migrationMode28Node["DataSynchronization"].isNull())
			subSyncJobObject.migrationMode28.dataSynchronization = migrationMode28Node["DataSynchronization"].asString() == "true";
		if(!migrationMode28Node["DataExtractTransformLoad"].isNull())
			subSyncJobObject.migrationMode28.dataExtractTransformLoad = migrationMode28Node["DataExtractTransformLoad"].asString() == "true";
		auto precheckStatus29Node = value["PrecheckStatus"];
		if(!precheckStatus29Node["Status"].isNull())
			subSyncJobObject.precheckStatus29.status = precheckStatus29Node["Status"].asString();
		if(!precheckStatus29Node["Percent"].isNull())
			subSyncJobObject.precheckStatus29.percent = precheckStatus29Node["Percent"].asString();
		if(!precheckStatus29Node["ErrorMessage"].isNull())
			subSyncJobObject.precheckStatus29.errorMessage = precheckStatus29Node["ErrorMessage"].asString();
		auto allDetail41Node = precheckStatus29Node["Detail"]["DetailItem"];
		for (auto precheckStatus29NodeDetailDetailItem : allDetail41Node)
		{
			SubSyncJobItem::PrecheckStatus29::DetailItem42 detailItem42Object;
			if(!precheckStatus29NodeDetailDetailItem["CheckItem"].isNull())
				detailItem42Object.checkItem = precheckStatus29NodeDetailDetailItem["CheckItem"].asString();
			if(!precheckStatus29NodeDetailDetailItem["CheckItemDescription"].isNull())
				detailItem42Object.checkItemDescription = precheckStatus29NodeDetailDetailItem["CheckItemDescription"].asString();
			if(!precheckStatus29NodeDetailDetailItem["CheckResult"].isNull())
				detailItem42Object.checkResult = precheckStatus29NodeDetailDetailItem["CheckResult"].asString();
			if(!precheckStatus29NodeDetailDetailItem["FailedReason"].isNull())
				detailItem42Object.failedReason = precheckStatus29NodeDetailDetailItem["FailedReason"].asString();
			if(!precheckStatus29NodeDetailDetailItem["RepairMethod"].isNull())
				detailItem42Object.repairMethod = precheckStatus29NodeDetailDetailItem["RepairMethod"].asString();
			subSyncJobObject.precheckStatus29.detail41.push_back(detailItem42Object);
		}
		auto structureInitializationStatus30Node = value["StructureInitializationStatus"];
		if(!structureInitializationStatus30Node["Status"].isNull())
			subSyncJobObject.structureInitializationStatus30.status = structureInitializationStatus30Node["Status"].asString();
		if(!structureInitializationStatus30Node["ErrorMessage"].isNull())
			subSyncJobObject.structureInitializationStatus30.errorMessage = structureInitializationStatus30Node["ErrorMessage"].asString();
		if(!structureInitializationStatus30Node["Percent"].isNull())
			subSyncJobObject.structureInitializationStatus30.percent = structureInitializationStatus30Node["Percent"].asString();
		if(!structureInitializationStatus30Node["Progress"].isNull())
			subSyncJobObject.structureInitializationStatus30.progress = structureInitializationStatus30Node["Progress"].asString();
		if(!structureInitializationStatus30Node["NeedUpgrade"].isNull())
			subSyncJobObject.structureInitializationStatus30.needUpgrade = structureInitializationStatus30Node["NeedUpgrade"].asString() == "true";
		auto dataInitializationStatus31Node = value["DataInitializationStatus"];
		if(!dataInitializationStatus31Node["Status"].isNull())
			subSyncJobObject.dataInitializationStatus31.status = dataInitializationStatus31Node["Status"].asString();
		if(!dataInitializationStatus31Node["ErrorMessage"].isNull())
			subSyncJobObject.dataInitializationStatus31.errorMessage = dataInitializationStatus31Node["ErrorMessage"].asString();
		if(!dataInitializationStatus31Node["Percent"].isNull())
			subSyncJobObject.dataInitializationStatus31.percent = dataInitializationStatus31Node["Percent"].asString();
		if(!dataInitializationStatus31Node["Progress"].isNull())
			subSyncJobObject.dataInitializationStatus31.progress = dataInitializationStatus31Node["Progress"].asString();
		if(!dataInitializationStatus31Node["NeedUpgrade"].isNull())
			subSyncJobObject.dataInitializationStatus31.needUpgrade = dataInitializationStatus31Node["NeedUpgrade"].asString() == "true";
		auto dataSynchronizationStatus32Node = value["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus32Node["Status"].isNull())
			subSyncJobObject.dataSynchronizationStatus32.status = dataSynchronizationStatus32Node["Status"].asString();
		if(!dataSynchronizationStatus32Node["ErrorMessage"].isNull())
			subSyncJobObject.dataSynchronizationStatus32.errorMessage = dataSynchronizationStatus32Node["ErrorMessage"].asString();
		if(!dataSynchronizationStatus32Node["Percent"].isNull())
			subSyncJobObject.dataSynchronizationStatus32.percent = dataSynchronizationStatus32Node["Percent"].asString();
		if(!dataSynchronizationStatus32Node["Progress"].isNull())
			subSyncJobObject.dataSynchronizationStatus32.progress = dataSynchronizationStatus32Node["Progress"].asString();
		if(!dataSynchronizationStatus32Node["NeedUpgrade"].isNull())
			subSyncJobObject.dataSynchronizationStatus32.needUpgrade = dataSynchronizationStatus32Node["NeedUpgrade"].asString() == "true";
		auto dataEtlStatus33Node = value["DataEtlStatus"];
		if(!dataEtlStatus33Node["Status"].isNull())
			subSyncJobObject.dataEtlStatus33.status = dataEtlStatus33Node["Status"].asString();
		if(!dataEtlStatus33Node["ErrorMessage"].isNull())
			subSyncJobObject.dataEtlStatus33.errorMessage = dataEtlStatus33Node["ErrorMessage"].asString();
		if(!dataEtlStatus33Node["Percent"].isNull())
			subSyncJobObject.dataEtlStatus33.percent = dataEtlStatus33Node["Percent"].asString();
		if(!dataEtlStatus33Node["Progress"].isNull())
			subSyncJobObject.dataEtlStatus33.progress = dataEtlStatus33Node["Progress"].asString();
		if(!dataEtlStatus33Node["NeedUpgrade"].isNull())
			subSyncJobObject.dataEtlStatus33.needUpgrade = dataEtlStatus33Node["NeedUpgrade"].asString() == "true";
		auto performance34Node = value["Performance"];
		if(!performance34Node["Rps"].isNull())
			subSyncJobObject.performance34.rps = performance34Node["Rps"].asString();
		if(!performance34Node["Flow"].isNull())
			subSyncJobObject.performance34.flow = performance34Node["Flow"].asString();
		auto reverseJob35Node = value["ReverseJob"];
		if(!reverseJob35Node["DtsInstanceID"].isNull())
			subSyncJobObject.reverseJob35.dtsInstanceID = reverseJob35Node["DtsInstanceID"].asString();
		if(!reverseJob35Node["DtsJobId"].isNull())
			subSyncJobObject.reverseJob35.dtsJobId = reverseJob35Node["DtsJobId"].asString();
		if(!reverseJob35Node["DtsJobName"].isNull())
			subSyncJobObject.reverseJob35.dtsJobName = reverseJob35Node["DtsJobName"].asString();
		if(!reverseJob35Node["GroupId"].isNull())
			subSyncJobObject.reverseJob35.groupId = reverseJob35Node["GroupId"].asString();
		if(!reverseJob35Node["DatabaseCount"].isNull())
			subSyncJobObject.reverseJob35.databaseCount = std::stoi(reverseJob35Node["DatabaseCount"].asString());
		if(!reverseJob35Node["DtsJobClass"].isNull())
			subSyncJobObject.reverseJob35.dtsJobClass = reverseJob35Node["DtsJobClass"].asString();
		if(!reverseJob35Node["DtsJobDirection"].isNull())
			subSyncJobObject.reverseJob35.dtsJobDirection = reverseJob35Node["DtsJobDirection"].asString();
		if(!reverseJob35Node["SynchronizationDirection"].isNull())
			subSyncJobObject.reverseJob35.synchronizationDirection = reverseJob35Node["SynchronizationDirection"].asString();
		if(!reverseJob35Node["PayType"].isNull())
			subSyncJobObject.reverseJob35.payType = reverseJob35Node["PayType"].asString();
		if(!reverseJob35Node["ExpireTime"].isNull())
			subSyncJobObject.reverseJob35.expireTime = reverseJob35Node["ExpireTime"].asString();
		if(!reverseJob35Node["CreateTime"].isNull())
			subSyncJobObject.reverseJob35.createTime = reverseJob35Node["CreateTime"].asString();
		if(!reverseJob35Node["FinishTime"].isNull())
			subSyncJobObject.reverseJob35.finishTime = reverseJob35Node["FinishTime"].asString();
		if(!reverseJob35Node["DbObject"].isNull())
			subSyncJobObject.reverseJob35.dbObject = reverseJob35Node["DbObject"].asString();
		if(!reverseJob35Node["Status"].isNull())
			subSyncJobObject.reverseJob35.status = reverseJob35Node["Status"].asString();
		if(!reverseJob35Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.errorMessage = reverseJob35Node["ErrorMessage"].asString();
		if(!reverseJob35Node["Delay"].isNull())
			subSyncJobObject.reverseJob35.delay = std::stol(reverseJob35Node["Delay"].asString());
		if(!reverseJob35Node["Checkpoint"].isNull())
			subSyncJobObject.reverseJob35.checkpoint = reverseJob35Node["Checkpoint"].asString();
		if(!reverseJob35Node["ReverseJob"].isNull())
			subSyncJobObject.reverseJob35.reverseJob = reverseJob35Node["ReverseJob"].asString();
		if(!reverseJob35Node["Reserved"].isNull())
			subSyncJobObject.reverseJob35.reserved = reverseJob35Node["Reserved"].asString();
		if(!reverseJob35Node["SubscribeTopic"].isNull())
			subSyncJobObject.reverseJob35.subscribeTopic = reverseJob35Node["SubscribeTopic"].asString();
		if(!reverseJob35Node["ConsumptionCheckpoint"].isNull())
			subSyncJobObject.reverseJob35.consumptionCheckpoint = reverseJob35Node["ConsumptionCheckpoint"].asString();
		if(!reverseJob35Node["BeginTimestamp"].isNull())
			subSyncJobObject.reverseJob35.beginTimestamp = reverseJob35Node["BeginTimestamp"].asString();
		if(!reverseJob35Node["EndTimestamp"].isNull())
			subSyncJobObject.reverseJob35.endTimestamp = reverseJob35Node["EndTimestamp"].asString();
		if(!reverseJob35Node["ConsumptionClient"].isNull())
			subSyncJobObject.reverseJob35.consumptionClient = reverseJob35Node["ConsumptionClient"].asString();
		if(!reverseJob35Node["DestNetType"].isNull())
			subSyncJobObject.reverseJob35.destNetType = reverseJob35Node["DestNetType"].asString();
		if(!reverseJob35Node["AppName"].isNull())
			subSyncJobObject.reverseJob35.appName = reverseJob35Node["AppName"].asString();
		if(!reverseJob35Node["EtlCalculator"].isNull())
			subSyncJobObject.reverseJob35.etlCalculator = reverseJob35Node["EtlCalculator"].asString();
		if(!reverseJob35Node["OriginType"].isNull())
			subSyncJobObject.reverseJob35.originType = reverseJob35Node["OriginType"].asString();
		if(!reverseJob35Node["JobType"].isNull())
			subSyncJobObject.reverseJob35.jobType = reverseJob35Node["JobType"].asString();
		if(!reverseJob35Node["IsDemoJob"].isNull())
			subSyncJobObject.reverseJob35.isDemoJob = reverseJob35Node["IsDemoJob"].asString() == "true";
		if(!reverseJob35Node["TaskType"].isNull())
			subSyncJobObject.reverseJob35.taskType = reverseJob35Node["TaskType"].asString();
		auto allTagList55Node = reverseJob35Node["TagList"]["TagListItem"];
		for (auto reverseJob35NodeTagListTagListItem : allTagList55Node)
		{
			SubSyncJobItem::ReverseJob35::TagListItem56 tagListItem56Object;
			if(!reverseJob35NodeTagListTagListItem["Id"].isNull())
				tagListItem56Object.id = std::stol(reverseJob35NodeTagListTagListItem["Id"].asString());
			if(!reverseJob35NodeTagListTagListItem["GmtCreate"].isNull())
				tagListItem56Object.gmtCreate = reverseJob35NodeTagListTagListItem["GmtCreate"].asString();
			if(!reverseJob35NodeTagListTagListItem["GmtModified"].isNull())
				tagListItem56Object.gmtModified = reverseJob35NodeTagListTagListItem["GmtModified"].asString();
			if(!reverseJob35NodeTagListTagListItem["ResourceId"].isNull())
				tagListItem56Object.resourceId = reverseJob35NodeTagListTagListItem["ResourceId"].asString();
			if(!reverseJob35NodeTagListTagListItem["ResourceType"].isNull())
				tagListItem56Object.resourceType = reverseJob35NodeTagListTagListItem["ResourceType"].asString();
			if(!reverseJob35NodeTagListTagListItem["RegionId"].isNull())
				tagListItem56Object.regionId = reverseJob35NodeTagListTagListItem["RegionId"].asString();
			if(!reverseJob35NodeTagListTagListItem["AliUid"].isNull())
				tagListItem56Object.aliUid = std::stol(reverseJob35NodeTagListTagListItem["AliUid"].asString());
			if(!reverseJob35NodeTagListTagListItem["TagKey"].isNull())
				tagListItem56Object.tagKey = reverseJob35NodeTagListTagListItem["TagKey"].asString();
			if(!reverseJob35NodeTagListTagListItem["TagValue"].isNull())
				tagListItem56Object.tagValue = reverseJob35NodeTagListTagListItem["TagValue"].asString();
			if(!reverseJob35NodeTagListTagListItem["TagCategory"].isNull())
				tagListItem56Object.tagCategory = reverseJob35NodeTagListTagListItem["TagCategory"].asString();
			if(!reverseJob35NodeTagListTagListItem["SrcRegion"].isNull())
				tagListItem56Object.srcRegion = reverseJob35NodeTagListTagListItem["SrcRegion"].asString();
			if(!reverseJob35NodeTagListTagListItem["Scope"].isNull())
				tagListItem56Object.scope = reverseJob35NodeTagListTagListItem["Scope"].asString();
			if(!reverseJob35NodeTagListTagListItem["Creator"].isNull())
				tagListItem56Object.creator = std::stol(reverseJob35NodeTagListTagListItem["Creator"].asString());
			subSyncJobObject.reverseJob35.tagList55.push_back(tagListItem56Object);
		}
		auto sourceEndpoint43Node = reverseJob35Node["SourceEndpoint"];
		if(!sourceEndpoint43Node["InstanceID"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.instanceID = sourceEndpoint43Node["InstanceID"].asString();
		if(!sourceEndpoint43Node["Region"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.region = sourceEndpoint43Node["Region"].asString();
		if(!sourceEndpoint43Node["InstanceType"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.instanceType = sourceEndpoint43Node["InstanceType"].asString();
		if(!sourceEndpoint43Node["EngineName"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.engineName = sourceEndpoint43Node["EngineName"].asString();
		if(!sourceEndpoint43Node["Ip"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.ip = sourceEndpoint43Node["Ip"].asString();
		if(!sourceEndpoint43Node["Port"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.port = sourceEndpoint43Node["Port"].asString();
		if(!sourceEndpoint43Node["DatabaseName"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.databaseName = sourceEndpoint43Node["DatabaseName"].asString();
		if(!sourceEndpoint43Node["OracleSID"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.oracleSID = sourceEndpoint43Node["OracleSID"].asString();
		if(!sourceEndpoint43Node["UserName"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.userName = sourceEndpoint43Node["UserName"].asString();
		if(!sourceEndpoint43Node["SslSolutionEnum"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.sslSolutionEnum = sourceEndpoint43Node["SslSolutionEnum"].asString();
		if(!sourceEndpoint43Node["RoleName"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.roleName = sourceEndpoint43Node["RoleName"].asString();
		if(!sourceEndpoint43Node["AliyunUid"].isNull())
			subSyncJobObject.reverseJob35.sourceEndpoint43.aliyunUid = sourceEndpoint43Node["AliyunUid"].asString();
		auto destinationEndpoint44Node = reverseJob35Node["DestinationEndpoint"];
		if(!destinationEndpoint44Node["InstanceID"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.instanceID = destinationEndpoint44Node["InstanceID"].asString();
		if(!destinationEndpoint44Node["Region"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.region = destinationEndpoint44Node["Region"].asString();
		if(!destinationEndpoint44Node["InstanceType"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.instanceType = destinationEndpoint44Node["InstanceType"].asString();
		if(!destinationEndpoint44Node["EngineName"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.engineName = destinationEndpoint44Node["EngineName"].asString();
		if(!destinationEndpoint44Node["Ip"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.ip = destinationEndpoint44Node["Ip"].asString();
		if(!destinationEndpoint44Node["Port"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.port = destinationEndpoint44Node["Port"].asString();
		if(!destinationEndpoint44Node["DatabaseName"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.databaseName = destinationEndpoint44Node["DatabaseName"].asString();
		if(!destinationEndpoint44Node["OracleSID"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.oracleSID = destinationEndpoint44Node["OracleSID"].asString();
		if(!destinationEndpoint44Node["UserName"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.userName = destinationEndpoint44Node["UserName"].asString();
		if(!destinationEndpoint44Node["SslSolutionEnum"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.sslSolutionEnum = destinationEndpoint44Node["SslSolutionEnum"].asString();
		if(!destinationEndpoint44Node["RoleName"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.roleName = destinationEndpoint44Node["RoleName"].asString();
		if(!destinationEndpoint44Node["AliyunUid"].isNull())
			subSyncJobObject.reverseJob35.destinationEndpoint44.aliyunUid = destinationEndpoint44Node["AliyunUid"].asString();
		auto migrationMode45Node = reverseJob35Node["MigrationMode"];
		if(!migrationMode45Node["StructureInitialization"].isNull())
			subSyncJobObject.reverseJob35.migrationMode45.structureInitialization = migrationMode45Node["StructureInitialization"].asString() == "true";
		if(!migrationMode45Node["DataInitialization"].isNull())
			subSyncJobObject.reverseJob35.migrationMode45.dataInitialization = migrationMode45Node["DataInitialization"].asString() == "true";
		if(!migrationMode45Node["DataSynchronization"].isNull())
			subSyncJobObject.reverseJob35.migrationMode45.dataSynchronization = migrationMode45Node["DataSynchronization"].asString() == "true";
		if(!migrationMode45Node["DataExtractTransformLoad"].isNull())
			subSyncJobObject.reverseJob35.migrationMode45.dataExtractTransformLoad = migrationMode45Node["DataExtractTransformLoad"].asString() == "true";
		auto precheckStatus46Node = reverseJob35Node["PrecheckStatus"];
		if(!precheckStatus46Node["Status"].isNull())
			subSyncJobObject.reverseJob35.precheckStatus46.status = precheckStatus46Node["Status"].asString();
		if(!precheckStatus46Node["Percent"].isNull())
			subSyncJobObject.reverseJob35.precheckStatus46.percent = precheckStatus46Node["Percent"].asString();
		if(!precheckStatus46Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.precheckStatus46.errorMessage = precheckStatus46Node["ErrorMessage"].asString();
		auto allDetail57Node = precheckStatus46Node["Detail"]["DetailItem"];
		for (auto precheckStatus46NodeDetailDetailItem : allDetail57Node)
		{
			SubSyncJobItem::ReverseJob35::PrecheckStatus46::DetailItem58 detailItem58Object;
			if(!precheckStatus46NodeDetailDetailItem["CheckItem"].isNull())
				detailItem58Object.checkItem = precheckStatus46NodeDetailDetailItem["CheckItem"].asString();
			if(!precheckStatus46NodeDetailDetailItem["CheckItemDescription"].isNull())
				detailItem58Object.checkItemDescription = precheckStatus46NodeDetailDetailItem["CheckItemDescription"].asString();
			if(!precheckStatus46NodeDetailDetailItem["CheckResult"].isNull())
				detailItem58Object.checkResult = precheckStatus46NodeDetailDetailItem["CheckResult"].asString();
			if(!precheckStatus46NodeDetailDetailItem["FailedReason"].isNull())
				detailItem58Object.failedReason = precheckStatus46NodeDetailDetailItem["FailedReason"].asString();
			if(!precheckStatus46NodeDetailDetailItem["RepairMethod"].isNull())
				detailItem58Object.repairMethod = precheckStatus46NodeDetailDetailItem["RepairMethod"].asString();
			subSyncJobObject.reverseJob35.precheckStatus46.detail57.push_back(detailItem58Object);
		}
		auto structureInitializationStatus47Node = reverseJob35Node["StructureInitializationStatus"];
		if(!structureInitializationStatus47Node["Status"].isNull())
			subSyncJobObject.reverseJob35.structureInitializationStatus47.status = structureInitializationStatus47Node["Status"].asString();
		if(!structureInitializationStatus47Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.structureInitializationStatus47.errorMessage = structureInitializationStatus47Node["ErrorMessage"].asString();
		if(!structureInitializationStatus47Node["Percent"].isNull())
			subSyncJobObject.reverseJob35.structureInitializationStatus47.percent = structureInitializationStatus47Node["Percent"].asString();
		if(!structureInitializationStatus47Node["Progress"].isNull())
			subSyncJobObject.reverseJob35.structureInitializationStatus47.progress = structureInitializationStatus47Node["Progress"].asString();
		if(!structureInitializationStatus47Node["NeedUpgrade"].isNull())
			subSyncJobObject.reverseJob35.structureInitializationStatus47.needUpgrade = structureInitializationStatus47Node["NeedUpgrade"].asString() == "true";
		auto dataInitializationStatus48Node = reverseJob35Node["DataInitializationStatus"];
		if(!dataInitializationStatus48Node["Status"].isNull())
			subSyncJobObject.reverseJob35.dataInitializationStatus48.status = dataInitializationStatus48Node["Status"].asString();
		if(!dataInitializationStatus48Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.dataInitializationStatus48.errorMessage = dataInitializationStatus48Node["ErrorMessage"].asString();
		if(!dataInitializationStatus48Node["Percent"].isNull())
			subSyncJobObject.reverseJob35.dataInitializationStatus48.percent = dataInitializationStatus48Node["Percent"].asString();
		if(!dataInitializationStatus48Node["Progress"].isNull())
			subSyncJobObject.reverseJob35.dataInitializationStatus48.progress = dataInitializationStatus48Node["Progress"].asString();
		if(!dataInitializationStatus48Node["NeedUpgrade"].isNull())
			subSyncJobObject.reverseJob35.dataInitializationStatus48.needUpgrade = dataInitializationStatus48Node["NeedUpgrade"].asString() == "true";
		auto dataSynchronizationStatus49Node = reverseJob35Node["DataSynchronizationStatus"];
		if(!dataSynchronizationStatus49Node["Status"].isNull())
			subSyncJobObject.reverseJob35.dataSynchronizationStatus49.status = dataSynchronizationStatus49Node["Status"].asString();
		if(!dataSynchronizationStatus49Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.dataSynchronizationStatus49.errorMessage = dataSynchronizationStatus49Node["ErrorMessage"].asString();
		if(!dataSynchronizationStatus49Node["Percent"].isNull())
			subSyncJobObject.reverseJob35.dataSynchronizationStatus49.percent = dataSynchronizationStatus49Node["Percent"].asString();
		if(!dataSynchronizationStatus49Node["Progress"].isNull())
			subSyncJobObject.reverseJob35.dataSynchronizationStatus49.progress = dataSynchronizationStatus49Node["Progress"].asString();
		if(!dataSynchronizationStatus49Node["NeedUpgrade"].isNull())
			subSyncJobObject.reverseJob35.dataSynchronizationStatus49.needUpgrade = dataSynchronizationStatus49Node["NeedUpgrade"].asString() == "true";
		auto dataEtlStatus50Node = reverseJob35Node["DataEtlStatus"];
		if(!dataEtlStatus50Node["Status"].isNull())
			subSyncJobObject.reverseJob35.dataEtlStatus50.status = dataEtlStatus50Node["Status"].asString();
		if(!dataEtlStatus50Node["ErrorMessage"].isNull())
			subSyncJobObject.reverseJob35.dataEtlStatus50.errorMessage = dataEtlStatus50Node["ErrorMessage"].asString();
		if(!dataEtlStatus50Node["Percent"].isNull())
			subSyncJobObject.reverseJob35.dataEtlStatus50.percent = dataEtlStatus50Node["Percent"].asString();
		if(!dataEtlStatus50Node["Progress"].isNull())
			subSyncJobObject.reverseJob35.dataEtlStatus50.progress = dataEtlStatus50Node["Progress"].asString();
		if(!dataEtlStatus50Node["NeedUpgrade"].isNull())
			subSyncJobObject.reverseJob35.dataEtlStatus50.needUpgrade = dataEtlStatus50Node["NeedUpgrade"].asString() == "true";
		auto performance51Node = reverseJob35Node["Performance"];
		if(!performance51Node["Rps"].isNull())
			subSyncJobObject.reverseJob35.performance51.rps = performance51Node["Rps"].asString();
		if(!performance51Node["Flow"].isNull())
			subSyncJobObject.reverseJob35.performance51.flow = performance51Node["Flow"].asString();
		auto subscriptionHost52Node = reverseJob35Node["SubscriptionHost"];
		if(!subscriptionHost52Node["PublicHost"].isNull())
			subSyncJobObject.reverseJob35.subscriptionHost52.publicHost = subscriptionHost52Node["PublicHost"].asString();
		if(!subscriptionHost52Node["PrivateHost"].isNull())
			subSyncJobObject.reverseJob35.subscriptionHost52.privateHost = subscriptionHost52Node["PrivateHost"].asString();
		if(!subscriptionHost52Node["VpcHost"].isNull())
			subSyncJobObject.reverseJob35.subscriptionHost52.vpcHost = subscriptionHost52Node["VpcHost"].asString();
		auto subscriptionDataType53Node = reverseJob35Node["SubscriptionDataType"];
		if(!subscriptionDataType53Node["Ddl"].isNull())
			subSyncJobObject.reverseJob35.subscriptionDataType53.ddl = subscriptionDataType53Node["Ddl"].asString() == "true";
		if(!subscriptionDataType53Node["Dml"].isNull())
			subSyncJobObject.reverseJob35.subscriptionDataType53.dml = subscriptionDataType53Node["Dml"].asString() == "true";
		auto retryState54Node = reverseJob35Node["RetryState"];
		if(!retryState54Node["JobId"].isNull())
			subSyncJobObject.reverseJob35.retryState54.jobId = retryState54Node["JobId"].asString();
		if(!retryState54Node["MaxRetryTime"].isNull())
			subSyncJobObject.reverseJob35.retryState54.maxRetryTime = std::stoi(retryState54Node["MaxRetryTime"].asString());
		if(!retryState54Node["RetryTime"].isNull())
			subSyncJobObject.reverseJob35.retryState54.retryTime = std::stoi(retryState54Node["RetryTime"].asString());
		if(!retryState54Node["RetryCount"].isNull())
			subSyncJobObject.reverseJob35.retryState54.retryCount = std::stoi(retryState54Node["RetryCount"].asString());
		if(!retryState54Node["Retrying"].isNull())
			subSyncJobObject.reverseJob35.retryState54.retrying = retryState54Node["Retrying"].asString() == "true";
		if(!retryState54Node["Module"].isNull())
			subSyncJobObject.reverseJob35.retryState54.module = retryState54Node["Module"].asString();
		if(!retryState54Node["RetryTarget"].isNull())
			subSyncJobObject.reverseJob35.retryState54.retryTarget = retryState54Node["RetryTarget"].asString();
		if(!retryState54Node["ErrMsg"].isNull())
			subSyncJobObject.reverseJob35.retryState54.errMsg = retryState54Node["ErrMsg"].asString();
		auto subscriptionHost36Node = value["SubscriptionHost"];
		if(!subscriptionHost36Node["PublicHost"].isNull())
			subSyncJobObject.subscriptionHost36.publicHost = subscriptionHost36Node["PublicHost"].asString();
		if(!subscriptionHost36Node["PrivateHost"].isNull())
			subSyncJobObject.subscriptionHost36.privateHost = subscriptionHost36Node["PrivateHost"].asString();
		if(!subscriptionHost36Node["VpcHost"].isNull())
			subSyncJobObject.subscriptionHost36.vpcHost = subscriptionHost36Node["VpcHost"].asString();
		auto subscriptionDataType37Node = value["SubscriptionDataType"];
		if(!subscriptionDataType37Node["Ddl"].isNull())
			subSyncJobObject.subscriptionDataType37.ddl = subscriptionDataType37Node["Ddl"].asString() == "true";
		if(!subscriptionDataType37Node["Dml"].isNull())
			subSyncJobObject.subscriptionDataType37.dml = subscriptionDataType37Node["Dml"].asString() == "true";
		auto retryState38Node = value["RetryState"];
		if(!retryState38Node["JobId"].isNull())
			subSyncJobObject.retryState38.jobId = retryState38Node["JobId"].asString();
		if(!retryState38Node["MaxRetryTime"].isNull())
			subSyncJobObject.retryState38.maxRetryTime = std::stoi(retryState38Node["MaxRetryTime"].asString());
		if(!retryState38Node["RetryTime"].isNull())
			subSyncJobObject.retryState38.retryTime = std::stoi(retryState38Node["RetryTime"].asString());
		if(!retryState38Node["RetryCount"].isNull())
			subSyncJobObject.retryState38.retryCount = std::stoi(retryState38Node["RetryCount"].asString());
		if(!retryState38Node["Retrying"].isNull())
			subSyncJobObject.retryState38.retrying = retryState38Node["Retrying"].asString() == "true";
		if(!retryState38Node["Module"].isNull())
			subSyncJobObject.retryState38.module = retryState38Node["Module"].asString();
		if(!retryState38Node["RetryTarget"].isNull())
			subSyncJobObject.retryState38.retryTarget = retryState38Node["RetryTarget"].asString();
		if(!retryState38Node["ErrMsg"].isNull())
			subSyncJobObject.retryState38.errMsg = retryState38Node["ErrMsg"].asString();
		auto allSubSyncJob25 = value["SubSyncJob"]["SubSyncJob"];
		for (auto value : allSubSyncJob25)
			subSyncJobObject.subSyncJob25.push_back(value.asString());
		subSyncJob_.push_back(subSyncJobObject);
	}
	auto sourceEndpointNode = value["SourceEndpoint"];
	if(!sourceEndpointNode["OracleSID"].isNull())
		sourceEndpoint_.oracleSID = sourceEndpointNode["OracleSID"].asString();
	if(!sourceEndpointNode["SslSolutionEnum"].isNull())
		sourceEndpoint_.sslSolutionEnum = sourceEndpointNode["SslSolutionEnum"].asString();
	if(!sourceEndpointNode["Ip"].isNull())
		sourceEndpoint_.ip = sourceEndpointNode["Ip"].asString();
	if(!sourceEndpointNode["InstanceID"].isNull())
		sourceEndpoint_.instanceID = sourceEndpointNode["InstanceID"].asString();
	if(!sourceEndpointNode["RoleName"].isNull())
		sourceEndpoint_.roleName = sourceEndpointNode["RoleName"].asString();
	if(!sourceEndpointNode["InstanceType"].isNull())
		sourceEndpoint_.instanceType = sourceEndpointNode["InstanceType"].asString();
	if(!sourceEndpointNode["Port"].isNull())
		sourceEndpoint_.port = sourceEndpointNode["Port"].asString();
	if(!sourceEndpointNode["EngineName"].isNull())
		sourceEndpoint_.engineName = sourceEndpointNode["EngineName"].asString();
	if(!sourceEndpointNode["Region"].isNull())
		sourceEndpoint_.region = sourceEndpointNode["Region"].asString();
	if(!sourceEndpointNode["DatabaseName"].isNull())
		sourceEndpoint_.databaseName = sourceEndpointNode["DatabaseName"].asString();
	if(!sourceEndpointNode["AliyunUid"].isNull())
		sourceEndpoint_.aliyunUid = sourceEndpointNode["AliyunUid"].asString();
	if(!sourceEndpointNode["UserName"].isNull())
		sourceEndpoint_.userName = sourceEndpointNode["UserName"].asString();
	if(!sourceEndpointNode["CanModifyPassword"].isNull())
		sourceEndpoint_.canModifyPassword = sourceEndpointNode["CanModifyPassword"].asString() == "true";
	auto destinationEndpointNode = value["DestinationEndpoint"];
	if(!destinationEndpointNode["SslSolutionEnum"].isNull())
		destinationEndpoint_.sslSolutionEnum = destinationEndpointNode["SslSolutionEnum"].asString();
	if(!destinationEndpointNode["OracleSID"].isNull())
		destinationEndpoint_.oracleSID = destinationEndpointNode["OracleSID"].asString();
	if(!destinationEndpointNode["DatabaseName"].isNull())
		destinationEndpoint_.databaseName = destinationEndpointNode["DatabaseName"].asString();
	if(!destinationEndpointNode["Region"].isNull())
		destinationEndpoint_.region = destinationEndpointNode["Region"].asString();
	if(!destinationEndpointNode["Ip"].isNull())
		destinationEndpoint_.ip = destinationEndpointNode["Ip"].asString();
	if(!destinationEndpointNode["InstanceID"].isNull())
		destinationEndpoint_.instanceID = destinationEndpointNode["InstanceID"].asString();
	if(!destinationEndpointNode["Port"].isNull())
		destinationEndpoint_.port = destinationEndpointNode["Port"].asString();
	if(!destinationEndpointNode["InstanceType"].isNull())
		destinationEndpoint_.instanceType = destinationEndpointNode["InstanceType"].asString();
	if(!destinationEndpointNode["UserName"].isNull())
		destinationEndpoint_.userName = destinationEndpointNode["UserName"].asString();
	if(!destinationEndpointNode["EngineName"].isNull())
		destinationEndpoint_.engineName = destinationEndpointNode["EngineName"].asString();
	if(!destinationEndpointNode["CanModifyPassword"].isNull())
		destinationEndpoint_.canModifyPassword = destinationEndpointNode["CanModifyPassword"].asString() == "true";
	auto migrationModeNode = value["MigrationMode"];
	if(!migrationModeNode["DataExtractTransformLoad"].isNull())
		migrationMode_.dataExtractTransformLoad = migrationModeNode["DataExtractTransformLoad"].asString() == "true";
	if(!migrationModeNode["DataInitialization"].isNull())
		migrationMode_.dataInitialization = migrationModeNode["DataInitialization"].asString() == "true";
	if(!migrationModeNode["DataSynchronization"].isNull())
		migrationMode_.dataSynchronization = migrationModeNode["DataSynchronization"].asString() == "true";
	if(!migrationModeNode["StructureInitialization"].isNull())
		migrationMode_.structureInitialization = migrationModeNode["StructureInitialization"].asString() == "true";
	auto subscriptionHostNode = value["SubscriptionHost"];
	if(!subscriptionHostNode["VpcHost"].isNull())
		subscriptionHost_.vpcHost = subscriptionHostNode["VpcHost"].asString();
	if(!subscriptionHostNode["PublicHost"].isNull())
		subscriptionHost_.publicHost = subscriptionHostNode["PublicHost"].asString();
	if(!subscriptionHostNode["PrivateHost"].isNull())
		subscriptionHost_.privateHost = subscriptionHostNode["PrivateHost"].asString();
	auto subscriptionDataTypeNode = value["SubscriptionDataType"];
	if(!subscriptionDataTypeNode["Dml"].isNull())
		subscriptionDataType_.dml = subscriptionDataTypeNode["Dml"].asString() == "true";
	if(!subscriptionDataTypeNode["Ddl"].isNull())
		subscriptionDataType_.ddl = subscriptionDataTypeNode["Ddl"].asString() == "true";
	auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
	if(!dataSynchronizationStatusNode["Status"].isNull())
		dataSynchronizationStatus_.status = dataSynchronizationStatusNode["Status"].asString();
	if(!dataSynchronizationStatusNode["NeedUpgrade"].isNull())
		dataSynchronizationStatus_.needUpgrade = dataSynchronizationStatusNode["NeedUpgrade"].asString() == "true";
	if(!dataSynchronizationStatusNode["Percent"].isNull())
		dataSynchronizationStatus_.percent = dataSynchronizationStatusNode["Percent"].asString();
	if(!dataSynchronizationStatusNode["Progress"].isNull())
		dataSynchronizationStatus_.progress = dataSynchronizationStatusNode["Progress"].asString();
	if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
		dataSynchronizationStatus_.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
	auto retryStateNode = value["RetryState"];
	if(!retryStateNode["RetryCount"].isNull())
		retryState_.retryCount = std::stoi(retryStateNode["RetryCount"].asString());
	if(!retryStateNode["MaxRetryTime"].isNull())
		retryState_.maxRetryTime = std::stoi(retryStateNode["MaxRetryTime"].asString());
	if(!retryStateNode["ErrMessage"].isNull())
		retryState_.errMessage = retryStateNode["ErrMessage"].asString();
	if(!retryStateNode["RetryTarget"].isNull())
		retryState_.retryTarget = retryStateNode["RetryTarget"].asString();
	if(!retryStateNode["RetryTime"].isNull())
		retryState_.retryTime = std::stoi(retryStateNode["RetryTime"].asString());
	if(!retryStateNode["Module"].isNull())
		retryState_.module = retryStateNode["Module"].asString();
	if(!retryStateNode["JobId"].isNull())
		retryState_.jobId = retryStateNode["JobId"].asString();
	if(!retryStateNode["Retrying"].isNull())
		retryState_.retrying = retryStateNode["Retrying"].asString() == "true";
	auto dataDeliveryChannelInfoNode = value["DataDeliveryChannelInfo"];
	if(!dataDeliveryChannelInfoNode["PublicDproxyUrl"].isNull())
		dataDeliveryChannelInfo_.publicDproxyUrl = dataDeliveryChannelInfoNode["PublicDproxyUrl"].asString();
	if(!dataDeliveryChannelInfoNode["VpcDproxyUrl"].isNull())
		dataDeliveryChannelInfo_.vpcDproxyUrl = dataDeliveryChannelInfoNode["VpcDproxyUrl"].asString();
	if(!dataDeliveryChannelInfoNode["Topic"].isNull())
		dataDeliveryChannelInfo_.topic = dataDeliveryChannelInfoNode["Topic"].asString();
	if(!dataDeliveryChannelInfoNode["Region"].isNull())
		dataDeliveryChannelInfo_.region = dataDeliveryChannelInfoNode["Region"].asString();
	if(!dataDeliveryChannelInfoNode["PartitionNum"].isNull())
		dataDeliveryChannelInfo_.partitionNum = std::stoi(dataDeliveryChannelInfoNode["PartitionNum"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["DtsJobName"].isNull())
		dtsJobName_ = value["DtsJobName"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["DtsJobId"].isNull())
		dtsJobId_ = value["DtsJobId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["Reserved"].isNull())
		reserved_ = value["Reserved"].asString();
	if(!value["DatabaseCount"].isNull())
		databaseCount_ = std::stoi(value["DatabaseCount"].asString());
	if(!value["DtsJobClass"].isNull())
		dtsJobClass_ = value["DtsJobClass"].asString();
	if(!value["EndTimestamp"].isNull())
		endTimestamp_ = value["EndTimestamp"].asString();
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["DestNetType"].isNull())
		destNetType_ = value["DestNetType"].asString();
	if(!value["SubscribeTopic"].isNull())
		subscribeTopic_ = value["SubscribeTopic"].asString();
	if(!value["DtsInstanceID"].isNull())
		dtsInstanceID_ = value["DtsInstanceID"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Checkpoint"].isNull())
		checkpoint_ = std::stol(value["Checkpoint"].asString());
	if(!value["Delay"].isNull())
		delay_ = std::stol(value["Delay"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["ConsumptionClient"].isNull())
		consumptionClient_ = value["ConsumptionClient"].asString();
	if(!value["DbObject"].isNull())
		dbObject_ = value["DbObject"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ConsumptionCheckpoint"].isNull())
		consumptionCheckpoint_ = value["ConsumptionCheckpoint"].asString();
	if(!value["EtlCalculator"].isNull())
		etlCalculator_ = value["EtlCalculator"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["BeginTimestamp"].isNull())
		beginTimestamp_ = value["BeginTimestamp"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["SynchronizationDirection"].isNull())
		synchronizationDirection_ = value["SynchronizationDirection"].asString();
	if(!value["DtsJobDirection"].isNull())
		dtsJobDirection_ = value["DtsJobDirection"].asString();
	if(!value["DemoJob"].isNull())
		demoJob_ = value["DemoJob"].asString() == "true";
	if(!value["JobType"].isNull())
		jobType_ = value["JobType"].asString();
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["DedicatedClusterId"].isNull())
		dedicatedClusterId_ = value["DedicatedClusterId"].asString();
	if(!value["BootTime"].isNull())
		bootTime_ = value["BootTime"].asString();
	if(!value["Binlog"].isNull())
		binlog_ = value["Binlog"].asString();
	if(!value["BinlogSite"].isNull())
		binlogSite_ = value["BinlogSite"].asString();
	if(!value["BinlogTime"].isNull())
		binlogTime_ = value["BinlogTime"].asString();
	if(!value["LastUpdateTime"].isNull())
		lastUpdateTime_ = value["LastUpdateTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ResourceGroupDisplayName"].isNull())
		resourceGroupDisplayName_ = value["ResourceGroupDisplayName"].asString();
	if(!value["DtsBisLabel"].isNull())
		dtsBisLabel_ = value["DtsBisLabel"].asString();

}

DescribeDtsJobDetailResult::SubscriptionHost DescribeDtsJobDetailResult::getSubscriptionHost()const
{
	return subscriptionHost_;
}

std::string DescribeDtsJobDetailResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeDtsJobDetailResult::getDtsJobName()const
{
	return dtsJobName_;
}

std::string DescribeDtsJobDetailResult::getEndTimestamp()const
{
	return endTimestamp_;
}

std::string DescribeDtsJobDetailResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsJobDetailResult::getDtsInstanceID()const
{
	return dtsInstanceID_;
}

DescribeDtsJobDetailResult::MigrationMode DescribeDtsJobDetailResult::getMigrationMode()const
{
	return migrationMode_;
}

long DescribeDtsJobDetailResult::getDelay()const
{
	return delay_;
}

bool DescribeDtsJobDetailResult::getSuccess()const
{
	return success_;
}

bool DescribeDtsJobDetailResult::getDemoJob()const
{
	return demoJob_;
}

DescribeDtsJobDetailResult::SubscriptionDataType DescribeDtsJobDetailResult::getSubscriptionDataType()const
{
	return subscriptionDataType_;
}

std::string DescribeDtsJobDetailResult::getDtsJobId()const
{
	return dtsJobId_;
}

std::string DescribeDtsJobDetailResult::getLastUpdateTime()const
{
	return lastUpdateTime_;
}

std::string DescribeDtsJobDetailResult::getTaskType()const
{
	return taskType_;
}

int DescribeDtsJobDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeDtsJobDetailResult::DataSynchronizationStatus DescribeDtsJobDetailResult::getDataSynchronizationStatus()const
{
	return dataSynchronizationStatus_;
}

std::string DescribeDtsJobDetailResult::getEtlCalculator()const
{
	return etlCalculator_;
}

std::string DescribeDtsJobDetailResult::getStatus()const
{
	return status_;
}

std::string DescribeDtsJobDetailResult::getDedicatedClusterId()const
{
	return dedicatedClusterId_;
}

std::string DescribeDtsJobDetailResult::getDbObject()const
{
	return dbObject_;
}

std::string DescribeDtsJobDetailResult::getBootTime()const
{
	return bootTime_;
}

std::string DescribeDtsJobDetailResult::getPayType()const
{
	return payType_;
}

std::string DescribeDtsJobDetailResult::getErrMessage()const
{
	return errMessage_;
}

int DescribeDtsJobDetailResult::getCode()const
{
	return code_;
}

std::string DescribeDtsJobDetailResult::getErrCode()const
{
	return errCode_;
}

std::string DescribeDtsJobDetailResult::getSubscribeTopic()const
{
	return subscribeTopic_;
}

std::string DescribeDtsJobDetailResult::getConsumptionClient()const
{
	return consumptionClient_;
}

DescribeDtsJobDetailResult::SourceEndpoint DescribeDtsJobDetailResult::getSourceEndpoint()const
{
	return sourceEndpoint_;
}

std::string DescribeDtsJobDetailResult::getExpireTime()const
{
	return expireTime_;
}

DescribeDtsJobDetailResult::RetryState DescribeDtsJobDetailResult::getRetryState()const
{
	return retryState_;
}

std::string DescribeDtsJobDetailResult::getReserved()const
{
	return reserved_;
}

std::vector<DescribeDtsJobDetailResult::SubSyncJobItem> DescribeDtsJobDetailResult::getSubSyncJob()const
{
	return subSyncJob_;
}

std::string DescribeDtsJobDetailResult::getBinlogTime()const
{
	return binlogTime_;
}

std::string DescribeDtsJobDetailResult::getAppName()const
{
	return appName_;
}

std::string DescribeDtsJobDetailResult::getDtsJobClass()const
{
	return dtsJobClass_;
}

std::string DescribeDtsJobDetailResult::getFinishTime()const
{
	return finishTime_;
}

std::string DescribeDtsJobDetailResult::getDestNetType()const
{
	return destNetType_;
}

DescribeDtsJobDetailResult::DataDeliveryChannelInfo DescribeDtsJobDetailResult::getDataDeliveryChannelInfo()const
{
	return dataDeliveryChannelInfo_;
}

std::string DescribeDtsJobDetailResult::getBinlog()const
{
	return binlog_;
}

std::string DescribeDtsJobDetailResult::getCreateTime()const
{
	return createTime_;
}

std::vector<DescribeDtsJobDetailResult::SubDistributedJobItem> DescribeDtsJobDetailResult::getSubDistributedJob()const
{
	return subDistributedJob_;
}

std::string DescribeDtsJobDetailResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeDtsJobDetailResult::getDtsBisLabel()const
{
	return dtsBisLabel_;
}

long DescribeDtsJobDetailResult::getCheckpoint()const
{
	return checkpoint_;
}

std::string DescribeDtsJobDetailResult::getConsumptionCheckpoint()const
{
	return consumptionCheckpoint_;
}

std::string DescribeDtsJobDetailResult::getDtsJobDirection()const
{
	return dtsJobDirection_;
}

std::string DescribeDtsJobDetailResult::getJobType()const
{
	return jobType_;
}

int DescribeDtsJobDetailResult::getDatabaseCount()const
{
	return databaseCount_;
}

DescribeDtsJobDetailResult::DestinationEndpoint DescribeDtsJobDetailResult::getDestinationEndpoint()const
{
	return destinationEndpoint_;
}

std::string DescribeDtsJobDetailResult::getBinlogSite()const
{
	return binlogSite_;
}

std::string DescribeDtsJobDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeDtsJobDetailResult::getResourceGroupDisplayName()const
{
	return resourceGroupDisplayName_;
}

std::string DescribeDtsJobDetailResult::getBeginTimestamp()const
{
	return beginTimestamp_;
}

std::string DescribeDtsJobDetailResult::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

