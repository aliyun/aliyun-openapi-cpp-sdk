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

#include <alibabacloud/devops/model/GetFileLastCommitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetFileLastCommitResult::GetFileLastCommitResult() :
	ServiceResult()
{}

GetFileLastCommitResult::GetFileLastCommitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileLastCommitResult::~GetFileLastCommitResult()
{}

void GetFileLastCommitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["shortId"].isNull())
		result_.shortId = resultNode["shortId"].asString();
	if(!resultNode["authorName"].isNull())
		result_.authorName = resultNode["authorName"].asString();
	if(!resultNode["authorDate"].isNull())
		result_.authorDate = resultNode["authorDate"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["message"].isNull())
		result_.message = resultNode["message"].asString();
	if(!resultNode["title"].isNull())
		result_.title = resultNode["title"].asString();
	if(!resultNode["committerName"].isNull())
		result_.committerName = resultNode["committerName"].asString();
	if(!resultNode["authorEmail"].isNull())
		result_.authorEmail = resultNode["authorEmail"].asString();
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["committerEmail"].isNull())
		result_.committerEmail = resultNode["committerEmail"].asString();
	if(!resultNode["committedDate"].isNull())
		result_.committedDate = resultNode["committedDate"].asString();
	auto signatureNode = resultNode["signature"];
	if(!signatureNode["verificationStatus"].isNull())
		result_.signature.verificationStatus = signatureNode["verificationStatus"].asString();
	if(!signatureNode["gpgKeyId"].isNull())
		result_.signature.gpgKeyId = signatureNode["gpgKeyId"].asString();
		auto allParentIds = resultNode["parentIds"]["parent_ids"];
		for (auto value : allParentIds)
			result_.parentIds.push_back(value.asString());
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string GetFileLastCommitResult::getRequestId()const
{
	return requestId_;
}

std::string GetFileLastCommitResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFileLastCommitResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetFileLastCommitResult::getSuccess()const
{
	return success_;
}

GetFileLastCommitResult::Result GetFileLastCommitResult::getResult()const
{
	return result_;
}

