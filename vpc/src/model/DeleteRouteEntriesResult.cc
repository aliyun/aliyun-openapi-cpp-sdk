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

#include <alibabacloud/vpc/model/DeleteRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DeleteRouteEntriesResult::DeleteRouteEntriesResult() :
	ServiceResult()
{}

DeleteRouteEntriesResult::DeleteRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteRouteEntriesResult::~DeleteRouteEntriesResult()
{}

void DeleteRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailedRouteEntriesNode = value["FailedRouteEntries"]["FailedRouteEntriesItem"];
	for (auto valueFailedRouteEntriesFailedRouteEntriesItem : allFailedRouteEntriesNode)
	{
		FailedRouteEntriesItem failedRouteEntriesObject;
		if(!valueFailedRouteEntriesFailedRouteEntriesItem["RouteEntryId"].isNull())
			failedRouteEntriesObject.routeEntryId = valueFailedRouteEntriesFailedRouteEntriesItem["RouteEntryId"].asString();
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
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());

}

int DeleteRouteEntriesResult::getFailedCount()const
{
	return failedCount_;
}

int DeleteRouteEntriesResult::getSuccessCount()const
{
	return successCount_;
}

std::vector<DeleteRouteEntriesResult::FailedRouteEntriesItem> DeleteRouteEntriesResult::getFailedRouteEntries()const
{
	return failedRouteEntries_;
}

