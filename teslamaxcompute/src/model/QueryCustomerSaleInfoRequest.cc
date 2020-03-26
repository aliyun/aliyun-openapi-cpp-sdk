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

#include <alibabacloud/teslamaxcompute/model/QueryCustomerSaleInfoRequest.h>

using AlibabaCloud::TeslaMaxCompute::Model::QueryCustomerSaleInfoRequest;

QueryCustomerSaleInfoRequest::QueryCustomerSaleInfoRequest() :
	RpcServiceRequest("teslamaxcompute", "2018-01-04", "QueryCustomerSaleInfo")
{
	setMethod(HttpRequest::Method::Get);
}

QueryCustomerSaleInfoRequest::~QueryCustomerSaleInfoRequest()
{}

std::string QueryCustomerSaleInfoRequest::getRegionName()const
{
	return regionName_;
}

void QueryCustomerSaleInfoRequest::setRegionName(const std::string& regionName)
{
	regionName_ = regionName;
	setParameter("RegionName", regionName);
}

