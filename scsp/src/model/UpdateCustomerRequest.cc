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

#include <alibabacloud/scsp/model/UpdateCustomerRequest.h>

using AlibabaCloud::Scsp::Model::UpdateCustomerRequest;

UpdateCustomerRequest::UpdateCustomerRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateCustomer")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateCustomerRequest::~UpdateCustomerRequest()
{}

std::string UpdateCustomerRequest::getIndustry()const
{
	return industry_;
}

void UpdateCustomerRequest::setIndustry(const std::string& industry)
{
	industry_ = industry;
	setParameter("Industry", industry);
}

int UpdateCustomerRequest::getOuterIdType()const
{
	return outerIdType_;
}

void UpdateCustomerRequest::setOuterIdType(int outerIdType)
{
	outerIdType_ = outerIdType;
	setParameter("OuterIdType", std::to_string(outerIdType));
}

std::string UpdateCustomerRequest::getDingding()const
{
	return dingding_;
}

void UpdateCustomerRequest::setDingding(const std::string& dingding)
{
	dingding_ = dingding;
	setParameter("Dingding", dingding);
}

std::string UpdateCustomerRequest::getBizType()const
{
	return bizType_;
}

void UpdateCustomerRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string UpdateCustomerRequest::getTypeCode()const
{
	return typeCode_;
}

void UpdateCustomerRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string UpdateCustomerRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateCustomerRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateCustomerRequest::getContacter()const
{
	return contacter_;
}

void UpdateCustomerRequest::setContacter(const std::string& contacter)
{
	contacter_ = contacter;
	setParameter("Contacter", contacter);
}

long UpdateCustomerRequest::getProdLineId()const
{
	return prodLineId_;
}

void UpdateCustomerRequest::setProdLineId(long prodLineId)
{
	prodLineId_ = prodLineId;
	setParameter("ProdLineId", std::to_string(prodLineId));
}

std::string UpdateCustomerRequest::getPhone()const
{
	return phone_;
}

void UpdateCustomerRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string UpdateCustomerRequest::getName()const
{
	return name_;
}

void UpdateCustomerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long UpdateCustomerRequest::getCustomerId()const
{
	return customerId_;
}

void UpdateCustomerRequest::setCustomerId(long customerId)
{
	customerId_ = customerId;
	setParameter("CustomerId", std::to_string(customerId));
}

std::string UpdateCustomerRequest::getManagerName()const
{
	return managerName_;
}

void UpdateCustomerRequest::setManagerName(const std::string& managerName)
{
	managerName_ = managerName;
	setParameter("ManagerName", managerName);
}

std::string UpdateCustomerRequest::getOuterId()const
{
	return outerId_;
}

void UpdateCustomerRequest::setOuterId(const std::string& outerId)
{
	outerId_ = outerId;
	setParameter("OuterId", outerId);
}

std::string UpdateCustomerRequest::getPosition()const
{
	return position_;
}

void UpdateCustomerRequest::setPosition(const std::string& position)
{
	position_ = position;
	setParameter("Position", position);
}

std::string UpdateCustomerRequest::getEmail()const
{
	return email_;
}

void UpdateCustomerRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

