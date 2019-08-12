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

#include <alibabacloud/live/model/DescribeLiveDomainMappingRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainMappingRequest;

DescribeLiveDomainMappingRequest::DescribeLiveDomainMappingRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainMapping")
{}

DescribeLiveDomainMappingRequest::~DescribeLiveDomainMappingRequest()
{}

std::string DescribeLiveDomainMappingRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainMappingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveDomainMappingRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainMappingRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeLiveDomainMappingRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainMappingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

