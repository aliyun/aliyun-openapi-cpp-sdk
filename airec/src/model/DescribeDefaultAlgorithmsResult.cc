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

#include <alibabacloud/airec/model/DescribeDefaultAlgorithmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeDefaultAlgorithmsResult::DescribeDefaultAlgorithmsResult() :
	ServiceResult()
{}

DescribeDefaultAlgorithmsResult::DescribeDefaultAlgorithmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDefaultAlgorithmsResult::~DescribeDefaultAlgorithmsResult()
{}

void DescribeDefaultAlgorithmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["key"].isNull())
			resultObject.key = valueresultresultItem["key"].asString();
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["category"].isNull())
			resultObject.category = valueresultresultItem["category"].asString();
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		if(!valueresultresultItem["defaultValue"].isNull())
			resultObject.defaultValue = valueresultresultItem["defaultValue"].asString();
		if(!valueresultresultItem["experimentValue"].isNull())
			resultObject.experimentValue = valueresultresultItem["experimentValue"].asString();
		if(!valueresultresultItem["hasConfig"].isNull())
			resultObject.hasConfig = valueresultresultItem["hasConfig"].asString() == "true";
		auto allconfigNode = valueresultresultItem["config"]["configItem"];
		for (auto valueresultresultItemconfigconfigItem : allconfigNode)
		{
			ResultItem::ConfigItem configObject;
			if(!valueresultresultItemconfigconfigItem["key"].isNull())
				configObject.key = valueresultresultItemconfigconfigItem["key"].asString();
			if(!valueresultresultItemconfigconfigItem["name"].isNull())
				configObject.name = valueresultresultItemconfigconfigItem["name"].asString();
			if(!valueresultresultItemconfigconfigItem["defaultValue"].isNull())
				configObject.defaultValue = valueresultresultItemconfigconfigItem["defaultValue"].asString();
			if(!valueresultresultItemconfigconfigItem["experimentValue"].isNull())
				configObject.experimentValue = valueresultresultItemconfigconfigItem["experimentValue"].asString();
			resultObject.config.push_back(configObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<DescribeDefaultAlgorithmsResult::ResultItem> DescribeDefaultAlgorithmsResult::getresult()const
{
	return result_;
}

std::string DescribeDefaultAlgorithmsResult::getRequestId()const
{
	return requestId_;
}

