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

#include <alibabacloud/scsp/model/CreateTicketWithBizDataRequest.h>

using AlibabaCloud::Scsp::Model::CreateTicketWithBizDataRequest;

CreateTicketWithBizDataRequest::CreateTicketWithBizDataRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateTicketWithBizData")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTicketWithBizDataRequest::~CreateTicketWithBizDataRequest()
{}

std::string CreateTicketWithBizDataRequest::getFromInfo()const
{
	return fromInfo_;
}

void CreateTicketWithBizDataRequest::setFromInfo(const std::string& fromInfo)
{
	fromInfo_ = fromInfo;
	setBodyParameter("FromInfo", fromInfo);
}

std::string CreateTicketWithBizDataRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTicketWithBizDataRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateTicketWithBizDataRequest::getCarbonCopy()const
{
	return carbonCopy_;
}

void CreateTicketWithBizDataRequest::setCarbonCopy(const std::string& carbonCopy)
{
	carbonCopy_ = carbonCopy;
	setBodyParameter("CarbonCopy", carbonCopy);
}

long CreateTicketWithBizDataRequest::getCreatorId()const
{
	return creatorId_;
}

void CreateTicketWithBizDataRequest::setCreatorId(long creatorId)
{
	creatorId_ = creatorId;
	setBodyParameter("CreatorId", std::to_string(creatorId));
}

std::string CreateTicketWithBizDataRequest::getBizData()const
{
	return bizData_;
}

void CreateTicketWithBizDataRequest::setBizData(const std::string& bizData)
{
	bizData_ = bizData;
	setBodyParameter("BizData", bizData);
}

long CreateTicketWithBizDataRequest::getTemplateId()const
{
	return templateId_;
}

void CreateTicketWithBizDataRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", std::to_string(templateId));
}

int CreateTicketWithBizDataRequest::getPriority()const
{
	return priority_;
}

void CreateTicketWithBizDataRequest::setPriority(int priority)
{
	priority_ = priority;
	setBodyParameter("Priority", std::to_string(priority));
}

std::string CreateTicketWithBizDataRequest::getFormData()const
{
	return formData_;
}

void CreateTicketWithBizDataRequest::setFormData(const std::string& formData)
{
	formData_ = formData;
	setBodyParameter("FormData", formData);
}

std::string CreateTicketWithBizDataRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateTicketWithBizDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

int CreateTicketWithBizDataRequest::getCreatorType()const
{
	return creatorType_;
}

void CreateTicketWithBizDataRequest::setCreatorType(int creatorType)
{
	creatorType_ = creatorType;
	setBodyParameter("CreatorType", std::to_string(creatorType));
}

std::string CreateTicketWithBizDataRequest::getCreatorName()const
{
	return creatorName_;
}

void CreateTicketWithBizDataRequest::setCreatorName(const std::string& creatorName)
{
	creatorName_ = creatorName;
	setBodyParameter("CreatorName", creatorName);
}

long CreateTicketWithBizDataRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateTicketWithBizDataRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setBodyParameter("CategoryId", std::to_string(categoryId));
}

std::string CreateTicketWithBizDataRequest::getMemberName()const
{
	return memberName_;
}

void CreateTicketWithBizDataRequest::setMemberName(const std::string& memberName)
{
	memberName_ = memberName;
	setBodyParameter("MemberName", memberName);
}

long CreateTicketWithBizDataRequest::getMemberId()const
{
	return memberId_;
}

void CreateTicketWithBizDataRequest::setMemberId(long memberId)
{
	memberId_ = memberId;
	setBodyParameter("MemberId", std::to_string(memberId));
}

