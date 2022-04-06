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

#include <alibabacloud/dms-enterprise/model/GetLhSpaceByNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetLhSpaceByNameResult::GetLhSpaceByNameResult() :
	ServiceResult()
{}

GetLhSpaceByNameResult::GetLhSpaceByNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLhSpaceByNameResult::~GetLhSpaceByNameResult()
{}

void GetLhSpaceByNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto lakehouseSpaceNode = value["LakehouseSpace"];
	if(!lakehouseSpaceNode["Id"].isNull())
		lakehouseSpace_.id = std::stol(lakehouseSpaceNode["Id"].asString());
	if(!lakehouseSpaceNode["SpaceName"].isNull())
		lakehouseSpace_.spaceName = lakehouseSpaceNode["SpaceName"].asString();
	if(!lakehouseSpaceNode["CreatorId"].isNull())
		lakehouseSpace_.creatorId = lakehouseSpaceNode["CreatorId"].asString();
	if(!lakehouseSpaceNode["TenantId"].isNull())
		lakehouseSpace_.tenantId = lakehouseSpaceNode["TenantId"].asString();
	if(!lakehouseSpaceNode["Description"].isNull())
		lakehouseSpace_.description = lakehouseSpaceNode["Description"].asString();
	if(!lakehouseSpaceNode["Mode"].isNull())
		lakehouseSpace_.mode = std::stoi(lakehouseSpaceNode["Mode"].asString());
	if(!lakehouseSpaceNode["DwDbType"].isNull())
		lakehouseSpace_.dwDbType = lakehouseSpaceNode["DwDbType"].asString();
	if(!lakehouseSpaceNode["SpaceConfig"].isNull())
		lakehouseSpace_.spaceConfig = lakehouseSpaceNode["SpaceConfig"].asString();
	if(!lakehouseSpaceNode["DevDbId"].isNull())
		lakehouseSpace_.devDbId = std::stoi(lakehouseSpaceNode["DevDbId"].asString());
	if(!lakehouseSpaceNode["ProdDbId"].isNull())
		lakehouseSpace_.prodDbId = std::stoi(lakehouseSpaceNode["ProdDbId"].asString());
	if(!lakehouseSpaceNode["IsDeleted"].isNull())
		lakehouseSpace_.isDeleted = lakehouseSpaceNode["IsDeleted"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetLhSpaceByNameResult::LakehouseSpace GetLhSpaceByNameResult::getLakehouseSpace()const
{
	return lakehouseSpace_;
}

std::string GetLhSpaceByNameResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetLhSpaceByNameResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetLhSpaceByNameResult::getSuccess()const
{
	return success_;
}

