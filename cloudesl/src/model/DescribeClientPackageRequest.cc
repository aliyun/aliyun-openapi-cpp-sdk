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

#include <alibabacloud/cloudesl/model/DescribeClientPackageRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeClientPackageRequest;

DescribeClientPackageRequest::DescribeClientPackageRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeClientPackage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClientPackageRequest::~DescribeClientPackageRequest()
{}

std::string DescribeClientPackageRequest::getClientType()const
{
	return clientType_;
}

void DescribeClientPackageRequest::setClientType(const std::string& clientType)
{
	clientType_ = clientType;
	setBodyParameter("ClientType", clientType);
}

std::string DescribeClientPackageRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribeClientPackageRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

