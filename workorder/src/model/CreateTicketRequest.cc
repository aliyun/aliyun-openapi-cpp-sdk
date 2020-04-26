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
	RpcServiceRequest("workorder", "2020-03-26", "CreateTicket")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTicketRequest::~CreateTicketRequest()
{}

std::string CreateTicketRequest::getProductCode()const
{
	return productCode_;
}

void CreateTicketRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string CreateTicketRequest::getLanguage()const
{
	return language_;
}

void CreateTicketRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

std::string CreateTicketRequest::getTitle()const
{
	return title_;
}

void CreateTicketRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string CreateTicketRequest::getContent()const
{
	return content_;
}

void CreateTicketRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string CreateTicketRequest::getNotifyTimeRange()const
{
	return notifyTimeRange_;
}

void CreateTicketRequest::setNotifyTimeRange(const std::string& notifyTimeRange)
{
	notifyTimeRange_ = notifyTimeRange;
	setParameter("NotifyTimeRange", notifyTimeRange);
}

std::string CreateTicketRequest::getPhone()const
{
	return phone_;
}

void CreateTicketRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CreateTicketRequest::getCategory()const
{
	return category_;
}

void CreateTicketRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string CreateTicketRequest::getEmail()const
{
	return email_;
}

void CreateTicketRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string CreateTicketRequest::getSecretContent()const
{
	return secretContent_;
}

void CreateTicketRequest::setSecretContent(const std::string& secretContent)
{
	secretContent_ = secretContent;
	setParameter("SecretContent", secretContent);
}

