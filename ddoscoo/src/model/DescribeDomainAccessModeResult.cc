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

#include <alibabacloud/ddoscoo/model/DescribeDomainAccessModeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainAccessModeResult::DescribeDomainAccessModeResult() :
	ServiceResult()
{}

DescribeDomainAccessModeResult::DescribeDomainAccessModeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainAccessModeResult::~DescribeDomainAccessModeResult()
{}

void DescribeDomainAccessModeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainModeListNode = value["DomainModeList"]["DomainMode"];
	for (auto valueDomainModeListDomainMode : allDomainModeListNode)
	{
		DomainMode domainModeListObject;
		if(!valueDomainModeListDomainMode["Domain"].isNull())
			domainModeListObject.domain = valueDomainModeListDomainMode["Domain"].asString();
		if(!valueDomainModeListDomainMode["AccessMode"].isNull())
			domainModeListObject.accessMode = std::stoi(valueDomainModeListDomainMode["AccessMode"].asString());
		domainModeList_.push_back(domainModeListObject);
	}

}

std::vector<DescribeDomainAccessModeResult::DomainMode> DescribeDomainAccessModeResult::getDomainModeList()const
{
	return domainModeList_;
}

