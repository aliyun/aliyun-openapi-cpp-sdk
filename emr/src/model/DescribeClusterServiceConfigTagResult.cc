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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConfigTagList = value["ConfigTagList"]["ConfigTag"];
	for (auto value : allConfigTagList)
	{
		ConfigTag configTagListObject;
		if(!value["Tag"].isNull())
			configTagListObject.tag = value["Tag"].asString();
		if(!value["TagDesc"].isNull())
			configTagListObject.tagDesc = value["TagDesc"].asString();
		auto allValueList = value["ValueList"]["Value"];
		for (auto value : allValueList)
		{
			ConfigTag::Value valueListObject;
			if(!value["Value"].isNull())
				valueListObject.value = value["Value"].asString();
			if(!value["ValueDesc"].isNull())
				valueListObject.valueDesc = value["ValueDesc"].asString();
			configTagListObject.valueList.push_back(valueListObject);
		}
		configTagList_.push_back(configTagListObject);
	}

}

std::vector<DescribeClusterServiceConfigTagResult::ConfigTag> DescribeClusterServiceConfigTagResult::getConfigTagList()const
{
	return configTagList_;
}

