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

#include <alibabacloud/cloudesl/model/SearchApServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

SearchApServiceResult::SearchApServiceResult() :
	ServiceResult()
{}

SearchApServiceResult::SearchApServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchApServiceResult::~SearchApServiceResult()
{}

void SearchApServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ApInfo"];
	for (auto valueItemsApInfo : allItemsNode)
	{
		ApInfo itemsObject;
		if(!valueItemsApInfo["IsActivate"].isNull())
			itemsObject.isActivate = valueItemsApInfo["IsActivate"].asString() == "true";
		if(!valueItemsApInfo["Mac"].isNull())
			itemsObject.mac = valueItemsApInfo["Mac"].asString();
		if(!valueItemsApInfo["Model"].isNull())
			itemsObject.model = valueItemsApInfo["Model"].asString();
		if(!valueItemsApInfo["Status"].isNull())
			itemsObject.status = valueItemsApInfo["Status"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int SearchApServiceResult::getTotalCount()const
{
	return totalCount_;
}

std::string SearchApServiceResult::getMessage()const
{
	return message_;
}

int SearchApServiceResult::getPageSize()const
{
	return pageSize_;
}

int SearchApServiceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<SearchApServiceResult::ApInfo> SearchApServiceResult::getItems()const
{
	return items_;
}

std::string SearchApServiceResult::getErrorCode()const
{
	return errorCode_;
}

bool SearchApServiceResult::getSuccess()const
{
	return success_;
}

