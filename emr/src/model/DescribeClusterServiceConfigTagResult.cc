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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterServiceConfigTagResult::DescribeClusterServiceConfigTagResult() :
	ServiceResult()
{}

DescribeClusterServiceConfigTagResult::DescribeClusterServiceConfigTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterServiceConfigTagResult::~DescribeClusterServiceConfigTagResult()
{}

void DescribeClusterServiceConfigTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigTagListNode = value["ConfigTagList"]["ConfigTag"];
	for (auto valueConfigTagListConfigTag : allConfigTagListNode)
	{
		ConfigTag configTagListObject;
		if(!valueConfigTagListConfigTag["Tag"].isNull())
			configTagListObject.tag = valueConfigTagListConfigTag["Tag"].asString();
		if(!valueConfigTagListConfigTag["TagDesc"].isNull())
			configTagListObject.tagDesc = valueConfigTagListConfigTag["TagDesc"].asString();
		auto allValueListNode = valueConfigTagListConfigTag["ValueList"]["Value"];
		for (auto valueConfigTagListConfigTagValueListValue : allValueListNode)
		{
			ConfigTag::Value valueListObject;
			if(!valueConfigTagListConfigTagValueListValue["Value"].isNull())
				valueListObject.value = valueConfigTagListConfigTagValueListValue["Value"].asString();
			if(!valueConfigTagListConfigTagValueListValue["ValueDesc"].isNull())
				valueListObject.valueDesc = valueConfigTagListConfigTagValueListValue["ValueDesc"].asString();
			configTagListObject.valueList.push_back(valueListObject);
		}
		configTagList_.push_back(configTagListObject);
	}

}

std::vector<DescribeClusterServiceConfigTagResult::ConfigTag> DescribeClusterServiceConfigTagResult::getConfigTagList()const
{
	return configTagList_;
}

