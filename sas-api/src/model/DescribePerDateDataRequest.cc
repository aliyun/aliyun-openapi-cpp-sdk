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

#include <alibabacloud/sas-api/model/DescribePerDateDataRequest.h>

using AlibabaCloud::Sas_api::Model::DescribePerDateDataRequest;

DescribePerDateDataRequest::DescribePerDateDataRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "DescribePerDateData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePerDateDataRequest::~DescribePerDateDataRequest()
{}

int DescribePerDateDataRequest::getApiType()const
{
	return apiType_;
}

void DescribePerDateDataRequest::setApiType(int apiType)
{
	apiType_ = apiType;
	setParameter("ApiType", std::to_string(apiType));
}

std::string DescribePerDateDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePerDateDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

