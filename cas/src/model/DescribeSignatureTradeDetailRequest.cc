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

#include <alibabacloud/cas/model/DescribeSignatureTradeDetailRequest.h>

using AlibabaCloud::Cas::Model::DescribeSignatureTradeDetailRequest;

DescribeSignatureTradeDetailRequest::DescribeSignatureTradeDetailRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeSignatureTradeDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSignatureTradeDetailRequest::~DescribeSignatureTradeDetailRequest()
{}

std::string DescribeSignatureTradeDetailRequest::getTransactionId()const
{
	return transactionId_;
}

void DescribeSignatureTradeDetailRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setParameter("TransactionId", transactionId);
}

std::string DescribeSignatureTradeDetailRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSignatureTradeDetailRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSignatureTradeDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSignatureTradeDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeSignatureTradeDetailRequest::getLang()const
{
	return lang_;
}

void DescribeSignatureTradeDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

