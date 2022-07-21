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

#include <alibabacloud/domain/model/ListServerLockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

ListServerLockResult::ListServerLockResult() :
	ServiceResult()
{}

ListServerLockResult::ListServerLockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServerLockResult::~ListServerLockResult()
{}

void ListServerLockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["QueryTransferInResponse"];
	for (auto valueDataQueryTransferInResponse : allDataNode)
	{
		QueryTransferInResponse dataObject;
		if(!valueDataQueryTransferInResponse["ServerLockStatus"].isNull())
			dataObject.serverLockStatus = valueDataQueryTransferInResponse["ServerLockStatus"].asString();
		if(!valueDataQueryTransferInResponse["LockInstanceId"].isNull())
			dataObject.lockInstanceId = valueDataQueryTransferInResponse["LockInstanceId"].asString();
		if(!valueDataQueryTransferInResponse["UserId"].isNull())
			dataObject.userId = valueDataQueryTransferInResponse["UserId"].asString();
		if(!valueDataQueryTransferInResponse["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataQueryTransferInResponse["GmtCreate"].asString();
		if(!valueDataQueryTransferInResponse["ExpireDate"].isNull())
			dataObject.expireDate = valueDataQueryTransferInResponse["ExpireDate"].asString();
		if(!valueDataQueryTransferInResponse["StartDate"].isNull())
			dataObject.startDate = valueDataQueryTransferInResponse["StartDate"].asString();
		if(!valueDataQueryTransferInResponse["LockProductId"].isNull())
			dataObject.lockProductId = valueDataQueryTransferInResponse["LockProductId"].asString();
		if(!valueDataQueryTransferInResponse["DomainInstanceId"].isNull())
			dataObject.domainInstanceId = valueDataQueryTransferInResponse["DomainInstanceId"].asString();
		if(!valueDataQueryTransferInResponse["GmtModified"].isNull())
			dataObject.gmtModified = valueDataQueryTransferInResponse["GmtModified"].asString();
		if(!valueDataQueryTransferInResponse["DomainName"].isNull())
			dataObject.domainName = valueDataQueryTransferInResponse["DomainName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool ListServerLockResult::getPrePage()const
{
	return prePage_;
}

int ListServerLockResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListServerLockResult::getPageSize()const
{
	return pageSize_;
}

int ListServerLockResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListServerLockResult::QueryTransferInResponse> ListServerLockResult::getData()const
{
	return data_;
}

int ListServerLockResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListServerLockResult::getNextPage()const
{
	return nextPage_;
}

