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

#include <alibabacloud/scsp/model/SearchTicketListRequest.h>

using AlibabaCloud::Scsp::Model::SearchTicketListRequest;

SearchTicketListRequest::SearchTicketListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SearchTicketList")
{
	setMethod(HttpRequest::Method::Get);
}

SearchTicketListRequest::~SearchTicketListRequest()
{}

std::string SearchTicketListRequest::getClientToken()const
{
	return clientToken_;
}

void SearchTicketListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string SearchTicketListRequest::getInstanceId()const
{
	return instanceId_;
}

void SearchTicketListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long SearchTicketListRequest::getOperatorId()const
{
	return operatorId_;
}

void SearchTicketListRequest::setOperatorId(long operatorId)
{
	operatorId_ = operatorId;
	setParameter("OperatorId", std::to_string(operatorId));
}

std::string SearchTicketListRequest::getTicketStatus()const
{
	return ticketStatus_;
}

void SearchTicketListRequest::setTicketStatus(const std::string& ticketStatus)
{
	ticketStatus_ = ticketStatus;
	setParameter("TicketStatus", ticketStatus);
}

int SearchTicketListRequest::getPageNo()const
{
	return pageNo_;
}

void SearchTicketListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int SearchTicketListRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTicketListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long SearchTicketListRequest::getStartTime()const
{
	return startTime_;
}

void SearchTicketListRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long SearchTicketListRequest::getEndTime()const
{
	return endTime_;
}

void SearchTicketListRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

