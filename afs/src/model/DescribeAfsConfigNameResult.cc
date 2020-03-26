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

#include <alibabacloud/afs/model/DescribeAfsConfigNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeAfsConfigNameResult::DescribeAfsConfigNameResult() :
	ServiceResult()
{}

DescribeAfsConfigNameResult::DescribeAfsConfigNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAfsConfigNameResult::~DescribeAfsConfigNameResult()
{}

void DescribeAfsConfigNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigNamesNode = value["ConfigNames"]["AfsConfigName"];
	for (auto valueConfigNamesAfsConfigName : allConfigNamesNode)
	{
		AfsConfigName configNamesObject;
		if(!valueConfigNamesAfsConfigName["AliUid"].isNull())
			configNamesObject.aliUid = valueConfigNamesAfsConfigName["AliUid"].asString();
		if(!valueConfigNamesAfsConfigName["ConfigName"].isNull())
			configNamesObject.configName = valueConfigNamesAfsConfigName["ConfigName"].asString();
		if(!valueConfigNamesAfsConfigName["AppKey"].isNull())
			configNamesObject.appKey = valueConfigNamesAfsConfigName["AppKey"].asString();
		if(!valueConfigNamesAfsConfigName["Scene"].isNull())
			configNamesObject.scene = valueConfigNamesAfsConfigName["Scene"].asString();
		if(!valueConfigNamesAfsConfigName["RefExtId"].isNull())
			configNamesObject.refExtId = valueConfigNamesAfsConfigName["RefExtId"].asString();
		configNames_.push_back(configNamesObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeAfsConfigNameResult::AfsConfigName> DescribeAfsConfigNameResult::getConfigNames()const
{
	return configNames_;
}

std::string DescribeAfsConfigNameResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeAfsConfigNameResult::getHasData()const
{
	return hasData_;
}

