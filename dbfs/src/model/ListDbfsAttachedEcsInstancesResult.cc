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

#include <alibabacloud/dbfs/model/ListDbfsAttachedEcsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListDbfsAttachedEcsInstancesResult::ListDbfsAttachedEcsInstancesResult() :
	ServiceResult()
{}

ListDbfsAttachedEcsInstancesResult::ListDbfsAttachedEcsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDbfsAttachedEcsInstancesResult::~ListDbfsAttachedEcsInstancesResult()
{}

void ListDbfsAttachedEcsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcsLabelInfoNode = value["EcsLabelInfo"]["LabelInfo"];
	for (auto valueEcsLabelInfoLabelInfo : allEcsLabelInfoNode)
	{
		LabelInfo ecsLabelInfoObject;
		if(!valueEcsLabelInfoLabelInfo["MountPoint"].isNull())
			ecsLabelInfoObject.mountPoint = valueEcsLabelInfoLabelInfo["MountPoint"].asString();
		if(!valueEcsLabelInfoLabelInfo["value"].isNull())
			ecsLabelInfoObject.value = valueEcsLabelInfoLabelInfo["value"].asString();
		if(!valueEcsLabelInfoLabelInfo["label"].isNull())
			ecsLabelInfoObject.label = valueEcsLabelInfoLabelInfo["label"].asString();
		if(!valueEcsLabelInfoLabelInfo["MountedTime"].isNull())
			ecsLabelInfoObject.mountedTime = valueEcsLabelInfoLabelInfo["MountedTime"].asString();
		if(!valueEcsLabelInfoLabelInfo["InstanceTypeFamily"].isNull())
			ecsLabelInfoObject.instanceTypeFamily = valueEcsLabelInfoLabelInfo["InstanceTypeFamily"].asString();
		if(!valueEcsLabelInfoLabelInfo["OSName"].isNull())
			ecsLabelInfoObject.oSName = valueEcsLabelInfoLabelInfo["OSName"].asString();
		ecsLabelInfo_.push_back(ecsLabelInfoObject);
	}

}

std::vector<ListDbfsAttachedEcsInstancesResult::LabelInfo> ListDbfsAttachedEcsInstancesResult::getEcsLabelInfo()const
{
	return ecsLabelInfo_;
}

