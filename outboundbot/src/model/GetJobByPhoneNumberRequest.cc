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

#include <alibabacloud/outboundbot/model/GetJobByPhoneNumberRequest.h>

using AlibabaCloud::OutboundBot::Model::GetJobByPhoneNumberRequest;

GetJobByPhoneNumberRequest::GetJobByPhoneNumberRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "GetJobByPhoneNumber")
{
	setMethod(HttpRequest::Method::Post);
}

GetJobByPhoneNumberRequest::~GetJobByPhoneNumberRequest()
{}

std::string GetJobByPhoneNumberRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void GetJobByPhoneNumberRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string GetJobByPhoneNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void GetJobByPhoneNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetJobByPhoneNumberRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void GetJobByPhoneNumberRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

