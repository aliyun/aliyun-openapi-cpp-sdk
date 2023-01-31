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

#include <alibabacloud/vpc/model/CreateRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateRouteEntriesResult::CreateRouteEntriesResult() :
	ServiceResult()
{}

CreateRouteEntriesResult::CreateRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRouteEntriesResult::~CreateRouteEntriesResult()
{}

void CreateRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailedRouteEntriesNode = value["FailedRouteEntries"]["FailedRouteEntriesItem"];
	for (auto valueFailedRouteEntriesFailedRouteEntriesItem : allFailedRouteEntriesNode)
	{
		FailedRouteEntriesItem failedRouteEntriesObject;
		if(!valueFailedRouteEntriesFailedRouteEntriesItem["DstCidrBlock"].isNull())
			failedRouteEntriesObject.dstCidrBlock = valueFailedRouteEntriesFailedRouteEntriesItem["DstCidrBlock"].asString();
		if(!valueFailedRouteEntriesFailedRouteEntriesItem["NextHop"].isNull())
			failedRouteEntriesObject.nextHop = valueFailedRouteEntriesFailedRouteEntriesItem["NextHop"].asString();
		if(!valueFailedRouteEntriesFailedRouteEntriesItem["FailedCode"].isNull())
			failedRouteEntriesObject.failedCode = valueFailedRouteEntriesFailedRouteEntriesItem["FailedCode"].asString();
		if(!valueFailedRouteEntriesFailedRouteEntriesItem["FailedMessage"].isNull())
			failedRouteEntriesObject.failedMessage = valueFailedRouteEntriesFailedRouteEntriesItem["FailedMessage"].asString();
		failedRouteEntries_.push_back(failedRouteEntriesObject);
	}
	auto allRouteEntryIds = value["RouteEntryIds"]["RouteEntryIds"];
	for (const auto &item : allRouteEntryIds)
		routeEntryIds_.push_back(item.asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());

}

std::vector<std::string> CreateRouteEntriesResult::getRouteEntryIds()const
{
	return routeEntryIds_;
}

int CreateRouteEntriesResult::getFailedCount()const
{
	return failedCount_;
}

int CreateRouteEntriesResult::getSuccessCount()const
{
	return successCount_;
}

std::vector<CreateRouteEntriesResult::FailedRouteEntriesItem> CreateRouteEntriesResult::getFailedRouteEntries()const
{
	return failedRouteEntries_;
}

