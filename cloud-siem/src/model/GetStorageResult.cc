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

#include <alibabacloud/cloud-siem/model/GetStorageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

GetStorageResult::GetStorageResult() :
	ServiceResult()
{}

GetStorageResult::GetStorageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStorageResult::~GetStorageResult()
{}

void GetStorageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Ttl"].isNull())
		data_.ttl = std::stoi(dataNode["Ttl"].asString());
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["DisplayRegion"].isNull())
		data_.displayRegion = dataNode["DisplayRegion"].asString() == "true";
	if(!dataNode["CanOperate"].isNull())
		data_.canOperate = dataNode["CanOperate"].asString() == "true";

}

GetStorageResult::Data GetStorageResult::getData()const
{
	return data_;
}

