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

#include <alibabacloud/vcs/model/GetCatalogListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetCatalogListResult::GetCatalogListResult() :
	ServiceResult()
{}

GetCatalogListResult::GetCatalogListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCatalogListResult::~GetCatalogListResult()
{}

void GetCatalogListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["IsvSubId"].isNull())
			dataObject.isvSubId = valueDataDataItem["IsvSubId"].asString();
		if(!valueDataDataItem["ParentCatalogId"].isNull())
			dataObject.parentCatalogId = std::stol(valueDataDataItem["ParentCatalogId"].asString());
		if(!valueDataDataItem["ProfileCount"].isNull())
			dataObject.profileCount = std::stol(valueDataDataItem["ProfileCount"].asString());
		if(!valueDataDataItem["CatalogId"].isNull())
			dataObject.catalogId = std::stol(valueDataDataItem["CatalogId"].asString());
		if(!valueDataDataItem["CatalogName"].isNull())
			dataObject.catalogName = valueDataDataItem["CatalogName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCatalogListResult::getMessage()const
{
	return message_;
}

std::vector<GetCatalogListResult::DataItem> GetCatalogListResult::getData()const
{
	return data_;
}

std::string GetCatalogListResult::getCode()const
{
	return code_;
}

