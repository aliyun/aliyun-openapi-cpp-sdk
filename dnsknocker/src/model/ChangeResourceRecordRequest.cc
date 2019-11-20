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

#include <alibabacloud/dnsknocker/model/ChangeResourceRecordRequest.h>

using AlibabaCloud::DnsKnocker::Model::ChangeResourceRecordRequest;

ChangeResourceRecordRequest::ChangeResourceRecordRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "ChangeResourceRecord")
{
	setMethod(HttpRequest::Method::Post);
}

ChangeResourceRecordRequest::~ChangeResourceRecordRequest()
{}

std::string ChangeResourceRecordRequest::getAccessID()const
{
	return accessID_;
}

void ChangeResourceRecordRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string ChangeResourceRecordRequest::getAccessSecret()const
{
	return accessSecret_;
}

void ChangeResourceRecordRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string ChangeResourceRecordRequest::getNewRRInfo()const
{
	return newRRInfo_;
}

void ChangeResourceRecordRequest::setNewRRInfo(const std::string& newRRInfo)
{
	newRRInfo_ = newRRInfo;
	setCoreParameter("NewRRInfo", newRRInfo);
}

std::string ChangeResourceRecordRequest::getZoneName()const
{
	return zoneName_;
}

void ChangeResourceRecordRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string ChangeResourceRecordRequest::getTransactionId()const
{
	return transactionId_;
}

void ChangeResourceRecordRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string ChangeResourceRecordRequest::getGroup()const
{
	return group_;
}

void ChangeResourceRecordRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

std::string ChangeResourceRecordRequest::getOldRRInfo()const
{
	return oldRRInfo_;
}

void ChangeResourceRecordRequest::setOldRRInfo(const std::string& oldRRInfo)
{
	oldRRInfo_ = oldRRInfo;
	setCoreParameter("OldRRInfo", oldRRInfo);
}

