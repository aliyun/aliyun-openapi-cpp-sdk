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

#include <alibabacloud/sophonsoar/model/VerifyPythonFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

VerifyPythonFileResult::VerifyPythonFileResult() :
	ServiceResult()
{}

VerifyPythonFileResult::VerifyPythonFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifyPythonFileResult::~VerifyPythonFileResult()
{}

void VerifyPythonFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSyntaxNode = value["Syntax"]["syntaxItem"];
	for (auto valueSyntaxsyntaxItem : allSyntaxNode)
	{
		SyntaxItem syntaxObject;
		if(!valueSyntaxsyntaxItem["StartLineNumber"].isNull())
			syntaxObject.startLineNumber = std::stoi(valueSyntaxsyntaxItem["StartLineNumber"].asString());
		if(!valueSyntaxsyntaxItem["StartColumn"].isNull())
			syntaxObject.startColumn = std::stoi(valueSyntaxsyntaxItem["StartColumn"].asString());
		if(!valueSyntaxsyntaxItem["EndLineNumber"].isNull())
			syntaxObject.endLineNumber = std::stoi(valueSyntaxsyntaxItem["EndLineNumber"].asString());
		if(!valueSyntaxsyntaxItem["EndColumn"].isNull())
			syntaxObject.endColumn = std::stoi(valueSyntaxsyntaxItem["EndColumn"].asString());
		if(!valueSyntaxsyntaxItem["Message"].isNull())
			syntaxObject.message = valueSyntaxsyntaxItem["Message"].asString();
		if(!valueSyntaxsyntaxItem["Severity"].isNull())
			syntaxObject.severity = std::stoi(valueSyntaxsyntaxItem["Severity"].asString());
		syntax_.push_back(syntaxObject);
	}

}

std::vector<VerifyPythonFileResult::SyntaxItem> VerifyPythonFileResult::getSyntax()const
{
	return syntax_;
}

