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

#include <alibabacloud/sas/model/DescribeRiskCheckSummaryRequest.h>

using AlibabaCloud::Sas::Model::DescribeRiskCheckSummaryRequest;

DescribeRiskCheckSummaryRequest::DescribeRiskCheckSummaryRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeRiskCheckSummary")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRiskCheckSummaryRequest::~DescribeRiskCheckSummaryRequest()
{}

long DescribeRiskCheckSummaryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRiskCheckSummaryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRiskCheckSummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRiskCheckSummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeRiskCheckSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeRiskCheckSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

