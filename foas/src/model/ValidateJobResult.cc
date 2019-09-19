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

#include <alibabacloud/foas/model/ValidateJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ValidateJobResult::ValidateJobResult() :
	ServiceResult()
{}

ValidateJobResult::ValidateJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateJobResult::~ValidateJobResult()
{}

void ValidateJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobInOutNode = value["JobInOut"];
	auto allInputsNode = jobInOutNode["Inputs"]["Input"];
	for (auto jobInOutNodeInputsInput : allInputsNode)
	{
		JobInOut::Input inputObject;
		if(!jobInOutNodeInputsInput["Type"].isNull())
			inputObject.type = jobInOutNodeInputsInput["Type"].asString();
		if(!jobInOutNodeInputsInput["Workspace"].isNull())
			inputObject.workspace = jobInOutNodeInputsInput["Workspace"].asString();
		if(!jobInOutNodeInputsInput["Name"].isNull())
			inputObject.name = jobInOutNodeInputsInput["Name"].asString();
		if(!jobInOutNodeInputsInput["Properties"].isNull())
			inputObject.properties = jobInOutNodeInputsInput["Properties"].asString();
		if(!jobInOutNodeInputsInput["Alias"].isNull())
			inputObject.alias = jobInOutNodeInputsInput["Alias"].asString();
		jobInOut_.inputs.push_back(inputObject);
	}
	auto allOutputsNode = jobInOutNode["Outputs"]["Output"];
	for (auto jobInOutNodeOutputsOutput : allOutputsNode)
	{
		JobInOut::Output outputObject;
		if(!jobInOutNodeOutputsOutput["Type"].isNull())
			outputObject.type = jobInOutNodeOutputsOutput["Type"].asString();
		if(!jobInOutNodeOutputsOutput["Workspace"].isNull())
			outputObject.workspace = jobInOutNodeOutputsOutput["Workspace"].asString();
		if(!jobInOutNodeOutputsOutput["Name"].isNull())
			outputObject.name = jobInOutNodeOutputsOutput["Name"].asString();
		if(!jobInOutNodeOutputsOutput["Properties"].isNull())
			outputObject.properties = jobInOutNodeOutputsOutput["Properties"].asString();
		if(!jobInOutNodeOutputsOutput["Alias"].isNull())
			outputObject.alias = jobInOutNodeOutputsOutput["Alias"].asString();
		jobInOut_.outputs.push_back(outputObject);
	}
	auto allDimsNode = jobInOutNode["Dims"]["Dim"];
	for (auto jobInOutNodeDimsDim : allDimsNode)
	{
		JobInOut::Dim dimObject;
		if(!jobInOutNodeDimsDim["Type"].isNull())
			dimObject.type = jobInOutNodeDimsDim["Type"].asString();
		if(!jobInOutNodeDimsDim["Workspace"].isNull())
			dimObject.workspace = jobInOutNodeDimsDim["Workspace"].asString();
		if(!jobInOutNodeDimsDim["Name"].isNull())
			dimObject.name = jobInOutNodeDimsDim["Name"].asString();
		if(!jobInOutNodeDimsDim["Properties"].isNull())
			dimObject.properties = jobInOutNodeDimsDim["Properties"].asString();
		if(!jobInOutNodeDimsDim["Alias"].isNull())
			dimObject.alias = jobInOutNodeDimsDim["Alias"].asString();
		jobInOut_.dims.push_back(dimObject);
	}

}

ValidateJobResult::JobInOut ValidateJobResult::getJobInOut()const
{
	return jobInOut_;
}

