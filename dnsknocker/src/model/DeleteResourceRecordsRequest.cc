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

#include <alibabacloud/dnsknocker/model/DeleteResourceRecordsRequest.h>

using AlibabaCloud::DnsKnocker::Model::DeleteResourceRecordsRequest;

DeleteResourceRecordsRequest::DeleteResourceRecordsRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "DeleteResourceRecords")
{}

DeleteResourceRecordsRequest::~DeleteResourceRecordsRequest()
{}

std::string DeleteResourceRecordsRequest::getAccessID()const
{
	return accessID_;
}

void DeleteResourceRecordsRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string DeleteResourceRecordsRequest::getAccessSecret()const
{
	return accessSecret_;
}

void DeleteResourceRecordsRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string DeleteResourceRecordsRequest::getTypeList()const
{
	return typeList_;
}

void DeleteResourceRecordsRequest::setTypeList(const std::string& typeList)
{
	typeList_ = typeList;
	setCoreParameter("TypeList", typeList);
}

std::string DeleteResourceRecordsRequest::getLine()const
{
	return line_;
}

void DeleteResourceRecordsRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string DeleteResourceRecordsRequest::getDomainName()const
{
	return domainName_;
}

void DeleteResourceRecordsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DeleteResourceRecordsRequest::getZoneName()const
{
	return zoneName_;
}

void DeleteResourceRecordsRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string DeleteResourceRecordsRequest::getTransactionId()const
{
	return transactionId_;
}

void DeleteResourceRecordsRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string DeleteResourceRecordsRequest::getGroup()const
{
	return group_;
}

void DeleteResourceRecordsRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

