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

#include <alibabacloud/datalake/model/GetRegionStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetRegionStatusResult::GetRegionStatusResult() :
	ServiceResult()
{}

GetRegionStatusResult::GetRegionStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRegionStatusResult::~GetRegionStatusResult()
{}

void GetRegionStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IsDlfServiceOpen"].isNull())
		data_.isDlfServiceOpen = dataNode["IsDlfServiceOpen"].asString() == "true";
	if(!dataNode["RegionStatus"].isNull())
		data_.regionStatus = dataNode["RegionStatus"].asString();
	if(!dataNode["AccountStatus"].isNull())
		data_.accountStatus = dataNode["AccountStatus"].asString();
	if(!dataNode["IsDependencyReady"].isNull())
		data_.isDependencyReady = dataNode["IsDependencyReady"].asString() == "true";
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

GetRegionStatusResult::Data GetRegionStatusResult::getData()const
{
	return data_;
}

std::string GetRegionStatusResult::getSuccess()const
{
	return success_;
}

