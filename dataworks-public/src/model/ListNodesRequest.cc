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

#include <alibabacloud/dataworks-public/model/ListNodesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListNodesRequest;

ListNodesRequest::ListNodesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListNodes")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodesRequest::~ListNodesRequest()
{}

std::string ListNodesRequest::getOwner()const
{
	return owner_;
}

void ListNodesRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setBodyParameter("Owner", owner);
}

std::string ListNodesRequest::getProjectEnv()const
{
	return projectEnv_;
}

void ListNodesRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

std::string ListNodesRequest::getBizName()const
{
	return bizName_;
}

void ListNodesRequest::setBizName(const std::string& bizName)
{
	bizName_ = bizName;
	setBodyParameter("BizName", bizName);
}

int ListNodesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListNodesRequest::getNodeName()const
{
	return nodeName_;
}

void ListNodesRequest::setNodeName(const std::string& nodeName)
{
	nodeName_ = nodeName;
	setBodyParameter("NodeName", nodeName);
}

std::string ListNodesRequest::getProgramType()const
{
	return programType_;
}

void ListNodesRequest::setProgramType(const std::string& programType)
{
	programType_ = programType;
	setBodyParameter("ProgramType", programType);
}

int ListNodesRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListNodesRequest::getProjectId()const
{
	return projectId_;
}

void ListNodesRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

