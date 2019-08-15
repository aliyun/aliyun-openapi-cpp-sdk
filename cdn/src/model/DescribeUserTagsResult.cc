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

#include <alibabacloud/cdn/model/DescribeUserTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserTagsResult::DescribeUserTagsResult() :
	ServiceResult()
{}

DescribeUserTagsResult::DescribeUserTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserTagsResult::~DescribeUserTagsResult()
{}

void DescribeUserTagsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagsObject;
		if(!value["Key"].isNull())
			tagsObject.key = value["Key"].asString();
		auto allValue = value["Value"]["Value"];
		for (auto value : allValue)
			tagsObject.value.push_back(value.asString());
		tags_.push_back(tagsObject);
	}

}

std::vector<DescribeUserTagsResult::Tag> DescribeUserTagsResult::getTags()const
{
	return tags_;
}

