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

#include <alibabacloud/sas/model/DescribeLoginSwitchConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeLoginSwitchConfigsResult::DescribeLoginSwitchConfigsResult() :
	ServiceResult()
{}

DescribeLoginSwitchConfigsResult::DescribeLoginSwitchConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoginSwitchConfigsResult::~DescribeLoginSwitchConfigsResult()
{}

void DescribeLoginSwitchConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigListNode = value["ConfigList"]["Config"];
	for (auto valueConfigListConfig : allConfigListNode)
	{
		Config configListObject;
		if(!valueConfigListConfig["Status"].isNull())
			configListObject.status = std::stoi(valueConfigListConfig["Status"].asString());
		if(!valueConfigListConfig["Item"].isNull())
			configListObject.item = valueConfigListConfig["Item"].asString();
		configList_.push_back(configListObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeLoginSwitchConfigsResult::getCount()const
{
	return count_;
}

std::vector<DescribeLoginSwitchConfigsResult::Config> DescribeLoginSwitchConfigsResult::getConfigList()const
{
	return configList_;
}

