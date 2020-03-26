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

#include <alibabacloud/afs/model/DescribeAfsTotalConfDataRequest.h>

using AlibabaCloud::Afs::Model::DescribeAfsTotalConfDataRequest;

DescribeAfsTotalConfDataRequest::DescribeAfsTotalConfDataRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeAfsTotalConfData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAfsTotalConfDataRequest::~DescribeAfsTotalConfDataRequest()
{}

std::string DescribeAfsTotalConfDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAfsTotalConfDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAfsTotalConfDataRequest::getProductName()const
{
	return productName_;
}

void DescribeAfsTotalConfDataRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

