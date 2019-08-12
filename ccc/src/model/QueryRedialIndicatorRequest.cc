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

#include <alibabacloud/ccc/model/QueryRedialIndicatorRequest.h>

using AlibabaCloud::CCC::Model::QueryRedialIndicatorRequest;

QueryRedialIndicatorRequest::QueryRedialIndicatorRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "QueryRedialIndicator")
{}

QueryRedialIndicatorRequest::~QueryRedialIndicatorRequest()
{}

std::string QueryRedialIndicatorRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryRedialIndicatorRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryRedialIndicatorRequest::getContactId()const
{
	return contactId_;
}

void QueryRedialIndicatorRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

bool QueryRedialIndicatorRequest::getMockResponse()const
{
	return mockResponse_;
}

void QueryRedialIndicatorRequest::setMockResponse(bool mockResponse)
{
	mockResponse_ = mockResponse;
	setCoreParameter("MockResponse", mockResponse ? "true" : "false");
}

std::string QueryRedialIndicatorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRedialIndicatorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

