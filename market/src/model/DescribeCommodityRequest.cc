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

#include <alibabacloud/market/model/DescribeCommodityRequest.h>

using AlibabaCloud::Market::Model::DescribeCommodityRequest;

DescribeCommodityRequest::DescribeCommodityRequest() :
	RpcServiceRequest("market", "2015-11-01", "DescribeCommodity")
{}

DescribeCommodityRequest::~DescribeCommodityRequest()
{}

std::string DescribeCommodityRequest::getCommodityId()const
{
	return commodityId_;
}

void DescribeCommodityRequest::setCommodityId(const std::string& commodityId)
{
	commodityId_ = commodityId;
	setCoreParameter("CommodityId", commodityId);
}

