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

#include <alibabacloud/scsp/model/SearchTicketByIdRequest.h>

using AlibabaCloud::Scsp::Model::SearchTicketByIdRequest;

SearchTicketByIdRequest::SearchTicketByIdRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SearchTicketById")
{
	setMethod(HttpRequest::Method::Get);
}

SearchTicketByIdRequest::~SearchTicketByIdRequest()
{}

std::string SearchTicketByIdRequest::getClientToken()const
{
	return clientToken_;
}

void SearchTicketByIdRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string SearchTicketByIdRequest::getInstanceId()const
{
	return instanceId_;
}

void SearchTicketByIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long SearchTicketByIdRequest::getTicketId()const
{
	return ticketId_;
}

void SearchTicketByIdRequest::setTicketId(long ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", std::to_string(ticketId));
}

int SearchTicketByIdRequest::getStatusCode()const
{
	return statusCode_;
}

void SearchTicketByIdRequest::setStatusCode(int statusCode)
{
	statusCode_ = statusCode;
	setParameter("StatusCode", std::to_string(statusCode));
}

