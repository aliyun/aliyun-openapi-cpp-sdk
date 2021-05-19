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

#include <alibabacloud/scsp/model/CreateCustomerRequest.h>

using AlibabaCloud::Scsp::Model::CreateCustomerRequest;

CreateCustomerRequest::CreateCustomerRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateCustomer")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCustomerRequest::~CreateCustomerRequest()
{}

std::string CreateCustomerRequest::getIndustry()const
{
	return industry_;
}

void CreateCustomerRequest::setIndustry(const std::string& industry)
{
	industry_ = industry;
	setParameter("Industry", industry);
}

int CreateCustomerRequest::getOuterIdType()const
{
	return outerIdType_;
}

void CreateCustomerRequest::setOuterIdType(int outerIdType)
{
	outerIdType_ = outerIdType;
	setParameter("OuterIdType", std::to_string(outerIdType));
}

std::string CreateCustomerRequest::getDingding()const
{
	return dingding_;
}

void CreateCustomerRequest::setDingding(const std::string& dingding)
{
	dingding_ = dingding;
	setParameter("Dingding", dingding);
}

std::string CreateCustomerRequest::getBizType()const
{
	return bizType_;
}

void CreateCustomerRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CreateCustomerRequest::getTypeCode()const
{
	return typeCode_;
}

void CreateCustomerRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string CreateCustomerRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateCustomerRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateCustomerRequest::getContacter()const
{
	return contacter_;
}

void CreateCustomerRequest::setContacter(const std::string& contacter)
{
	contacter_ = contacter;
	setParameter("Contacter", contacter);
}

long CreateCustomerRequest::getProdLineId()const
{
	return prodLineId_;
}

void CreateCustomerRequest::setProdLineId(long prodLineId)
{
	prodLineId_ = prodLineId;
	setParameter("ProdLineId", std::to_string(prodLineId));
}

std::string CreateCustomerRequest::getPhone()const
{
	return phone_;
}

void CreateCustomerRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CreateCustomerRequest::getName()const
{
	return name_;
}

void CreateCustomerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateCustomerRequest::getManagerName()const
{
	return managerName_;
}

void CreateCustomerRequest::setManagerName(const std::string& managerName)
{
	managerName_ = managerName;
	setParameter("ManagerName", managerName);
}

std::string CreateCustomerRequest::getOuterId()const
{
	return outerId_;
}

void CreateCustomerRequest::setOuterId(const std::string& outerId)
{
	outerId_ = outerId;
	setParameter("OuterId", outerId);
}

std::string CreateCustomerRequest::getPosition()const
{
	return position_;
}

void CreateCustomerRequest::setPosition(const std::string& position)
{
	position_ = position;
	setParameter("Position", position);
}

std::string CreateCustomerRequest::getEmail()const
{
	return email_;
}

void CreateCustomerRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

