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

#include <alibabacloud/emr/model/GetSupportedOpsCommandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetSupportedOpsCommandResult::GetSupportedOpsCommandResult() :
	ServiceResult()
{}

GetSupportedOpsCommandResult::GetSupportedOpsCommandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSupportedOpsCommandResult::~GetSupportedOpsCommandResult()
{}

void GetSupportedOpsCommandResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allList = value["List"]["OpsCommandCategory"];
	for (auto value : allList)
	{
		OpsCommandCategory listObject;
		if(!value["Category"].isNull())
			listObject.category = value["Category"].asString();
		auto allCommandList = value["CommandList"]["OpsCommandInfo"];
		for (auto value : allCommandList)
		{
			OpsCommandCategory::OpsCommandInfo commandListObject;
			if(!value["Id"].isNull())
				commandListObject.id = value["Id"].asString();
			if(!value["Name"].isNull())
				commandListObject.name = value["Name"].asString();
			if(!value["Discription"].isNull())
				commandListObject.discription = value["Discription"].asString();
			if(!value["TargetType"].isNull())
				commandListObject.targetType = value["TargetType"].asString();
			if(!value["Params"].isNull())
				commandListObject.params = value["Params"].asString();
			listObject.commandList.push_back(commandListObject);
		}
		list_.push_back(listObject);
	}

}

std::vector<GetSupportedOpsCommandResult::OpsCommandCategory> GetSupportedOpsCommandResult::getList()const
{
	return list_;
}

