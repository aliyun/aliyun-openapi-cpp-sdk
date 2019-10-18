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

#include <alibabacloud/dnsknocker/model/BatchDeleteRrRequest.h>

using AlibabaCloud::DnsKnocker::Model::BatchDeleteRrRequest;

BatchDeleteRrRequest::BatchDeleteRrRequest() :
	RpcServiceRequest("dnsknocker", "2019-09-10", "BatchDeleteRr")
{}

BatchDeleteRrRequest::~BatchDeleteRrRequest()
{}

std::string BatchDeleteRrRequest::getAccessID()const
{
	return accessID_;
}

void BatchDeleteRrRequest::setAccessID(const std::string& accessID)
{
	accessID_ = accessID;
	setCoreParameter("AccessID", accessID);
}

std::string BatchDeleteRrRequest::getAccessSecret()const
{
	return accessSecret_;
}

void BatchDeleteRrRequest::setAccessSecret(const std::string& accessSecret)
{
	accessSecret_ = accessSecret;
	setCoreParameter("AccessSecret", accessSecret);
}

std::string BatchDeleteRrRequest::getResourceRecords()const
{
	return resourceRecords_;
}

void BatchDeleteRrRequest::setResourceRecords(const std::string& resourceRecords)
{
	resourceRecords_ = resourceRecords;
	setCoreParameter("ResourceRecords", resourceRecords);
}

std::string BatchDeleteRrRequest::getLine()const
{
	return line_;
}

void BatchDeleteRrRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string BatchDeleteRrRequest::getZoneName()const
{
	return zoneName_;
}

void BatchDeleteRrRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

std::string BatchDeleteRrRequest::getTransactionId()const
{
	return transactionId_;
}

void BatchDeleteRrRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setCoreParameter("TransactionId", transactionId);
}

std::string BatchDeleteRrRequest::getGroup()const
{
	return group_;
}

void BatchDeleteRrRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

