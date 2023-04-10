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

#include <alibabacloud/datalake/model/ListCatalogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListCatalogsResult::ListCatalogsResult() :
	ServiceResult()
{}

ListCatalogsResult::ListCatalogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCatalogsResult::~ListCatalogsResult()
{}

void ListCatalogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCatalogsNode = value["Catalogs"]["Catalog"];
	for (auto valueCatalogsCatalog : allCatalogsNode)
	{
		Catalog catalogsObject;
		if(!valueCatalogsCatalog["CatalogId"].isNull())
			catalogsObject.catalogId = valueCatalogsCatalog["CatalogId"].asString();
		if(!valueCatalogsCatalog["Description"].isNull())
			catalogsObject.description = valueCatalogsCatalog["Description"].asString();
		if(!valueCatalogsCatalog["LocationUri"].isNull())
			catalogsObject.locationUri = valueCatalogsCatalog["LocationUri"].asString();
		if(!valueCatalogsCatalog["Owner"].isNull())
			catalogsObject.owner = valueCatalogsCatalog["Owner"].asString();
		if(!valueCatalogsCatalog["CreatedBy"].isNull())
			catalogsObject.createdBy = valueCatalogsCatalog["CreatedBy"].asString();
		if(!valueCatalogsCatalog["CreateTime"].isNull())
			catalogsObject.createTime = std::stol(valueCatalogsCatalog["CreateTime"].asString());
		if(!valueCatalogsCatalog["UpdateTime"].isNull())
			catalogsObject.updateTime = std::stol(valueCatalogsCatalog["UpdateTime"].asString());
		if(!valueCatalogsCatalog["Status"].isNull())
			catalogsObject.status = valueCatalogsCatalog["Status"].asString();
		catalogs_.push_back(catalogsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListCatalogsResult::getMessage()const
{
	return message_;
}

std::string ListCatalogsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListCatalogsResult::Catalog> ListCatalogsResult::getCatalogs()const
{
	return catalogs_;
}

std::string ListCatalogsResult::getCode()const
{
	return code_;
}

bool ListCatalogsResult::getSuccess()const
{
	return success_;
}

