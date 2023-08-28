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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetProjectFeatureEntityResult::GetProjectFeatureEntityResult() :
	ServiceResult()
{}

GetProjectFeatureEntityResult::GetProjectFeatureEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectFeatureEntityResult::~GetProjectFeatureEntityResult()
{}

void GetProjectFeatureEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["FeatureEntityId"].isNull())
		featureEntityId_ = value["FeatureEntityId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["WorkspaceId"].isNull())
		workspaceId_ = value["WorkspaceId"].asString();
	if(!value["JoinId"].isNull())
		joinId_ = value["JoinId"].asString();

}

std::string GetProjectFeatureEntityResult::getJoinId()const
{
	return joinId_;
}

std::string GetProjectFeatureEntityResult::getProjectName()const
{
	return projectName_;
}

std::string GetProjectFeatureEntityResult::getFeatureEntityId()const
{
	return featureEntityId_;
}

std::string GetProjectFeatureEntityResult::getWorkspaceId()const
{
	return workspaceId_;
}

std::string GetProjectFeatureEntityResult::getName()const
{
	return name_;
}

