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

#include <alibabacloud/drds/model/GetDrdsDbRdsRelationInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

GetDrdsDbRdsRelationInfoResult::GetDrdsDbRdsRelationInfoResult() :
	ServiceResult()
{}

GetDrdsDbRdsRelationInfoResult::GetDrdsDbRdsRelationInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDrdsDbRdsRelationInfoResult::~GetDrdsDbRdsRelationInfoResult()
{}

void GetDrdsDbRdsRelationInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["RdsInstanceId"].isNull())
			dataObject.rdsInstanceId = valueDataDataItem["RdsInstanceId"].asString();
		if(!valueDataDataItem["UsedInstanceType"].isNull())
			dataObject.usedInstanceType = valueDataDataItem["UsedInstanceType"].asString();
		if(!valueDataDataItem["UsedInstanceId"].isNull())
			dataObject.usedInstanceId = valueDataDataItem["UsedInstanceId"].asString();
		auto allReadOnlyInstanceInfo = value["ReadOnlyInstanceInfo"]["ReadOnlyInstanceIds"];
		for (auto value : allReadOnlyInstanceInfo)
			dataObject.readOnlyInstanceInfo.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetDrdsDbRdsRelationInfoResult::DataItem> GetDrdsDbRdsRelationInfoResult::getData()const
{
	return data_;
}

bool GetDrdsDbRdsRelationInfoResult::getSuccess()const
{
	return success_;
}

