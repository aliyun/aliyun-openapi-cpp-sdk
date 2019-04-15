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

#include <alibabacloud/aegis/model/BatchDeleteWhiteListRequest.h>

using AlibabaCloud::Aegis::Model::BatchDeleteWhiteListRequest;

BatchDeleteWhiteListRequest::BatchDeleteWhiteListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "BatchDeleteWhiteList")
{}

BatchDeleteWhiteListRequest::~BatchDeleteWhiteListRequest()
{}

std::string BatchDeleteWhiteListRequest::getRiskIdList()const
{
	return riskIdList_;
}

void BatchDeleteWhiteListRequest::setRiskIdList(const std::string& riskIdList)
{
	riskIdList_ = riskIdList;
	setCoreParameter("RiskIdList", riskIdList);
}

std::string BatchDeleteWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void BatchDeleteWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

