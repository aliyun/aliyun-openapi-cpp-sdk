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

#include <alibabacloud/cs/model/DescribeClusterAddonsVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterAddonsVersionResult::DescribeClusterAddonsVersionResult() :
	ServiceResult()
{}

DescribeClusterAddonsVersionResult::DescribeClusterAddonsVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterAddonsVersionResult::~DescribeClusterAddonsVersionResult()
{}

void DescribeClusterAddonsVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["template"].isNull())
		_template_ = value["template"].asString();
	if(!value["next_version"].isNull())
		next_version_ = value["next_version"].asString();
	if(!value["can_upgrade"].isNull())
		can_upgrade_ = value["can_upgrade"].asString() == "true";
	if(!value["component_name"].isNull())
		component_name_ = value["component_name"].asString();
	if(!value["version"].isNull())
		version_ = value["version"].asString();
	if(!value["changed"].isNull())
		changed_ = value["changed"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["required"].isNull())
		required_ = value["required"].asString() == "true";

}

std::string DescribeClusterAddonsVersionResult::getNext_version()const
{
	return next_version_;
}

std::string DescribeClusterAddonsVersionResult::get_Template()const
{
	return _template_;
}

bool DescribeClusterAddonsVersionResult::getCan_upgrade()const
{
	return can_upgrade_;
}

std::string DescribeClusterAddonsVersionResult::getMessage()const
{
	return message_;
}

bool DescribeClusterAddonsVersionResult::getRequired()const
{
	return required_;
}

std::string DescribeClusterAddonsVersionResult::getVersion()const
{
	return version_;
}

std::string DescribeClusterAddonsVersionResult::getChanged()const
{
	return changed_;
}

std::string DescribeClusterAddonsVersionResult::getComponent_name()const
{
	return component_name_;
}

