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

#include <alibabacloud/vod/model/ListWorkFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListWorkFlowResult::ListWorkFlowResult() :
	ServiceResult()
{}

ListWorkFlowResult::ListWorkFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkFlowResult::~ListWorkFlowResult()
{}

void ListWorkFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allWorkFlowInfoList = value["WorkFlowInfoList"]["WorkFlowInfo"];
	for (auto value : allWorkFlowInfoList)
	{
		WorkFlowInfo workFlowInfoListObject;
		if(!value["WorkFlowId"].isNull())
			workFlowInfoListObject.workFlowId = value["WorkFlowId"].asString();
		if(!value["Name"].isNull())
			workFlowInfoListObject.name = value["Name"].asString();
		if(!value["ActionList"].isNull())
			workFlowInfoListObject.actionList = value["ActionList"].asString();
		if(!value["CreationTime"].isNull())
			workFlowInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifyTime"].isNull())
			workFlowInfoListObject.modifyTime = value["ModifyTime"].asString();
		workFlowInfoList_.push_back(workFlowInfoListObject);
	}

}

std::vector<ListWorkFlowResult::WorkFlowInfo> ListWorkFlowResult::getWorkFlowInfoList()const
{
	return workFlowInfoList_;
}

