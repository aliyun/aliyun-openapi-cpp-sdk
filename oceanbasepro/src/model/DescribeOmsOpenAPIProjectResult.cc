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

#include <alibabacloud/oceanbasepro/model/DescribeOmsOpenAPIProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOmsOpenAPIProjectResult::DescribeOmsOpenAPIProjectResult() :
	ServiceResult()
{}

DescribeOmsOpenAPIProjectResult::DescribeOmsOpenAPIProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOmsOpenAPIProjectResult::~DescribeOmsOpenAPIProjectResult()
{}

void DescribeOmsOpenAPIProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto errorDetailNode = value["ErrorDetail"];
	if(!errorDetailNode["Code"].isNull())
		errorDetail_.code = errorDetailNode["Code"].asString();
	if(!errorDetailNode["Level"].isNull())
		errorDetail_.level = errorDetailNode["Level"].asString();
	if(!errorDetailNode["Message"].isNull())
		errorDetail_.message = errorDetailNode["Message"].asString();
	if(!errorDetailNode["Proposal"].isNull())
		errorDetail_.proposal = errorDetailNode["Proposal"].asString();
	auto dataNode = value["Data"];
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = dataNode["ProjectId"].asString();
	if(!dataNode["ProjectName"].isNull())
		data_.projectName = dataNode["ProjectName"].asString();
	if(!dataNode["ProjectOwner"].isNull())
		data_.projectOwner = dataNode["ProjectOwner"].asString();
	if(!dataNode["BusinessName"].isNull())
		data_.businessName = dataNode["BusinessName"].asString();
	auto allLabelsNode = dataNode["Labels"]["Label"];
	for (auto dataNodeLabelsLabel : allLabelsNode)
	{
		Data::Label labelObject;
		if(!dataNodeLabelsLabel["Id"].isNull())
			labelObject.id = dataNodeLabelsLabel["Id"].asString();
		if(!dataNodeLabelsLabel["Name"].isNull())
			labelObject.name = dataNodeLabelsLabel["Name"].asString();
		if(!dataNodeLabelsLabel["Creator"].isNull())
			labelObject.creator = dataNodeLabelsLabel["Creator"].asString();
		if(!dataNodeLabelsLabel["Count"].isNull())
			labelObject.count = std::stoi(dataNodeLabelsLabel["Count"].asString());
		data_.labels.push_back(labelObject);
	}
	auto allStepsNode = dataNode["Steps"]["Step"];
	for (auto dataNodeStepsStep : allStepsNode)
	{
		Data::Step stepObject;
		if(!dataNodeStepsStep["StepOrder"].isNull())
			stepObject.stepOrder = std::stoi(dataNodeStepsStep["StepOrder"].asString());
		if(!dataNodeStepsStep["StepName"].isNull())
			stepObject.stepName = dataNodeStepsStep["StepName"].asString();
		if(!dataNodeStepsStep["StepDescription"].isNull())
			stepObject.stepDescription = dataNodeStepsStep["StepDescription"].asString();
		if(!dataNodeStepsStep["StepStatus"].isNull())
			stepObject.stepStatus = dataNodeStepsStep["StepStatus"].asString();
		if(!dataNodeStepsStep["StepProgress"].isNull())
			stepObject.stepProgress = std::stoi(dataNodeStepsStep["StepProgress"].asString());
		if(!dataNodeStepsStep["StartTime"].isNull())
			stepObject.startTime = dataNodeStepsStep["StartTime"].asString();
		if(!dataNodeStepsStep["EstimatedRemainingSeconds"].isNull())
			stepObject.estimatedRemainingSeconds = std::stol(dataNodeStepsStep["EstimatedRemainingSeconds"].asString());
		if(!dataNodeStepsStep["FinishTime"].isNull())
			stepObject.finishTime = dataNodeStepsStep["FinishTime"].asString();
		if(!dataNodeStepsStep["Interactive"].isNull())
			stepObject.interactive = dataNodeStepsStep["Interactive"].asString() == "true";
		auto stepInfoNode = value["StepInfo"];
		if(!stepInfoNode["JobId"].isNull())
			stepObject.stepInfo.jobId = stepInfoNode["JobId"].asString();
		if(!stepInfoNode["IncrTimestampCheckpoint"].isNull())
			stepObject.stepInfo.incrTimestampCheckpoint = std::stol(stepInfoNode["IncrTimestampCheckpoint"].asString());
		if(!stepInfoNode["Checkpoint"].isNull())
			stepObject.stepInfo.checkpoint = stepInfoNode["Checkpoint"].asString();
		if(!stepInfoNode["Gmt"].isNull())
			stepObject.stepInfo.gmt = std::stol(stepInfoNode["Gmt"].asString());
		if(!stepInfoNode["Validated"].isNull())
			stepObject.stepInfo.validated = stepInfoNode["Validated"].asString() == "true";
		if(!stepInfoNode["Skipped"].isNull())
			stepObject.stepInfo.skipped = stepInfoNode["Skipped"].asString() == "true";
		if(!stepInfoNode["Inconsistencies"].isNull())
			stepObject.stepInfo.inconsistencies = std::stol(stepInfoNode["Inconsistencies"].asString());
		if(!stepInfoNode["DeployId"].isNull())
			stepObject.stepInfo.deployId = stepInfoNode["DeployId"].asString();
		if(!stepInfoNode["ProcessedRecords"].isNull())
			stepObject.stepInfo.processedRecords = std::stol(stepInfoNode["ProcessedRecords"].asString());
		if(!stepInfoNode["Capacity"].isNull())
			stepObject.stepInfo.capacity = std::stol(stepInfoNode["Capacity"].asString());
		if(!stepInfoNode["SrcRps"].isNull())
			stepObject.stepInfo.srcRps = std::stol(stepInfoNode["SrcRps"].asString());
		if(!stepInfoNode["SrcRt"].isNull())
			stepObject.stepInfo.srcRt = std::stol(stepInfoNode["SrcRt"].asString());
		if(!stepInfoNode["SrcIops"].isNull())
			stepObject.stepInfo.srcIops = std::stol(stepInfoNode["SrcIops"].asString());
		if(!stepInfoNode["DstRps"].isNull())
			stepObject.stepInfo.dstRps = std::stol(stepInfoNode["DstRps"].asString());
		if(!stepInfoNode["DstRt"].isNull())
			stepObject.stepInfo.dstRt = std::stol(stepInfoNode["DstRt"].asString());
		if(!stepInfoNode["DstIops"].isNull())
			stepObject.stepInfo.dstIops = std::stol(stepInfoNode["DstIops"].asString());
		if(!stepInfoNode["SrcRpsRef"].isNull())
			stepObject.stepInfo.srcRpsRef = std::stol(stepInfoNode["SrcRpsRef"].asString());
		if(!stepInfoNode["SrcRtRef"].isNull())
			stepObject.stepInfo.srcRtRef = std::stol(stepInfoNode["SrcRtRef"].asString());
		if(!stepInfoNode["DstRpsRef"].isNull())
			stepObject.stepInfo.dstRpsRef = std::stol(stepInfoNode["DstRpsRef"].asString());
		if(!stepInfoNode["DstRtRef"].isNull())
			stepObject.stepInfo.dstRtRef = std::stol(stepInfoNode["DstRtRef"].asString());
		if(!stepInfoNode["SrcIopsRef"].isNull())
			stepObject.stepInfo.srcIopsRef = std::stol(stepInfoNode["SrcIopsRef"].asString());
		auto connectorFullProgressOverviewNode = stepInfoNode["ConnectorFullProgressOverview"];
		if(!connectorFullProgressOverviewNode["EstimatedTotalCount"].isNull())
			stepObject.stepInfo.connectorFullProgressOverview.estimatedTotalCount = std::stol(connectorFullProgressOverviewNode["EstimatedTotalCount"].asString());
		if(!connectorFullProgressOverviewNode["FinishedCount"].isNull())
			stepObject.stepInfo.connectorFullProgressOverview.finishedCount = std::stol(connectorFullProgressOverviewNode["FinishedCount"].asString());
		if(!connectorFullProgressOverviewNode["Progress"].isNull())
			stepObject.stepInfo.connectorFullProgressOverview.progress = std::stoi(connectorFullProgressOverviewNode["Progress"].asString());
		if(!connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].isNull())
			stepObject.stepInfo.connectorFullProgressOverview.estimatedRemainingTimeOfSec = std::stol(connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].asString());
		auto extraInfoNode = value["ExtraInfo"];
		if(!extraInfoNode["ErrorCode"].isNull())
			stepObject.extraInfo.errorCode = extraInfoNode["ErrorCode"].asString();
		if(!extraInfoNode["ErrorMsg"].isNull())
			stepObject.extraInfo.errorMsg = extraInfoNode["ErrorMsg"].asString();
		if(!extraInfoNode["ErrorParam"].isNull())
			stepObject.extraInfo.errorParam = extraInfoNode["ErrorParam"].asString();
		if(!extraInfoNode["FailedTime"].isNull())
			stepObject.extraInfo.failedTime = extraInfoNode["FailedTime"].asString();
		auto allErrorDetailsNode = extraInfoNode["ErrorDetails"]["ErrorDetail"];
		for (auto extraInfoNodeErrorDetailsErrorDetail : allErrorDetailsNode)
		{
			Data::Step::ExtraInfo::ErrorDetail1 errorDetail1Object;
			if(!extraInfoNodeErrorDetailsErrorDetail["Code"].isNull())
				errorDetail1Object.code = extraInfoNodeErrorDetailsErrorDetail["Code"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Level"].isNull())
				errorDetail1Object.level = extraInfoNodeErrorDetailsErrorDetail["Level"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Message"].isNull())
				errorDetail1Object.message = extraInfoNodeErrorDetailsErrorDetail["Message"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Proposal"].isNull())
				errorDetail1Object.proposal = extraInfoNodeErrorDetailsErrorDetail["Proposal"].asString();
			stepObject.extraInfo.errorDetails.push_back(errorDetail1Object);
		}
		data_.steps.push_back(stepObject);
	}
	auto sourceConfigNode = dataNode["SourceConfig"];
	if(!sourceConfigNode["EndpointType"].isNull())
		data_.sourceConfig.endpointType = sourceConfigNode["EndpointType"].asString();
	if(!sourceConfigNode["EndpointId"].isNull())
		data_.sourceConfig.endpointId = sourceConfigNode["EndpointId"].asString();
	if(!sourceConfigNode["PartitionMode"].isNull())
		data_.sourceConfig.partitionMode = sourceConfigNode["PartitionMode"].asString();
	if(!sourceConfigNode["Partition"].isNull())
		data_.sourceConfig.partition = std::stoi(sourceConfigNode["Partition"].asString());
	if(!sourceConfigNode["SerializerType"].isNull())
		data_.sourceConfig.serializerType = sourceConfigNode["SerializerType"].asString();
	if(!sourceConfigNode["TopicType"].isNull())
		data_.sourceConfig.topicType = sourceConfigNode["TopicType"].asString();
	if(!sourceConfigNode["SequenceEnable"].isNull())
		data_.sourceConfig.sequenceEnable = sourceConfigNode["SequenceEnable"].asString() == "true";
	if(!sourceConfigNode["SequenceStartTimestamp"].isNull())
		data_.sourceConfig.sequenceStartTimestamp = std::stol(sourceConfigNode["SequenceStartTimestamp"].asString());
	if(!sourceConfigNode["ProducerGroup"].isNull())
		data_.sourceConfig.producerGroup = sourceConfigNode["ProducerGroup"].asString();
	if(!sourceConfigNode["MsgTags"].isNull())
		data_.sourceConfig.msgTags = sourceConfigNode["MsgTags"].asString();
	if(!sourceConfigNode["EnableMsgTrace"].isNull())
		data_.sourceConfig.enableMsgTrace = sourceConfigNode["EnableMsgTrace"].asString() == "true";
	if(!sourceConfigNode["SendMsgTimeout"].isNull())
		data_.sourceConfig.sendMsgTimeout = std::stol(sourceConfigNode["SendMsgTimeout"].asString());
	auto destConfigNode = dataNode["DestConfig"];
	if(!destConfigNode["EndpointType"].isNull())
		data_.destConfig.endpointType = destConfigNode["EndpointType"].asString();
	if(!destConfigNode["EndpointId"].isNull())
		data_.destConfig.endpointId = destConfigNode["EndpointId"].asString();
	if(!destConfigNode["PartitionMode"].isNull())
		data_.destConfig.partitionMode = destConfigNode["PartitionMode"].asString();
	if(!destConfigNode["Partition"].isNull())
		data_.destConfig.partition = std::stoi(destConfigNode["Partition"].asString());
	if(!destConfigNode["SerializerType"].isNull())
		data_.destConfig.serializerType = destConfigNode["SerializerType"].asString();
	if(!destConfigNode["TopicType"].isNull())
		data_.destConfig.topicType = destConfigNode["TopicType"].asString();
	if(!destConfigNode["SequenceEnable"].isNull())
		data_.destConfig.sequenceEnable = destConfigNode["SequenceEnable"].asString() == "true";
	if(!destConfigNode["SequenceStartTimestamp"].isNull())
		data_.destConfig.sequenceStartTimestamp = std::stol(destConfigNode["SequenceStartTimestamp"].asString());
	if(!destConfigNode["ProducerGroup"].isNull())
		data_.destConfig.producerGroup = destConfigNode["ProducerGroup"].asString();
	if(!destConfigNode["MsgTags"].isNull())
		data_.destConfig.msgTags = destConfigNode["MsgTags"].asString();
	if(!destConfigNode["EnableMsgTrace"].isNull())
		data_.destConfig.enableMsgTrace = destConfigNode["EnableMsgTrace"].asString() == "true";
	if(!destConfigNode["SendMsgTimeout"].isNull())
		data_.destConfig.sendMsgTimeout = std::stol(destConfigNode["SendMsgTimeout"].asString());
	auto transferMappingNode = dataNode["TransferMapping"];
	if(!transferMappingNode["Mode"].isNull())
		data_.transferMapping.mode = transferMappingNode["Mode"].asString();
	auto allDatabasesNode = transferMappingNode["Databases"]["Database"];
	for (auto transferMappingNodeDatabasesDatabase : allDatabasesNode)
	{
		Data::TransferMapping::Database databaseObject;
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
			Data::TransferMapping::Database::Table tablesObject;
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
		data_.transferMapping.databases.push_back(databaseObject);
	}
	auto transferStepConfigNode = dataNode["TransferStepConfig"];
	if(!transferStepConfigNode["EnableStructSync"].isNull())
		data_.transferStepConfig.enableStructSync = transferStepConfigNode["EnableStructSync"].asString() == "true";
	if(!transferStepConfigNode["EnableFullSync"].isNull())
		data_.transferStepConfig.enableFullSync = transferStepConfigNode["EnableFullSync"].asString() == "true";
	if(!transferStepConfigNode["EnableIncrSync"].isNull())
		data_.transferStepConfig.enableIncrSync = transferStepConfigNode["EnableIncrSync"].asString() == "true";
	auto incrSyncStepTransferConfigNode = transferStepConfigNode["IncrSyncStepTransferConfig"];
	if(!incrSyncStepTransferConfigNode["StartTimestamp"].isNull())
		data_.transferStepConfig.incrSyncStepTransferConfig.startTimestamp = std::stol(incrSyncStepTransferConfigNode["StartTimestamp"].asString());
	if(!incrSyncStepTransferConfigNode["StoreLogKeptHour"].isNull())
		data_.transferStepConfig.incrSyncStepTransferConfig.storeLogKeptHour = std::stol(incrSyncStepTransferConfigNode["StoreLogKeptHour"].asString());
	if(!incrSyncStepTransferConfigNode["StoreTransactionEnabled"].isNull())
		data_.transferStepConfig.incrSyncStepTransferConfig.storeTransactionEnabled = incrSyncStepTransferConfigNode["StoreTransactionEnabled"].asString() == "true";
	if(!incrSyncStepTransferConfigNode["TransferStepType"].isNull())
		data_.transferStepConfig.incrSyncStepTransferConfig.transferStepType = incrSyncStepTransferConfigNode["TransferStepType"].asString();
		auto allRecordTypeList = incrSyncStepTransferConfigNode["RecordTypeList"]["RecordTypeList"];
		for (auto value : allRecordTypeList)
			data_.transferStepConfig.incrSyncStepTransferConfig.recordTypeList.push_back(value.asString());
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

DescribeOmsOpenAPIProjectResult::ErrorDetail DescribeOmsOpenAPIProjectResult::getErrorDetail()const
{
	return errorDetail_;
}

long DescribeOmsOpenAPIProjectResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeOmsOpenAPIProjectResult::getMessage()const
{
	return message_;
}

int DescribeOmsOpenAPIProjectResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOmsOpenAPIProjectResult::getPageNumber()const
{
	return pageNumber_;
}

DescribeOmsOpenAPIProjectResult::Data DescribeOmsOpenAPIProjectResult::getData()const
{
	return data_;
}

std::string DescribeOmsOpenAPIProjectResult::getAdvice()const
{
	return advice_;
}

std::string DescribeOmsOpenAPIProjectResult::getCode()const
{
	return code_;
}

std::string DescribeOmsOpenAPIProjectResult::getCost()const
{
	return cost_;
}

bool DescribeOmsOpenAPIProjectResult::getSuccess()const
{
	return success_;
}

