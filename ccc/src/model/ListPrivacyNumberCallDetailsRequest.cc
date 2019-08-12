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

#include <alibabacloud/ccc/model/ListPrivacyNumberCallDetailsRequest.h>

using AlibabaCloud::CCC::Model::ListPrivacyNumberCallDetailsRequest;

ListPrivacyNumberCallDetailsRequest::ListPrivacyNumberCallDetailsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListPrivacyNumberCallDetails")
{}

ListPrivacyNumberCallDetailsRequest::~ListPrivacyNumberCallDetailsRequest()
{}

std::string ListPrivacyNumberCallDetailsRequest::getAgentId()const
{
	return agentId_;
}

void ListPrivacyNumberCallDetailsRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string ListPrivacyNumberCallDetailsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPrivacyNumberCallDetailsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListPrivacyNumberCallDetailsRequest::getContactId()const
{
	return contactId_;
}

void ListPrivacyNumberCallDetailsRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string ListPrivacyNumberCallDetailsRequest::getAgentName()const
{
	return agentName_;
}

void ListPrivacyNumberCallDetailsRequest::setAgentName(const std::string& agentName)
{
	agentName_ = agentName;
	setCoreParameter("AgentName", agentName);
}

int ListPrivacyNumberCallDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPrivacyNumberCallDetailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListPrivacyNumberCallDetailsRequest::getEndTime()const
{
	return endTime_;
}

void ListPrivacyNumberCallDetailsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ListPrivacyNumberCallDetailsRequest::getStartTime()const
{
	return startTime_;
}

void ListPrivacyNumberCallDetailsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListPrivacyNumberCallDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPrivacyNumberCallDetailsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListPrivacyNumberCallDetailsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPrivacyNumberCallDetailsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

