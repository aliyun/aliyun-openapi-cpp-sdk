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

#include <alibabacloud/cdn/model/DescribeCustomLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCustomLogConfigResult::DescribeCustomLogConfigResult() :
	ServiceResult()
{}

DescribeCustomLogConfigResult::DescribeCustomLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomLogConfigResult::~DescribeCustomLogConfigResult()
{}

void DescribeCustomLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["Sample"].isNull())
		sample_ = value["Sample"].asString();

}

std::string DescribeCustomLogConfigResult::getSample()const
{
	return sample_;
}

std::string DescribeCustomLogConfigResult::getTag()const
{
	return tag_;
}

std::string DescribeCustomLogConfigResult::getRemark()const
{
	return remark_;
}

