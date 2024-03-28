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

#include <alibabacloud/devops/model/GetTestResultListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetTestResultListResult::GetTestResultListResult() :
	ServiceResult()
{}

GetTestResultListResult::GetTestResultListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTestResultListResult::~GetTestResultListResult()
{}

void GetTestResultListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alltestResultNode = value["testResult"]["TestcaseTestResultSummary"];
	for (auto valuetestResultTestcaseTestResultSummary : alltestResultNode)
	{
		TestcaseTestResultSummary testResultObject;
		if(!valuetestResultTestcaseTestResultSummary["testResultIdentifier"].isNull())
			testResultObject.testResultIdentifier = valuetestResultTestcaseTestResultSummary["testResultIdentifier"].asString();
		if(!valuetestResultTestcaseTestResultSummary["testResultStatus"].isNull())
			testResultObject.testResultStatus = valuetestResultTestcaseTestResultSummary["testResultStatus"].asString();
		if(!valuetestResultTestcaseTestResultSummary["testResultGmtCreate"].isNull())
			testResultObject.testResultGmtCreate = std::stol(valuetestResultTestcaseTestResultSummary["testResultGmtCreate"].asString());
		if(!valuetestResultTestcaseTestResultSummary["testcaseIdentifier"].isNull())
			testResultObject.testcaseIdentifier = valuetestResultTestcaseTestResultSummary["testcaseIdentifier"].asString();
		if(!valuetestResultTestcaseTestResultSummary["bugCount"].isNull())
			testResultObject.bugCount = std::stol(valuetestResultTestcaseTestResultSummary["bugCount"].asString());
		if(!valuetestResultTestcaseTestResultSummary["subject"].isNull())
			testResultObject.subject = valuetestResultTestcaseTestResultSummary["subject"].asString();
		if(!valuetestResultTestcaseTestResultSummary["spaceIdentifier"].isNull())
			testResultObject.spaceIdentifier = valuetestResultTestcaseTestResultSummary["spaceIdentifier"].asString();
		if(!valuetestResultTestcaseTestResultSummary["categoryIdentifier"].isNull())
			testResultObject.categoryIdentifier = valuetestResultTestcaseTestResultSummary["categoryIdentifier"].asString();
		if(!valuetestResultTestcaseTestResultSummary["gmtCreate"].isNull())
			testResultObject.gmtCreate = std::stol(valuetestResultTestcaseTestResultSummary["gmtCreate"].asString());
		auto allcustomFieldsNode = valuetestResultTestcaseTestResultSummary["customFields"]["FieldValueVO"];
		for (auto valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO : allcustomFieldsNode)
		{
			TestcaseTestResultSummary::FieldValueVO customFieldsObject;
			if(!valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldIdentifier"].isNull())
				customFieldsObject.fieldIdentifier = valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldIdentifier"].asString();
			if(!valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["value"].isNull())
				customFieldsObject.value = valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["value"].asString();
			if(!valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldFormat"].isNull())
				customFieldsObject.fieldFormat = valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldFormat"].asString();
			if(!valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldClassName"].isNull())
				customFieldsObject.fieldClassName = valuetestResultTestcaseTestResultSummarycustomFieldsFieldValueVO["fieldClassName"].asString();
			testResultObject.customFields.push_back(customFieldsObject);
		}
		auto testResultExecutorNode = value["testResultExecutor"];
		if(!testResultExecutorNode["executorIdentifier"].isNull())
			testResultObject.testResultExecutor.executorIdentifier = testResultExecutorNode["executorIdentifier"].asString();
		if(!testResultExecutorNode["name"].isNull())
			testResultObject.testResultExecutor.name = testResultExecutorNode["name"].asString();
		auto assignedToNode = value["assignedTo"];
		if(!assignedToNode["assignedToIdenttifier"].isNull())
			testResultObject.assignedTo.assignedToIdenttifier = assignedToNode["assignedToIdenttifier"].asString();
		if(!assignedToNode["name"].isNull())
			testResultObject.assignedTo.name = assignedToNode["name"].asString();
		testResult_.push_back(testResultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetTestResultListResult::getRequestId()const
{
	return requestId_;
}

std::string GetTestResultListResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetTestResultListResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<GetTestResultListResult::TestcaseTestResultSummary> GetTestResultListResult::gettestResult()const
{
	return testResult_;
}

bool GetTestResultListResult::getSuccess()const
{
	return success_;
}

