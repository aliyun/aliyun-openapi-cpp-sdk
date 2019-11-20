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

#include <alibabacloud/dnsknocker/model/CreateResourceRecordRequest.h>

using AlibabaCloud::DnsKnocker::Model::CreateResourceRecordRequest;

CreateResourceRecordRequest::CreateResourceRecordRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "CreateResourceRecord")
{
	setMethod(HttpRequest::Method::Post);
}

CreateResourceRecordRequest::~CreateResourceRecordRequest()
{}

std::string CreateResourceRecordRequest::getAccessID()const
{
	return accessID_;
}

void CreateResourceRecordRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string CreateResourceRecordRequest::getRrTTL()const
{
	return rrTTL_;
}

void CreateResourceRecordRequest::setRrTTL(const std::string& rrTTL)
{
	rrTTL_ = rrTTL;
	setCoreParameter("RrTTL", rrTTL);
}

std::string CreateResourceRecordRequest::getAccessSecret()const
{
	return accessSecret_;
}

void CreateResourceRecordRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string CreateResourceRecordRequest::getRrLine()const
{
	return rrLine_;
}

void CreateResourceRecordRequest::setRrLine(const std::string& rrLine)
{
	rrLine_ = rrLine;
	setCoreParameter("RrLine", rrLine);
}

std::string CreateResourceRecordRequest::getDomainName()const
{
	return domainName_;
}

void CreateResourceRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string CreateResourceRecordRequest::getRrValue()const
{
	return rrValue_;
}

void CreateResourceRecordRequest::setRrValue(const std::string& rrValue)
{
	rrValue_ = rrValue;
	setCoreParameter("RrValue", rrValue);
}

std::string CreateResourceRecordRequest::getZoneName()const
{
	return zoneName_;
}

void CreateResourceRecordRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string CreateResourceRecordRequest::getTransactionId()const
{
	return transactionId_;
}

void CreateResourceRecordRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string CreateResourceRecordRequest::getGroup()const
{
	return group_;
}

void CreateResourceRecordRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

std::string CreateResourceRecordRequest::getRrType()const
{
	return rrType_;
}

void CreateResourceRecordRequest::setRrType(const std::string& rrType)
{
	rrType_ = rrType;
	setCoreParameter("RrType", rrType);
}

