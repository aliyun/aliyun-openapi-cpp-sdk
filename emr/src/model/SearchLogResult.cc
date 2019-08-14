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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSlsLogItemList = value["SlsLogItemList"]["SlsLogItem"];
	for (auto value : allSlsLogItemList)
	{
		SlsLogItem slsLogItemListObject;
		if(!value["Timestamp"].isNull())
			slsLogItemListObject.timestamp = std::stoi(value["Timestamp"].asString());
		if(!value["SourceIp"].isNull())
			slsLogItemListObject.sourceIp = value["SourceIp"].asString();
		if(!value["HostName"].isNull())
			slsLogItemListObject.hostName = value["HostName"].asString();
		if(!value["Path"].isNull())
			slsLogItemListObject.path = value["Path"].asString();
		if(!value["Content"].isNull())
			slsLogItemListObject.content = value["Content"].asString();
		if(!value["PackMeta"].isNull())
			slsLogItemListObject.packMeta = value["PackMeta"].asString();
		if(!value["PackId"].isNull())
			slsLogItemListObject.packId = value["PackId"].asString();
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

