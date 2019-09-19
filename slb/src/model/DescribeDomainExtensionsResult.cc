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

#include <alibabacloud/slb/model/DescribeDomainExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeDomainExtensionsResult::DescribeDomainExtensionsResult() :
	ServiceResult()
{}

DescribeDomainExtensionsResult::DescribeDomainExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainExtensionsResult::~DescribeDomainExtensionsResult()
{}

void DescribeDomainExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainExtensionsNode = value["DomainExtensions"]["DomainExtension"];
	for (auto valueDomainExtensionsDomainExtension : allDomainExtensionsNode)
	{
		DomainExtension domainExtensionsObject;
		if(!valueDomainExtensionsDomainExtension["DomainExtensionId"].isNull())
			domainExtensionsObject.domainExtensionId = valueDomainExtensionsDomainExtension["DomainExtensionId"].asString();
		if(!valueDomainExtensionsDomainExtension["Domain"].isNull())
			domainExtensionsObject.domain = valueDomainExtensionsDomainExtension["Domain"].asString();
		if(!valueDomainExtensionsDomainExtension["ServerCertificateId"].isNull())
			domainExtensionsObject.serverCertificateId = valueDomainExtensionsDomainExtension["ServerCertificateId"].asString();
		domainExtensions_.push_back(domainExtensionsObject);
	}

}

std::vector<DescribeDomainExtensionsResult::DomainExtension> DescribeDomainExtensionsResult::getDomainExtensions()const
{
	return domainExtensions_;
}

