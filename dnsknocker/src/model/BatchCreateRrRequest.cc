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

#include <alibabacloud/dnsknocker/model/BatchCreateRrRequest.h>

using AlibabaCloud::DnsKnocker::Model::BatchCreateRrRequest;

BatchCreateRrRequest::BatchCreateRrRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "BatchCreateRr")
{}

BatchCreateRrRequest::~BatchCreateRrRequest()
{}

std::string BatchCreateRrRequest::getAccessID()const
{
	return accessID_;
}

void BatchCreateRrRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string BatchCreateRrRequest::getAccessSecret()const
{
	return accessSecret_;
}

void BatchCreateRrRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string BatchCreateRrRequest::getResourceRecords()const
{
	return resourceRecords_;
}

void BatchCreateRrRequest::setResourceRecords(const std::string& resourceRecords)
{
	resourceRecords_ = resourceRecords;
	setCoreParameter("ResourceRecords", resourceRecords);
}

std::string BatchCreateRrRequest::getLine()const
{
	return line_;
}

void BatchCreateRrRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string BatchCreateRrRequest::getZoneName()const
{
	return zoneName_;
}

void BatchCreateRrRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string BatchCreateRrRequest::getTransactionId()const
{
	return transactionId_;
}

void BatchCreateRrRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string BatchCreateRrRequest::getGroup()const
{
	return group_;
}

void BatchCreateRrRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

