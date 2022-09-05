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

#include <alibabacloud/cdn/model/DescribeConfigGroupDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeConfigGroupDetailResult::DescribeConfigGroupDetailResult() :
	ServiceResult()
{}

DescribeConfigGroupDetailResult::DescribeConfigGroupDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigGroupDetailResult::~DescribeConfigGroupDetailResult()
{}

void DescribeConfigGroupDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ConfigGroupName"].isNull())
		configGroupName_ = value["ConfigGroupName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["BizName"].isNull())
		bizName_ = value["BizName"].asString();
	if(!value["ConfigGroupId"].isNull())
		configGroupId_ = value["ConfigGroupId"].asString();

}

std::string DescribeConfigGroupDetailResult::getConfigGroupId()const
{
	return configGroupId_;
}

std::string DescribeConfigGroupDetailResult::getDescription()const
{
	return description_;
}

std::string DescribeConfigGroupDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeConfigGroupDetailResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeConfigGroupDetailResult::getConfigGroupName()const
{
	return configGroupName_;
}

std::string DescribeConfigGroupDetailResult::getBizName()const
{
	return bizName_;
}

