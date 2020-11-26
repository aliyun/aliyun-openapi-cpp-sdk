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

#include <alibabacloud/codeup/model/ListRepositoryTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListRepositoryTagsResult::ListRepositoryTagsResult() :
	ServiceResult()
{}

ListRepositoryTagsResult::ListRepositoryTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryTagsResult::~ListRepositoryTagsResult()
{}

void ListRepositoryTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = valueResultResultItem["Id"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["Message"].isNull())
			resultObject.message = valueResultResultItem["Message"].asString();
		auto commitNode = value["Commit"];
		if(!commitNode["Id"].isNull())
			resultObject.commit.id = commitNode["Id"].asString();
		if(!commitNode["ShortId"].isNull())
			resultObject.commit.shortId = commitNode["ShortId"].asString();
		if(!commitNode["Title"].isNull())
			resultObject.commit.title = commitNode["Title"].asString();
		if(!commitNode["AuthorName"].isNull())
			resultObject.commit.authorName = commitNode["AuthorName"].asString();
		if(!commitNode["AuthorEmail"].isNull())
			resultObject.commit.authorEmail = commitNode["AuthorEmail"].asString();
		if(!commitNode["CreatedAt"].isNull())
			resultObject.commit.createdAt = commitNode["CreatedAt"].asString();
		if(!commitNode["Message"].isNull())
			resultObject.commit.message = commitNode["Message"].asString();
		if(!commitNode["AuthoredDate"].isNull())
			resultObject.commit.authoredDate = commitNode["AuthoredDate"].asString();
		if(!commitNode["CommittedDate"].isNull())
			resultObject.commit.committedDate = commitNode["CommittedDate"].asString();
		if(!commitNode["CommitterEmail"].isNull())
			resultObject.commit.committerEmail = commitNode["CommitterEmail"].asString();
		if(!commitNode["CommitterName"].isNull())
			resultObject.commit.committerName = commitNode["CommitterName"].asString();
		auto signature1Node = commitNode["Signature"];
		if(!signature1Node["GpgKeyId"].isNull())
			resultObject.commit.signature1.gpgKeyId = signature1Node["GpgKeyId"].asString();
		if(!signature1Node["VerificationStatus"].isNull())
			resultObject.commit.signature1.verificationStatus = signature1Node["VerificationStatus"].asString();
			auto allParentIds = commitNode["ParentIds"]["ParentIds"];
			for (auto value : allParentIds)
				resultObject.commit.parentIds.push_back(value.asString());
		auto signatureNode = value["Signature"];
		if(!signatureNode["GpgKeyId"].isNull())
			resultObject.signature.gpgKeyId = signatureNode["GpgKeyId"].asString();
		if(!signatureNode["VerificationStatus"].isNull())
			resultObject.signature.verificationStatus = signatureNode["VerificationStatus"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListRepositoryTagsResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryTagsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryTagsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryTagsResult::getSuccess()const
{
	return success_;
}

std::vector<ListRepositoryTagsResult::ResultItem> ListRepositoryTagsResult::getResult()const
{
	return result_;
}

