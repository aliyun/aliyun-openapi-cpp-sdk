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

#include <alibabacloud/airec/model/ListInstanceTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListInstanceTaskResult::ListInstanceTaskResult() :
	ServiceResult()
{}

ListInstanceTaskResult::ListInstanceTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceTaskResult::~ListInstanceTaskResult()
{}

void ListInstanceTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["TotalProgress"].isNull())
			resultObject.totalProgress = std::stoi(valueResultResultItem["TotalProgress"].asString());
		auto allSubProgressInfosNode = allResultNode["SubProgressInfos"]["SubProgressInfosItem"];
		for (auto allResultNodeSubProgressInfosSubProgressInfosItem : allSubProgressInfosNode)
		{
			ResultItem::SubProgressInfosItem subProgressInfosObject;
			if(!allResultNodeSubProgressInfosSubProgressInfosItem["Type"].isNull())
				subProgressInfosObject.type = allResultNodeSubProgressInfosSubProgressInfosItem["Type"].asString();
			if(!allResultNodeSubProgressInfosSubProgressInfosItem["Progress"].isNull())
				subProgressInfosObject.progress = std::stoi(allResultNodeSubProgressInfosSubProgressInfosItem["Progress"].asString());
			if(!allResultNodeSubProgressInfosSubProgressInfosItem["Detail"].isNull())
				subProgressInfosObject.detail = allResultNodeSubProgressInfosSubProgressInfosItem["Detail"].asString();
			if(!allResultNodeSubProgressInfosSubProgressInfosItem["TotalNum"].isNull())
				subProgressInfosObject.totalNum = std::stoi(allResultNodeSubProgressInfosSubProgressInfosItem["TotalNum"].asString());
			if(!allResultNodeSubProgressInfosSubProgressInfosItem["FinishedNum"].isNull())
				subProgressInfosObject.finishedNum = std::stoi(allResultNodeSubProgressInfosSubProgressInfosItem["FinishedNum"].asString());
			resultObject.subProgressInfos.push_back(subProgressInfosObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListInstanceTaskResult::getMessage()const
{
	return message_;
}

std::string ListInstanceTaskResult::getCode()const
{
	return code_;
}

std::vector<ListInstanceTaskResult::ResultItem> ListInstanceTaskResult::getResult()const
{
	return result_;
}

