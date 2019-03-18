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

#include <alibabacloud/cas/model/DescribeStsAuthStatusRequest.h>

using AlibabaCloud::Cas::Model::DescribeStsAuthStatusRequest;

DescribeStsAuthStatusRequest::DescribeStsAuthStatusRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeStsAuthStatus")
{}

DescribeStsAuthStatusRequest::~DescribeStsAuthStatusRequest()
{}

std::string DescribeStsAuthStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeStsAuthStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeStsAuthStatusRequest::getCloudProduct()const
{
	return cloudProduct_;
}

void DescribeStsAuthStatusRequest::setCloudProduct(const std::string& cloudProduct)
{
	cloudProduct_ = cloudProduct;
	setParameter("CloudProduct", cloudProduct);
}

std::string DescribeStsAuthStatusRequest::getLang()const
{
	return lang_;
}

void DescribeStsAuthStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

