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

#include <alibabacloud/teslamaxcompute/model/GetInstancesStatusCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

GetInstancesStatusCountResult::GetInstancesStatusCountResult() :
	ServiceResult()
{}

GetInstancesStatusCountResult::GetInstancesStatusCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstancesStatusCountResult::~GetInstancesStatusCountResult()
{}

void GetInstancesStatusCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["Size"].isNull())
			dataObject.size = std::stoi(value["Size"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetInstancesStatusCountResult::getMessage()const
{
	return message_;
}

std::vector<GetInstancesStatusCountResult::DataItem> GetInstancesStatusCountResult::getData()const
{
	return data_;
}

int GetInstancesStatusCountResult::getCode()const
{
	return code_;
}

