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

#include <alibabacloud/cas/model/DescribeOrderDocumentRequest.h>

using AlibabaCloud::Cas::Model::DescribeOrderDocumentRequest;

DescribeOrderDocumentRequest::DescribeOrderDocumentRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOrderDocument")
{}

DescribeOrderDocumentRequest::~DescribeOrderDocumentRequest()
{}

std::string DescribeOrderDocumentRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOrderDocumentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long DescribeOrderDocumentRequest::getOrderId()const
{
	return orderId_;
}

void DescribeOrderDocumentRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::string DescribeOrderDocumentRequest::getType()const
{
	return type_;
}

void DescribeOrderDocumentRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeOrderDocumentRequest::getLang()const
{
	return lang_;
}

void DescribeOrderDocumentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

