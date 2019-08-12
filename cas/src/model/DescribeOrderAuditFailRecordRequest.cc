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

#include <alibabacloud/cas/model/DescribeOrderAuditFailRecordRequest.h>

using AlibabaCloud::Cas::Model::DescribeOrderAuditFailRecordRequest;

DescribeOrderAuditFailRecordRequest::DescribeOrderAuditFailRecordRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOrderAuditFailRecord")
{}

DescribeOrderAuditFailRecordRequest::~DescribeOrderAuditFailRecordRequest()
{}

std::string DescribeOrderAuditFailRecordRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOrderAuditFailRecordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long DescribeOrderAuditFailRecordRequest::getOrderId()const
{
	return orderId_;
}

void DescribeOrderAuditFailRecordRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::string DescribeOrderAuditFailRecordRequest::getLang()const
{
	return lang_;
}

void DescribeOrderAuditFailRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

