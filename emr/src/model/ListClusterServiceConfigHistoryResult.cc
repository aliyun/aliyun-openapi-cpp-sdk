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

#include <alibabacloud/emr/model/ListClusterServiceConfigHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceConfigHistoryResult::ListClusterServiceConfigHistoryResult() :
	ServiceResult()
{}

ListClusterServiceConfigHistoryResult::ListClusterServiceConfigHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceConfigHistoryResult::~ListClusterServiceConfigHistoryResult()
{}

void ListClusterServiceConfigHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConfigHistoryList = value["ConfigHistoryList"]["ConfigHistory"];
	for (auto value : allConfigHistoryList)
	{
		ConfigHistory configHistoryListObject;
		if(!value["ServiceName"].isNull())
			configHistoryListObject.serviceName = value["ServiceName"].asString();
		if(!value["ConfigVersion"].isNull())
			configHistoryListObject.configVersion = value["ConfigVersion"].asString();
		if(!value["ConfigFileName"].isNull())
			configHistoryListObject.configFileName = value["ConfigFileName"].asString();
		if(!value["ConfigItemName"].isNull())
			configHistoryListObject.configItemName = value["ConfigItemName"].asString();
		if(!value["NewValue"].isNull())
			configHistoryListObject.newValue = value["NewValue"].asString();
		if(!value["OldValue"].isNull())
			configHistoryListObject.oldValue = value["OldValue"].asString();
		if(!value["Applied"].isNull())
			configHistoryListObject.applied = value["Applied"].asString() == "true";
		if(!value["CreateTime"].isNull())
			configHistoryListObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Author"].isNull())
			configHistoryListObject.author = value["Author"].asString();
		if(!value["Comment"].isNull())
			configHistoryListObject.comment = value["Comment"].asString();
		configHistoryList_.push_back(configHistoryListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListClusterServiceConfigHistoryResult::ConfigHistory> ListClusterServiceConfigHistoryResult::getConfigHistoryList()const
{
	return configHistoryList_;
}

int ListClusterServiceConfigHistoryResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterServiceConfigHistoryResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterServiceConfigHistoryResult::getPageNumber()const
{
	return pageNumber_;
}

