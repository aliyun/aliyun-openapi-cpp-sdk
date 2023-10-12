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

#include <alibabacloud/oceanbasepro/model/SearchOmsOpenAPIProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

SearchOmsOpenAPIProjectsResult::SearchOmsOpenAPIProjectsResult() :
	ServiceResult()
{}

SearchOmsOpenAPIProjectsResult::SearchOmsOpenAPIProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchOmsOpenAPIProjectsResult::~SearchOmsOpenAPIProjectsResult()
{}

void SearchOmsOpenAPIProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ProjectId"].isNull())
			dataObject.projectId = valueDataDataItem["ProjectId"].asString();
		if(!valueDataDataItem["ProjectName"].isNull())
			dataObject.projectName = valueDataDataItem["ProjectName"].asString();
		if(!valueDataDataItem["ProjectOwner"].isNull())
			dataObject.projectOwner = valueDataDataItem["ProjectOwner"].asString();
		if(!valueDataDataItem["BusinessName"].isNull())
			dataObject.businessName = valueDataDataItem["BusinessName"].asString();
		auto allLabelsNode = valueDataDataItem["Labels"]["Label"];
		for (auto valueDataDataItemLabelsLabel : allLabelsNode)
		{
			DataItem::Label labelsObject;
			if(!valueDataDataItemLabelsLabel["Id"].isNull())
				labelsObject.id = valueDataDataItemLabelsLabel["Id"].asString();
			if(!valueDataDataItemLabelsLabel["Name"].isNull())
				labelsObject.name = valueDataDataItemLabelsLabel["Name"].asString();
			if(!valueDataDataItemLabelsLabel["Creator"].isNull())
				labelsObject.creator = valueDataDataItemLabelsLabel["Creator"].asString();
			if(!valueDataDataItemLabelsLabel["Count"].isNull())
				labelsObject.count = std::stoi(valueDataDataItemLabelsLabel["Count"].asString());
			dataObject.labels.push_back(labelsObject);
		}
		auto allStepsNode = valueDataDataItem["Steps"]["Step"];
		for (auto valueDataDataItemStepsStep : allStepsNode)
		{
			DataItem::Step stepsObject;
			if(!valueDataDataItemStepsStep["StepOrder"].isNull())
				stepsObject.stepOrder = std::stoi(valueDataDataItemStepsStep["StepOrder"].asString());
			if(!valueDataDataItemStepsStep["StepName"].isNull())
				stepsObject.stepName = valueDataDataItemStepsStep["StepName"].asString();
			if(!valueDataDataItemStepsStep["StepDescription"].isNull())
				stepsObject.stepDescription = valueDataDataItemStepsStep["StepDescription"].asString();
			if(!valueDataDataItemStepsStep["StepStatus"].isNull())
				stepsObject.stepStatus = valueDataDataItemStepsStep["StepStatus"].asString();
			if(!valueDataDataItemStepsStep["StepProgress"].isNull())
				stepsObject.stepProgress = std::stoi(valueDataDataItemStepsStep["StepProgress"].asString());
			if(!valueDataDataItemStepsStep["StartTime"].isNull())
				stepsObject.startTime = valueDataDataItemStepsStep["StartTime"].asString();
			if(!valueDataDataItemStepsStep["EstimatedRemainingSeconds"].isNull())
				stepsObject.estimatedRemainingSeconds = std::stol(valueDataDataItemStepsStep["EstimatedRemainingSeconds"].asString());
			if(!valueDataDataItemStepsStep["FinishTime"].isNull())
				stepsObject.finishTime = valueDataDataItemStepsStep["FinishTime"].asString();
			if(!valueDataDataItemStepsStep["Interactive"].isNull())
				stepsObject.interactive = valueDataDataItemStepsStep["Interactive"].asString() == "true";
			auto stepInfoNode = value["StepInfo"];
			if(!stepInfoNode["JobId"].isNull())
				stepsObject.stepInfo.jobId = stepInfoNode["JobId"].asString();
			if(!stepInfoNode["IncrTimestampCheckpoint"].isNull())
				stepsObject.stepInfo.incrTimestampCheckpoint = std::stol(stepInfoNode["IncrTimestampCheckpoint"].asString());
			if(!stepInfoNode["Checkpoint"].isNull())
				stepsObject.stepInfo.checkpoint = stepInfoNode["Checkpoint"].asString();
			if(!stepInfoNode["Gmt"].isNull())
				stepsObject.stepInfo.gmt = std::stol(stepInfoNode["Gmt"].asString());
			if(!stepInfoNode["Validated"].isNull())
				stepsObject.stepInfo.validated = stepInfoNode["Validated"].asString() == "true";
			if(!stepInfoNode["Skipped"].isNull())
				stepsObject.stepInfo.skipped = stepInfoNode["Skipped"].asString() == "true";
			if(!stepInfoNode["Inconsistencies"].isNull())
				stepsObject.stepInfo.inconsistencies = std::stol(stepInfoNode["Inconsistencies"].asString());
			if(!stepInfoNode["DeployId"].isNull())
				stepsObject.stepInfo.deployId = stepInfoNode["DeployId"].asString();
			if(!stepInfoNode["ProcessedRecords"].isNull())
				stepsObject.stepInfo.processedRecords = std::stol(stepInfoNode["ProcessedRecords"].asString());
			if(!stepInfoNode["Capacity"].isNull())
				stepsObject.stepInfo.capacity = std::stol(stepInfoNode["Capacity"].asString());
			if(!stepInfoNode["SrcRps"].isNull())
				stepsObject.stepInfo.srcRps = std::stol(stepInfoNode["SrcRps"].asString());
			if(!stepInfoNode["SrcRt"].isNull())
				stepsObject.stepInfo.srcRt = std::stol(stepInfoNode["SrcRt"].asString());
			if(!stepInfoNode["SrcIops"].isNull())
				stepsObject.stepInfo.srcIops = std::stol(stepInfoNode["SrcIops"].asString());
			if(!stepInfoNode["DstRps"].isNull())
				stepsObject.stepInfo.dstRps = std::stol(stepInfoNode["DstRps"].asString());
			if(!stepInfoNode["DstRt"].isNull())
				stepsObject.stepInfo.dstRt = std::stol(stepInfoNode["DstRt"].asString());
			if(!stepInfoNode["DstIops"].isNull())
				stepsObject.stepInfo.dstIops = std::stol(stepInfoNode["DstIops"].asString());
			if(!stepInfoNode["SrcRpsRef"].isNull())
				stepsObject.stepInfo.srcRpsRef = std::stol(stepInfoNode["SrcRpsRef"].asString());
			if(!stepInfoNode["SrcRtRef"].isNull())
				stepsObject.stepInfo.srcRtRef = std::stol(stepInfoNode["SrcRtRef"].asString());
			if(!stepInfoNode["DstRpsRef"].isNull())
				stepsObject.stepInfo.dstRpsRef = std::stol(stepInfoNode["DstRpsRef"].asString());
			if(!stepInfoNode["DstRtRef"].isNull())
				stepsObject.stepInfo.dstRtRef = std::stol(stepInfoNode["DstRtRef"].asString());
			if(!stepInfoNode["SrcIopsRef"].isNull())
				stepsObject.stepInfo.srcIopsRef = std::stol(stepInfoNode["SrcIopsRef"].asString());
			auto connectorFullProgressOverviewNode = stepInfoNode["ConnectorFullProgressOverview"];
			if(!connectorFullProgressOverviewNode["EstimatedTotalCount"].isNull())
				stepsObject.stepInfo.connectorFullProgressOverview.estimatedTotalCount = std::stol(connectorFullProgressOverviewNode["EstimatedTotalCount"].asString());
			if(!connectorFullProgressOverviewNode["FinishedCount"].isNull())
				stepsObject.stepInfo.connectorFullProgressOverview.finishedCount = std::stol(connectorFullProgressOverviewNode["FinishedCount"].asString());
			if(!connectorFullProgressOverviewNode["Progress"].isNull())
				stepsObject.stepInfo.connectorFullProgressOverview.progress = std::stoi(connectorFullProgressOverviewNode["Progress"].asString());
			if(!connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].isNull())
				stepsObject.stepInfo.connectorFullProgressOverview.estimatedRemainingTimeOfSec = std::stol(connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].asString());
			auto extraInfoNode = value["ExtraInfo"];
			if(!extraInfoNode["ErrorCode"].isNull())
				stepsObject.extraInfo.errorCode = extraInfoNode["ErrorCode"].asString();
			if(!extraInfoNode["ErrorMsg"].isNull())
				stepsObject.extraInfo.errorMsg = extraInfoNode["ErrorMsg"].asString();
			if(!extraInfoNode["ErrorParam"].isNull())
				stepsObject.extraInfo.errorParam = extraInfoNode["ErrorParam"].asString();
			if(!extraInfoNode["FailedTime"].isNull())
				stepsObject.extraInfo.failedTime = extraInfoNode["FailedTime"].asString();
			auto allErrorDetailsNode = extraInfoNode["ErrorDetails"]["ErrorDetail"];
			for (auto extraInfoNodeErrorDetailsErrorDetail : allErrorDetailsNode)
			{
				DataItem::Step::ExtraInfo::ErrorDetail errorDetailObject;
				if(!extraInfoNodeErrorDetailsErrorDetail["Code"].isNull())
					errorDetailObject.code = extraInfoNodeErrorDetailsErrorDetail["Code"].asString();
				if(!extraInfoNodeErrorDetailsErrorDetail["Level"].isNull())
					errorDetailObject.level = extraInfoNodeErrorDetailsErrorDetail["Level"].asString();
				if(!extraInfoNodeErrorDetailsErrorDetail["Message"].isNull())
					errorDetailObject.message = extraInfoNodeErrorDetailsErrorDetail["Message"].asString();
				if(!extraInfoNodeErrorDetailsErrorDetail["Proposal"].isNull())
					errorDetailObject.proposal = extraInfoNodeErrorDetailsErrorDetail["Proposal"].asString();
				stepsObject.extraInfo.errorDetails.push_back(errorDetailObject);
			}
			dataObject.steps.push_back(stepsObject);
		}
		auto sourceConfigNode = value["SourceConfig"];
		if(!sourceConfigNode["EndpointType"].isNull())
			dataObject.sourceConfig.endpointType = sourceConfigNode["EndpointType"].asString();
		if(!sourceConfigNode["EndpointId"].isNull())
			dataObject.sourceConfig.endpointId = sourceConfigNode["EndpointId"].asString();
		if(!sourceConfigNode["PartitionMode"].isNull())
			dataObject.sourceConfig.partitionMode = sourceConfigNode["PartitionMode"].asString();
		if(!sourceConfigNode["Partition"].isNull())
			dataObject.sourceConfig.partition = std::stoi(sourceConfigNode["Partition"].asString());
		if(!sourceConfigNode["SerializerType"].isNull())
			dataObject.sourceConfig.serializerType = sourceConfigNode["SerializerType"].asString();
		if(!sourceConfigNode["TopicType"].isNull())
			dataObject.sourceConfig.topicType = sourceConfigNode["TopicType"].asString();
		if(!sourceConfigNode["SequenceEnable"].isNull())
			dataObject.sourceConfig.sequenceEnable = sourceConfigNode["SequenceEnable"].asString() == "true";
		if(!sourceConfigNode["SequenceStartTimestamp"].isNull())
			dataObject.sourceConfig.sequenceStartTimestamp = std::stol(sourceConfigNode["SequenceStartTimestamp"].asString());
		if(!sourceConfigNode["ProducerGroup"].isNull())
			dataObject.sourceConfig.producerGroup = sourceConfigNode["ProducerGroup"].asString();
		if(!sourceConfigNode["MsgTags"].isNull())
			dataObject.sourceConfig.msgTags = sourceConfigNode["MsgTags"].asString();
		if(!sourceConfigNode["EnableMsgTrace"].isNull())
			dataObject.sourceConfig.enableMsgTrace = sourceConfigNode["EnableMsgTrace"].asString() == "true";
		if(!sourceConfigNode["SendMsgTimeout"].isNull())
			dataObject.sourceConfig.sendMsgTimeout = std::stol(sourceConfigNode["SendMsgTimeout"].asString());
		auto destConfigNode = value["DestConfig"];
		if(!destConfigNode["EndpointType"].isNull())
			dataObject.destConfig.endpointType = destConfigNode["EndpointType"].asString();
		if(!destConfigNode["EndpointId"].isNull())
			dataObject.destConfig.endpointId = destConfigNode["EndpointId"].asString();
		if(!destConfigNode["PartitionMode"].isNull())
			dataObject.destConfig.partitionMode = destConfigNode["PartitionMode"].asString();
		if(!destConfigNode["Partition"].isNull())
			dataObject.destConfig.partition = std::stoi(destConfigNode["Partition"].asString());
		if(!destConfigNode["SerializerType"].isNull())
			dataObject.destConfig.serializerType = destConfigNode["SerializerType"].asString();
		if(!destConfigNode["TopicType"].isNull())
			dataObject.destConfig.topicType = destConfigNode["TopicType"].asString();
		if(!destConfigNode["SequenceEnable"].isNull())
			dataObject.destConfig.sequenceEnable = destConfigNode["SequenceEnable"].asString() == "true";
		if(!destConfigNode["SequenceStartTimestamp"].isNull())
			dataObject.destConfig.sequenceStartTimestamp = std::stol(destConfigNode["SequenceStartTimestamp"].asString());
		if(!destConfigNode["ProducerGroup"].isNull())
			dataObject.destConfig.producerGroup = destConfigNode["ProducerGroup"].asString();
		if(!destConfigNode["MsgTags"].isNull())
			dataObject.destConfig.msgTags = destConfigNode["MsgTags"].asString();
		if(!destConfigNode["EnableMsgTrace"].isNull())
			dataObject.destConfig.enableMsgTrace = destConfigNode["EnableMsgTrace"].asString() == "true";
		if(!destConfigNode["SendMsgTimeout"].isNull())
			dataObject.destConfig.sendMsgTimeout = std::stol(destConfigNode["SendMsgTimeout"].asString());
		auto transferMappingNode = value["TransferMapping"];
		if(!transferMappingNode["Mode"].isNull())
			dataObject.transferMapping.mode = transferMappingNode["Mode"].asString();
		auto allDatabasesNode = transferMappingNode["Databases"]["Database"];
		for (auto transferMappingNodeDatabasesDatabase : allDatabasesNode)
		{
			DataItem::TransferMapping::Database databaseObject;
			if(!transferMappingNodeDatabasesDatabase["TenantName"].isNull())
				databaseObject.tenantName = transferMappingNodeDatabasesDatabase["TenantName"].asString();
			if(!transferMappingNodeDatabasesDatabase["MappedName"].isNull())
				databaseObject.mappedName = transferMappingNodeDatabasesDatabase["MappedName"].asString();
			if(!transferMappingNodeDatabasesDatabase["DatabaseId"].isNull())
				databaseObject.databaseId = transferMappingNodeDatabasesDatabase["DatabaseId"].asString();
			if(!transferMappingNodeDatabasesDatabase["DatabaseName"].isNull())
				databaseObject.databaseName = transferMappingNodeDatabasesDatabase["DatabaseName"].asString();
			if(!transferMappingNodeDatabasesDatabase["Type"].isNull())
				databaseObject.type = transferMappingNodeDatabasesDatabase["Type"].asString();
			auto allTablesNode = transferMappingNodeDatabasesDatabase["Tables"]["Table"];
			for (auto transferMappingNodeDatabasesDatabaseTablesTable : allTablesNode)
			{
				DataItem::TransferMapping::Database::Table tablesObject;
				if(!transferMappingNodeDatabasesDatabaseTablesTable["MappedName"].isNull())
					tablesObject.mappedName = transferMappingNodeDatabasesDatabaseTablesTable["MappedName"].asString();
				if(!transferMappingNodeDatabasesDatabaseTablesTable["TableId"].isNull())
					tablesObject.tableId = transferMappingNodeDatabasesDatabaseTablesTable["TableId"].asString();
				if(!transferMappingNodeDatabasesDatabaseTablesTable["TableName"].isNull())
					tablesObject.tableName = transferMappingNodeDatabasesDatabaseTablesTable["TableName"].asString();
				if(!transferMappingNodeDatabasesDatabaseTablesTable["WhereClause"].isNull())
					tablesObject.whereClause = transferMappingNodeDatabasesDatabaseTablesTable["WhereClause"].asString();
				if(!transferMappingNodeDatabasesDatabaseTablesTable["Type"].isNull())
					tablesObject.type = transferMappingNodeDatabasesDatabaseTablesTable["Type"].asString();
				auto adbTableSchemaNode = value["AdbTableSchema"];
				if(!adbTableSchemaNode["PartitionStatement"].isNull())
					tablesObject.adbTableSchema.partitionStatement = adbTableSchemaNode["PartitionStatement"].asString();
				if(!adbTableSchemaNode["PartitionLifeCycle"].isNull())
					tablesObject.adbTableSchema.partitionLifeCycle = std::stoi(adbTableSchemaNode["PartitionLifeCycle"].asString());
					auto allPrimaryKeys = adbTableSchemaNode["PrimaryKeys"]["PrimaryKey"];
					for (auto value : allPrimaryKeys)
						tablesObject.adbTableSchema.primaryKeys.push_back(value.asString());
					auto allDistributedKeys = adbTableSchemaNode["DistributedKeys"]["DistributedKey"];
					for (auto value : allDistributedKeys)
						tablesObject.adbTableSchema.distributedKeys.push_back(value.asString());
				auto allFilterColumns = value["FilterColumns"]["FilterColumn"];
				for (auto value : allFilterColumns)
					tablesObject.filterColumns.push_back(value.asString());
				auto allShardColumns = value["ShardColumns"]["ShardColumn"];
				for (auto value : allShardColumns)
					tablesObject.shardColumns.push_back(value.asString());
				databaseObject.tables.push_back(tablesObject);
			}
			dataObject.transferMapping.databases.push_back(databaseObject);
		}
		auto transferStepConfigNode = value["TransferStepConfig"];
		if(!transferStepConfigNode["EnableStructSync"].isNull())
			dataObject.transferStepConfig.enableStructSync = transferStepConfigNode["EnableStructSync"].asString() == "true";
		if(!transferStepConfigNode["EnableFullSync"].isNull())
			dataObject.transferStepConfig.enableFullSync = transferStepConfigNode["EnableFullSync"].asString() == "true";
		if(!transferStepConfigNode["EnableIncrSync"].isNull())
			dataObject.transferStepConfig.enableIncrSync = transferStepConfigNode["EnableIncrSync"].asString() == "true";
		auto incrSyncStepTransferConfigNode = transferStepConfigNode["IncrSyncStepTransferConfig"];
		if(!incrSyncStepTransferConfigNode["StartTimestamp"].isNull())
			dataObject.transferStepConfig.incrSyncStepTransferConfig.startTimestamp = std::stol(incrSyncStepTransferConfigNode["StartTimestamp"].asString());
		if(!incrSyncStepTransferConfigNode["StoreLogKeptHour"].isNull())
			dataObject.transferStepConfig.incrSyncStepTransferConfig.storeLogKeptHour = std::stol(incrSyncStepTransferConfigNode["StoreLogKeptHour"].asString());
		if(!incrSyncStepTransferConfigNode["StoreTransactionEnabled"].isNull())
			dataObject.transferStepConfig.incrSyncStepTransferConfig.storeTransactionEnabled = incrSyncStepTransferConfigNode["StoreTransactionEnabled"].asString() == "true";
		if(!incrSyncStepTransferConfigNode["TransferStepType"].isNull())
			dataObject.transferStepConfig.incrSyncStepTransferConfig.transferStepType = incrSyncStepTransferConfigNode["TransferStepType"].asString();
			auto allRecordTypeList = incrSyncStepTransferConfigNode["RecordTypeList"]["RecordTypeList"];
			for (auto value : allRecordTypeList)
				dataObject.transferStepConfig.incrSyncStepTransferConfig.recordTypeList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	auto errorDetail1Node = value["ErrorDetail"];
	if(!errorDetail1Node["Code"].isNull())
		errorDetail1_.code = errorDetail1Node["Code"].asString();
	if(!errorDetail1Node["Level"].isNull())
		errorDetail1_.level = errorDetail1Node["Level"].asString();
	if(!errorDetail1Node["Message"].isNull())
		errorDetail1_.message = errorDetail1Node["Message"].asString();
	if(!errorDetail1Node["Proposal"].isNull())
		errorDetail1_.proposal = errorDetail1Node["Proposal"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Cost"].isNull())
		cost_ = value["Cost"].asString();

}

long SearchOmsOpenAPIProjectsResult::getTotalCount()const
{
	return totalCount_;
}

std::string SearchOmsOpenAPIProjectsResult::getMessage()const
{
	return message_;
}

int SearchOmsOpenAPIProjectsResult::getPageSize()const
{
	return pageSize_;
}

int SearchOmsOpenAPIProjectsResult::getPageNumber()const
{
	return pageNumber_;
}

SearchOmsOpenAPIProjectsResult::ErrorDetail1 SearchOmsOpenAPIProjectsResult::getErrorDetail1()const
{
	return errorDetail1_;
}

std::vector<SearchOmsOpenAPIProjectsResult::DataItem> SearchOmsOpenAPIProjectsResult::getData()const
{
	return data_;
}

std::string SearchOmsOpenAPIProjectsResult::getAdvice()const
{
	return advice_;
}

std::string SearchOmsOpenAPIProjectsResult::getCode()const
{
	return code_;
}

std::string SearchOmsOpenAPIProjectsResult::getCost()const
{
	return cost_;
}

bool SearchOmsOpenAPIProjectsResult::getSuccess()const
{
	return success_;
}

