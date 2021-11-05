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

#include <alibabacloud/dcdn/model/DescribeDcdnConfigGroupDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnConfigGroupDetailResult::DescribeDcdnConfigGroupDetailResult() :
	ServiceResult()
{}

DescribeDcdnConfigGroupDetailResult::DescribeDcdnConfigGroupDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnConfigGroupDetailResult::~DescribeDcdnConfigGroupDetailResult()
{}

void DescribeDcdnConfigGroupDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ConfigGroupId"].isNull())
		configGroupId_ = value["ConfigGroupId"].asString();
	if(!value["ConfigGroupName"].isNull())
		configGroupName_ = value["ConfigGroupName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["BizName"].isNull())
		bizName_ = value["BizName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();

}

std::string DescribeDcdnConfigGroupDetailResult::getConfigGroupId()const
{
	return configGroupId_;
}

std::string DescribeDcdnConfigGroupDetailResult::getDescription()const
{
	return description_;
}

std::string DescribeDcdnConfigGroupDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDcdnConfigGroupDetailResult::getConfigGroupName()const
{
	return configGroupName_;
}

std::string DescribeDcdnConfigGroupDetailResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeDcdnConfigGroupDetailResult::getBizName()const
{
	return bizName_;
}

