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

#include <alibabacloud/companyreg/model/QueryCommodityConfigRequest.h>

using AlibabaCloud::Companyreg::Model::QueryCommodityConfigRequest;

QueryCommodityConfigRequest::QueryCommodityConfigRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "QueryCommodityConfig")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCommodityConfigRequest::~QueryCommodityConfigRequest()
{}

std::string QueryCommodityConfigRequest::getBizType()const
{
	return bizType_;
}

void QueryCommodityConfigRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

bool QueryCommodityConfigRequest::getQueryModule()const
{
	return queryModule_;
}

void QueryCommodityConfigRequest::setQueryModule(bool queryModule)
{
	queryModule_ = queryModule;
	setParameter("QueryModule", queryModule ? "true" : "false");
}

std::string QueryCommodityConfigRequest::getCommodityCode()const
{
	return commodityCode_;
}

void QueryCommodityConfigRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

