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

#include <alibabacloud/cas/model/DescribeCertificateStatusCountRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificateStatusCountRequest;

DescribeCertificateStatusCountRequest::DescribeCertificateStatusCountRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeCertificateStatusCount")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCertificateStatusCountRequest::~DescribeCertificateStatusCountRequest()
{}

std::string DescribeCertificateStatusCountRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCertificateStatusCountRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeCertificateStatusCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateStatusCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<DescribeCertificateStatusCountRequest::Tag> DescribeCertificateStatusCountRequest::getTag()const
{
	return tag_;
}

void DescribeCertificateStatusCountRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeCertificateStatusCountRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateStatusCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

