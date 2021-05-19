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

#include <alibabacloud/scsp/model/ExecuteActivityRequest.h>

using AlibabaCloud::Scsp::Model::ExecuteActivityRequest;

ExecuteActivityRequest::ExecuteActivityRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "ExecuteActivity")
{
	setMethod(HttpRequest::Method::Post);
}

ExecuteActivityRequest::~ExecuteActivityRequest()
{}

std::string ExecuteActivityRequest::getClientToken()const
{
	return clientToken_;
}

void ExecuteActivityRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string ExecuteActivityRequest::getInstanceId()const
{
	return instanceId_;
}

void ExecuteActivityRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long ExecuteActivityRequest::getTicketId()const
{
	return ticketId_;
}

void ExecuteActivityRequest::setTicketId(long ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", std::to_string(ticketId));
}

long ExecuteActivityRequest::getOperatorId()const
{
	return operatorId_;
}

void ExecuteActivityRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setBodyParameter("OperatorId", std::to_string(operatorId));
}

std::string ExecuteActivityRequest::getActivityCode()const
{
	return activityCode_;
}

void ExecuteActivityRequest::setActivityCode(const std::string& activityCode)
{
	activityCode_ = activityCode;
	setBodyParameter("ActivityCode", activityCode);
}

std::string ExecuteActivityRequest::getActivityForm()const
{
	return activityForm_;
}

void ExecuteActivityRequest::setActivityForm(const std::string& activityForm)
{
	activityForm_ = activityForm;
	setBodyParameter("ActivityForm", activityForm);
}

