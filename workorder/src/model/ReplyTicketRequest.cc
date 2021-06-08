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

#include <alibabacloud/workorder/model/ReplyTicketRequest.h>

using AlibabaCloud::Workorder::Model::ReplyTicketRequest;

ReplyTicketRequest::ReplyTicketRequest() :
	RpcServiceRequest("workorder", "2021-06-10", "ReplyTicket")
{
	setMethod(HttpRequest::Method::Post);
}

ReplyTicketRequest::~ReplyTicketRequest()
{}

std::string ReplyTicketRequest::getSecContent()const
{
	return secContent_;
}

void ReplyTicketRequest::setSecContent(const std::string& secContent)
{
	secContent_ = secContent;
	setBodyParameter("SecContent", secContent);
}

std::string ReplyTicketRequest::getContent()const
{
	return content_;
}

void ReplyTicketRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string ReplyTicketRequest::getTicketId()const
{
	return ticketId_;
}

void ReplyTicketRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", ticketId);
}

