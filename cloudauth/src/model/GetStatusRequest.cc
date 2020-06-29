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

#include <alibabacloud/cloudauth/model/GetStatusRequest.h>

using AlibabaCloud::Cloudauth::Model::GetStatusRequest;

GetStatusRequest::GetStatusRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "GetStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetStatusRequest::~GetStatusRequest()
{}

std::string GetStatusRequest::getBiz()const
{
	return biz_;
}

void GetStatusRequest::setBiz(const std::string& biz)
{
	biz_ = biz;
	setParameter("Biz", biz);
}

std::string GetStatusRequest::getTicketId()const
{
	return ticketId_;
}

void GetStatusRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", ticketId);
}

