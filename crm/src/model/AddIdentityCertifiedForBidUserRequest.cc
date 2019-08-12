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

#include <alibabacloud/crm/model/AddIdentityCertifiedForBidUserRequest.h>

using AlibabaCloud::Crm::Model::AddIdentityCertifiedForBidUserRequest;

AddIdentityCertifiedForBidUserRequest::AddIdentityCertifiedForBidUserRequest() :
	RpcServiceRequest("crm", "2015-04-08", "AddIdentityCertifiedForBidUser")
{}

AddIdentityCertifiedForBidUserRequest::~AddIdentityCertifiedForBidUserRequest()
{}

std::string AddIdentityCertifiedForBidUserRequest::getBidType()const
{
	return bidType_;
}

void AddIdentityCertifiedForBidUserRequest::setBidType(const std::string& bidType)
{
	bidType_ = bidType;
	setCoreParameter("BidType", std::to_string(bidType));
}

std::string AddIdentityCertifiedForBidUserRequest::getLicenseNumber()const
{
	return licenseNumber_;
}

void AddIdentityCertifiedForBidUserRequest::setLicenseNumber(const std::string& licenseNumber)
{
	licenseNumber_ = licenseNumber;
	setCoreParameter("LicenseNumber", std::to_string(licenseNumber));
}

std::string AddIdentityCertifiedForBidUserRequest::getLicenseType()const
{
	return licenseType_;
}

void AddIdentityCertifiedForBidUserRequest::setLicenseType(const std::string& licenseType)
{
	licenseType_ = licenseType;
	setCoreParameter("LicenseType", std::to_string(licenseType));
}

std::string AddIdentityCertifiedForBidUserRequest::getPhone()const
{
	return phone_;
}

void AddIdentityCertifiedForBidUserRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setCoreParameter("Phone", std::to_string(phone));
}

std::string AddIdentityCertifiedForBidUserRequest::getName()const
{
	return name_;
}

void AddIdentityCertifiedForBidUserRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddIdentityCertifiedForBidUserRequest::getPK()const
{
	return pK_;
}

void AddIdentityCertifiedForBidUserRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setCoreParameter("PK", std::to_string(pK));
}

bool AddIdentityCertifiedForBidUserRequest::getIsEnterprise()const
{
	return isEnterprise_;
}

void AddIdentityCertifiedForBidUserRequest::setIsEnterprise(bool isEnterprise)
{
	isEnterprise_ = isEnterprise;
	setCoreParameter("IsEnterprise", isEnterprise ? "true" : "false");
}

