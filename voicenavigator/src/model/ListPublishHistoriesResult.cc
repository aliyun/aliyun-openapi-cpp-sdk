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

#include <alibabacloud/voicenavigator/model/ListPublishHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListPublishHistoriesResult::ListPublishHistoriesResult() :
	ServiceResult()
{}

ListPublishHistoriesResult::ListPublishHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublishHistoriesResult::~ListPublishHistoriesResult()
{}

void ListPublishHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublishHistoriesNode = value["PublishHistories"]["PublishHistoriesItem"];
	for (auto valuePublishHistoriesPublishHistoriesItem : allPublishHistoriesNode)
	{
		PublishHistoriesItem publishHistoriesObject;
		if(!valuePublishHistoriesPublishHistoriesItem["InstanceId"].isNull())
			publishHistoriesObject.instanceId = valuePublishHistoriesPublishHistoriesItem["InstanceId"].asString();
		if(!valuePublishHistoriesPublishHistoriesItem["Version"].isNull())
			publishHistoriesObject.version = valuePublishHistoriesPublishHistoriesItem["Version"].asString();
		if(!valuePublishHistoriesPublishHistoriesItem["PublishUserName"].isNull())
			publishHistoriesObject.publishUserName = valuePublishHistoriesPublishHistoriesItem["PublishUserName"].asString();
		if(!valuePublishHistoriesPublishHistoriesItem["PublishTime"].isNull())
			publishHistoriesObject.publishTime = std::stol(valuePublishHistoriesPublishHistoriesItem["PublishTime"].asString());
		if(!valuePublishHistoriesPublishHistoriesItem["IsRollbackApplicable"].isNull())
			publishHistoriesObject.isRollbackApplicable = valuePublishHistoriesPublishHistoriesItem["IsRollbackApplicable"].asString() == "true";
		publishHistories_.push_back(publishHistoriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListPublishHistoriesResult::getTotalCount()const
{
	return totalCount_;
}

int ListPublishHistoriesResult::getPageSize()const
{
	return pageSize_;
}

int ListPublishHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPublishHistoriesResult::PublishHistoriesItem> ListPublishHistoriesResult::getPublishHistories()const
{
	return publishHistories_;
}

