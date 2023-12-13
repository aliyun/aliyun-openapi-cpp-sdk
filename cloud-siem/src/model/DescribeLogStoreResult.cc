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

#include <alibabacloud/cloud-siem/model/DescribeLogStoreResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeLogStoreResult::DescribeLogStoreResult() :
	ServiceResult()
{}

DescribeLogStoreResult::DescribeLogStoreResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogStoreResult::~DescribeLogStoreResult()
{}

void DescribeLogStoreResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LogStoreName"].isNull())
		data_.logStoreName = dataNode["LogStoreName"].asString();
	if(!dataNode["Ttl"].isNull())
		data_.ttl = std::stoi(dataNode["Ttl"].asString());
	if(!dataNode["ShardCount"].isNull())
		data_.shardCount = std::stoi(dataNode["ShardCount"].asString());
	if(!dataNode["EnableTracking"].isNull())
		data_.enableTracking = dataNode["EnableTracking"].asString() == "true";
	if(!dataNode["AutoSplit"].isNull())
		data_.autoSplit = dataNode["AutoSplit"].asString() == "true";
	if(!dataNode["MaxSplitShard"].isNull())
		data_.maxSplitShard = std::stoi(dataNode["MaxSplitShard"].asString());
	if(!dataNode["AppendMeta"].isNull())
		data_.appendMeta = dataNode["AppendMeta"].asString() == "true";

}

DescribeLogStoreResult::Data DescribeLogStoreResult::getData()const
{
	return data_;
}

