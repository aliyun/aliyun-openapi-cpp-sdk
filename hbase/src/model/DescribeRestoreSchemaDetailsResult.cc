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

#include <alibabacloud/hbase/model/DescribeRestoreSchemaDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeRestoreSchemaDetailsResult::DescribeRestoreSchemaDetailsResult() :
	ServiceResult()
{}

DescribeRestoreSchemaDetailsResult::DescribeRestoreSchemaDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreSchemaDetailsResult::~DescribeRestoreSchemaDetailsResult()
{}

void DescribeRestoreSchemaDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto restoreSchemaNode = value["RestoreSchema"];
	if(!restoreSchemaNode["Succeed"].isNull())
		restoreSchema_.succeed = std::stoi(restoreSchemaNode["Succeed"].asString());
	if(!restoreSchemaNode["Fail"].isNull())
		restoreSchema_.fail = std::stoi(restoreSchemaNode["Fail"].asString());
	if(!restoreSchemaNode["Total"].isNull())
		restoreSchema_.total = std::stol(restoreSchemaNode["Total"].asString());
	if(!restoreSchemaNode["PageNumber"].isNull())
		restoreSchema_.pageNumber = std::stoi(restoreSchemaNode["PageNumber"].asString());
	if(!restoreSchemaNode["PageSize"].isNull())
		restoreSchema_.pageSize = std::stoi(restoreSchemaNode["PageSize"].asString());
	auto allRestoreSchemaDetailsNode = restoreSchemaNode["RestoreSchemaDetails"]["RestoreSchemaDetail"];
	for (auto restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail : allRestoreSchemaDetailsNode)
	{
		RestoreSchema::RestoreSchemaDetail restoreSchemaDetailObject;
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Table"].isNull())
			restoreSchemaDetailObject.table = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Table"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["StartTime"].isNull())
			restoreSchemaDetailObject.startTime = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["StartTime"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["EndTime"].isNull())
			restoreSchemaDetailObject.endTime = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["EndTime"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["State"].isNull())
			restoreSchemaDetailObject.state = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["State"].asString();
		if(!restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Message"].isNull())
			restoreSchemaDetailObject.message = restoreSchemaNodeRestoreSchemaDetailsRestoreSchemaDetail["Message"].asString();
		restoreSchema_.restoreSchemaDetails.push_back(restoreSchemaDetailObject);
	}

}

DescribeRestoreSchemaDetailsResult::RestoreSchema DescribeRestoreSchemaDetailsResult::getRestoreSchema()const
{
	return restoreSchema_;
}

