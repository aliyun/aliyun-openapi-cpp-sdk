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

#include <alibabacloud/dcdn/model/DescribeDcdnConfigGroupDetailRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnConfigGroupDetailRequest;

DescribeDcdnConfigGroupDetailRequest::DescribeDcdnConfigGroupDetailRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnConfigGroupDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnConfigGroupDetailRequest::~DescribeDcdnConfigGroupDetailRequest()
{}

std::string DescribeDcdnConfigGroupDetailRequest::getConfigGroupName()const
{
	return configGroupName_;
}

void DescribeDcdnConfigGroupDetailRequest::setConfigGroupName(const std::string& configGroupName)
{
	configGroupName_ = configGroupName;
	setParameter("ConfigGroupName", configGroupName);
}

long DescribeDcdnConfigGroupDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnConfigGroupDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnConfigGroupDetailRequest::getConfigGroupId()const
{
	return configGroupId_;
}

void DescribeDcdnConfigGroupDetailRequest::setConfigGroupId(const std::string& configGroupId)
{
	configGroupId_ = configGroupId;
	setParameter("ConfigGroupId", configGroupId);
}

