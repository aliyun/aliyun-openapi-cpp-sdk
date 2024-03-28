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

#include <alibabacloud/devops/model/CreateTestCaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateTestCaseResult::CreateTestCaseResult() :
	ServiceResult()
{}

CreateTestCaseResult::CreateTestCaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTestCaseResult::~CreateTestCaseResult()
{}

void CreateTestCaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto testcaseNode = value["testcase"];
	if(!testcaseNode["identifier"].isNull())
		testcase_.identifier = testcaseNode["identifier"].asString();
	if(!testcaseNode["subject"].isNull())
		testcase_.subject = testcaseNode["subject"].asString();
	if(!testcaseNode["spaceIdentifier"].isNull())
		testcase_.spaceIdentifier = testcaseNode["spaceIdentifier"].asString();
	if(!testcaseNode["spaceType"].isNull())
		testcase_.spaceType = testcaseNode["spaceType"].asString();
	if(!testcaseNode["categoryIdentifier"].isNull())
		testcase_.categoryIdentifier = testcaseNode["categoryIdentifier"].asString();
	auto assignedToNode = testcaseNode["assignedTo"];
	if(!assignedToNode["assignIdentifier"].isNull())
		testcase_.assignedTo.assignIdentifier = assignedToNode["assignIdentifier"].asString();
	if(!assignedToNode["name"].isNull())
		testcase_.assignedTo.name = assignedToNode["name"].asString();
	if(!assignedToNode["tbRoleId"].isNull())
		testcase_.assignedTo.tbRoleId = assignedToNode["tbRoleId"].asString();
	auto creatorNode = testcaseNode["creator"];
	if(!creatorNode["createIdentifier"].isNull())
		testcase_.creator.createIdentifier = creatorNode["createIdentifier"].asString();
	if(!creatorNode["name"].isNull())
		testcase_.creator.name = creatorNode["name"].asString();
	auto modifierNode = testcaseNode["modifier"];
	if(!modifierNode["modifyIdentifier"].isNull())
		testcase_.modifier.modifyIdentifier = modifierNode["modifyIdentifier"].asString();
	if(!modifierNode["name"].isNull())
		testcase_.modifier.name = modifierNode["name"].asString();
	auto directoryNode = testcaseNode["directory"];
	if(!directoryNode["directoryIdentifier"].isNull())
		testcase_.directory.directoryIdentifier = directoryNode["directoryIdentifier"].asString();
	if(!directoryNode["name"].isNull())
		testcase_.directory.name = directoryNode["name"].asString();
	if(!directoryNode["childIdentifier"].isNull())
		testcase_.directory.childIdentifier = directoryNode["childIdentifier"].asString();
		auto allPathName = directoryNode["pathName"]["idPathDisplayNames"];
		for (auto value : allPathName)
			testcase_.directory.pathName.push_back(value.asString());
	auto detailInfoNode = testcaseNode["detailInfo"];
	if(!detailInfoNode["stepType"].isNull())
		testcase_.detailInfo.stepType = detailInfoNode["stepType"].asString();
	auto preconditionNode = detailInfoNode["precondition"];
	if(!preconditionNode["preIdentifier"].isNull())
		testcase_.detailInfo.precondition.preIdentifier = preconditionNode["preIdentifier"].asString();
	if(!preconditionNode["preContent"].isNull())
		testcase_.detailInfo.precondition.preContent = preconditionNode["preContent"].asString();
	if(!preconditionNode["preContentType"].isNull())
		testcase_.detailInfo.precondition.preContentType = preconditionNode["preContentType"].asString();
	auto stepContentNode = detailInfoNode["stepContent"];
	if(!stepContentNode["stepIdentifier"].isNull())
		testcase_.detailInfo.stepContent.stepIdentifier = stepContentNode["stepIdentifier"].asString();
	if(!stepContentNode["stepContent"].isNull())
		testcase_.detailInfo.stepContent.stepContent = stepContentNode["stepContent"].asString();
	if(!stepContentNode["stepContentType"].isNull())
		testcase_.detailInfo.stepContent.stepContentType = stepContentNode["stepContentType"].asString();
	auto expectedResultNode = detailInfoNode["expectedResult"];
	if(!expectedResultNode["expectIdentifier"].isNull())
		testcase_.detailInfo.expectedResult.expectIdentifier = expectedResultNode["expectIdentifier"].asString();
	if(!expectedResultNode["expectContent"].isNull())
		testcase_.detailInfo.expectedResult.expectContent = expectedResultNode["expectContent"].asString();
	if(!expectedResultNode["expectContentType"].isNull())
		testcase_.detailInfo.expectedResult.expectContentType = expectedResultNode["expectContentType"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

CreateTestCaseResult::Testcase CreateTestCaseResult::getTestcase()const
{
	return testcase_;
}

std::string CreateTestCaseResult::getRequestId()const
{
	return requestId_;
}

std::string CreateTestCaseResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string CreateTestCaseResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateTestCaseResult::getSuccess()const
{
	return success_;
}

