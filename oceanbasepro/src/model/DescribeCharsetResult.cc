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

#include <alibabacloud/oceanbasepro/model/DescribeCharsetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeCharsetResult::DescribeCharsetResult() :
	ServiceResult()
{}

DescribeCharsetResult::DescribeCharsetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCharsetResult::~DescribeCharsetResult()
{}

void DescribeCharsetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCharsetNode = value["Charset"]["CharsetItem"];
	for (auto valueCharsetCharsetItem : allCharsetNode)
	{
		CharsetItem charsetObject;
		if(!valueCharsetCharsetItem["Charset"].isNull())
			charsetObject.charset = valueCharsetCharsetItem["Charset"].asString();
		auto allCollations = value["Collations"]["Collations"];
		for (auto value : allCollations)
			charsetObject.collations.push_back(value.asString());
		charset_.push_back(charsetObject);
	}

}

std::vector<DescribeCharsetResult::CharsetItem> DescribeCharsetResult::getCharset()const
{
	return charset_;
}

