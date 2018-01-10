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

#include <alibabacloud/cdn/model/DescribeUserConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserConfigsResult::DescribeUserConfigsResult() :
	ServiceResult()
{}

DescribeUserConfigsResult::DescribeUserConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserConfigsResult::~DescribeUserConfigsResult()
{}

void DescribeUserConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allConfigs = value["Configs"];
	for (auto value : allConfigs)
	{
		Configs configsObject;
		auto allOssLogConfig = value["OssLogConfig"];
		for (auto value : allOssLogConfig)
		{
			Configs::OssLogConfig ossLogConfigObject;
			ossLogConfigObject.enable = value["Enable"].asString();
			ossLogConfigObject.bucket = value["Bucket"].asString();
			ossLogConfigObject.prefix = value["Prefix"].asString();
			configsObject.ossLogConfig.push_back(ossLogConfigObject);
		}
		auto allGreenManagerConfig = value["GreenManagerConfig"];
		for (auto value : allGreenManagerConfig)
		{
			Configs::GreenManagerConfig greenManagerConfigObject;
			greenManagerConfigObject.quota = value["Quota"].asString();
			greenManagerConfigObject.ratio = value["Ratio"].asString();
			configsObject.greenManagerConfig.push_back(greenManagerConfigObject);
		}
		configs_.push_back(configsObject);
	}

}

