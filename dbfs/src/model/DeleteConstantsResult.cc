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

#include <alibabacloud/dbfs/model/DeleteConstantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

DeleteConstantsResult::DeleteConstantsResult() :
	ServiceResult()
{}

DeleteConstantsResult::DeleteConstantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteConstantsResult::~DeleteConstantsResult()
{}

void DeleteConstantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DeleteConstantsResult::getTotalCount()const
{
	return totalCount_;
}

long DeleteConstantsResult::getPageSize()const
{
	return pageSize_;
}

long DeleteConstantsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DeleteConstantsResult::getData()const
{
	return data_;
}

