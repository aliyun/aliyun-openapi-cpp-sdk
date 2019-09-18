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
	auto allExecutions = value["Executions"]["ExecutionsItem"];
	for (auto value : allExecutions)
	{
		ExecutionsItem executionsObject;
		if(!value["Name"].isNull())
			executionsObject.name = value["Name"].asString();
		if(!value["FlowName"].isNull())
			executionsObject.flowName = value["FlowName"].asString();
		if(!value["FlowDefinition"].isNull())
			executionsObject.flowDefinition = value["FlowDefinition"].asString();
		if(!value["Input"].isNull())
			executionsObject.input = value["Input"].asString();
		if(!value["Output"].isNull())
			executionsObject.output = value["Output"].asString();
		if(!value["Status"].isNull())
			executionsObject.status = value["Status"].asString();
		if(!value["StartedTime"].isNull())
			executionsObject.startedTime = value["StartedTime"].asString();
		if(!value["StoppedTime"].isNull())
			executionsObject.stoppedTime = value["StoppedTime"].asString();
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

