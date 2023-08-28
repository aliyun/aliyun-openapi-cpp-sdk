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

#include <alibabacloud/paifeaturestore/model/GetFeatureEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetFeatureEntityResult::GetFeatureEntityResult() :
	ServiceResult()
{}

GetFeatureEntityResult::GetFeatureEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFeatureEntityResult::~GetFeatureEntityResult()
{}

void GetFeatureEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["JoinId"].isNull())
		joinId_ = value["JoinId"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();

}

std::string GetFeatureEntityResult::getJoinId()const
{
	return joinId_;
}

std::string GetFeatureEntityResult::getOwner()const
{
	return owner_;
}

std::string GetFeatureEntityResult::getProjectName()const
{
	return projectName_;
}

std::string GetFeatureEntityResult::getProjectId()const
{
	return projectId_;
}

std::string GetFeatureEntityResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetFeatureEntityResult::getName()const
{
	return name_;
}

