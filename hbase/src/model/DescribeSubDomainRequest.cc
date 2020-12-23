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

#include <alibabacloud/hbase/model/DescribeSubDomainRequest.h>

using AlibabaCloud::HBase::Model::DescribeSubDomainRequest;

DescribeSubDomainRequest::DescribeSubDomainRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeSubDomain")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSubDomainRequest::~DescribeSubDomainRequest()
{}

std::string DescribeSubDomainRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSubDomainRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSubDomainRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeSubDomainRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

