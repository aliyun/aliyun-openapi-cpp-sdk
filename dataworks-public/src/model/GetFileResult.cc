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

#include <alibabacloud/dataworks-public/model/GetFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetFileResult::GetFileResult() :
	ServiceResult()
{}

GetFileResult::GetFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileResult::~GetFileResult()
{}

void GetFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto fileNode = dataNode["File"];
	if(!fileNode["ConnectionName"].isNull())
		data_.file.connectionName = fileNode["ConnectionName"].asString();
	if(!fileNode["ParentId"].isNull())
		data_.file.parentId = std::stol(fileNode["ParentId"].asString());
	if(!fileNode["IsMaxCompute"].isNull())
		data_.file.isMaxCompute = fileNode["IsMaxCompute"].asString() == "true";
	if(!fileNode["CreateTime"].isNull())
		data_.file.createTime = std::stol(fileNode["CreateTime"].asString());
	if(!fileNode["CreateUser"].isNull())
		data_.file.createUser = fileNode["CreateUser"].asString();
	if(!fileNode["BizId"].isNull())
		data_.file.bizId = std::stol(fileNode["BizId"].asString());
	if(!fileNode["FileFolderId"].isNull())
		data_.file.fileFolderId = fileNode["FileFolderId"].asString();
	if(!fileNode["FileName"].isNull())
		data_.file.fileName = fileNode["FileName"].asString();
	if(!fileNode["FileType"].isNull())
		data_.file.fileType = std::stoi(fileNode["FileType"].asString());
	if(!fileNode["UseType"].isNull())
		data_.file.useType = fileNode["UseType"].asString();
	if(!fileNode["FileDescription"].isNull())
		data_.file.fileDescription = fileNode["FileDescription"].asString();
	if(!fileNode["Content"].isNull())
		data_.file.content = fileNode["Content"].asString();
	if(!fileNode["NodeId"].isNull())
		data_.file.nodeId = std::stol(fileNode["NodeId"].asString());
	if(!fileNode["CurrentVersion"].isNull())
		data_.file.currentVersion = std::stoi(fileNode["CurrentVersion"].asString());
	if(!fileNode["Owner"].isNull())
		data_.file.owner = fileNode["Owner"].asString();
	if(!fileNode["LastEditUser"].isNull())
		data_.file.lastEditUser = fileNode["LastEditUser"].asString();
	if(!fileNode["LastEditTime"].isNull())
		data_.file.lastEditTime = std::stol(fileNode["LastEditTime"].asString());
	if(!fileNode["CommitStatus"].isNull())
		data_.file.commitStatus = std::stoi(fileNode["CommitStatus"].asString());
	auto nodeConfigurationNode = dataNode["NodeConfiguration"];
	if(!nodeConfigurationNode["AutoRerunTimes"].isNull())
		data_.nodeConfiguration.autoRerunTimes = std::stoi(nodeConfigurationNode["AutoRerunTimes"].asString());
	if(!nodeConfigurationNode["AutoRerunIntervalMillis"].isNull())
		data_.nodeConfiguration.autoRerunIntervalMillis = std::stoi(nodeConfigurationNode["AutoRerunIntervalMillis"].asString());
	if(!nodeConfigurationNode["RerunMode"].isNull())
		data_.nodeConfiguration.rerunMode = nodeConfigurationNode["RerunMode"].asString();
	if(!nodeConfigurationNode["Stop"].isNull())
		data_.nodeConfiguration.stop = nodeConfigurationNode["Stop"].asString() == "true";
	if(!nodeConfigurationNode["ParaValue"].isNull())
		data_.nodeConfiguration.paraValue = nodeConfigurationNode["ParaValue"].asString();
	if(!nodeConfigurationNode["StartEffectDate"].isNull())
		data_.nodeConfiguration.startEffectDate = std::stol(nodeConfigurationNode["StartEffectDate"].asString());
	if(!nodeConfigurationNode["EndEffectDate"].isNull())
		data_.nodeConfiguration.endEffectDate = std::stol(nodeConfigurationNode["EndEffectDate"].asString());
	if(!nodeConfigurationNode["CronExpress"].isNull())
		data_.nodeConfiguration.cronExpress = nodeConfigurationNode["CronExpress"].asString();
	if(!nodeConfigurationNode["CycleType"].isNull())
		data_.nodeConfiguration.cycleType = nodeConfigurationNode["CycleType"].asString();
	if(!nodeConfigurationNode["DependentType"].isNull())
		data_.nodeConfiguration.dependentType = nodeConfigurationNode["DependentType"].asString();
	if(!nodeConfigurationNode["DependentNodeIdList"].isNull())
		data_.nodeConfiguration.dependentNodeIdList = nodeConfigurationNode["DependentNodeIdList"].asString();
	auto allInputListNode = nodeConfigurationNode["InputList"]["NodeInputOutput"];
	for (auto nodeConfigurationNodeInputListNodeInputOutput : allInputListNode)
	{
		Data::NodeConfiguration::NodeInputOutput nodeInputOutputObject;
		if(!nodeConfigurationNodeInputListNodeInputOutput["Input"].isNull())
			nodeInputOutputObject.input = nodeConfigurationNodeInputListNodeInputOutput["Input"].asString();
		data_.nodeConfiguration.inputList.push_back(nodeInputOutputObject);
	}
	auto allOutputListNode = nodeConfigurationNode["OutputList"]["NodeInputOutput"];
	for (auto nodeConfigurationNodeOutputListNodeInputOutput : allOutputListNode)
	{
		Data::NodeConfiguration::NodeInputOutput1 nodeInputOutput1Object;
		if(!nodeConfigurationNodeOutputListNodeInputOutput["Output"].isNull())
			nodeInputOutput1Object.output = nodeConfigurationNodeOutputListNodeInputOutput["Output"].asString();
		if(!nodeConfigurationNodeOutputListNodeInputOutput["RefTableName"].isNull())
			nodeInputOutput1Object.refTableName = nodeConfigurationNodeOutputListNodeInputOutput["RefTableName"].asString();
		data_.nodeConfiguration.outputList.push_back(nodeInputOutput1Object);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int GetFileResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetFileResult::Data GetFileResult::getData()const
{
	return data_;
}

std::string GetFileResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFileResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetFileResult::getSuccess()const
{
	return success_;
}

