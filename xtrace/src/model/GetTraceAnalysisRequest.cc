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

#include <alibabacloud/xtrace/model/GetTraceAnalysisRequest.h>

using AlibabaCloud::Xtrace::Model::GetTraceAnalysisRequest;

GetTraceAnalysisRequest::GetTraceAnalysisRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "GetTraceAnalysis")
{
	setMethod(HttpRequest::Method::Post);
}

GetTraceAnalysisRequest::~GetTraceAnalysisRequest()
{}

std::string GetTraceAnalysisRequest::getRegionId()const
{
	return regionId_;
}

void GetTraceAnalysisRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetTraceAnalysisRequest::getQuery()const
{
	return query_;
}

void GetTraceAnalysisRequest::setQuery(const std::string& query)
{
	query_ = query;
	setParameter("Query", query);
}

std::string GetTraceAnalysisRequest::getApi()const
{
	return api_;
}

void GetTraceAnalysisRequest::setApi(const std::string& api)
{
	api_ = api;
	setParameter("Api", api);
}

std::string GetTraceAnalysisRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void GetTraceAnalysisRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

