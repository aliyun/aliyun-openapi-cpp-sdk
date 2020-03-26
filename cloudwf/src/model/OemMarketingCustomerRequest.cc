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

#include <alibabacloud/cloudwf/model/OemMarketingCustomerRequest.h>

using AlibabaCloud::Cloudwf::Model::OemMarketingCustomerRequest;

OemMarketingCustomerRequest::OemMarketingCustomerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "OemMarketingCustomer")
{
	setMethod(HttpRequest::Method::Post);
}

OemMarketingCustomerRequest::~OemMarketingCustomerRequest()
{}

std::string OemMarketingCustomerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OemMarketingCustomerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long OemMarketingCustomerRequest::getBid()const
{
	return bid_;
}

void OemMarketingCustomerRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

