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

#include <alibabacloud/scsp/model/QueryTicketCountRequest.h>

using AlibabaCloud::Scsp::Model::QueryTicketCountRequest;

QueryTicketCountRequest::QueryTicketCountRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryTicketCount")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTicketCountRequest::~QueryTicketCountRequest()
{}

std::string QueryTicketCountRequest::getClientToken()const
{
	return clientToken_;
}

void QueryTicketCountRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string QueryTicketCountRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryTicketCountRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long QueryTicketCountRequest::getOperatorId()const
{
	return operatorId_;
}

void QueryTicketCountRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setParameter("OperatorId", std::to_string(operatorId));
}

