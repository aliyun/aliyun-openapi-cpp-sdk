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

#include <alibabacloud/elasticsearch/model/ListNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListNodesResult::ListNodesResult() :
	ServiceResult()
{}

ListNodesResult::ListNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesResult::~ListNodesResult()
{}

void ListNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["ecsInstanceId"].isNull())
			resultObject.ecsInstanceId = valueResultResultItem["ecsInstanceId"].asString();
		if(!valueResultResultItem["ecsInstanceName"].isNull())
			resultObject.ecsInstanceName = valueResultResultItem["ecsInstanceName"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		if(!valueResultResultItem["osType"].isNull())
			resultObject.osType = valueResultResultItem["osType"].asString();
		if(!valueResultResultItem["cloudAssistantStatus"].isNull())
			resultObject.cloudAssistantStatus = valueResultResultItem["cloudAssistantStatus"].asString();
		if(!valueResultResultItem["agentStatus"].isNull())
			resultObject.agentStatus = valueResultResultItem["agentStatus"].asString();
		auto alltagsNode = allResultNode["tags"]["tagsItem"];
		for (auto allResultNodetagstagsItem : alltagsNode)
		{
			ResultItem::TagsItem tagsObject;
			if(!allResultNodetagstagsItem["tagKey"].isNull())
				tagsObject.tagKey = allResultNodetagstagsItem["tagKey"].asString();
			if(!allResultNodetagstagsItem["tagValue"].isNull())
				tagsObject.tagValue = allResultNodetagstagsItem["tagValue"].asString();
			resultObject.tags.push_back(tagsObject);
		}
		auto allipAddressNode = allResultNode["ipAddress"]["ipAddressItem"];
		for (auto allResultNodeipAddressipAddressItem : allipAddressNode)
		{
			ResultItem::IpAddressItem ipAddressObject;
			if(!allResultNodeipAddressipAddressItem["host"].isNull())
				ipAddressObject.host = allResultNodeipAddressipAddressItem["host"].asString();
			if(!allResultNodeipAddressipAddressItem["ipType"].isNull())
				ipAddressObject.ipType = allResultNodeipAddressipAddressItem["ipType"].asString();
			resultObject.ipAddress.push_back(ipAddressObject);
		}
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListNodesResult::Headers ListNodesResult::getHeaders()const
{
	return headers_;
}

std::vector<ListNodesResult::ResultItem> ListNodesResult::getResult()const
{
	return result_;
}

