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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigHistoryListNode = value["ConfigHistoryList"]["ConfigHistory"];
	for (auto valueConfigHistoryListConfigHistory : allConfigHistoryListNode)
	{
		ConfigHistory configHistoryListObject;
		if(!valueConfigHistoryListConfigHistory["ServiceName"].isNull())
			configHistoryListObject.serviceName = valueConfigHistoryListConfigHistory["ServiceName"].asString();
		if(!valueConfigHistoryListConfigHistory["ConfigVersion"].isNull())
			configHistoryListObject.configVersion = valueConfigHistoryListConfigHistory["ConfigVersion"].asString();
		if(!valueConfigHistoryListConfigHistory["ConfigFileName"].isNull())
			configHistoryListObject.configFileName = valueConfigHistoryListConfigHistory["ConfigFileName"].asString();
		if(!valueConfigHistoryListConfigHistory["ConfigItemName"].isNull())
			configHistoryListObject.configItemName = valueConfigHistoryListConfigHistory["ConfigItemName"].asString();
		if(!valueConfigHistoryListConfigHistory["NewValue"].isNull())
			configHistoryListObject.newValue = valueConfigHistoryListConfigHistory["NewValue"].asString();
		if(!valueConfigHistoryListConfigHistory["OldValue"].isNull())
			configHistoryListObject.oldValue = valueConfigHistoryListConfigHistory["OldValue"].asString();
		if(!valueConfigHistoryListConfigHistory["Applied"].isNull())
			configHistoryListObject.applied = valueConfigHistoryListConfigHistory["Applied"].asString() == "true";
		if(!valueConfigHistoryListConfigHistory["CreateTime"].isNull())
			configHistoryListObject.createTime = std::stol(valueConfigHistoryListConfigHistory["CreateTime"].asString());
		if(!valueConfigHistoryListConfigHistory["Author"].isNull())
			configHistoryListObject.author = valueConfigHistoryListConfigHistory["Author"].asString();
		if(!valueConfigHistoryListConfigHistory["Comment"].isNull())
			configHistoryListObject.comment = valueConfigHistoryListConfigHistory["Comment"].asString();
		if(!valueConfigHistoryListConfigHistory["HostGroupId"].isNull())
			configHistoryListObject.hostGroupId = valueConfigHistoryListConfigHistory["HostGroupId"].asString();
		if(!valueConfigHistoryListConfigHistory["HostGroupName"].isNull())
			configHistoryListObject.hostGroupName = valueConfigHistoryListConfigHistory["HostGroupName"].asString();
		if(!valueConfigHistoryListConfigHistory["HostInstanceId"].isNull())
			configHistoryListObject.hostInstanceId = valueConfigHistoryListConfigHistory["HostInstanceId"].asString();
		if(!valueConfigHistoryListConfigHistory["HostName"].isNull())
			configHistoryListObject.hostName = valueConfigHistoryListConfigHistory["HostName"].asString();
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

