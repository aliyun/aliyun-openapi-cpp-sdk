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

#include <alibabacloud/hbase/model/DescribeRestoreFullDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeRestoreFullDetailsResult::DescribeRestoreFullDetailsResult() :
	ServiceResult()
{}

DescribeRestoreFullDetailsResult::DescribeRestoreFullDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreFullDetailsResult::~DescribeRestoreFullDetailsResult()
{}

void DescribeRestoreFullDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto restoreFullNode = value["RestoreFull"];
	if(!restoreFullNode["Succeed"].isNull())
		restoreFull_.succeed = std::stoi(restoreFullNode["Succeed"].asString());
	if(!restoreFullNode["Fail"].isNull())
		restoreFull_.fail = std::stoi(restoreFullNode["Fail"].asString());
	if(!restoreFullNode["DataSize"].isNull())
		restoreFull_.dataSize = restoreFullNode["DataSize"].asString();
	if(!restoreFullNode["Speed"].isNull())
		restoreFull_.speed = restoreFullNode["Speed"].asString();
	if(!restoreFullNode["Total"].isNull())
		restoreFull_.total = std::stol(restoreFullNode["Total"].asString());
	if(!restoreFullNode["PageNumber"].isNull())
		restoreFull_.pageNumber = std::stoi(restoreFullNode["PageNumber"].asString());
	if(!restoreFullNode["PageSize"].isNull())
		restoreFull_.pageSize = std::stoi(restoreFullNode["PageSize"].asString());
	auto allRestoreFullDetailsNode = restoreFullNode["RestoreFullDetails"]["RestoreFullDetail"];
	for (auto restoreFullNodeRestoreFullDetailsRestoreFullDetail : allRestoreFullDetailsNode)
	{
		RestoreFull::RestoreFullDetail restoreFullDetailObject;
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Table"].isNull())
			restoreFullDetailObject.table = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Table"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["State"].isNull())
			restoreFullDetailObject.state = restoreFullNodeRestoreFullDetailsRestoreFullDetail["State"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["StartTime"].isNull())
			restoreFullDetailObject.startTime = restoreFullNodeRestoreFullDetailsRestoreFullDetail["StartTime"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["EndTime"].isNull())
			restoreFullDetailObject.endTime = restoreFullNodeRestoreFullDetailsRestoreFullDetail["EndTime"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Process"].isNull())
			restoreFullDetailObject.process = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Process"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["DataSize"].isNull())
			restoreFullDetailObject.dataSize = restoreFullNodeRestoreFullDetailsRestoreFullDetail["DataSize"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Speed"].isNull())
			restoreFullDetailObject.speed = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Speed"].asString();
		if(!restoreFullNodeRestoreFullDetailsRestoreFullDetail["Message"].isNull())
			restoreFullDetailObject.message = restoreFullNodeRestoreFullDetailsRestoreFullDetail["Message"].asString();
		restoreFull_.restoreFullDetails.push_back(restoreFullDetailObject);
	}

}

DescribeRestoreFullDetailsResult::RestoreFull DescribeRestoreFullDetailsResult::getRestoreFull()const
{
	return restoreFull_;
}

