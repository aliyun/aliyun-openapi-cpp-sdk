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

#include <alibabacloud/hbase/model/ListInstanceServiceConfigHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

ListInstanceServiceConfigHistoriesResult::ListInstanceServiceConfigHistoriesResult() :
	ServiceResult()
{}

ListInstanceServiceConfigHistoriesResult::ListInstanceServiceConfigHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceServiceConfigHistoriesResult::~ListInstanceServiceConfigHistoriesResult()
{}

void ListInstanceServiceConfigHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigureHistoryListNode = value["ConfigureHistoryList"]["Config"];
	for (auto valueConfigureHistoryListConfig : allConfigureHistoryListNode)
	{
		Config configureHistoryListObject;
		if(!valueConfigureHistoryListConfig["ConfigureName"].isNull())
			configureHistoryListObject.configureName = valueConfigureHistoryListConfig["ConfigureName"].asString();
		if(!valueConfigureHistoryListConfig["OldValue"].isNull())
			configureHistoryListObject.oldValue = valueConfigureHistoryListConfig["OldValue"].asString();
		if(!valueConfigureHistoryListConfig["NewValue"].isNull())
			configureHistoryListObject.newValue = valueConfigureHistoryListConfig["NewValue"].asString();
		if(!valueConfigureHistoryListConfig["Effective"].isNull())
			configureHistoryListObject.effective = valueConfigureHistoryListConfig["Effective"].asString();
		if(!valueConfigureHistoryListConfig["CreateTime"].isNull())
			configureHistoryListObject.createTime = valueConfigureHistoryListConfig["CreateTime"].asString();
		configureHistoryList_.push_back(configureHistoryListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long ListInstanceServiceConfigHistoriesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int ListInstanceServiceConfigHistoriesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int ListInstanceServiceConfigHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListInstanceServiceConfigHistoriesResult::Config> ListInstanceServiceConfigHistoriesResult::getConfigureHistoryList()const
{
	return configureHistoryList_;
}

