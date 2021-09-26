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

#include <alibabacloud/sddp/model/DescribeInstancePortraitRequest.h>

using AlibabaCloud::Sddp::Model::DescribeInstancePortraitRequest;

DescribeInstancePortraitRequest::DescribeInstancePortraitRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeInstancePortrait")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancePortraitRequest::~DescribeInstancePortraitRequest()
{}

long DescribeInstancePortraitRequest::getProductId()const
{
	return productId_;
}

void DescribeInstancePortraitRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

std::string DescribeInstancePortraitRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeInstancePortraitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeInstancePortraitRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstancePortraitRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeInstancePortraitRequest::getItemKeys()const
{
	return itemKeys_;
}

void DescribeInstancePortraitRequest::setItemKeys(const std::string& itemKeys)
{
	itemKeys_ = itemKeys;
	setParameter("ItemKeys", itemKeys);
}

