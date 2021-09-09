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

#include <alibabacloud/companyreg/model/GetInitFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetInitFlowResult::GetInitFlowResult() :
	ServiceResult()
{}

GetInitFlowResult::GetInitFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInitFlowResult::~GetInitFlowResult()
{}

void GetInitFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeListNode = value["NodeList"]["NodeListItem"];
	for (auto valueNodeListNodeListItem : allNodeListNode)
	{
		NodeListItem nodeListObject;
		if(!valueNodeListNodeListItem["Index"].isNull())
			nodeListObject.index = std::stoi(valueNodeListNodeListItem["Index"].asString());
		if(!valueNodeListNodeListItem["Status"].isNull())
			nodeListObject.status = valueNodeListNodeListItem["Status"].asString();
		if(!valueNodeListNodeListItem["Description"].isNull())
			nodeListObject.description = valueNodeListNodeListItem["Description"].asString();
		if(!valueNodeListNodeListItem["Code"].isNull())
			nodeListObject.code = valueNodeListNodeListItem["Code"].asString();
		if(!valueNodeListNodeListItem["Name"].isNull())
			nodeListObject.name = valueNodeListNodeListItem["Name"].asString();
		if(!valueNodeListNodeListItem["FailReason"].isNull())
			nodeListObject.failReason = valueNodeListNodeListItem["FailReason"].asString();
		if(!valueNodeListNodeListItem["Id"].isNull())
			nodeListObject.id = std::stoi(valueNodeListNodeListItem["Id"].asString());
		nodeList_.push_back(nodeListObject);
	}
	if(!value["FlowStatus"].isNull())
		flowStatus_ = value["FlowStatus"].asString();

}

std::vector<GetInitFlowResult::NodeListItem> GetInitFlowResult::getNodeList()const
{
	return nodeList_;
}

std::string GetInitFlowResult::getFlowStatus()const
{
	return flowStatus_;
}

