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

#include <alibabacloud/scsp/model/AssignTicketRequest.h>

using AlibabaCloud::Scsp::Model::AssignTicketRequest;

AssignTicketRequest::AssignTicketRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "AssignTicket")
{
	setMethod(HttpRequest::Method::Post);
}

AssignTicketRequest::~AssignTicketRequest()
{}

std::string AssignTicketRequest::getClientToken()const
{
	return clientToken_;
}

void AssignTicketRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string AssignTicketRequest::getInstanceId()const
{
	return instanceId_;
}

void AssignTicketRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long AssignTicketRequest::getTicketId()const
{
	return ticketId_;
}

void AssignTicketRequest::setTicketId(long ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", std::to_string(ticketId));
}

long AssignTicketRequest::getOperatorId()const
{
	return operatorId_;
}

void AssignTicketRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setBodyParameter("OperatorId", std::to_string(operatorId));
}

long AssignTicketRequest::getAcceptorId()const
{
	return acceptorId_;
}

void AssignTicketRequest::setAcceptorId(long acceptorId)
{
	acceptorId_ = acceptorId;
	setBodyParameter("AcceptorId", std::to_string(acceptorId));
}

