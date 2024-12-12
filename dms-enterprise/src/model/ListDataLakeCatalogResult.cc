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

#include <alibabacloud/dms-enterprise/model/ListDataLakeCatalogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataLakeCatalogResult::ListDataLakeCatalogResult() :
	ServiceResult()
{}

ListDataLakeCatalogResult::ListDataLakeCatalogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataLakeCatalogResult::~ListDataLakeCatalogResult()
{}

void ListDataLakeCatalogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCataLogListNode = value["CataLogList"]["Catalog"];
	for (auto valueCataLogListCatalog : allCataLogListNode)
	{
		Catalog cataLogListObject;
		if(!valueCataLogListCatalog["Description"].isNull())
			cataLogListObject.description = valueCataLogListCatalog["Description"].asString();
		if(!valueCataLogListCatalog["Name"].isNull())
			cataLogListObject.name = valueCataLogListCatalog["Name"].asString();
		if(!valueCataLogListCatalog["Location"].isNull())
			cataLogListObject.location = valueCataLogListCatalog["Location"].asString();
		cataLogList_.push_back(cataLogListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListDataLakeCatalogResult::Catalog> ListDataLakeCatalogResult::getCataLogList()const
{
	return cataLogList_;
}

std::string ListDataLakeCatalogResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataLakeCatalogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataLakeCatalogResult::getSuccess()const
{
	return success_;
}

