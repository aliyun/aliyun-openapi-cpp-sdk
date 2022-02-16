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

#include <alibabacloud/emr/model/RunApplicationActionRequest.h>

using AlibabaCloud::Emr::Model::RunApplicationActionRequest;

RunApplicationActionRequest::RunApplicationActionRequest() :
	RpcServiceRequest("emr", "2021-03-20", "RunApplicationAction")
{
	setMethod(HttpRequest::Method::Post);
}

RunApplicationActionRequest::~RunApplicationActionRequest()
{}

std::string RunApplicationActionRequest::getClientToken()const
{
	return clientToken_;
}

void RunApplicationActionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RunApplicationActionRequest::getDescription()const
{
	return description_;
}

void RunApplicationActionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string RunApplicationActionRequest::getRegionId()const
{
	return regionId_;
}

void RunApplicationActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RunApplicationActionRequest::getExecuteStrategy()const
{
	return executeStrategy_;
}

void RunApplicationActionRequest::setExecuteStrategy(const std::string& executeStrategy)
{
	executeStrategy_ = executeStrategy;
	setParameter("ExecuteStrategy", executeStrategy);
}

int RunApplicationActionRequest::getNodeCountPerBatch()const
{
	return nodeCountPerBatch_;
}

void RunApplicationActionRequest::setNodeCountPerBatch(int nodeCountPerBatch)
{
	nodeCountPerBatch_ = nodeCountPerBatch;
	setParameter("NodeCountPerBatch", std::to_string(nodeCountPerBatch));
}

Struct RunApplicationActionRequest::getComponentInstanceSelector()const
{
	return componentInstanceSelector_;
}

void RunApplicationActionRequest::setComponentInstanceSelector(const Struct& componentInstanceSelector)
{
	componentInstanceSelector_ = componentInstanceSelector;
	setParameter("ComponentInstanceSelector", std::to_string(componentInstanceSelector));
}

bool RunApplicationActionRequest::getRollingExecute()const
{
	return rollingExecute_;
}

void RunApplicationActionRequest::setRollingExecute(bool rollingExecute)
{
	rollingExecute_ = rollingExecute;
	setParameter("RollingExecute", rollingExecute ? "true" : "false");
}

std::string RunApplicationActionRequest::getClusterId()const
{
	return clusterId_;
}

void RunApplicationActionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RunApplicationActionRequest::getActionName()const
{
	return actionName_;
}

void RunApplicationActionRequest::setActionName(const std::string& actionName)
{
	actionName_ = actionName;
	setParameter("ActionName", actionName);
}

std::string RunApplicationActionRequest::getCommand()const
{
	return command_;
}

void RunApplicationActionRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

long RunApplicationActionRequest::getInterval()const
{
	return interval_;
}

void RunApplicationActionRequest::setInterval(long interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

Array RunApplicationActionRequest::getCustomParams()const
{
	return customParams_;
}

void RunApplicationActionRequest::setCustomParams(const Array& customParams)
{
	customParams_ = customParams;
	setParameter("CustomParams", std::to_string(customParams));
}

std::string RunApplicationActionRequest::getSystemDebug()const
{
	return systemDebug_;
}

void RunApplicationActionRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

