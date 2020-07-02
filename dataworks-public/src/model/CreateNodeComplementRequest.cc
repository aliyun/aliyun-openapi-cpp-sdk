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

#include <alibabacloud/dataworks-public/model/CreateNodeComplementRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateNodeComplementRequest;

CreateNodeComplementRequest::CreateNodeComplementRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateNodeComplement")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNodeComplementRequest::~CreateNodeComplementRequest()
{}

std::string CreateNodeComplementRequest::getProjectEnv()const
{
	return projectEnv_;
}

void CreateNodeComplementRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

std::string CreateNodeComplementRequest::getStartBizDate()const
{
	return startBizDate_;
}

void CreateNodeComplementRequest::setStartBizDate(const std::string& startBizDate)
{
	startBizDate_ = startBizDate;
	setBodyParameter("StartBizDate", startBizDate);
}

bool CreateNodeComplementRequest::getParallelism()const
{
	return parallelism_;
}

void CreateNodeComplementRequest::setParallelism(bool parallelism)
{
	parallelism_ = parallelism;
	setBodyParameter("Parallelism", parallelism ? "true" : "false");
}

std::string CreateNodeComplementRequest::getBizBeginTime()const
{
	return bizBeginTime_;
}

void CreateNodeComplementRequest::setBizBeginTime(const std::string& bizBeginTime)
{
	bizBeginTime_ = bizBeginTime;
	setBodyParameter("BizBeginTime", bizBeginTime);
}

std::string CreateNodeComplementRequest::getEndBizDate()const
{
	return endBizDate_;
}

void CreateNodeComplementRequest::setEndBizDate(const std::string& endBizDate)
{
	endBizDate_ = endBizDate;
	setBodyParameter("EndBizDate", endBizDate);
}

std::string CreateNodeComplementRequest::getIncludeNodeIds()const
{
	return includeNodeIds_;
}

void CreateNodeComplementRequest::setIncludeNodeIds(const std::string& includeNodeIds)
{
	includeNodeIds_ = includeNodeIds;
	setBodyParameter("IncludeNodeIds", includeNodeIds);
}

std::string CreateNodeComplementRequest::getBizEndTime()const
{
	return bizEndTime_;
}

void CreateNodeComplementRequest::setBizEndTime(const std::string& bizEndTime)
{
	bizEndTime_ = bizEndTime;
	setBodyParameter("BizEndTime", bizEndTime);
}

std::string CreateNodeComplementRequest::getName()const
{
	return name_;
}

void CreateNodeComplementRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateNodeComplementRequest::getExcludeNodeIds()const
{
	return excludeNodeIds_;
}

void CreateNodeComplementRequest::setExcludeNodeIds(const std::string& excludeNodeIds)
{
	excludeNodeIds_ = excludeNodeIds;
	setBodyParameter("ExcludeNodeIds", excludeNodeIds);
}

long CreateNodeComplementRequest::getNodeId()const
{
	return nodeId_;
}

void CreateNodeComplementRequest::setNodeId(long nodeId)
{
	nodeId_ = nodeId;
	setBodyParameter("NodeId", std::to_string(nodeId));
}

long CreateNodeComplementRequest::getNodeProjectId()const
{
	return nodeProjectId_;
}

void CreateNodeComplementRequest::setNodeProjectId(long nodeProjectId)
{
	nodeProjectId_ = nodeProjectId;
	setBodyParameter("NodeProjectId", std::to_string(nodeProjectId));
}

