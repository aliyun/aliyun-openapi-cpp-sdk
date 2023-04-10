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

#include <alibabacloud/datalake/model/GetServiceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetServiceStatusResult::GetServiceStatusResult() :
	ServiceResult()
{}

GetServiceStatusResult::GetServiceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceStatusResult::~GetServiceStatusResult()
{}

void GetServiceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IsDlfServiceOpen"].isNull())
		data_.isDlfServiceOpen = dataNode["IsDlfServiceOpen"].asString() == "true";
	if(!dataNode["HasRamPermissions"].isNull())
		data_.hasRamPermissions = dataNode["HasRamPermissions"].asString() == "true";
	if(!dataNode["IsOssOpen"].isNull())
		data_.isOssOpen = dataNode["IsOssOpen"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetServiceStatusResult::Data GetServiceStatusResult::getData()const
{
	return data_;
}

bool GetServiceStatusResult::getSuccess()const
{
	return success_;
}

