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

#include <alibabacloud/devops/model/CreateMergeRequestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateMergeRequestResult::CreateMergeRequestResult() :
	ServiceResult()
{}

CreateMergeRequestResult::CreateMergeRequestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMergeRequestResult::~CreateMergeRequestResult()
{}

void CreateMergeRequestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["mrBizId"].isNull())
		result_.mrBizId = resultNode["mrBizId"].asString();
	if(!resultNode["projectId"].isNull())
		result_.projectId = std::stol(resultNode["projectId"].asString());
	if(!resultNode["localId"].isNull())
		result_.localId = std::stol(resultNode["localId"].asString());
	if(!resultNode["createTime"].isNull())
		result_.createTime = resultNode["createTime"].asString();
	if(!resultNode["updateTime"].isNull())
		result_.updateTime = resultNode["updateTime"].asString();
	if(!resultNode["mrType"].isNull())
		result_.mrType = resultNode["mrType"].asString();
	if(!resultNode["sourceProjectId"].isNull())
		result_.sourceProjectId = std::stol(resultNode["sourceProjectId"].asString());
	if(!resultNode["sourceBranch"].isNull())
		result_.sourceBranch = resultNode["sourceBranch"].asString();
	if(!resultNode["targetProjectId"].isNull())
		result_.targetProjectId = std::stol(resultNode["targetProjectId"].asString());
	if(!resultNode["targetBranch"].isNull())
		result_.targetBranch = resultNode["targetBranch"].asString();
	if(!resultNode["title"].isNull())
		result_.title = resultNode["title"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["createFrom"].isNull())
		result_.createFrom = resultNode["createFrom"].asString();
	if(!resultNode["ahead"].isNull())
		result_.ahead = std::stoi(resultNode["ahead"].asString());
	if(!resultNode["behind"].isNull())
		result_.behind = std::stoi(resultNode["behind"].asString());
	if(!resultNode["detailUrl"].isNull())
		result_.detailUrl = resultNode["detailUrl"].asString();
	if(!resultNode["webUrl"].isNull())
		result_.webUrl = resultNode["webUrl"].asString();
	if(!resultNode["allRequirementsPass"].isNull())
		result_.allRequirementsPass = resultNode["allRequirementsPass"].asString() == "true";
	if(!resultNode["supportMergeFastForwardOnly"].isNull())
		result_.supportMergeFastForwardOnly = resultNode["supportMergeFastForwardOnly"].asString() == "true";
	auto allreviewersNode = resultNode["reviewers"]["reviewersItem"];
	for (auto resultNodereviewersreviewersItem : allreviewersNode)
	{
		Result::ReviewersItem reviewersItemObject;
		if(!resultNodereviewersreviewersItem["id"].isNull())
			reviewersItemObject.id = std::stol(resultNodereviewersreviewersItem["id"].asString());
		if(!resultNodereviewersreviewersItem["name"].isNull())
			reviewersItemObject.name = resultNodereviewersreviewersItem["name"].asString();
		if(!resultNodereviewersreviewersItem["username"].isNull())
			reviewersItemObject.username = resultNodereviewersreviewersItem["username"].asString();
		if(!resultNodereviewersreviewersItem["state"].isNull())
			reviewersItemObject.state = resultNodereviewersreviewersItem["state"].asString();
		if(!resultNodereviewersreviewersItem["avatarUrl"].isNull())
			reviewersItemObject.avatarUrl = resultNodereviewersreviewersItem["avatarUrl"].asString();
		if(!resultNodereviewersreviewersItem["email"].isNull())
			reviewersItemObject.email = resultNodereviewersreviewersItem["email"].asString();
		if(!resultNodereviewersreviewersItem["hasReviewed"].isNull())
			reviewersItemObject.hasReviewed = resultNodereviewersreviewersItem["hasReviewed"].asString() == "true";
		if(!resultNodereviewersreviewersItem["reviewOpinionStatus"].isNull())
			reviewersItemObject.reviewOpinionStatus = resultNodereviewersreviewersItem["reviewOpinionStatus"].asString();
		result_.reviewers.push_back(reviewersItemObject);
	}
	auto allsubscribersNode = resultNode["subscribers"]["subscribersItem"];
	for (auto resultNodesubscriberssubscribersItem : allsubscribersNode)
	{
		Result::SubscribersItem subscribersItemObject;
		if(!resultNodesubscriberssubscribersItem["id"].isNull())
			subscribersItemObject.id = std::stol(resultNodesubscriberssubscribersItem["id"].asString());
		if(!resultNodesubscriberssubscribersItem["name"].isNull())
			subscribersItemObject.name = resultNodesubscriberssubscribersItem["name"].asString();
		if(!resultNodesubscriberssubscribersItem["username"].isNull())
			subscribersItemObject.username = resultNodesubscriberssubscribersItem["username"].asString();
		if(!resultNodesubscriberssubscribersItem["state"].isNull())
			subscribersItemObject.state = resultNodesubscriberssubscribersItem["state"].asString();
		if(!resultNodesubscriberssubscribersItem["avatarUrl"].isNull())
			subscribersItemObject.avatarUrl = resultNodesubscriberssubscribersItem["avatarUrl"].asString();
		if(!resultNodesubscriberssubscribersItem["email"].isNull())
			subscribersItemObject.email = resultNodesubscriberssubscribersItem["email"].asString();
		result_.subscribers.push_back(subscribersItemObject);
	}
	auto authorNode = resultNode["author"];
	if(!authorNode["id"].isNull())
		result_.author.id = std::stol(authorNode["id"].asString());
	if(!authorNode["name"].isNull())
		result_.author.name = authorNode["name"].asString();
	if(!authorNode["username"].isNull())
		result_.author.username = authorNode["username"].asString();
	if(!authorNode["state"].isNull())
		result_.author.state = authorNode["state"].asString();
	if(!authorNode["avatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["avatarUrl"].asString();
	if(!authorNode["email"].isNull())
		result_.author.email = authorNode["email"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateMergeRequestResult::getRequestId()const
{
	return requestId_;
}

std::string CreateMergeRequestResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateMergeRequestResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateMergeRequestResult::getSuccess()const
{
	return success_;
}

CreateMergeRequestResult::Result CreateMergeRequestResult::getResult()const
{
	return result_;
}

