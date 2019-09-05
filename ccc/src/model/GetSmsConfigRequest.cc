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

#include <alibabacloud/ccc/model/GetSmsConfigRequest.h>

using AlibabaCloud::CCC::Model::GetSmsConfigRequest;

GetSmsConfigRequest::GetSmsConfigRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetSmsConfig")
{}

GetSmsConfigRequest::~GetSmsConfigRequest()
{}

std::string GetSmsConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void GetSmsConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<int> GetSmsConfigRequest::getScenario()const
{
	return scenario_;
}

void GetSmsConfigRequest::setScenario(const std::vector<int>& scenario)
{
	scenario_ = scenario;
	for(int i = 0; i!= scenario.size(); i++)
		setCoreParameter("Scenario."+ std::to_string(i), std::to_string(scenario.at(i)));
}

std::string GetSmsConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSmsConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

