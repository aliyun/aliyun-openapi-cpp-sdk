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

#include <alibabacloud/cs/model/AttachInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

AttachInstancesResult::AttachInstancesResult() :
	ServiceResult()
{}

AttachInstancesResult::AttachInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachInstancesResult::~AttachInstancesResult()
{}

void AttachInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alllistNode = value["list"]["listItem"];
	for (auto valuelistlistItem : alllistNode)
	{
		ListItem listObject;
		if(!valuelistlistItem["instanceId"].isNull())
			listObject.instanceId = valuelistlistItem["instanceId"].asString();
		if(!valuelistlistItem["code"].isNull())
			listObject.code = valuelistlistItem["code"].asString();
		if(!valuelistlistItem["message"].isNull())
			listObject.message = valuelistlistItem["message"].asString();
		list_.push_back(listObject);
	}
	if(!value["task_id"].isNull())
		task_id_ = value["task_id"].asString();

}

std::vector<AttachInstancesResult::ListItem> AttachInstancesResult::getlist()const
{
	return list_;
}

std::string AttachInstancesResult::getTask_id()const
{
	return task_id_;
}

