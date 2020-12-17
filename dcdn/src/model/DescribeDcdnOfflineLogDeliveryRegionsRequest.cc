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

#include <alibabacloud/dcdn/model/DescribeDcdnOfflineLogDeliveryRegionsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnOfflineLogDeliveryRegionsRequest;

DescribeDcdnOfflineLogDeliveryRegionsRequest::DescribeDcdnOfflineLogDeliveryRegionsRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnOfflineLogDeliveryRegions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnOfflineLogDeliveryRegionsRequest::~DescribeDcdnOfflineLogDeliveryRegionsRequest()
{}

long DescribeDcdnOfflineLogDeliveryRegionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnOfflineLogDeliveryRegionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

