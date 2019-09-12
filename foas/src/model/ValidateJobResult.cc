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
	auto allInputs = value["Inputs"]["Input"];
	for (auto value : allInputs)
	{
		JobInOut::Input inputObject;
		if(!value["Type"].isNull())
			inputObject.type = value["Type"].asString();
		if(!value["Workspace"].isNull())
			inputObject.workspace = value["Workspace"].asString();
		if(!value["Name"].isNull())
			inputObject.name = value["Name"].asString();
		if(!value["Properties"].isNull())
			inputObject.properties = value["Properties"].asString();
		if(!value["Alias"].isNull())
			inputObject.alias = value["Alias"].asString();
		jobInOut_.inputs.push_back(inputObject);
	}
	auto allOutputs = value["Outputs"]["Output"];
	for (auto value : allOutputs)
	{
		JobInOut::Output outputObject;
		if(!value["Type"].isNull())
			outputObject.type = value["Type"].asString();
		if(!value["Workspace"].isNull())
			outputObject.workspace = value["Workspace"].asString();
		if(!value["Name"].isNull())
			outputObject.name = value["Name"].asString();
		if(!value["Properties"].isNull())
			outputObject.properties = value["Properties"].asString();
		if(!value["Alias"].isNull())
			outputObject.alias = value["Alias"].asString();
		jobInOut_.outputs.push_back(outputObject);
	}
	auto allDims = value["Dims"]["Dim"];
	for (auto value : allDims)
	{
		JobInOut::Dim dimObject;
		if(!value["Type"].isNull())
			dimObject.type = value["Type"].asString();
		if(!value["Workspace"].isNull())
			dimObject.workspace = value["Workspace"].asString();
		if(!value["Name"].isNull())
			dimObject.name = value["Name"].asString();
		if(!value["Properties"].isNull())
			dimObject.properties = value["Properties"].asString();
		if(!value["Alias"].isNull())
			dimObject.alias = value["Alias"].asString();
		jobInOut_.dims.push_back(dimObject);
	}

}

ValidateJobResult::JobInOut ValidateJobResult::getJobInOut()const
{
	return jobInOut_;
}

