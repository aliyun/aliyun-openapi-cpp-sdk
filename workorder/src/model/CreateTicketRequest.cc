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

#include <alibabacloud/workorder/model/CreateTicketRequest.h>

using AlibabaCloud::Workorder::Model::CreateTicketRequest;

CreateTicketRequest::CreateTicketRequest() :
	RpcServiceRequest("workorder", "2021-06-10", "CreateTicket")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTicketRequest::~CreateTicketRequest()
{}

int CreateTicketRequest::getSeverity()const
{
	return severity_;
}

void CreateTicketRequest::setSeverity(int severity)
{
	severity_ = severity;
	setBodyParameter("Severity", std::to_string(severity));
}

std::string CreateTicketRequest::getDescription()const
{
	return description_;
}

void CreateTicketRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateTicketRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateTicketRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setBodyParameter("CategoryId", categoryId);
}

