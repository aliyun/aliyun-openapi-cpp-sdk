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

#include <alibabacloud/dnsknocker/model/DeleteDomainRequest.h>

using AlibabaCloud::DnsKnocker::Model::DeleteDomainRequest;

DeleteDomainRequest::DeleteDomainRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "DeleteDomain")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDomainRequest::~DeleteDomainRequest()
{}

std::string DeleteDomainRequest::getAccessID()const
{
	return accessID_;
}

void DeleteDomainRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string DeleteDomainRequest::getAccessSecret()const
{
	return accessSecret_;
}

void DeleteDomainRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string DeleteDomainRequest::getLine()const
{
	return line_;
}

void DeleteDomainRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string DeleteDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DeleteDomainRequest::getZoneName()const
{
	return zoneName_;
}

void DeleteDomainRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string DeleteDomainRequest::getTransactionId()const
{
	return transactionId_;
}

void DeleteDomainRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string DeleteDomainRequest::getGroup()const
{
	return group_;
}

void DeleteDomainRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

