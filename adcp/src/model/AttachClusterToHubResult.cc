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

#include <alibabacloud/adcp/model/AttachClusterToHubResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

AttachClusterToHubResult::AttachClusterToHubResult() :
	ServiceResult()
{}

AttachClusterToHubResult::AttachClusterToHubResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachClusterToHubResult::~AttachClusterToHubResult()
{}

void AttachClusterToHubResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allManagedClusterIds = value["ManagedClusterIds"]["ManagedClusterId"];
	for (const auto &item : allManagedClusterIds)
		managedClusterIds_.push_back(item.asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string AttachClusterToHubResult::getTaskId()const
{
	return taskId_;
}

std::string AttachClusterToHubResult::getClusterId()const
{
	return clusterId_;
}

std::vector<std::string> AttachClusterToHubResult::getManagedClusterIds()const
{
	return managedClusterIds_;
}

