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

#include <alibabacloud/companyreg/model/QueryBookkeepingCommoditiesRequest.h>

using AlibabaCloud::Companyreg::Model::QueryBookkeepingCommoditiesRequest;

QueryBookkeepingCommoditiesRequest::QueryBookkeepingCommoditiesRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "QueryBookkeepingCommodities")
{
	setMethod(HttpRequest::Method::Post);
}

QueryBookkeepingCommoditiesRequest::~QueryBookkeepingCommoditiesRequest()
{}

std::string QueryBookkeepingCommoditiesRequest::getServiceType()const
{
	return serviceType_;
}

void QueryBookkeepingCommoditiesRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

std::string QueryBookkeepingCommoditiesRequest::getCity()const
{
	return city_;
}

void QueryBookkeepingCommoditiesRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

std::string QueryBookkeepingCommoditiesRequest::getCompanyType()const
{
	return companyType_;
}

void QueryBookkeepingCommoditiesRequest::setCompanyType(const std::string& companyType)
{
	companyType_ = companyType;
	setParameter("CompanyType", companyType);
}

std::string QueryBookkeepingCommoditiesRequest::getAreaType()const
{
	return areaType_;
}

void QueryBookkeepingCommoditiesRequest::setAreaType(const std::string& areaType)
{
	areaType_ = areaType;
	setParameter("AreaType", areaType);
}

