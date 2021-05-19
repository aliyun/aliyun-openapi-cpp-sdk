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

#include <alibabacloud/scsp/model/CloseTicketRequest.h>

using AlibabaCloud::Scsp::Model::CloseTicketRequest;

CloseTicketRequest::CloseTicketRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CloseTicket")
{
	setMethod(HttpRequest::Method::Post);
}

CloseTicketRequest::~CloseTicketRequest()
{}

std::string CloseTicketRequest::getClientToken()const
{
	return clientToken_;
}

void CloseTicketRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CloseTicketRequest::getInstanceId()const
{
	return instanceId_;
}

void CloseTicketRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long CloseTicketRequest::getTicketId()const
{
	return ticketId_;
}

void CloseTicketRequest::setTicketId(long ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", std::to_string(ticketId));
}

std::string CloseTicketRequest::getActionItems()const
{
	return actionItems_;
}

void CloseTicketRequest::setActionItems(const std::string& actionItems)
{
	actionItems_ = actionItems;
	setBodyParameter("ActionItems", actionItems);
}

long CloseTicketRequest::getOperatorId()const
{
	return operatorId_;
}

void CloseTicketRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setBodyParameter("OperatorId", std::to_string(operatorId));
}

