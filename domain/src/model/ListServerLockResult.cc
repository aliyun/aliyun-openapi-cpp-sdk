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
	auto allData = value["Data"]["QueryTransferInResponse"];
	for (auto value : allData)
	{
		QueryTransferInResponse dataObject;
		if(!value["GmtCreate"].isNull())
			dataObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			dataObject.gmtModified = value["GmtModified"].asString();
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["DomainInstanceId"].isNull())
			dataObject.domainInstanceId = value["DomainInstanceId"].asString();
		if(!value["LockProductId"].isNull())
			dataObject.lockProductId = value["LockProductId"].asString();
		if(!value["StartDate"].isNull())
			dataObject.startDate = value["StartDate"].asString();
		if(!value["ExpireDate"].isNull())
			dataObject.expireDate = value["ExpireDate"].asString();
		if(!value["LockInstanceId"].isNull())
			dataObject.lockInstanceId = value["LockInstanceId"].asString();
		if(!value["ServerLockStatus"].isNull())
			dataObject.serverLockStatus = value["ServerLockStatus"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
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

