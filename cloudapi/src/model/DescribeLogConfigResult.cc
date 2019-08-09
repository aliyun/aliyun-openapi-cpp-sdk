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

#include <alibabacloud/cloudapi/model/DescribeLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeLogConfigResult::DescribeLogConfigResult() :
	ServiceResult()
{}

DescribeLogConfigResult::DescribeLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogConfigResult::~DescribeLogConfigResult()
{}

void DescribeLogConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLogInfos = value["LogInfos"]["LogInfo"];
	for (auto value : allLogInfos)
	{
		LogInfo logInfosObject;
		if(!value["RegionId"].isNull())
			logInfosObject.regionId = value["RegionId"].asString();
		if(!value["SlsProject"].isNull())
			logInfosObject.slsProject = value["SlsProject"].asString();
		if(!value["SlsLogStore"].isNull())
			logInfosObject.slsLogStore = value["SlsLogStore"].asString();
		if(!value["LogType"].isNull())
			logInfosObject.logType = value["LogType"].asString();
		logInfos_.push_back(logInfosObject);
	}

}

std::vector<DescribeLogConfigResult::LogInfo> DescribeLogConfigResult::getLogInfos()const
{
	return logInfos_;
}

