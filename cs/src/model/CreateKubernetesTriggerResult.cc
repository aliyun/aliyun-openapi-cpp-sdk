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

#include <alibabacloud/cs/model/CreateKubernetesTriggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

CreateKubernetesTriggerResult::CreateKubernetesTriggerResult() :
	ServiceResult()
{}

CreateKubernetesTriggerResult::CreateKubernetesTriggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateKubernetesTriggerResult::~CreateKubernetesTriggerResult()
{}

void CreateKubernetesTriggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["cluster_id"].isNull())
		cluster_id_ = value["cluster_id"].asString();
	if(!value["project_id"].isNull())
		project_id_ = value["project_id"].asString();
	if(!value["action"].isNull())
		action_ = value["action"].asString();
	if(!value["id"].isNull())
		id_ = value["id"].asString();

}

std::string CreateKubernetesTriggerResult::getAction()const
{
	return action_;
}

std::string CreateKubernetesTriggerResult::getCluster_id()const
{
	return cluster_id_;
}

std::string CreateKubernetesTriggerResult::getProject_id()const
{
	return project_id_;
}

std::string CreateKubernetesTriggerResult::getId()const
{
	return id_;
}

