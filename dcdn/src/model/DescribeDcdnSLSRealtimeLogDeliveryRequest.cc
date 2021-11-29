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

#include <alibabacloud/dcdn/model/DescribeDcdnSLSRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnSLSRealtimeLogDeliveryRequest;

DescribeDcdnSLSRealtimeLogDeliveryRequest::DescribeDcdnSLSRealtimeLogDeliveryRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnSLSRealtimeLogDelivery")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnSLSRealtimeLogDeliveryRequest::~DescribeDcdnSLSRealtimeLogDeliveryRequest()
{}

std::string DescribeDcdnSLSRealtimeLogDeliveryRequest::getBusinessType()const
{
	return businessType_;
}

void DescribeDcdnSLSRealtimeLogDeliveryRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", businessType);
}

std::string DescribeDcdnSLSRealtimeLogDeliveryRequest::getProjectName()const
{
	return projectName_;
}

void DescribeDcdnSLSRealtimeLogDeliveryRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long DescribeDcdnSLSRealtimeLogDeliveryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnSLSRealtimeLogDeliveryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

