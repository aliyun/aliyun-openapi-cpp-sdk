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

#include <alibabacloud/elasticsearch/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeRegionsResult::DescribeRegionsResult() :
	ServiceResult()
{}

DescribeRegionsResult::DescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionsResult::~DescribeRegionsResult()
{}

void DescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["regionInfo"];
	for (auto valueResultregionInfo : allResultNode)
	{
		RegionInfo resultObject;
		if(!valueResultregionInfo["regionId"].isNull())
			resultObject.regionId = valueResultregionInfo["regionId"].asString();
		if(!valueResultregionInfo["status"].isNull())
			resultObject.status = valueResultregionInfo["status"].asString();
		if(!valueResultregionInfo["regionEndpoint"].isNull())
			resultObject.regionEndpoint = valueResultregionInfo["regionEndpoint"].asString();
		if(!valueResultregionInfo["localName"].isNull())
			resultObject.localName = valueResultregionInfo["localName"].asString();
		if(!valueResultregionInfo["consoleEndpoint"].isNull())
			resultObject.consoleEndpoint = valueResultregionInfo["consoleEndpoint"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<DescribeRegionsResult::RegionInfo> DescribeRegionsResult::getResult()const
{
	return result_;
}

