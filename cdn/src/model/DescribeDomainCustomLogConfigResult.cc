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

#include <alibabacloud/cdn/model/DescribeDomainCustomLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCustomLogConfigResult::DescribeDomainCustomLogConfigResult() :
	ServiceResult()
{}

DescribeDomainCustomLogConfigResult::DescribeDomainCustomLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainCustomLogConfigResult::~DescribeDomainCustomLogConfigResult()
{}

void DescribeDomainCustomLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConfigId"].isNull())
		configId_ = value["ConfigId"].asString();
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["Sample"].isNull())
		sample_ = value["Sample"].asString();

}

std::string DescribeDomainCustomLogConfigResult::getSample()const
{
	return sample_;
}

std::string DescribeDomainCustomLogConfigResult::getConfigId()const
{
	return configId_;
}

std::string DescribeDomainCustomLogConfigResult::getTag()const
{
	return tag_;
}

std::string DescribeDomainCustomLogConfigResult::getRemark()const
{
	return remark_;
}

