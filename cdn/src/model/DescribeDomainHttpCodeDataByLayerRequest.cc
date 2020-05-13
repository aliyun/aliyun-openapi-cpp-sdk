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

#include <alibabacloud/cdn/model/DescribeDomainHttpCodeDataByLayerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainHttpCodeDataByLayerRequest;

DescribeDomainHttpCodeDataByLayerRequest::DescribeDomainHttpCodeDataByLayerRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainHttpCodeDataByLayer")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainHttpCodeDataByLayerRequest::~DescribeDomainHttpCodeDataByLayerRequest()
{}

std::string DescribeDomainHttpCodeDataByLayerRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getLayer()const
{
	return layer_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setLayer(const std::string& layer)
{
	layer_ = layer;
	setParameter("Layer", layer);
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainHttpCodeDataByLayerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainHttpCodeDataByLayerRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainHttpCodeDataByLayerRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

