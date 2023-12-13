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

#include <alibabacloud/cloud-siem/model/GetCapacityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

GetCapacityResult::GetCapacityResult() :
	ServiceResult()
{}

GetCapacityResult::GetCapacityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCapacityResult::~GetCapacityResult()
{}

void GetCapacityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UsedCapacity"].isNull())
		data_.usedCapacity = dataNode["UsedCapacity"].asString();
	if(!dataNode["PreservedCapacity"].isNull())
		data_.preservedCapacity = std::stol(dataNode["PreservedCapacity"].asString());
	if(!dataNode["ExistLogStore"].isNull())
		data_.existLogStore = dataNode["ExistLogStore"].asString() == "true";

}

GetCapacityResult::Data GetCapacityResult::getData()const
{
	return data_;
}

