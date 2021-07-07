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

#include <alibabacloud/eipanycast/model/ReleaseAnycastEipAddressRequest.h>

using AlibabaCloud::Eipanycast::Model::ReleaseAnycastEipAddressRequest;

ReleaseAnycastEipAddressRequest::ReleaseAnycastEipAddressRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "ReleaseAnycastEipAddress")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseAnycastEipAddressRequest::~ReleaseAnycastEipAddressRequest()
{}

std::string ReleaseAnycastEipAddressRequest::getClientToken()const
{
	return clientToken_;
}

void ReleaseAnycastEipAddressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ReleaseAnycastEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseAnycastEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReleaseAnycastEipAddressRequest::getAnycastId()const
{
	return anycastId_;
}

void ReleaseAnycastEipAddressRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

