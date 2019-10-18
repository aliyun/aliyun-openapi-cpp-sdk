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

#include <alibabacloud/dnsknocker/model/ChangeResourceRecordsRequest.h>

using AlibabaCloud::DnsKnocker::Model::ChangeResourceRecordsRequest;

ChangeResourceRecordsRequest::ChangeResourceRecordsRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "ChangeResourceRecords")
{}

ChangeResourceRecordsRequest::~ChangeResourceRecordsRequest()
{}

std::string ChangeResourceRecordsRequest::getAccessID()const
{
	return accessID_;
}

void ChangeResourceRecordsRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string ChangeResourceRecordsRequest::getAccessSecret()const
{
	return accessSecret_;
}

void ChangeResourceRecordsRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string ChangeResourceRecordsRequest::getTypes()const
{
	return types_;
}

void ChangeResourceRecordsRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

std::string ChangeResourceRecordsRequest::getResourceRecords()const
{
	return resourceRecords_;
}

void ChangeResourceRecordsRequest::setResourceRecords(const std::string& resourceRecords)
{
	resourceRecords_ = resourceRecords;
	setCoreParameter("ResourceRecords", resourceRecords);
}

std::string ChangeResourceRecordsRequest::getLine()const
{
	return line_;
}

void ChangeResourceRecordsRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string ChangeResourceRecordsRequest::getDomainName()const
{
	return domainName_;
}

void ChangeResourceRecordsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string ChangeResourceRecordsRequest::getZoneName()const
{
	return zoneName_;
}

void ChangeResourceRecordsRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string ChangeResourceRecordsRequest::getTransactionId()const
{
	return transactionId_;
}

void ChangeResourceRecordsRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string ChangeResourceRecordsRequest::getGroup()const
{
	return group_;
}

void ChangeResourceRecordsRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

