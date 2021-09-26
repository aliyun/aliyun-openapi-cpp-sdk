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

#include <alibabacloud/sddp/model/DescribeRuleCategoryRequest.h>

using AlibabaCloud::Sddp::Model::DescribeRuleCategoryRequest;

DescribeRuleCategoryRequest::DescribeRuleCategoryRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeRuleCategory")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRuleCategoryRequest::~DescribeRuleCategoryRequest()
{}

long DescribeRuleCategoryRequest::getProductId()const
{
	return productId_;
}

void DescribeRuleCategoryRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

std::string DescribeRuleCategoryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRuleCategoryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeRuleCategoryRequest::getLang()const
{
	return lang_;
}

void DescribeRuleCategoryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

