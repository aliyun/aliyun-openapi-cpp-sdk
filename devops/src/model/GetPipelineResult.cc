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

#include <alibabacloud/devops/model/GetPipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetPipelineResult::GetPipelineResult() :
	ServiceResult()
{}

GetPipelineResult::GetPipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineResult::~GetPipelineResult()
{}

void GetPipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pipelineNode = value["pipeline"];
	if(!pipelineNode["creatorAccountId"].isNull())
		pipeline_.creatorAccountId = pipelineNode["creatorAccountId"].asString();
	if(!pipelineNode["envId"].isNull())
		pipeline_.envId = std::stoi(pipelineNode["envId"].asString());
	if(!pipelineNode["envName"].isNull())
		pipeline_.envName = pipelineNode["envName"].asString();
	if(!pipelineNode["createTime"].isNull())
		pipeline_.createTime = std::stol(pipelineNode["createTime"].asString());
	if(!pipelineNode["updateTime"].isNull())
		pipeline_.updateTime = std::stol(pipelineNode["updateTime"].asString());
	if(!pipelineNode["groupId"].isNull())
		pipeline_.groupId = std::stol(pipelineNode["groupId"].asString());
	if(!pipelineNode["modifierAccountId"].isNull())
		pipeline_.modifierAccountId = pipelineNode["modifierAccountId"].asString();
	if(!pipelineNode["name"].isNull())
		pipeline_.name = pipelineNode["name"].asString();
	auto alltagListNode = pipelineNode["tagList"]["Tag"];
	for (auto pipelineNodetagListTag : alltagListNode)
	{
		Pipeline::Tag tagObject;
		if(!pipelineNodetagListTag["id"].isNull())
			tagObject.id = std::stol(pipelineNodetagListTag["id"].asString());
		if(!pipelineNodetagListTag["name"].isNull())
			tagObject.name = pipelineNodetagListTag["name"].asString();
		pipeline_.tagList.push_back(tagObject);
	}
	auto pipelineConfigNode = pipelineNode["pipelineConfig"];
	if(!pipelineConfigNode["flow"].isNull())
		pipeline_.pipelineConfig.flow = pipelineConfigNode["flow"].asString();
	if(!pipelineConfigNode["settings"].isNull())
		pipeline_.pipelineConfig.settings = pipelineConfigNode["settings"].asString();
	auto allsourcesNode = pipelineConfigNode["sources"]["Source"];
	for (auto pipelineConfigNodesourcesSource : allsourcesNode)
	{
		Pipeline::PipelineConfig::Source sourceObject;
		if(!pipelineConfigNodesourcesSource["sign"].isNull())
			sourceObject.sign = pipelineConfigNodesourcesSource["sign"].asString();
		if(!pipelineConfigNodesourcesSource["type"].isNull())
			sourceObject.type = pipelineConfigNodesourcesSource["type"].asString();
		auto dataNode = value["data"];
		if(!dataNode["branch"].isNull())
			sourceObject.data.branch = dataNode["branch"].asString();
		if(!dataNode["serviceConnectionId"].isNull())
			sourceObject.data.serviceConnectionId = std::stol(dataNode["serviceConnectionId"].asString());
		if(!dataNode["label"].isNull())
			sourceObject.data.label = dataNode["label"].asString();
		if(!dataNode["isTrigger"].isNull())
			sourceObject.data.isTrigger = dataNode["isTrigger"].asString() == "true";
		if(!dataNode["repo"].isNull())
			sourceObject.data.repo = dataNode["repo"].asString();
		if(!dataNode["triggerFilter"].isNull())
			sourceObject.data.triggerFilter = dataNode["triggerFilter"].asString();
		if(!dataNode["webhook"].isNull())
			sourceObject.data.webhook = dataNode["webhook"].asString();
		if(!dataNode["isBranchMode"].isNull())
			sourceObject.data.isBranchMode = dataNode["isBranchMode"].asString() == "true";
		if(!dataNode["isSubmodule"].isNull())
			sourceObject.data.isSubmodule = dataNode["isSubmodule"].asString() == "true";
		if(!dataNode["isCloneDepth"].isNull())
			sourceObject.data.isCloneDepth = dataNode["isCloneDepth"].asString() == "true";
		if(!dataNode["cloneDepth"].isNull())
			sourceObject.data.cloneDepth = std::stol(dataNode["cloneDepth"].asString());
		if(!dataNode["credentialId"].isNull())
			sourceObject.data.credentialId = std::stol(dataNode["credentialId"].asString());
		if(!dataNode["credentialType"].isNull())
			sourceObject.data.credentialType = dataNode["credentialType"].asString();
		if(!dataNode["credentialLabel"].isNull())
			sourceObject.data.credentialLabel = dataNode["credentialLabel"].asString();
		if(!dataNode["namespace"].isNull())
			sourceObject.data._namespace = dataNode["namespace"].asString();
			auto allEvents = dataNode["events"]["Envent"];
			for (auto value : allEvents)
				sourceObject.data.events.push_back(value.asString());
		pipeline_.pipelineConfig.sources.push_back(sourceObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string GetPipelineResult::getRequestId()const
{
	return requestId_;
}

std::string GetPipelineResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineResult::getSuccess()const
{
	return success_;
}

GetPipelineResult::Pipeline GetPipelineResult::getPipeline()const
{
	return pipeline_;
}

