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

#include <alibabacloud/hitsdb/model/GetLdpsComputeGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetLdpsComputeGroupResult::GetLdpsComputeGroupResult() :
	ServiceResult()
{}

GetLdpsComputeGroupResult::GetLdpsComputeGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLdpsComputeGroupResult::~GetLdpsComputeGroupResult()
{}

void GetLdpsComputeGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["Properties"].isNull())
		properties_ = value["Properties"].asString();

}

std::string GetLdpsComputeGroupResult::getGroupName()const
{
	return groupName_;
}

std::string GetLdpsComputeGroupResult::getProperties()const
{
	return properties_;
}

