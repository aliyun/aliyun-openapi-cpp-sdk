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

#include <alibabacloud/devops/model/GetMergeRequestChangeTreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetMergeRequestChangeTreeResult::GetMergeRequestChangeTreeResult() :
	ServiceResult()
{}

GetMergeRequestChangeTreeResult::GetMergeRequestChangeTreeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMergeRequestChangeTreeResult::~GetMergeRequestChangeTreeResult()
{}

void GetMergeRequestChangeTreeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["changedFilesCount"].isNull())
		result_.changedFilesCount = std::stol(resultNode["changedFilesCount"].asString());
	if(!resultNode["totalAddLines"].isNull())
		result_.totalAddLines = std::stol(resultNode["totalAddLines"].asString());
	if(!resultNode["totalDelLines"].isNull())
		result_.totalDelLines = std::stol(resultNode["totalDelLines"].asString());
	auto allchangedFilesInfosNode = resultNode["changedFilesInfos"]["changesetDTOS"];
	for (auto resultNodechangedFilesInfoschangesetDTOS : allchangedFilesInfosNode)
	{
		Result::ChangesetDTOS changesetDTOSObject;
		if(!resultNodechangedFilesInfoschangesetDTOS["newPath"].isNull())
			changesetDTOSObject.newPath = resultNodechangedFilesInfoschangesetDTOS["newPath"].asString();
		if(!resultNodechangedFilesInfoschangesetDTOS["oldPath"].isNull())
			changesetDTOSObject.oldPath = resultNodechangedFilesInfoschangesetDTOS["oldPath"].asString();
		if(!resultNodechangedFilesInfoschangesetDTOS["newFile"].isNull())
			changesetDTOSObject.newFile = resultNodechangedFilesInfoschangesetDTOS["newFile"].asString() == "true";
		if(!resultNodechangedFilesInfoschangesetDTOS["renamedFile"].isNull())
			changesetDTOSObject.renamedFile = resultNodechangedFilesInfoschangesetDTOS["renamedFile"].asString() == "true";
		if(!resultNodechangedFilesInfoschangesetDTOS["deletedFile"].isNull())
			changesetDTOSObject.deletedFile = resultNodechangedFilesInfoschangesetDTOS["deletedFile"].asString() == "true";
		if(!resultNodechangedFilesInfoschangesetDTOS["binaryFile"].isNull())
			changesetDTOSObject.binaryFile = resultNodechangedFilesInfoschangesetDTOS["binaryFile"].asString() == "true";
		if(!resultNodechangedFilesInfoschangesetDTOS["addLines"].isNull())
			changesetDTOSObject.addLines = std::stol(resultNodechangedFilesInfoschangesetDTOS["addLines"].asString());
		if(!resultNodechangedFilesInfoschangesetDTOS["delLines"].isNull())
			changesetDTOSObject.delLines = std::stol(resultNodechangedFilesInfoschangesetDTOS["delLines"].asString());
		result_.changedFilesInfos.push_back(changesetDTOSObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string GetMergeRequestChangeTreeResult::getRequestId()const
{
	return requestId_;
}

std::string GetMergeRequestChangeTreeResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMergeRequestChangeTreeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMergeRequestChangeTreeResult::getSuccess()const
{
	return success_;
}

GetMergeRequestChangeTreeResult::Result GetMergeRequestChangeTreeResult::getResult()const
{
	return result_;
}

