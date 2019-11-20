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

#include <alibabacloud/ccc/model/PickLocalNumberRequest.h>

using AlibabaCloud::CCC::Model::PickLocalNumberRequest;

PickLocalNumberRequest::PickLocalNumberRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PickLocalNumber")
{
	setMethod(HttpRequest::Method::Post);
}

PickLocalNumberRequest::~PickLocalNumberRequest()
{}

std::string PickLocalNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PickLocalNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PickLocalNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void PickLocalNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> PickLocalNumberRequest::getCandidateNumber()const
{
	return candidateNumber_;
}

void PickLocalNumberRequest::setCandidateNumber(const std::vector<std::string>& candidateNumber)
{
	candidateNumber_ = candidateNumber;
	for(int dep1 = 0; dep1!= candidateNumber.size(); dep1++) {
		setCoreParameter("CandidateNumber."+ std::to_string(dep1), candidateNumber.at(dep1));
	}
}

std::string PickLocalNumberRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void PickLocalNumberRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setCoreParameter("CalleeNumber", calleeNumber);
}

