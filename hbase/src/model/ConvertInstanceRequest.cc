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

#include <alibabacloud/hbase/model/ConvertInstanceRequest.h>

using AlibabaCloud::HBase::Model::ConvertInstanceRequest;

ConvertInstanceRequest::ConvertInstanceRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ConvertInstance")
{
	setMethod(HttpRequest::Method::Post);
}

ConvertInstanceRequest::~ConvertInstanceRequest()
{}

int ConvertInstanceRequest::getDuration()const
{
	return duration_;
}

void ConvertInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string ConvertInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void ConvertInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ConvertInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void ConvertInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

std::string ConvertInstanceRequest::getPayType()const
{
	return payType_;
}

void ConvertInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

