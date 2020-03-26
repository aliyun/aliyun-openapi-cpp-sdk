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

#include <alibabacloud/emr/model/ListFlowNodeSqlResultRequest.h>

using AlibabaCloud::Emr::Model::ListFlowNodeSqlResultRequest;

ListFlowNodeSqlResultRequest::ListFlowNodeSqlResultRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowNodeSqlResult")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowNodeSqlResultRequest::~ListFlowNodeSqlResultRequest()
{}

int ListFlowNodeSqlResultRequest::getOffset()const
{
	return offset_;
}

void ListFlowNodeSqlResultRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

int ListFlowNodeSqlResultRequest::getLength()const
{
	return length_;
}

void ListFlowNodeSqlResultRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

int ListFlowNodeSqlResultRequest::getSqlIndex()const
{
	return sqlIndex_;
}

void ListFlowNodeSqlResultRequest::setSqlIndex(int sqlIndex)
{
	sqlIndex_ = sqlIndex;
	setParameter("SqlIndex", std::to_string(sqlIndex));
}

std::string ListFlowNodeSqlResultRequest::getNodeInstanceId()const
{
	return nodeInstanceId_;
}

void ListFlowNodeSqlResultRequest::setNodeInstanceId(const std::string& nodeInstanceId)
{
	nodeInstanceId_ = nodeInstanceId;
	setParameter("NodeInstanceId", nodeInstanceId);
}

std::string ListFlowNodeSqlResultRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowNodeSqlResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListFlowNodeSqlResultRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowNodeSqlResultRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

