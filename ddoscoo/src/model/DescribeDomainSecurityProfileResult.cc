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

#include <alibabacloud/ddoscoo/model/DescribeDomainSecurityProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainSecurityProfileResult::DescribeDomainSecurityProfileResult() :
	ServiceResult()
{}

DescribeDomainSecurityProfileResult::DescribeDomainSecurityProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSecurityProfileResult::~DescribeDomainSecurityProfileResult()
{}

void DescribeDomainSecurityProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["data"];
	for (auto valueResultdata : allResultNode)
	{
		Data resultObject;
		if(!valueResultdata["GlobalMode"].isNull())
			resultObject.globalMode = valueResultdata["GlobalMode"].asString();
		if(!valueResultdata["GlobalEnable"].isNull())
			resultObject.globalEnable = valueResultdata["GlobalEnable"].asString() == "true";
		result_.push_back(resultObject);
	}

}

std::vector<DescribeDomainSecurityProfileResult::Data> DescribeDomainSecurityProfileResult::getResult()const
{
	return result_;
}

