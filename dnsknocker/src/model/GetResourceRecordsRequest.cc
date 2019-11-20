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

#include <alibabacloud/dnsknocker/model/GetResourceRecordsRequest.h>

using AlibabaCloud::DnsKnocker::Model::GetResourceRecordsRequest;

GetResourceRecordsRequest::GetResourceRecordsRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "GetResourceRecords")
{
	setMethod(HttpRequest::Method::Post);
}

GetResourceRecordsRequest::~GetResourceRecordsRequest()
{}

std::string GetResourceRecordsRequest::getAccessID()const
{
	return accessID_;
}

void GetResourceRecordsRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string GetResourceRecordsRequest::getAccessSecret()const
{
	return accessSecret_;
}

void GetResourceRecordsRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string GetResourceRecordsRequest::getZone()const
{
	return zone_;
}

void GetResourceRecordsRequest::setZone(const std::string& zone)
{
	zone_ = zone;
	setCoreParameter("Zone", zone);
}

std::string GetResourceRecordsRequest::getDomainName()const
{
	return domainName_;
}

void GetResourceRecordsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string GetResourceRecordsRequest::getTransactionId()const
{
	return transactionId_;
}

void GetResourceRecordsRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string GetResourceRecordsRequest::getDomainLine()const
{
	return domainLine_;
}

void GetResourceRecordsRequest::setDomainLine(const std::string& domainLine)
{
	domainLine_ = domainLine;
	setCoreParameter("DomainLine", domainLine);
}

std::string GetResourceRecordsRequest::getGroup()const
{
	return group_;
}

void GetResourceRecordsRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

