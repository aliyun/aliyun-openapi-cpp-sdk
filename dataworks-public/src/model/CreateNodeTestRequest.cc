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

#include <alibabacloud/dataworks-public/model/CreateNodeTestRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateNodeTestRequest;

CreateNodeTestRequest::CreateNodeTestRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateNodeTest")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNodeTestRequest::~CreateNodeTestRequest()
{}

std::string CreateNodeTestRequest::getProjectEnv()const
{
	return projectEnv_;
}

void CreateNodeTestRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

bool CreateNodeTestRequest::getParallelism()const
{
	return parallelism_;
}

void CreateNodeTestRequest::setParallelism(bool parallelism)
{
	parallelism_ = parallelism;
	setBodyParameter("Parallelism", parallelism ? "true" : "false");
}

std::string CreateNodeTestRequest::getBizBeginTime()const
{
	return bizBeginTime_;
}

void CreateNodeTestRequest::setBizBeginTime(const std::string& bizBeginTime)
{
	bizBeginTime_ = bizBeginTime;
	setBodyParameter("BizBeginTime", bizBeginTime);
}

std::string CreateNodeTestRequest::getIncludeNodeIds()const
{
	return includeNodeIds_;
}

void CreateNodeTestRequest::setIncludeNodeIds(const std::string& includeNodeIds)
{
	includeNodeIds_ = includeNodeIds;
	setBodyParameter("IncludeNodeIds", includeNodeIds);
}

std::string CreateNodeTestRequest::getBizdate()const
{
	return bizdate_;
}

void CreateNodeTestRequest::setBizdate(const std::string& bizdate)
{
	bizdate_ = bizdate;
	setBodyParameter("Bizdate", bizdate);
}

std::string CreateNodeTestRequest::getBizEndTime()const
{
	return bizEndTime_;
}

void CreateNodeTestRequest::setBizEndTime(const std::string& bizEndTime)
{
	bizEndTime_ = bizEndTime;
	setBodyParameter("BizEndTime", bizEndTime);
}

std::string CreateNodeTestRequest::getName()const
{
	return name_;
}

void CreateNodeTestRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateNodeTestRequest::getExcludeNodeIds()const
{
	return excludeNodeIds_;
}

void CreateNodeTestRequest::setExcludeNodeIds(const std::string& excludeNodeIds)
{
	excludeNodeIds_ = excludeNodeIds;
	setBodyParameter("ExcludeNodeIds", excludeNodeIds);
}

long CreateNodeTestRequest::getNodeId()const
{
	return nodeId_;
}

void CreateNodeTestRequest::setNodeId(long nodeId)
{
	nodeId_ = nodeId;
	setBodyParameter("NodeId", std::to_string(nodeId));
}

long CreateNodeTestRequest::getNodeProjectId()const
{
	return nodeProjectId_;
}

void CreateNodeTestRequest::setNodeProjectId(long nodeProjectId)
{
	nodeProjectId_ = nodeProjectId;
	setBodyParameter("NodeProjectId", std::to_string(nodeProjectId));
}

