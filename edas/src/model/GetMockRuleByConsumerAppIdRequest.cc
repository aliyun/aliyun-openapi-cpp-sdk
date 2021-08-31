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

#include <alibabacloud/edas/model/GetMockRuleByConsumerAppIdRequest.h>

using AlibabaCloud::Edas::Model::GetMockRuleByConsumerAppIdRequest;

GetMockRuleByConsumerAppIdRequest::GetMockRuleByConsumerAppIdRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mock/getMockRuleByConsumerAppId");
	setMethod(HttpRequest::Method::Post);
}

GetMockRuleByConsumerAppIdRequest::~GetMockRuleByConsumerAppIdRequest()
{}

std::string GetMockRuleByConsumerAppIdRequest::getConsumerAppId()const
{
	return consumerAppId_;
}

void GetMockRuleByConsumerAppIdRequest::setConsumerAppId(const std::string& consumerAppId)
{
	consumerAppId_ = consumerAppId;
	setParameter("ConsumerAppId", consumerAppId);
}

std::string GetMockRuleByConsumerAppIdRequest::getRegion()const
{
	return region_;
}

void GetMockRuleByConsumerAppIdRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

