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

#include <alibabacloud/cassandra/model/ExecuteNodeToolRequest.h>

using AlibabaCloud::Cassandra::Model::ExecuteNodeToolRequest;

ExecuteNodeToolRequest::ExecuteNodeToolRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "ExecuteNodeTool")
{
	setMethod(HttpRequest::Method::Post);
}

ExecuteNodeToolRequest::~ExecuteNodeToolRequest()
{}

std::string ExecuteNodeToolRequest::getExecuteNodes()const
{
	return executeNodes_;
}

void ExecuteNodeToolRequest::setExecuteNodes(const std::string& executeNodes)
{
	executeNodes_ = executeNodes;
	setParameter("ExecuteNodes", executeNodes);
}

std::string ExecuteNodeToolRequest::getDataCenterId()const
{
	return dataCenterId_;
}

void ExecuteNodeToolRequest::setDataCenterId(const std::string& dataCenterId)
{
	dataCenterId_ = dataCenterId;
	setParameter("DataCenterId", dataCenterId);
}

std::string ExecuteNodeToolRequest::getClusterId()const
{
	return clusterId_;
}

void ExecuteNodeToolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ExecuteNodeToolRequest::getCommand()const
{
	return command_;
}

void ExecuteNodeToolRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string ExecuteNodeToolRequest::getArguments()const
{
	return arguments_;
}

void ExecuteNodeToolRequest::setArguments(const std::string& arguments)
{
	arguments_ = arguments;
	setParameter("Arguments", arguments);
}

