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

#include <alibabacloud/companyreg/model/ListProduceAuthorizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListProduceAuthorizationResult::ListProduceAuthorizationResult() :
	ServiceResult()
{}

ListProduceAuthorizationResult::ListProduceAuthorizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProduceAuthorizationResult::~ListProduceAuthorizationResult()
{}

void ListProduceAuthorizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ProduceAuthorizations"];
	for (auto valueDataProduceAuthorizations : allDataNode)
	{
		ProduceAuthorizations dataObject;
		if(!valueDataProduceAuthorizations["AuthorizedUserId"].isNull())
			dataObject.authorizedUserId = valueDataProduceAuthorizations["AuthorizedUserId"].asString();
		if(!valueDataProduceAuthorizations["AuthorizedUserName"].isNull())
			dataObject.authorizedUserName = valueDataProduceAuthorizations["AuthorizedUserName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListProduceAuthorizationResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListProduceAuthorizationResult::getPageSize()const
{
	return pageSize_;
}

int ListProduceAuthorizationResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListProduceAuthorizationResult::ProduceAuthorizations> ListProduceAuthorizationResult::getData()const
{
	return data_;
}

int ListProduceAuthorizationResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListProduceAuthorizationResult::getSuccess()const
{
	return success_;
}

