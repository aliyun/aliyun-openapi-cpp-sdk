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

#include <alibabacloud/ram/model/UpdateGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

UpdateGroupResult::UpdateGroupResult() :
	ServiceResult()
{}

UpdateGroupResult::UpdateGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGroupResult::~UpdateGroupResult()
{}

void UpdateGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupNode = value["Group"];
	if(!groupNode["GroupId"].isNull())
		group_.groupId = groupNode["GroupId"].asString();
	if(!groupNode["UpdateDate"].isNull())
		group_.updateDate = groupNode["UpdateDate"].asString();
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["Comments"].isNull())
		group_.comments = groupNode["Comments"].asString();
	if(!groupNode["CreateDate"].isNull())
		group_.createDate = groupNode["CreateDate"].asString();

}

UpdateGroupResult::Group UpdateGroupResult::getGroup()const
{
	return group_;
}

