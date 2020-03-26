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

#include <alibabacloud/ccs/model/ProceedTicketRequest.h>

using AlibabaCloud::Ccs::Model::ProceedTicketRequest;

ProceedTicketRequest::ProceedTicketRequest() :
	RpcServiceRequest("ccs", "2017-10-01", "ProceedTicket")
{
	setMethod(HttpRequest::Method::Post);
}

ProceedTicketRequest::~ProceedTicketRequest()
{}

std::string ProceedTicketRequest::getMemo()const
{
	return memo_;
}

void ProceedTicketRequest::setMemo(const std::string& memo)
{
	memo_ = memo;
	setParameter("Memo", memo);
}

std::string ProceedTicketRequest::getId()const
{
	return id_;
}

void ProceedTicketRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ProceedTicketRequest::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

void ProceedTicketRequest::setCcsInstanceId(const std::string& ccsInstanceId)
{
	ccsInstanceId_ = ccsInstanceId;
	setParameter("CcsInstanceId", ccsInstanceId);
}

std::string ProceedTicketRequest::getOperation()const
{
	return operation_;
}

void ProceedTicketRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

std::string ProceedTicketRequest::getOperatorId()const
{
	return operatorId_;
}

void ProceedTicketRequest::setOperatorId(const std::string& operatorId)
{
	operatorId_ = operatorId;
	setParameter("OperatorId", operatorId);
}

