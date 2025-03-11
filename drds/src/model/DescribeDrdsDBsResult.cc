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

#include <alibabacloud/drds/model/DescribeDrdsDBsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDBsResult::DescribeDrdsDBsResult() :
	ServiceResult()
{}

DescribeDrdsDBsResult::DescribeDrdsDBsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDBsResult::~DescribeDrdsDBsResult()
{}

void DescribeDrdsDBsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Db"];
	for (auto valueDataDb : allDataNode)
	{
		Db dataObject;
		if(!valueDataDb["Status"].isNull())
			dataObject.status = valueDataDb["Status"].asString();
		if(!valueDataDb["DbName"].isNull())
			dataObject.dbName = valueDataDb["DbName"].asString();
		if(!valueDataDb["Schema"].isNull())
			dataObject.schema = valueDataDb["Schema"].asString();
		if(!valueDataDb["CreateTime"].isNull())
			dataObject.createTime = valueDataDb["CreateTime"].asString();
		if(!valueDataDb["Mode"].isNull())
			dataObject.mode = valueDataDb["Mode"].asString();
		if(!valueDataDb["DbInstType"].isNull())
			dataObject.dbInstType = valueDataDb["DbInstType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDrdsDBsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDrdsDBsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDrdsDBsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsDBsResult::Db> DescribeDrdsDBsResult::getData()const
{
	return data_;
}

bool DescribeDrdsDBsResult::getSuccess()const
{
	return success_;
}

