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

#include <alibabacloud/cas/model/DescribeOrderRefundRecordRequest.h>

using AlibabaCloud::Cas::Model::DescribeOrderRefundRecordRequest;

DescribeOrderRefundRecordRequest::DescribeOrderRefundRecordRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOrderRefundRecord")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOrderRefundRecordRequest::~DescribeOrderRefundRecordRequest()
{}

std::string DescribeOrderRefundRecordRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeOrderRefundRecordRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeOrderRefundRecordRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOrderRefundRecordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

