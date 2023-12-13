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

#include <alibabacloud/cloud-siem/model/DescribeImportedLogCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeImportedLogCountResult::DescribeImportedLogCountResult() :
	ServiceResult()
{}

DescribeImportedLogCountResult::DescribeImportedLogCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImportedLogCountResult::~DescribeImportedLogCountResult()
{}

void DescribeImportedLogCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalLogCount"].isNull())
		data_.totalLogCount = std::stoi(dataNode["TotalLogCount"].asString());
	if(!dataNode["ImportedLogCount"].isNull())
		data_.importedLogCount = std::stoi(dataNode["ImportedLogCount"].asString());
	if(!dataNode["UnImportedLogCount"].isNull())
		data_.unImportedLogCount = std::stoi(dataNode["UnImportedLogCount"].asString());

}

DescribeImportedLogCountResult::Data DescribeImportedLogCountResult::getData()const
{
	return data_;
}

