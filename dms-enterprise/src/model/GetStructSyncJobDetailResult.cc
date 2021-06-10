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

#include <alibabacloud/dms-enterprise/model/GetStructSyncJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetStructSyncJobDetailResult::GetStructSyncJobDetailResult() :
	ServiceResult()
{}

GetStructSyncJobDetailResult::GetStructSyncJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStructSyncJobDetailResult::~GetStructSyncJobDetailResult()
{}

void GetStructSyncJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto structSyncJobDetailNode = value["StructSyncJobDetail"];
	if(!structSyncJobDetailNode["JobStatus"].isNull())
		structSyncJobDetail_.jobStatus = structSyncJobDetailNode["JobStatus"].asString();
	if(!structSyncJobDetailNode["Message"].isNull())
		structSyncJobDetail_.message = structSyncJobDetailNode["Message"].asString();
	if(!structSyncJobDetailNode["TableAnalyzed"].isNull())
		structSyncJobDetail_.tableAnalyzed = std::stol(structSyncJobDetailNode["TableAnalyzed"].asString());
	if(!structSyncJobDetailNode["TableCount"].isNull())
		structSyncJobDetail_.tableCount = std::stol(structSyncJobDetailNode["TableCount"].asString());
	if(!structSyncJobDetailNode["SqlCount"].isNull())
		structSyncJobDetail_.sqlCount = std::stol(structSyncJobDetailNode["SqlCount"].asString());
	if(!structSyncJobDetailNode["ExecuteCount"].isNull())
		structSyncJobDetail_.executeCount = std::stol(structSyncJobDetailNode["ExecuteCount"].asString());
	if(!structSyncJobDetailNode["SecurityRule"].isNull())
		structSyncJobDetail_.securityRule = structSyncJobDetailNode["SecurityRule"].asString();
	if(!structSyncJobDetailNode["DBTaskGroupId"].isNull())
		structSyncJobDetail_.dBTaskGroupId = std::stol(structSyncJobDetailNode["DBTaskGroupId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetStructSyncJobDetailResult::StructSyncJobDetail GetStructSyncJobDetailResult::getStructSyncJobDetail()const
{
	return structSyncJobDetail_;
}

std::string GetStructSyncJobDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetStructSyncJobDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetStructSyncJobDetailResult::getSuccess()const
{
	return success_;
}

