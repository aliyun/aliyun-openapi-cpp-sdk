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

#include <alibabacloud/cdn/model/DescribeLiveSpecificDomainMappingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveSpecificDomainMappingResult::DescribeLiveSpecificDomainMappingResult() :
	ServiceResult()
{}

DescribeLiveSpecificDomainMappingResult::DescribeLiveSpecificDomainMappingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveSpecificDomainMappingResult::~DescribeLiveSpecificDomainMappingResult()
{}

void DescribeLiveSpecificDomainMappingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainMappingModels = value["DomainMappingModels"]["DomainMappingModel"];
	for (auto value : allDomainMappingModels)
	{
		DomainMappingModel domainMappingModelObject;
		domainMappingModelObject.pushDomain = value["PushDomain"].asString();
		domainMappingModelObject.pullDomain = value["PullDomain"].asString();
		domainMappingModels_.push_back(domainMappingModelObject);
	}

}

