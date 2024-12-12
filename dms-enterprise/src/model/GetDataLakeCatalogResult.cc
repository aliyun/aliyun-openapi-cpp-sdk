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

#include <alibabacloud/dms-enterprise/model/GetDataLakeCatalogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataLakeCatalogResult::GetDataLakeCatalogResult() :
	ServiceResult()
{}

GetDataLakeCatalogResult::GetDataLakeCatalogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataLakeCatalogResult::~GetDataLakeCatalogResult()
{}

void GetDataLakeCatalogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto catalogNode = value["Catalog"];
	if(!catalogNode["Description"].isNull())
		catalog_.description = catalogNode["Description"].asString();
	if(!catalogNode["Name"].isNull())
		catalog_.name = catalogNode["Name"].asString();
	if(!catalogNode["Location"].isNull())
		catalog_.location = catalogNode["Location"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetDataLakeCatalogResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataLakeCatalogResult::getErrorMessage()const
{
	return errorMessage_;
}

GetDataLakeCatalogResult::Catalog GetDataLakeCatalogResult::getCatalog()const
{
	return catalog_;
}

bool GetDataLakeCatalogResult::getSuccess()const
{
	return success_;
}

