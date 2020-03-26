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

#include <alibabacloud/ccc/model/PickOutboundNumbersRequest.h>

using AlibabaCloud::CCC::Model::PickOutboundNumbersRequest;

PickOutboundNumbersRequest::PickOutboundNumbersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PickOutboundNumbers")
{
	setMethod(HttpRequest::Method::Post);
}

PickOutboundNumbersRequest::~PickOutboundNumbersRequest()
{}

int PickOutboundNumbersRequest::getCount()const
{
	return count_;
}

void PickOutboundNumbersRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

std::string PickOutboundNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PickOutboundNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string PickOutboundNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void PickOutboundNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> PickOutboundNumbersRequest::getCandidateNumber()const
{
	return candidateNumber_;
}

void PickOutboundNumbersRequest::setCandidateNumber(const std::vector<std::string>& candidateNumber)
{
	candidateNumber_ = candidateNumber;
	for(int dep1 = 0; dep1!= candidateNumber.size(); dep1++) {
		setParameter("CandidateNumber."+ std::to_string(dep1), candidateNumber.at(dep1));
	}
}

std::string PickOutboundNumbersRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void PickOutboundNumbersRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setParameter("CalleeNumber", calleeNumber);
}

