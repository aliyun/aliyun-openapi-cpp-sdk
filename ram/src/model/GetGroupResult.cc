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

#include <alibabacloud/ram/model/GetGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

GetGroupResult::GetGroupResult() :
	ServiceResult()
{}

GetGroupResult::GetGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGroupResult::~GetGroupResult()
{}

void GetGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto groupNode = value["Group"];
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["Comments"].isNull())
		group_.comments = groupNode["Comments"].asString();
	if(!groupNode["CreateDate"].isNull())
		group_.createDate = groupNode["CreateDate"].asString();
	if(!groupNode["UpdateDate"].isNull())
		group_.updateDate = groupNode["UpdateDate"].asString();

}

GetGroupResult::Group GetGroupResult::getGroup()const
{
	return group_;
}

