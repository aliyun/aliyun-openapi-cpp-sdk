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

#include <alibabacloud/dataworks-public/model/ListInstancesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListInstances")
{
	setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest()
{}

std::string ListInstancesRequest::getProjectEnv()const
{
	return projectEnv_;
}

void ListInstancesRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

std::string ListInstancesRequest::getOwner()const
{
	return owner_;
}

void ListInstancesRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setBodyParameter("Owner", owner);
}

std::string ListInstancesRequest::getBizName()const
{
	return bizName_;
}

void ListInstancesRequest::setBizName(const std::string& bizName)
{
	bizName_ = bizName;
	setBodyParameter("BizName", bizName);
}

std::string ListInstancesRequest::getBeginBizdate()const
{
	return beginBizdate_;
}

void ListInstancesRequest::setBeginBizdate(const std::string& beginBizdate)
{
	beginBizdate_ = beginBizdate;
	setBodyParameter("BeginBizdate", beginBizdate);
}

std::string ListInstancesRequest::getEndBizdate()const
{
	return endBizdate_;
}

void ListInstancesRequest::setEndBizdate(const std::string& endBizdate)
{
	endBizdate_ = endBizdate;
	setBodyParameter("EndBizdate", endBizdate);
}

long ListInstancesRequest::getDagId()const
{
	return dagId_;
}

void ListInstancesRequest::setDagId(long dagId)
{
	dagId_ = dagId;
	setBodyParameter("DagId", std::to_string(dagId));
}

int ListInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListInstancesRequest::getNodeName()const
{
	return nodeName_;
}

void ListInstancesRequest::setNodeName(const std::string& nodeName)
{
	nodeName_ = nodeName;
	setBodyParameter("NodeName", nodeName);
}

std::string ListInstancesRequest::getProgramType()const
{
	return programType_;
}

void ListInstancesRequest::setProgramType(const std::string& programType)
{
	programType_ = programType;
	setBodyParameter("ProgramType", programType);
}

std::string ListInstancesRequest::getBizdate()const
{
	return bizdate_;
}

void ListInstancesRequest::setBizdate(const std::string& bizdate)
{
	bizdate_ = bizdate;
	setBodyParameter("Bizdate", bizdate);
}

int ListInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListInstancesRequest::getNodeId()const
{
	return nodeId_;
}

void ListInstancesRequest::setNodeId(long nodeId)
{
	nodeId_ = nodeId;
	setBodyParameter("NodeId", std::to_string(nodeId));
}

long ListInstancesRequest::getProjectId()const
{
	return projectId_;
}

void ListInstancesRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

