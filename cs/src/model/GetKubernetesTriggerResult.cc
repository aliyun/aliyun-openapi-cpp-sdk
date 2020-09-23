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

#include <alibabacloud/cs/model/GetKubernetesTriggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

GetKubernetesTriggerResult::GetKubernetesTriggerResult() :
	ServiceResult()
{}

GetKubernetesTriggerResult::GetKubernetesTriggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetKubernetesTriggerResult::~GetKubernetesTriggerResult()
{}

void GetKubernetesTriggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltriggersNode = value["triggers"]["triggersItem"];
	for (auto valuetriggerstriggersItem : alltriggersNode)
	{
		TriggersItem triggersObject;
		if(!valuetriggerstriggersItem["cluster_id"].isNull())
			triggersObject.cluster_id = valuetriggerstriggersItem["cluster_id"].asString();
		if(!valuetriggerstriggersItem["project_id"].isNull())
			triggersObject.project_id = valuetriggerstriggersItem["project_id"].asString();
		if(!valuetriggerstriggersItem["action"].isNull())
			triggersObject.action = valuetriggerstriggersItem["action"].asString();
		if(!valuetriggerstriggersItem["id"].isNull())
			triggersObject.id = valuetriggerstriggersItem["id"].asString();
		if(!valuetriggerstriggersItem["token"].isNull())
			triggersObject.token = valuetriggerstriggersItem["token"].asString();
		triggers_.push_back(triggersObject);
	}

}

std::vector<GetKubernetesTriggerResult::TriggersItem> GetKubernetesTriggerResult::gettriggers()const
{
	return triggers_;
}

