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

#include <alibabacloud/dnsknocker/model/DeleteResourceRecordRequest.h>

using AlibabaCloud::DnsKnocker::Model::DeleteResourceRecordRequest;

DeleteResourceRecordRequest::DeleteResourceRecordRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "DeleteResourceRecord")
{}

DeleteResourceRecordRequest::~DeleteResourceRecordRequest()
{}

std::string DeleteResourceRecordRequest::getAccessID()const
{
	return accessID_;
}

void DeleteResourceRecordRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string DeleteResourceRecordRequest::getRRTTL()const
{
	return rRTTL_;
}

void DeleteResourceRecordRequest::setRRTTL(const std::string& rRTTL)
{
	rRTTL_ = rRTTL;
	setCoreParameter("RRTTL", rRTTL);
}

std::string DeleteResourceRecordRequest::getAccessSecret()const
{
	return accessSecret_;
}

void DeleteResourceRecordRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string DeleteResourceRecordRequest::getRRLine()const
{
	return rRLine_;
}

void DeleteResourceRecordRequest::setRRLine(const std::string& rRLine)
{
	rRLine_ = rRLine;
	setCoreParameter("RRLine", rRLine);
}

std::string DeleteResourceRecordRequest::getDomainName()const
{
	return domainName_;
}

void DeleteResourceRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DeleteResourceRecordRequest::getRRValue()const
{
	return rRValue_;
}

void DeleteResourceRecordRequest::setRRValue(const std::string& rRValue)
{
	rRValue_ = rRValue;
	setCoreParameter("RRValue", rRValue);
}

std::string DeleteResourceRecordRequest::getZoneName()const
{
	return zoneName_;
}

void DeleteResourceRecordRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string DeleteResourceRecordRequest::getTransactionId()const
{
	return transactionId_;
}

void DeleteResourceRecordRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string DeleteResourceRecordRequest::getGroup()const
{
	return group_;
}

void DeleteResourceRecordRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

std::string DeleteResourceRecordRequest::getRRType()const
{
	return rRType_;
}

void DeleteResourceRecordRequest::setRRType(const std::string& rRType)
{
	rRType_ = rRType;
	setCoreParameter("RRType", rRType);
}

