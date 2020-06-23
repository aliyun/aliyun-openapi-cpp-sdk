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

#include <alibabacloud/cs/model/DescribeTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeTemplatesResult::DescribeTemplatesResult() :
	ServiceResult()
{}

DescribeTemplatesResult::DescribeTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplatesResult::~DescribeTemplatesResult()
{}

void DescribeTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["template"].isNull())
		_template_ = value["template"].asString();
	if(!value["acl"].isNull())
		acl_ = value["acl"].asString();
	if(!value["name"].isNull())
		name_ = value["name"].asString();
	if(!value["tags"].isNull())
		tags_ = value["tags"].asString();
	if(!value["template_type"].isNull())
		template_type_ = value["template_type"].asString();
	if(!value["description"].isNull())
		description_ = value["description"].asString();

}

std::string DescribeTemplatesResult::get_Template()const
{
	return _template_;
}

std::string DescribeTemplatesResult::getDescription()const
{
	return description_;
}

std::string DescribeTemplatesResult::getAcl()const
{
	return acl_;
}

std::string DescribeTemplatesResult::getTemplate_type()const
{
	return template_type_;
}

std::string DescribeTemplatesResult::getTags()const
{
	return tags_;
}

std::string DescribeTemplatesResult::getName()const
{
	return name_;
}

