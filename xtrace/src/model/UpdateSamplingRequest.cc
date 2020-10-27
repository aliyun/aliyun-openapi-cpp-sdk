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

#include <alibabacloud/xtrace/model/UpdateSamplingRequest.h>

using AlibabaCloud::Xtrace::Model::UpdateSamplingRequest;

UpdateSamplingRequest::UpdateSamplingRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "UpdateSampling")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSamplingRequest::~UpdateSamplingRequest()
{}

std::string UpdateSamplingRequest::getRegionId()const
{
	return regionId_;
}

void UpdateSamplingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateSamplingRequest::getSampling()const
{
	return sampling_;
}

void UpdateSamplingRequest::setSampling(const std::string& sampling)
{
	sampling_ = sampling;
	setParameter("Sampling", sampling);
}

std::string UpdateSamplingRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void UpdateSamplingRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

