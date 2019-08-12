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
{}

DescribeCertificateStatusCountRequest::~DescribeCertificateStatusCountRequest()
{}

std::string DescribeCertificateStatusCountRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCertificateStatusCountRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeCertificateStatusCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateStatusCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeCertificateStatusCountRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCertificateStatusCountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::vector<DescribeCertificateStatusCountRequest::Tag> DescribeCertificateStatusCountRequest::getTag()const
{
	return tag_;
}

void DescribeCertificateStatusCountRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeCertificateStatusCountRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateStatusCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

