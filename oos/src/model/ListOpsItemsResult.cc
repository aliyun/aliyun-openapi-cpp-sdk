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

#include <alibabacloud/oos/model/ListOpsItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListOpsItemsResult::ListOpsItemsResult() :
	ServiceResult()
{}

ListOpsItemsResult::ListOpsItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOpsItemsResult::~ListOpsItemsResult()
{}

void ListOpsItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOpsItemsNode = value["OpsItems"]["OpsItem"];
	for (auto valueOpsItemsOpsItem : allOpsItemsNode)
	{
		OpsItem opsItemsObject;
		if(!valueOpsItemsOpsItem["OpsItemId"].isNull())
			opsItemsObject.opsItemId = valueOpsItemsOpsItem["OpsItemId"].asString();
		if(!valueOpsItemsOpsItem["CreateDate"].isNull())
			opsItemsObject.createDate = valueOpsItemsOpsItem["CreateDate"].asString();
		if(!valueOpsItemsOpsItem["UpdateDate"].isNull())
			opsItemsObject.updateDate = valueOpsItemsOpsItem["UpdateDate"].asString();
		if(!valueOpsItemsOpsItem["Title"].isNull())
			opsItemsObject.title = valueOpsItemsOpsItem["Title"].asString();
		if(!valueOpsItemsOpsItem["Status"].isNull())
			opsItemsObject.status = valueOpsItemsOpsItem["Status"].asString();
		if(!valueOpsItemsOpsItem["Severity"].isNull())
			opsItemsObject.severity = valueOpsItemsOpsItem["Severity"].asString();
		if(!valueOpsItemsOpsItem["Category"].isNull())
			opsItemsObject.category = valueOpsItemsOpsItem["Category"].asString();
		if(!valueOpsItemsOpsItem["Source"].isNull())
			opsItemsObject.source = valueOpsItemsOpsItem["Source"].asString();
		if(!valueOpsItemsOpsItem["Priority"].isNull())
			opsItemsObject.priority = std::stoi(valueOpsItemsOpsItem["Priority"].asString());
		if(!valueOpsItemsOpsItem["Tags"].isNull())
			opsItemsObject.tags = valueOpsItemsOpsItem["Tags"].asString();
		auto allResources = value["Resources"]["Resource"];
		for (auto value : allResources)
			opsItemsObject.resources.push_back(value.asString());
		opsItems_.push_back(opsItemsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListOpsItemsResult::OpsItem> ListOpsItemsResult::getOpsItems()const
{
	return opsItems_;
}

int ListOpsItemsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOpsItemsResult::getNextToken()const
{
	return nextToken_;
}

int ListOpsItemsResult::getMaxResults()const
{
	return maxResults_;
}

