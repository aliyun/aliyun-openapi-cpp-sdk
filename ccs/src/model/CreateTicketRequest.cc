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

#include <alibabacloud/ccs/model/CreateTicketRequest.h>

using AlibabaCloud::Ccs::Model::CreateTicketRequest;

CreateTicketRequest::CreateTicketRequest() :
	RpcServiceRequest("ccs", "2017-10-01", "CreateTicket")
{}

CreateTicketRequest::~CreateTicketRequest()
{}

std::string CreateTicketRequest::getCreatorId()const
{
	return creatorId_;
}

void CreateTicketRequest::setCreatorId(const std::string& creatorId)
{
	creatorId_ = creatorId;
	setCoreParameter("CreatorId", std::to_string(creatorId));
}

std::string CreateTicketRequest::getDescription()const
{
	return description_;
}

void CreateTicketRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateTicketRequest::getType()const
{
	return type_;
}

void CreateTicketRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CreateTicketRequest::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

void CreateTicketRequest::setCcsInstanceId(const std::string& ccsInstanceId)
{
	ccsInstanceId_ = ccsInstanceId;
	setCoreParameter("CcsInstanceId", std::to_string(ccsInstanceId));
}

std::string CreateTicketRequest::getCustomFields()const
{
	return customFields_;
}

void CreateTicketRequest::setCustomFields(const std::string& customFields)
{
	customFields_ = customFields;
	setCoreParameter("CustomFields", std::to_string(customFields));
}

