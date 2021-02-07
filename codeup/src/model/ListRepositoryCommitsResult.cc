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

#include <alibabacloud/codeup/model/ListRepositoryCommitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListRepositoryCommitsResult::ListRepositoryCommitsResult() :
	ServiceResult()
{}

ListRepositoryCommitsResult::ListRepositoryCommitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryCommitsResult::~ListRepositoryCommitsResult()
{}

void ListRepositoryCommitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AuthorDate"].isNull())
			resultObject.authorDate = valueResultResultItem["AuthorDate"].asString();
		if(!valueResultResultItem["AuthorEmail"].isNull())
			resultObject.authorEmail = valueResultResultItem["AuthorEmail"].asString();
		if(!valueResultResultItem["AuthorName"].isNull())
			resultObject.authorName = valueResultResultItem["AuthorName"].asString();
		if(!valueResultResultItem["CommittedDate"].isNull())
			resultObject.committedDate = valueResultResultItem["CommittedDate"].asString();
		if(!valueResultResultItem["CommitterEmail"].isNull())
			resultObject.committerEmail = valueResultResultItem["CommitterEmail"].asString();
		if(!valueResultResultItem["CommitterName"].isNull())
			resultObject.committerName = valueResultResultItem["CommitterName"].asString();
		if(!valueResultResultItem["CreatedAt"].isNull())
			resultObject.createdAt = valueResultResultItem["CreatedAt"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = valueResultResultItem["Id"].asString();
		if(!valueResultResultItem["Message"].isNull())
			resultObject.message = valueResultResultItem["Message"].asString();
		if(!valueResultResultItem["ShortId"].isNull())
			resultObject.shortId = valueResultResultItem["ShortId"].asString();
		if(!valueResultResultItem["Title"].isNull())
			resultObject.title = valueResultResultItem["Title"].asString();
		auto signatureNode = value["Signature"];
		if(!signatureNode["GpgKeyId"].isNull())
			resultObject.signature.gpgKeyId = signatureNode["GpgKeyId"].asString();
		if(!signatureNode["VerificationStatus"].isNull())
			resultObject.signature.verificationStatus = signatureNode["VerificationStatus"].asString();
		auto allParentIds = value["ParentIds"]["ParentIds"];
		for (auto value : allParentIds)
			resultObject.parentIds.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListRepositoryCommitsResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryCommitsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryCommitsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryCommitsResult::getSuccess()const
{
	return success_;
}

std::vector<ListRepositoryCommitsResult::ResultItem> ListRepositoryCommitsResult::getResult()const
{
	return result_;
}

