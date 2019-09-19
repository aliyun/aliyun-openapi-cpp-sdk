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

#include <alibabacloud/yundun-ds/model/DescribeConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeConfigsResult::DescribeConfigsResult() :
	ServiceResult()
{}

DescribeConfigsResult::DescribeConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigsResult::~DescribeConfigsResult()
{}

void DescribeConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigListNode = value["ConfigList"]["Config"];
	for (auto valueConfigListConfig : allConfigListNode)
	{
		Config configListObject;
		if(!valueConfigListConfig["Id"].isNull())
			configListObject.id = std::stol(valueConfigListConfig["Id"].asString());
		if(!valueConfigListConfig["Code"].isNull())
			configListObject.code = std::stoi(valueConfigListConfig["Code"].asString());
		if(!valueConfigListConfig["Description"].isNull())
			configListObject.description = valueConfigListConfig["Description"].asString();
		if(!valueConfigListConfig["Value"].isNull())
			configListObject.value = std::stol(valueConfigListConfig["Value"].asString());
		if(!valueConfigListConfig["DefaultValue"].isNull())
			configListObject.defaultValue = valueConfigListConfig["DefaultValue"].asString();
		configList_.push_back(configListObject);
	}

}

std::vector<DescribeConfigsResult::Config> DescribeConfigsResult::getConfigList()const
{
	return configList_;
}

