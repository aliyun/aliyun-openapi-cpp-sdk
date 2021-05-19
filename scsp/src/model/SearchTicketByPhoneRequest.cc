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

#include <alibabacloud/scsp/model/SearchTicketByPhoneRequest.h>

using AlibabaCloud::Scsp::Model::SearchTicketByPhoneRequest;

SearchTicketByPhoneRequest::SearchTicketByPhoneRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SearchTicketByPhone")
{
	setMethod(HttpRequest::Method::Get);
}

SearchTicketByPhoneRequest::~SearchTicketByPhoneRequest()
{}

std::string SearchTicketByPhoneRequest::getClientToken()const
{
	return clientToken_;
}

void SearchTicketByPhoneRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string SearchTicketByPhoneRequest::getInstanceId()const
{
	return instanceId_;
}

void SearchTicketByPhoneRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string SearchTicketByPhoneRequest::getPhone()const
{
	return phone_;
}

void SearchTicketByPhoneRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

long SearchTicketByPhoneRequest::getTemplateId()const
{
	return templateId_;
}

void SearchTicketByPhoneRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", std::to_string(templateId));
}

std::string SearchTicketByPhoneRequest::getTicketStatus()const
{
	return ticketStatus_;
}

void SearchTicketByPhoneRequest::setTicketStatus(const std::string& ticketStatus)
{
	ticketStatus_ = ticketStatus;
	setParameter("TicketStatus", ticketStatus);
}

int SearchTicketByPhoneRequest::getPageNo()const
{
	return pageNo_;
}

void SearchTicketByPhoneRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int SearchTicketByPhoneRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTicketByPhoneRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long SearchTicketByPhoneRequest::getStartTime()const
{
	return startTime_;
}

void SearchTicketByPhoneRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long SearchTicketByPhoneRequest::getEndTime()const
{
	return endTime_;
}

void SearchTicketByPhoneRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

