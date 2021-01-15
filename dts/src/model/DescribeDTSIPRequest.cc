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

#include <alibabacloud/dts/model/DescribeDTSIPRequest.h>

using AlibabaCloud::Dts::Model::DescribeDTSIPRequest;

DescribeDTSIPRequest::DescribeDTSIPRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeDTSIP")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDTSIPRequest::~DescribeDTSIPRequest()
{}

std::string DescribeDTSIPRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void DescribeDTSIPRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setParameter("SourceEndpointRegion", sourceEndpointRegion);
}

std::string DescribeDTSIPRequest::getDestinationEndpointRegion()const
{
	return destinationEndpointRegion_;
}

void DescribeDTSIPRequest::setDestinationEndpointRegion(const std::string& destinationEndpointRegion)
{
	destinationEndpointRegion_ = destinationEndpointRegion;
	setParameter("DestinationEndpointRegion", destinationEndpointRegion);
}

