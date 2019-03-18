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

#include <alibabacloud/cas/model/DescribeOrderDetailRequest.h>

using AlibabaCloud::Cas::Model::DescribeOrderDetailRequest;

DescribeOrderDetailRequest::DescribeOrderDetailRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOrderDetail")
{}

DescribeOrderDetailRequest::~DescribeOrderDetailRequest()
{}

std::string DescribeOrderDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOrderDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeOrderDetailRequest::getOrderId()const
{
	return orderId_;
}

void DescribeOrderDetailRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string DescribeOrderDetailRequest::getLang()const
{
	return lang_;
}

void DescribeOrderDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

