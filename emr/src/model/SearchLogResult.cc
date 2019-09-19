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

#include <alibabacloud/emr/model/SearchLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

SearchLogResult::SearchLogResult() :
	ServiceResult()
{}

SearchLogResult::SearchLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchLogResult::~SearchLogResult()
{}

void SearchLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlsLogItemListNode = value["SlsLogItemList"]["SlsLogItem"];
	for (auto valueSlsLogItemListSlsLogItem : allSlsLogItemListNode)
	{
		SlsLogItem slsLogItemListObject;
		if(!valueSlsLogItemListSlsLogItem["Timestamp"].isNull())
			slsLogItemListObject.timestamp = std::stoi(valueSlsLogItemListSlsLogItem["Timestamp"].asString());
		if(!valueSlsLogItemListSlsLogItem["SourceIp"].isNull())
			slsLogItemListObject.sourceIp = valueSlsLogItemListSlsLogItem["SourceIp"].asString();
		if(!valueSlsLogItemListSlsLogItem["HostName"].isNull())
			slsLogItemListObject.hostName = valueSlsLogItemListSlsLogItem["HostName"].asString();
		if(!valueSlsLogItemListSlsLogItem["Path"].isNull())
			slsLogItemListObject.path = valueSlsLogItemListSlsLogItem["Path"].asString();
		if(!valueSlsLogItemListSlsLogItem["Content"].isNull())
			slsLogItemListObject.content = valueSlsLogItemListSlsLogItem["Content"].asString();
		if(!valueSlsLogItemListSlsLogItem["PackMeta"].isNull())
			slsLogItemListObject.packMeta = valueSlsLogItemListSlsLogItem["PackMeta"].asString();
		if(!valueSlsLogItemListSlsLogItem["PackId"].isNull())
			slsLogItemListObject.packId = valueSlsLogItemListSlsLogItem["PackId"].asString();
		slsLogItemList_.push_back(slsLogItemListObject);
	}
	if(!value["Completed"].isNull())
		completed_ = value["Completed"].asString() == "true";

}

std::vector<SearchLogResult::SlsLogItem> SearchLogResult::getSlsLogItemList()const
{
	return slsLogItemList_;
}

bool SearchLogResult::getCompleted()const
{
	return completed_;
}

