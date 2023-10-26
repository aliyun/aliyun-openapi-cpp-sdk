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

#include <alibabacloud/fnf/model/ListExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

ListExecutionsResult::ListExecutionsResult() :
	ServiceResult()
{}

ListExecutionsResult::ListExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionsResult::~ListExecutionsResult()
{}

void ListExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionsNode = value["Executions"]["ExecutionsItem"];
	for (auto valueExecutionsExecutionsItem : allExecutionsNode)
	{
		ExecutionsItem executionsObject;
		if(!valueExecutionsExecutionsItem["Status"].isNull())
			executionsObject.status = valueExecutionsExecutionsItem["Status"].asString();
		if(!valueExecutionsExecutionsItem["StoppedTime"].isNull())
			executionsObject.stoppedTime = valueExecutionsExecutionsItem["StoppedTime"].asString();
		if(!valueExecutionsExecutionsItem["StartedTime"].isNull())
			executionsObject.startedTime = valueExecutionsExecutionsItem["StartedTime"].asString();
		if(!valueExecutionsExecutionsItem["FlowDefinition"].isNull())
			executionsObject.flowDefinition = valueExecutionsExecutionsItem["FlowDefinition"].asString();
		if(!valueExecutionsExecutionsItem["ExternalInputUri"].isNull())
			executionsObject.externalInputUri = valueExecutionsExecutionsItem["ExternalInputUri"].asString();
		if(!valueExecutionsExecutionsItem["Output"].isNull())
			executionsObject.output = valueExecutionsExecutionsItem["Output"].asString();
		if(!valueExecutionsExecutionsItem["FlowName"].isNull())
			executionsObject.flowName = valueExecutionsExecutionsItem["FlowName"].asString();
		if(!valueExecutionsExecutionsItem["ExternalOutputUri"].isNull())
			executionsObject.externalOutputUri = valueExecutionsExecutionsItem["ExternalOutputUri"].asString();
		if(!valueExecutionsExecutionsItem["Name"].isNull())
			executionsObject.name = valueExecutionsExecutionsItem["Name"].asString();
		if(!valueExecutionsExecutionsItem["Input"].isNull())
			executionsObject.input = valueExecutionsExecutionsItem["Input"].asString();
		executions_.push_back(executionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListExecutionsResult::ExecutionsItem> ListExecutionsResult::getExecutions()const
{
	return executions_;
}

std::string ListExecutionsResult::getNextToken()const
{
	return nextToken_;
}

