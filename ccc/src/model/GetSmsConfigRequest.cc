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
{
	setMethod(HttpRequest::Method::Post);
}

GetSmsConfigRequest::~GetSmsConfigRequest()
{}

std::string GetSmsConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void GetSmsConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<int> GetSmsConfigRequest::getScenario()const
{
	return scenario_;
}

void GetSmsConfigRequest::setScenario(const std::vector<int>& scenario)
{
	scenario_ = scenario;
	for(int dep1 = 0; dep1!= scenario.size(); dep1++) {
		setParameter("Scenario."+ std::to_string(dep1), std::to_string(scenario.at(dep1)));
	}
}

std::string GetSmsConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSmsConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

