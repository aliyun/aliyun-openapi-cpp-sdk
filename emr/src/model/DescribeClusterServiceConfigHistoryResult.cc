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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterServiceConfigHistoryResult::DescribeClusterServiceConfigHistoryResult() :
	ServiceResult()
{}

DescribeClusterServiceConfigHistoryResult::DescribeClusterServiceConfigHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterServiceConfigHistoryResult::~DescribeClusterServiceConfigHistoryResult()
{}

void DescribeClusterServiceConfigHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["ServiceName"].isNull())
		config_.serviceName = configNode["ServiceName"].asString();
	if(!configNode["ConfigVersion"].isNull())
		config_.configVersion = configNode["ConfigVersion"].asString();
	if(!configNode["Applied"].isNull())
		config_.applied = configNode["Applied"].asString() == "true";
	if(!configNode["CreateTime"].isNull())
		config_.createTime = configNode["CreateTime"].asString();
	if(!configNode["Author"].isNull())
		config_.author = configNode["Author"].asString();
	if(!configNode["Comment"].isNull())
		config_.comment = configNode["Comment"].asString();
	auto allConfigValueList = value["ConfigValueList"]["ConfigValue"];
	for (auto value : allConfigValueList)
	{
		Config::ConfigValue configValueObject;
		if(!value["ConfigName"].isNull())
			configValueObject.configName = value["ConfigName"].asString();
		auto allConfigItemValueList = value["ConfigItemValueList"]["ConfigItemValue"];
		for (auto value : allConfigItemValueList)
		{
			Config::ConfigValue::ConfigItemValue configItemValueListObject;
			if(!value["ItemName"].isNull())
				configItemValueListObject.itemName = value["ItemName"].asString();
			if(!value["Value"].isNull())
				configItemValueListObject.value = value["Value"].asString();
			if(!value["OldValue"].isNull())
				configItemValueListObject.oldValue = value["OldValue"].asString();
			if(!value["ChangeType"].isNull())
				configItemValueListObject.changeType = value["ChangeType"].asString();
			configValueObject.configItemValueList.push_back(configItemValueListObject);
		}
		config_.configValueList.push_back(configValueObject);
	}

}

DescribeClusterServiceConfigHistoryResult::Config DescribeClusterServiceConfigHistoryResult::getConfig()const
{
	return config_;
}

