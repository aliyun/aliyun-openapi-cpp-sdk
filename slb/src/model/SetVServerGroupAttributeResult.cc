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

#include <alibabacloud/slb/model/SetVServerGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetVServerGroupAttributeResult::SetVServerGroupAttributeResult() :
	ServiceResult()
{}

SetVServerGroupAttributeResult::SetVServerGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetVServerGroupAttributeResult::~SetVServerGroupAttributeResult()
{}

void SetVServerGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServerObject;
		backendServerObject.serverId = value["ServerId"].asString();
		backendServerObject.port = std::stoi(value["Port"].asString());
		backendServerObject.weight = std::stoi(value["Weight"].asString());
		backendServers_.push_back(backendServerObject);
	}
	vServerGroupId_ = value["VServerGroupId"].asString();
	vServerGroupName_ = value["VServerGroupName"].asString();

}

std::string SetVServerGroupAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetVServerGroupAttributeResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

std::string SetVServerGroupAttributeResult::getVServerGroupName()const
{
	return vServerGroupName_;
}

void SetVServerGroupAttributeResult::setVServerGroupName(const std::string& vServerGroupName)
{
	vServerGroupName_ = vServerGroupName;
}

