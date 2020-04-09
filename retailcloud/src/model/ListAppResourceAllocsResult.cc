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

#include <alibabacloud/retailcloud/model/ListAppResourceAllocsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppResourceAllocsResult::ListAppResourceAllocsResult() :
	ServiceResult()
{}

ListAppResourceAllocsResult::ListAppResourceAllocsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppResourceAllocsResult::~ListAppResourceAllocsResult()
{}

void ListAppResourceAllocsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ListAppResourceAllocResponse"];
	for (auto valueDataListAppResourceAllocResponse : allDataNode)
	{
		ListAppResourceAllocResponse dataObject;
		if(!valueDataListAppResourceAllocResponse["AppEnvId"].isNull())
			dataObject.appEnvId = std::stol(valueDataListAppResourceAllocResponse["AppEnvId"].asString());
		if(!valueDataListAppResourceAllocResponse["AppId"].isNull())
			dataObject.appId = std::stol(valueDataListAppResourceAllocResponse["AppId"].asString());
		if(!valueDataListAppResourceAllocResponse["ClusterId"].isNull())
			dataObject.clusterId = valueDataListAppResourceAllocResponse["ClusterId"].asString();
		if(!valueDataListAppResourceAllocResponse["Id"].isNull())
			dataObject.id = std::stol(valueDataListAppResourceAllocResponse["Id"].asString());
		if(!valueDataListAppResourceAllocResponse["ResourceDef"].isNull())
			dataObject.resourceDef = valueDataListAppResourceAllocResponse["ResourceDef"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAppResourceAllocsResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppResourceAllocsResult::getPageSize()const
{
	return pageSize_;
}

int ListAppResourceAllocsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppResourceAllocsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAppResourceAllocsResult::ListAppResourceAllocResponse> ListAppResourceAllocsResult::getData()const
{
	return data_;
}

int ListAppResourceAllocsResult::getCode()const
{
	return code_;
}

