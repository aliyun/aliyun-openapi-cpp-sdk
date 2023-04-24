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

#include <alibabacloud/dms-enterprise/model/GetDataTrackOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataTrackOrderDetailResult::GetDataTrackOrderDetailResult() :
	ServiceResult()
{}

GetDataTrackOrderDetailResult::GetDataTrackOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataTrackOrderDetailResult::~GetDataTrackOrderDetailResult()
{}

void GetDataTrackOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataTrackOrderDetailNode = value["DataTrackOrderDetail"];
	if(!dataTrackOrderDetailNode["DbId"].isNull())
		dataTrackOrderDetail_.dbId = std::stol(dataTrackOrderDetailNode["DbId"].asString());
	if(!dataTrackOrderDetailNode["Logic"].isNull())
		dataTrackOrderDetail_.logic = dataTrackOrderDetailNode["Logic"].asString() == "true";
	if(!dataTrackOrderDetailNode["DatabaseSearchName"].isNull())
		dataTrackOrderDetail_.databaseSearchName = dataTrackOrderDetailNode["DatabaseSearchName"].asString();
	if(!dataTrackOrderDetailNode["JobStartTime"].isNull())
		dataTrackOrderDetail_.jobStartTime = dataTrackOrderDetailNode["JobStartTime"].asString();
	if(!dataTrackOrderDetailNode["JobEndTime"].isNull())
		dataTrackOrderDetail_.jobEndTime = dataTrackOrderDetailNode["JobEndTime"].asString();
	if(!dataTrackOrderDetailNode["SchemaName"].isNull())
		dataTrackOrderDetail_.schemaName = dataTrackOrderDetailNode["SchemaName"].asString();
	if(!dataTrackOrderDetailNode["JobStatus"].isNull())
		dataTrackOrderDetail_.jobStatus = dataTrackOrderDetailNode["JobStatus"].asString();
	if(!dataTrackOrderDetailNode["StatusDesc"].isNull())
		dataTrackOrderDetail_.statusDesc = dataTrackOrderDetailNode["StatusDesc"].asString();
		auto allTableNames = dataTrackOrderDetailNode["TableNames"]["TableNames"];
		for (auto value : allTableNames)
			dataTrackOrderDetail_.tableNames.push_back(value.asString());
		auto allTrackTypes = dataTrackOrderDetailNode["TrackTypes"]["TrackTypes"];
		for (auto value : allTrackTypes)
			dataTrackOrderDetail_.trackTypes.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetDataTrackOrderDetailResult::DataTrackOrderDetail GetDataTrackOrderDetailResult::getDataTrackOrderDetail()const
{
	return dataTrackOrderDetail_;
}

std::string GetDataTrackOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataTrackOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataTrackOrderDetailResult::getSuccess()const
{
	return success_;
}

