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

#include <alibabacloud/airegistry/model/GetPromptVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

GetPromptVersionResult::GetPromptVersionResult() :
	ServiceResult()
{}

GetPromptVersionResult::GetPromptVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPromptVersionResult::~GetPromptVersionResult()
{}

void GetPromptVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["SrcUser"].isNull())
		data_.srcUser = dataNode["SrcUser"].asString();
	if(!dataNode["PromptKey"].isNull())
		data_.promptKey = dataNode["PromptKey"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = std::stol(dataNode["GmtModified"].asString());
	if(!dataNode["CommitMsg"].isNull())
		data_.commitMsg = dataNode["CommitMsg"].asString();
	if(!dataNode["Template"].isNull())
		data_._template = dataNode["Template"].asString();
	if(!dataNode["Md5"].isNull())
		data_.md5 = dataNode["Md5"].asString();
	auto allVariablesNode = dataNode["Variables"]["Variable"];
	for (auto dataNodeVariablesVariable : allVariablesNode)
	{
		Data::Variable variableObject;
		if(!dataNodeVariablesVariable["DefaultValue"].isNull())
			variableObject.defaultValue = dataNodeVariablesVariable["DefaultValue"].asString();
		if(!dataNodeVariablesVariable["Description"].isNull())
			variableObject.description = dataNodeVariablesVariable["Description"].asString();
		if(!dataNodeVariablesVariable["Name"].isNull())
			variableObject.name = dataNodeVariablesVariable["Name"].asString();
		data_.variables.push_back(variableObject);
	}

}

GetPromptVersionResult::Data GetPromptVersionResult::getData()const
{
	return data_;
}

