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

#include <alibabacloud/dbfs/model/ListDbfsAttachableEcsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListDbfsAttachableEcsInstancesResult::ListDbfsAttachableEcsInstancesResult() :
	ServiceResult()
{}

ListDbfsAttachableEcsInstancesResult::ListDbfsAttachableEcsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDbfsAttachableEcsInstancesResult::~ListDbfsAttachableEcsInstancesResult()
{}

void ListDbfsAttachableEcsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcsLabelInfoNode = value["EcsLabelInfo"]["LabelInfo"];
	for (auto valueEcsLabelInfoLabelInfo : allEcsLabelInfoNode)
	{
		LabelInfo ecsLabelInfoObject;
		if(!valueEcsLabelInfoLabelInfo["value"].isNull())
			ecsLabelInfoObject.value = valueEcsLabelInfoLabelInfo["value"].asString();
		if(!valueEcsLabelInfoLabelInfo["label"].isNull())
			ecsLabelInfoObject.label = valueEcsLabelInfoLabelInfo["label"].asString();
		if(!valueEcsLabelInfoLabelInfo["InstanceTypeFamily"].isNull())
			ecsLabelInfoObject.instanceTypeFamily = valueEcsLabelInfoLabelInfo["InstanceTypeFamily"].asString();
		if(!valueEcsLabelInfoLabelInfo["OSName"].isNull())
			ecsLabelInfoObject.oSName = valueEcsLabelInfoLabelInfo["OSName"].asString();
		if(!valueEcsLabelInfoLabelInfo["Status"].isNull())
			ecsLabelInfoObject.status = valueEcsLabelInfoLabelInfo["Status"].asString();
		if(!valueEcsLabelInfoLabelInfo["ZoneId"].isNull())
			ecsLabelInfoObject.zoneId = valueEcsLabelInfoLabelInfo["ZoneId"].asString();
		if(!valueEcsLabelInfoLabelInfo["ImageId"].isNull())
			ecsLabelInfoObject.imageId = valueEcsLabelInfoLabelInfo["ImageId"].asString();
		ecsLabelInfo_.push_back(ecsLabelInfoObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDbfsAttachableEcsInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDbfsAttachableEcsInstancesResult::LabelInfo> ListDbfsAttachableEcsInstancesResult::getEcsLabelInfo()const
{
	return ecsLabelInfo_;
}

