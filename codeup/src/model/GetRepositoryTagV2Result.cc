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

#include <alibabacloud/codeup/model/GetRepositoryTagV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetRepositoryTagV2Result::GetRepositoryTagV2Result() :
	ServiceResult()
{}

GetRepositoryTagV2Result::GetRepositoryTagV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRepositoryTagV2Result::~GetRepositoryTagV2Result()
{}

void GetRepositoryTagV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["Message"].isNull())
		result_.message = resultNode["Message"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	auto commitNode = resultNode["Commit"];
	if(!commitNode["AuthorEmail"].isNull())
		result_.commit.authorEmail = commitNode["AuthorEmail"].asString();
	if(!commitNode["AuthorName"].isNull())
		result_.commit.authorName = commitNode["AuthorName"].asString();
	if(!commitNode["AuthoredDate"].isNull())
		result_.commit.authoredDate = commitNode["AuthoredDate"].asString();
	if(!commitNode["CommittedDate"].isNull())
		result_.commit.committedDate = commitNode["CommittedDate"].asString();
	if(!commitNode["CommitterEmail"].isNull())
		result_.commit.committerEmail = commitNode["CommitterEmail"].asString();
	if(!commitNode["CommitterName"].isNull())
		result_.commit.committerName = commitNode["CommitterName"].asString();
	if(!commitNode["CreatedAt"].isNull())
		result_.commit.createdAt = commitNode["CreatedAt"].asString();
	if(!commitNode["Id"].isNull())
		result_.commit.id = commitNode["Id"].asString();
	if(!commitNode["Message"].isNull())
		result_.commit.message = commitNode["Message"].asString();
	if(!commitNode["ShortId"].isNull())
		result_.commit.shortId = commitNode["ShortId"].asString();
	if(!commitNode["Title"].isNull())
		result_.commit.title = commitNode["Title"].asString();
	auto signature1Node = commitNode["Signature"];
	if(!signature1Node["GpgKeyId"].isNull())
		result_.commit.signature1.gpgKeyId = signature1Node["GpgKeyId"].asString();
	if(!signature1Node["VerificationStatus"].isNull())
		result_.commit.signature1.verificationStatus = signature1Node["VerificationStatus"].asString();
		auto allParentIds = commitNode["ParentIds"]["ParentIds"];
		for (auto value : allParentIds)
			result_.commit.parentIds.push_back(value.asString());
	auto signatureNode = resultNode["Signature"];
	if(!signatureNode["GpgKeyId"].isNull())
		result_.signature.gpgKeyId = signatureNode["GpgKeyId"].asString();
	if(!signatureNode["VerificationStatus"].isNull())
		result_.signature.verificationStatus = signatureNode["VerificationStatus"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRepositoryTagV2Result::getErrorCode()const
{
	return errorCode_;
}

std::string GetRepositoryTagV2Result::getErrorMessage()const
{
	return errorMessage_;
}

bool GetRepositoryTagV2Result::getSuccess()const
{
	return success_;
}

GetRepositoryTagV2Result::Result GetRepositoryTagV2Result::getResult()const
{
	return result_;
}

