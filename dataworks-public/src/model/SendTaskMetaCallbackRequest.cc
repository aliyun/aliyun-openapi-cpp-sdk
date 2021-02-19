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

#include <alibabacloud/dataworks-public/model/SendTaskMetaCallbackRequest.h>

using AlibabaCloud::Dataworks_public::Model::SendTaskMetaCallbackRequest;

SendTaskMetaCallbackRequest::SendTaskMetaCallbackRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "SendTaskMetaCallback")
{
	setMethod(HttpRequest::Method::Post);
}

SendTaskMetaCallbackRequest::~SendTaskMetaCallbackRequest()
{}

std::string SendTaskMetaCallbackRequest::getCode()const
{
	return code_;
}

void SendTaskMetaCallbackRequest::setCode(const std::string& code)
{
	code_ = code;
	setBodyParameter("Code", code);
}

long SendTaskMetaCallbackRequest::getEndTime()const
{
	return endTime_;
}

void SendTaskMetaCallbackRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

std::vector<std::string> SendTaskMetaCallbackRequest::getResources()const
{
	return resources_;
}

void SendTaskMetaCallbackRequest::setResources(const std::vector<std::string>& resources)
{
	resources_ = resources;
	for(int dep1 = 0; dep1!= resources.size(); dep1++) {
		setBodyParameter("Resources."+ std::to_string(dep1), resources.at(dep1));
	}
}

long SendTaskMetaCallbackRequest::getStartTime()const
{
	return startTime_;
}

void SendTaskMetaCallbackRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string SendTaskMetaCallbackRequest::getType()const
{
	return type_;
}

void SendTaskMetaCallbackRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string SendTaskMetaCallbackRequest::getConnectionInfo()const
{
	return connectionInfo_;
}

void SendTaskMetaCallbackRequest::setConnectionInfo(const std::string& connectionInfo)
{
	connectionInfo_ = connectionInfo;
	setBodyParameter("ConnectionInfo", connectionInfo);
}

std::string SendTaskMetaCallbackRequest::getTaskEnvParam()const
{
	return taskEnvParam_;
}

void SendTaskMetaCallbackRequest::setTaskEnvParam(const std::string& taskEnvParam)
{
	taskEnvParam_ = taskEnvParam;
	setBodyParameter("TaskEnvParam", taskEnvParam);
}

std::string SendTaskMetaCallbackRequest::getSubType()const
{
	return subType_;
}

void SendTaskMetaCallbackRequest::setSubType(const std::string& subType)
{
	subType_ = subType;
	setBodyParameter("SubType", subType);
}

long SendTaskMetaCallbackRequest::getTenantId()const
{
	return tenantId_;
}

void SendTaskMetaCallbackRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", std::to_string(tenantId));
}

std::string SendTaskMetaCallbackRequest::getUser()const
{
	return user_;
}

void SendTaskMetaCallbackRequest::setUser(const std::string& user)
{
	user_ = user;
	setBodyParameter("User", user);
}

