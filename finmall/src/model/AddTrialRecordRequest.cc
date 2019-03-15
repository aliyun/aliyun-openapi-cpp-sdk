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

#include <alibabacloud/finmall/model/AddTrialRecordRequest.h>

using AlibabaCloud::Finmall::Model::AddTrialRecordRequest;

AddTrialRecordRequest::AddTrialRecordRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "AddTrialRecord")
{}

AddTrialRecordRequest::~AddTrialRecordRequest()
{}

std::string AddTrialRecordRequest::getNote()const
{
	return note_;
}

void AddTrialRecordRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string AddTrialRecordRequest::getEnterpriseEmail()const
{
	return enterpriseEmail_;
}

void AddTrialRecordRequest::setEnterpriseEmail(const std::string& enterpriseEmail)
{
	enterpriseEmail_ = enterpriseEmail;
	setParameter("EnterpriseEmail", enterpriseEmail);
}

std::string AddTrialRecordRequest::getContractPhoneNumber()const
{
	return contractPhoneNumber_;
}

void AddTrialRecordRequest::setContractPhoneNumber(const std::string& contractPhoneNumber)
{
	contractPhoneNumber_ = contractPhoneNumber;
	setParameter("ContractPhoneNumber", contractPhoneNumber);
}

std::string AddTrialRecordRequest::getContractName()const
{
	return contractName_;
}

void AddTrialRecordRequest::setContractName(const std::string& contractName)
{
	contractName_ = contractName;
	setParameter("ContractName", contractName);
}

std::string AddTrialRecordRequest::getChannel()const
{
	return channel_;
}

void AddTrialRecordRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string AddTrialRecordRequest::getEnterpriseName()const
{
	return enterpriseName_;
}

void AddTrialRecordRequest::setEnterpriseName(const std::string& enterpriseName)
{
	enterpriseName_ = enterpriseName;
	setParameter("EnterpriseName", enterpriseName);
}

std::string AddTrialRecordRequest::getUserId()const
{
	return userId_;
}

void AddTrialRecordRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string AddTrialRecordRequest::getProducts()const
{
	return products_;
}

void AddTrialRecordRequest::setProducts(const std::string& products)
{
	products_ = products;
	setParameter("Products", products);
}

std::string AddTrialRecordRequest::getBudget()const
{
	return budget_;
}

void AddTrialRecordRequest::setBudget(const std::string& budget)
{
	budget_ = budget;
	setParameter("Budget", budget);
}

