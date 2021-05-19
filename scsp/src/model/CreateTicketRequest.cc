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

#include <alibabacloud/scsp/model/CreateTicketRequest.h>

using AlibabaCloud::Scsp::Model::CreateTicketRequest;

CreateTicketRequest::CreateTicketRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateTicket")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTicketRequest::~CreateTicketRequest()
{}

std::string CreateTicketRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTicketRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateTicketRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateTicketRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long CreateTicketRequest::getTemplateId()const
{
	return templateId_;
}

void CreateTicketRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", std::to_string(templateId));
}

long CreateTicketRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateTicketRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setBodyParameter("CategoryId", std::to_string(categoryId));
}

long CreateTicketRequest::getCreatorId()const
{
	return creatorId_;
}

void CreateTicketRequest::setCreatorId(long creatorId)
{
	creatorId_ = creatorId;
	setBodyParameter("CreatorId", std::to_string(creatorId));
}

int CreateTicketRequest::getCreatorType()const
{
	return creatorType_;
}

void CreateTicketRequest::setCreatorType(int creatorType)
{
	creatorType_ = creatorType;
	setBodyParameter("CreatorType", std::to_string(creatorType));
}

std::string CreateTicketRequest::getCreatorName()const
{
	return creatorName_;
}

void CreateTicketRequest::setCreatorName(const std::string& creatorName)
{
	creatorName_ = creatorName;
	setBodyParameter("CreatorName", creatorName);
}

long CreateTicketRequest::getMemberId()const
{
	return memberId_;
}

void CreateTicketRequest::setMemberId(long memberId)
{
	memberId_ = memberId;
	setBodyParameter("MemberId", std::to_string(memberId));
}

std::string CreateTicketRequest::getMemberName()const
{
	return memberName_;
}

void CreateTicketRequest::setMemberName(const std::string& memberName)
{
	memberName_ = memberName;
	setBodyParameter("MemberName", memberName);
}

std::string CreateTicketRequest::getFromInfo()const
{
	return fromInfo_;
}

void CreateTicketRequest::setFromInfo(const std::string& fromInfo)
{
	fromInfo_ = fromInfo;
	setBodyParameter("FromInfo", fromInfo);
}

int CreateTicketRequest::getPriority()const
{
	return priority_;
}

void CreateTicketRequest::setPriority(int priority)
{
	priority_ = priority;
	setBodyParameter("Priority", std::to_string(priority));
}

std::string CreateTicketRequest::getCarbonCopy()const
{
	return carbonCopy_;
}

void CreateTicketRequest::setCarbonCopy(const std::string& carbonCopy)
{
	carbonCopy_ = carbonCopy;
	setBodyParameter("CarbonCopy", carbonCopy);
}

std::string CreateTicketRequest::getFormData()const
{
	return formData_;
}

void CreateTicketRequest::setFormData(const std::string& formData)
{
	formData_ = formData;
	setBodyParameter("FormData", formData);
}

