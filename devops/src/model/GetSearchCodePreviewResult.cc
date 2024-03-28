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

#include <alibabacloud/devops/model/GetSearchCodePreviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetSearchCodePreviewResult::GetSearchCodePreviewResult() :
	ServiceResult()
{}

GetSearchCodePreviewResult::GetSearchCodePreviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSearchCodePreviewResult::~GetSearchCodePreviewResult()
{}

void GetSearchCodePreviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["docId"].isNull())
		result_.docId = resultNode["docId"].asString();
	auto highlightTextMapNode = resultNode["highlightTextMap"];
	if(!highlightTextMapNode["organizationId"].isNull())
		result_.highlightTextMap.organizationId = highlightTextMapNode["organizationId"].asString();
	if(!highlightTextMapNode["fileName"].isNull())
		result_.highlightTextMap.fileName = highlightTextMapNode["fileName"].asString();
	if(!highlightTextMapNode["clob"].isNull())
		result_.highlightTextMap.clob = highlightTextMapNode["clob"].asString();
	auto sourceNode = resultNode["source"];
	if(!sourceNode["repoPath"].isNull())
		result_.source.repoPath = sourceNode["repoPath"].asString();
	if(!sourceNode["fileName"].isNull())
		result_.source.fileName = sourceNode["fileName"].asString();
	if(!sourceNode["filePath"].isNull())
		result_.source.filePath = sourceNode["filePath"].asString();
	if(!sourceNode["language"].isNull())
		result_.source.language = sourceNode["language"].asString();
	if(!sourceNode["checkinDate"].isNull())
		result_.source.checkinDate = sourceNode["checkinDate"].asString();
	if(!sourceNode["branch"].isNull())
		result_.source.branch = sourceNode["branch"].asString();
	if(!sourceNode["organizationId"].isNull())
		result_.source.organizationId = sourceNode["organizationId"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetSearchCodePreviewResult::getRequestId()const
{
	return requestId_;
}

std::string GetSearchCodePreviewResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSearchCodePreviewResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetSearchCodePreviewResult::getSuccess()const
{
	return success_;
}

GetSearchCodePreviewResult::Result GetSearchCodePreviewResult::getResult()const
{
	return result_;
}

