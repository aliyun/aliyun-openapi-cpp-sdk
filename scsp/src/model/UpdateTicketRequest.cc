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

#include <alibabacloud/scsp/model/UpdateTicketRequest.h>

using AlibabaCloud::Scsp::Model::UpdateTicketRequest;

UpdateTicketRequest::UpdateTicketRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateTicket")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateTicketRequest::~UpdateTicketRequest()
{}

std::string UpdateTicketRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateTicketRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string UpdateTicketRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateTicketRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long UpdateTicketRequest::getTicketId()const
{
	return ticketId_;
}

void UpdateTicketRequest::setTicketId(long ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", std::to_string(ticketId));
}

long UpdateTicketRequest::getOperatorId()const
{
	return operatorId_;
}

void UpdateTicketRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setBodyParameter("OperatorId", std::to_string(operatorId));
}

std::string UpdateTicketRequest::getFormData()const
{
	return formData_;
}

void UpdateTicketRequest::setFormData(const std::string& formData)
{
	formData_ = formData;
	setBodyParameter("FormData", formData);
}

