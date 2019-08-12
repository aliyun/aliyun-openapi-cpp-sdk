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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto configsNode = value["Configs"];
	auto ossLogConfigNode = configsNode["OssLogConfig"];
	if(!ossLogConfigNode["Enable"].isNull())
		configs_.ossLogConfig.enable = ossLogConfigNode["Enable"].asString();
	if(!ossLogConfigNode["Bucket"].isNull())
		configs_.ossLogConfig.bucket = ossLogConfigNode["Bucket"].asString();
	if(!ossLogConfigNode["Prefix"].isNull())
		configs_.ossLogConfig.prefix = ossLogConfigNode["Prefix"].asString();
	auto greenManagerConfigNode = configsNode["GreenManagerConfig"];
	if(!greenManagerConfigNode["Quota"].isNull())
		configs_.greenManagerConfig.quota = greenManagerConfigNode["Quota"].asString();
	if(!greenManagerConfigNode["Ratio"].isNull())
		configs_.greenManagerConfig.ratio = greenManagerConfigNode["Ratio"].asString();
	auto wafConfigNode = configsNode["WafConfig"];
	if(!wafConfigNode["Enable"].isNull())
		configs_.wafConfig.enable = wafConfigNode["Enable"].asString();

}

DescribeUserConfigsResult::Configs DescribeUserConfigsResult::getConfigs()const
{
	return configs_;
}

