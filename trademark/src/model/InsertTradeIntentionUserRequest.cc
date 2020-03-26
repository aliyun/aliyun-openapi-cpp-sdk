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

#include <alibabacloud/trademark/model/InsertTradeIntentionUserRequest.h>

using AlibabaCloud::Trademark::Model::InsertTradeIntentionUserRequest;

InsertTradeIntentionUserRequest::InsertTradeIntentionUserRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "InsertTradeIntentionUser")
{
	setMethod(HttpRequest::Method::Post);
}

InsertTradeIntentionUserRequest::~InsertTradeIntentionUserRequest()
{}

std::string InsertTradeIntentionUserRequest::getMobile()const
{
	return mobile_;
}

void InsertTradeIntentionUserRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

std::string InsertTradeIntentionUserRequest::getDescription()const
{
	return description_;
}

void InsertTradeIntentionUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string InsertTradeIntentionUserRequest::getPartnerCode()const
{
	return partnerCode_;
}

void InsertTradeIntentionUserRequest::setPartnerCode(const std::string& partnerCode)
{
	partnerCode_ = partnerCode;
	setParameter("PartnerCode", partnerCode);
}

std::string InsertTradeIntentionUserRequest::getClassification()const
{
	return classification_;
}

void InsertTradeIntentionUserRequest::setClassification(const std::string& classification)
{
	classification_ = classification;
	setParameter("Classification", classification);
}

int InsertTradeIntentionUserRequest::getType()const
{
	return type_;
}

void InsertTradeIntentionUserRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string InsertTradeIntentionUserRequest::getVcode()const
{
	return vcode_;
}

void InsertTradeIntentionUserRequest::setVcode(const std::string& vcode)
{
	vcode_ = vcode;
	setParameter("Vcode", vcode);
}

std::string InsertTradeIntentionUserRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void InsertTradeIntentionUserRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setParameter("RegisterNumber", registerNumber);
}

std::string InsertTradeIntentionUserRequest::getUserName()const
{
	return userName_;
}

void InsertTradeIntentionUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

