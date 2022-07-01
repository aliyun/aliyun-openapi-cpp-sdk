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

#include <alibabacloud/ddoscoo/model/DescribeWebAccessModeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebAccessModeResult::DescribeWebAccessModeResult() :
	ServiceResult()
{}

DescribeWebAccessModeResult::DescribeWebAccessModeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebAccessModeResult::~DescribeWebAccessModeResult()
{}

void DescribeWebAccessModeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainModesNode = value["DomainModes"]["DomainMode"];
	for (auto valueDomainModesDomainMode : allDomainModesNode)
	{
		DomainMode domainModesObject;
		if(!valueDomainModesDomainMode["AccessMode"].isNull())
			domainModesObject.accessMode = std::stoi(valueDomainModesDomainMode["AccessMode"].asString());
		if(!valueDomainModesDomainMode["Domain"].isNull())
			domainModesObject.domain = valueDomainModesDomainMode["Domain"].asString();
		domainModes_.push_back(domainModesObject);
	}

}

std::vector<DescribeWebAccessModeResult::DomainMode> DescribeWebAccessModeResult::getDomainModes()const
{
	return domainModes_;
}

