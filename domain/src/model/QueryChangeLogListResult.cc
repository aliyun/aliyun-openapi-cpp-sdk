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

#include <alibabacloud/domain/model/QueryChangeLogListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryChangeLogListResult::QueryChangeLogListResult() :
	ServiceResult()
{}

QueryChangeLogListResult::QueryChangeLogListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryChangeLogListResult::~QueryChangeLogListResult()
{}

void QueryChangeLogListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["ChangeLog"];
	for (auto value : allData)
	{
		ChangeLog dataObject;
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["Result"].isNull())
			dataObject.result = value["Result"].asString();
		if(!value["Operation"].isNull())
			dataObject.operation = value["Operation"].asString();
		if(!value["OperationIPAddress"].isNull())
			dataObject.operationIPAddress = value["OperationIPAddress"].asString();
		if(!value["Details"].isNull())
			dataObject.details = value["Details"].asString();
		if(!value["Time"].isNull())
			dataObject.time = value["Time"].asString();
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
	if(!value["ResultLimit"].isNull())
		resultLimit_ = value["ResultLimit"].asString() == "true";

}

bool QueryChangeLogListResult::getPrePage()const
{
	return prePage_;
}

int QueryChangeLogListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryChangeLogListResult::getPageSize()const
{
	return pageSize_;
}

int QueryChangeLogListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryChangeLogListResult::ChangeLog> QueryChangeLogListResult::getData()const
{
	return data_;
}

bool QueryChangeLogListResult::getResultLimit()const
{
	return resultLimit_;
}

int QueryChangeLogListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryChangeLogListResult::getNextPage()const
{
	return nextPage_;
}

