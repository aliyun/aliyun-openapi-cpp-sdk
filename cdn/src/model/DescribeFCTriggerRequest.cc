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

#include <alibabacloud/cdn/model/DescribeFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeFCTriggerRequest;

DescribeFCTriggerRequest::DescribeFCTriggerRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeFCTrigger")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeFCTriggerRequest::~DescribeFCTriggerRequest()
{}

std::string DescribeFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void DescribeFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setCoreParameter("TriggerARN", triggerARN);
}

long DescribeFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

