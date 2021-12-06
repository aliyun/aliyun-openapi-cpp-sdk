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

#include <alibabacloud/dataworks-public/model/GetIDEEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetIDEEventDetailResult::GetIDEEventDetailResult() :
	ServiceResult()
{}

GetIDEEventDetailResult::GetIDEEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIDEEventDetailResult::~GetIDEEventDetailResult()
{}

void GetIDEEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto eventDetailNode = value["EventDetail"];
	auto fileExecutionCommandNode = eventDetailNode["FileExecutionCommand"];
	if(!fileExecutionCommandNode["FileId"].isNull())
		eventDetail_.fileExecutionCommand.fileId = std::stol(fileExecutionCommandNode["FileId"].asString());
	if(!fileExecutionCommandNode["DataSourceName"].isNull())
		eventDetail_.fileExecutionCommand.dataSourceName = fileExecutionCommandNode["DataSourceName"].asString();
	if(!fileExecutionCommandNode["Content"].isNull())
		eventDetail_.fileExecutionCommand.content = fileExecutionCommandNode["Content"].asString();
	if(!fileExecutionCommandNode["FileType"].isNull())
		eventDetail_.fileExecutionCommand.fileType = std::stol(fileExecutionCommandNode["FileType"].asString());
	auto deletedFileNode = eventDetailNode["DeletedFile"];
	if(!deletedFileNode["Owner"].isNull())
		eventDetail_.deletedFile.owner = deletedFileNode["Owner"].asString();
	if(!deletedFileNode["FileType"].isNull())
		eventDetail_.deletedFile.fileType = std::stol(deletedFileNode["FileType"].asString());
	if(!deletedFileNode["CurrentVersion"].isNull())
		eventDetail_.deletedFile.currentVersion = std::stol(deletedFileNode["CurrentVersion"].asString());
	if(!deletedFileNode["BusinessId"].isNull())
		eventDetail_.deletedFile.businessId = std::stol(deletedFileNode["BusinessId"].asString());
	if(!deletedFileNode["FileName"].isNull())
		eventDetail_.deletedFile.fileName = deletedFileNode["FileName"].asString();
	if(!deletedFileNode["DataSourceName"].isNull())
		eventDetail_.deletedFile.dataSourceName = deletedFileNode["DataSourceName"].asString();
	if(!deletedFileNode["UseType"].isNull())
		eventDetail_.deletedFile.useType = deletedFileNode["UseType"].asString();
	if(!deletedFileNode["FolderId"].isNull())
		eventDetail_.deletedFile.folderId = deletedFileNode["FolderId"].asString();
	if(!deletedFileNode["ParentFileId"].isNull())
		eventDetail_.deletedFile.parentFileId = std::stol(deletedFileNode["ParentFileId"].asString());
	if(!deletedFileNode["Content"].isNull())
		eventDetail_.deletedFile.content = deletedFileNode["Content"].asString();
	if(!deletedFileNode["NodeId"].isNull())
		eventDetail_.deletedFile.nodeId = std::stol(deletedFileNode["NodeId"].asString());
	if(!deletedFileNode["FileId"].isNull())
		eventDetail_.deletedFile.fileId = std::stol(deletedFileNode["FileId"].asString());
	auto committedFileNode = eventDetailNode["CommittedFile"];
	if(!committedFileNode["FileId"].isNull())
		eventDetail_.committedFile.fileId = std::stol(committedFileNode["FileId"].asString());
	if(!committedFileNode["Content"].isNull())
		eventDetail_.committedFile.content = committedFileNode["Content"].asString();
	if(!committedFileNode["Committor"].isNull())
		eventDetail_.committedFile.committor = committedFileNode["Committor"].asString();
	if(!committedFileNode["FileType"].isNull())
		eventDetail_.committedFile.fileType = std::stol(committedFileNode["FileType"].asString());
	if(!committedFileNode["ChangeType"].isNull())
		eventDetail_.committedFile.changeType = committedFileNode["ChangeType"].asString();
	if(!committedFileNode["FileName"].isNull())
		eventDetail_.committedFile.fileName = committedFileNode["FileName"].asString();
	if(!committedFileNode["NodeId"].isNull())
		eventDetail_.committedFile.nodeId = std::stol(committedFileNode["NodeId"].asString());
	if(!committedFileNode["Comment"].isNull())
		eventDetail_.committedFile.comment = committedFileNode["Comment"].asString();
	if(!committedFileNode["UseType"].isNull())
		eventDetail_.committedFile.useType = committedFileNode["UseType"].asString();
	auto filePropertyContentNode = committedFileNode["FilePropertyContent"];
	if(!filePropertyContentNode["DataSourceName"].isNull())
		eventDetail_.committedFile.filePropertyContent.dataSourceName = filePropertyContentNode["DataSourceName"].asString();
	if(!filePropertyContentNode["ParentFileId"].isNull())
		eventDetail_.committedFile.filePropertyContent.parentFileId = std::stol(filePropertyContentNode["ParentFileId"].asString());
	if(!filePropertyContentNode["BusinessId"].isNull())
		eventDetail_.committedFile.filePropertyContent.businessId = std::stol(filePropertyContentNode["BusinessId"].asString());
	if(!filePropertyContentNode["CurrentVersion"].isNull())
		eventDetail_.committedFile.filePropertyContent.currentVersion = std::stol(filePropertyContentNode["CurrentVersion"].asString());
	if(!filePropertyContentNode["Owner"].isNull())
		eventDetail_.committedFile.filePropertyContent.owner = filePropertyContentNode["Owner"].asString();
	if(!filePropertyContentNode["FolderId"].isNull())
		eventDetail_.committedFile.filePropertyContent.folderId = filePropertyContentNode["FolderId"].asString();
	auto nodeConfigurationNode = committedFileNode["NodeConfiguration"];
	if(!nodeConfigurationNode["RerunMode"].isNull())
		eventDetail_.committedFile.nodeConfiguration.rerunMode = nodeConfigurationNode["RerunMode"].asString();
	if(!nodeConfigurationNode["SchedulerType"].isNull())
		eventDetail_.committedFile.nodeConfiguration.schedulerType = nodeConfigurationNode["SchedulerType"].asString();
	if(!nodeConfigurationNode["ParaValue"].isNull())
		eventDetail_.committedFile.nodeConfiguration.paraValue = nodeConfigurationNode["ParaValue"].asString();
	if(!nodeConfigurationNode["CycleType"].isNull())
		eventDetail_.committedFile.nodeConfiguration.cycleType = nodeConfigurationNode["CycleType"].asString();
	if(!nodeConfigurationNode["DependentNodeIdList"].isNull())
		eventDetail_.committedFile.nodeConfiguration.dependentNodeIdList = nodeConfigurationNode["DependentNodeIdList"].asString();
	if(!nodeConfigurationNode["ResourceGroupId"].isNull())
		eventDetail_.committedFile.nodeConfiguration.resourceGroupId = std::stol(nodeConfigurationNode["ResourceGroupId"].asString());
	if(!nodeConfigurationNode["AutoRerunTimes"].isNull())
		eventDetail_.committedFile.nodeConfiguration.autoRerunTimes = std::stol(nodeConfigurationNode["AutoRerunTimes"].asString());
	if(!nodeConfigurationNode["AutoRerunIntervalMillis"].isNull())
		eventDetail_.committedFile.nodeConfiguration.autoRerunIntervalMillis = std::stol(nodeConfigurationNode["AutoRerunIntervalMillis"].asString());
	if(!nodeConfigurationNode["CronExpress"].isNull())
		eventDetail_.committedFile.nodeConfiguration.cronExpress = nodeConfigurationNode["CronExpress"].asString();
	if(!nodeConfigurationNode["DependentType"].isNull())
		eventDetail_.committedFile.nodeConfiguration.dependentType = nodeConfigurationNode["DependentType"].asString();
	auto allInputListNode = nodeConfigurationNode["InputList"]["Input"];
	for (auto nodeConfigurationNodeInputListInput : allInputListNode)
	{
		EventDetail::CommittedFile::NodeConfiguration::Input inputObject;
		if(!nodeConfigurationNodeInputListInput["Input"].isNull())
			inputObject.input = nodeConfigurationNodeInputListInput["Input"].asString();
		if(!nodeConfigurationNodeInputListInput["ParseType"].isNull())
			inputObject.parseType = nodeConfigurationNodeInputListInput["ParseType"].asString();
		eventDetail_.committedFile.nodeConfiguration.inputList.push_back(inputObject);
	}
	auto allOutputListNode = nodeConfigurationNode["OutputList"]["Output"];
	for (auto nodeConfigurationNodeOutputListOutput : allOutputListNode)
	{
		EventDetail::CommittedFile::NodeConfiguration::Output outputObject;
		if(!nodeConfigurationNodeOutputListOutput["RefTableName"].isNull())
			outputObject.refTableName = nodeConfigurationNodeOutputListOutput["RefTableName"].asString();
		if(!nodeConfigurationNodeOutputListOutput["Output"].isNull())
			outputObject.output = nodeConfigurationNodeOutputListOutput["Output"].asString();
		eventDetail_.committedFile.nodeConfiguration.outputList.push_back(outputObject);
	}
	auto tableModelNode = eventDetailNode["TableModel"];
	if(!tableModelNode["Env"].isNull())
		eventDetail_.tableModel.env = tableModelNode["Env"].asString();
	if(!tableModelNode["LifeCycle"].isNull())
		eventDetail_.tableModel.lifeCycle = std::stol(tableModelNode["LifeCycle"].asString());
	if(!tableModelNode["TableName"].isNull())
		eventDetail_.tableModel.tableName = tableModelNode["TableName"].asString();
	if(!tableModelNode["DataSourceName"].isNull())
		eventDetail_.tableModel.dataSourceName = tableModelNode["DataSourceName"].asString();
	if(!tableModelNode["Comment"].isNull())
		eventDetail_.tableModel.comment = tableModelNode["Comment"].asString();
	if(!tableModelNode["Location"].isNull())
		eventDetail_.tableModel.location = tableModelNode["Location"].asString();
	auto allColumnsNode = tableModelNode["Columns"]["Column"];
	for (auto tableModelNodeColumnsColumn : allColumnsNode)
	{
		EventDetail::TableModel::Column columnObject;
		if(!tableModelNodeColumnsColumn["ColumnName"].isNull())
			columnObject.columnName = tableModelNodeColumnsColumn["ColumnName"].asString();
		if(!tableModelNodeColumnsColumn["ColumnType"].isNull())
			columnObject.columnType = tableModelNodeColumnsColumn["ColumnType"].asString();
		if(!tableModelNodeColumnsColumn["IsPartitionColumn"].isNull())
			columnObject.isPartitionColumn = tableModelNodeColumnsColumn["IsPartitionColumn"].asString() == "true";
		if(!tableModelNodeColumnsColumn["Comment"].isNull())
			columnObject.comment = tableModelNodeColumnsColumn["Comment"].asString();
		eventDetail_.tableModel.columns.push_back(columnObject);
	}

}

GetIDEEventDetailResult::EventDetail GetIDEEventDetailResult::getEventDetail()const
{
	return eventDetail_;
}

