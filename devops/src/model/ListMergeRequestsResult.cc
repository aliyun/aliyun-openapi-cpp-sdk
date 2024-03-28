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

#include <alibabacloud/devops/model/ListMergeRequestsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListMergeRequestsResult::ListMergeRequestsResult() :
	ServiceResult()
{}

ListMergeRequestsResult::ListMergeRequestsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestsResult::~ListMergeRequestsResult()
{}

void ListMergeRequestsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["newMergeRequestIdentifier"].isNull())
			resultObject.newMergeRequestIdentifier = valueresultresultItem["newMergeRequestIdentifier"].asString() == "true";
		if(!valueresultresultItem["projectId"].isNull())
			resultObject.projectId = std::stol(valueresultresultItem["projectId"].asString());
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["iid"].isNull())
			resultObject.iid = std::stol(valueresultresultItem["iid"].asString());
		if(!valueresultresultItem["mrBizId"].isNull())
			resultObject.mrBizId = valueresultresultItem["mrBizId"].asString();
		if(!valueresultresultItem["localId"].isNull())
			resultObject.localId = std::stol(valueresultresultItem["localId"].asString());
		if(!valueresultresultItem["title"].isNull())
			resultObject.title = valueresultresultItem["title"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		if(!valueresultresultItem["state"].isNull())
			resultObject.state = valueresultresultItem["state"].asString();
		if(!valueresultresultItem["newVersionState"].isNull())
			resultObject.newVersionState = valueresultresultItem["newVersionState"].asString();
		if(!valueresultresultItem["createdAt"].isNull())
			resultObject.createdAt = valueresultresultItem["createdAt"].asString();
		if(!valueresultresultItem["updatedAt"].isNull())
			resultObject.updatedAt = valueresultresultItem["updatedAt"].asString();
		if(!valueresultresultItem["sourceBranch"].isNull())
			resultObject.sourceBranch = valueresultresultItem["sourceBranch"].asString();
		if(!valueresultresultItem["targetBranch"].isNull())
			resultObject.targetBranch = valueresultresultItem["targetBranch"].asString();
		if(!valueresultresultItem["sourceProjectId"].isNull())
			resultObject.sourceProjectId = std::stol(valueresultresultItem["sourceProjectId"].asString());
		if(!valueresultresultItem["targetProjectId"].isNull())
			resultObject.targetProjectId = std::stol(valueresultresultItem["targetProjectId"].asString());
		if(!valueresultresultItem["workInProgress"].isNull())
			resultObject.workInProgress = valueresultresultItem["workInProgress"].asString() == "true";
		if(!valueresultresultItem["detailUrl"].isNull())
			resultObject.detailUrl = valueresultresultItem["detailUrl"].asString();
		if(!valueresultresultItem["webUrl"].isNull())
			resultObject.webUrl = valueresultresultItem["webUrl"].asString();
		if(!valueresultresultItem["sshUrl"].isNull())
			resultObject.sshUrl = valueresultresultItem["sshUrl"].asString();
		if(!valueresultresultItem["creationMethod"].isNull())
			resultObject.creationMethod = valueresultresultItem["creationMethod"].asString();
		if(!valueresultresultItem["sourceType"].isNull())
			resultObject.sourceType = valueresultresultItem["sourceType"].asString();
		if(!valueresultresultItem["targetType"].isNull())
			resultObject.targetType = valueresultresultItem["targetType"].asString();
		if(!valueresultresultItem["nameWithNamespace"].isNull())
			resultObject.nameWithNamespace = valueresultresultItem["nameWithNamespace"].asString();
		if(!valueresultresultItem["supportMergeFFOnly"].isNull())
			resultObject.supportMergeFFOnly = valueresultresultItem["supportMergeFFOnly"].asString() == "true";
		if(!valueresultresultItem["mergedRevision"].isNull())
			resultObject.mergedRevision = valueresultresultItem["mergedRevision"].asString();
		auto allreviewersNode = valueresultresultItem["reviewers"]["assignees"];
		for (auto valueresultresultItemreviewersassignees : allreviewersNode)
		{
			ResultItem::Assignees reviewersObject;
			if(!valueresultresultItemreviewersassignees["id"].isNull())
				reviewersObject.id = std::stol(valueresultresultItemreviewersassignees["id"].asString());
			if(!valueresultresultItemreviewersassignees["name"].isNull())
				reviewersObject.name = valueresultresultItemreviewersassignees["name"].asString();
			if(!valueresultresultItemreviewersassignees["username"].isNull())
				reviewersObject.username = valueresultresultItemreviewersassignees["username"].asString();
			if(!valueresultresultItemreviewersassignees["state"].isNull())
				reviewersObject.state = valueresultresultItemreviewersassignees["state"].asString();
			if(!valueresultresultItemreviewersassignees["avatarUrl"].isNull())
				reviewersObject.avatarUrl = valueresultresultItemreviewersassignees["avatarUrl"].asString();
			if(!valueresultresultItemreviewersassignees["email"].isNull())
				reviewersObject.email = valueresultresultItemreviewersassignees["email"].asString();
			if(!valueresultresultItemreviewersassignees["status"].isNull())
				reviewersObject.status = valueresultresultItemreviewersassignees["status"].asString();
			if(!valueresultresultItemreviewersassignees["reviewTime"].isNull())
				reviewersObject.reviewTime = valueresultresultItemreviewersassignees["reviewTime"].asString();
			if(!valueresultresultItemreviewersassignees["hasReviewed"].isNull())
				reviewersObject.hasReviewed = valueresultresultItemreviewersassignees["hasReviewed"].asString() == "true";
			if(!valueresultresultItemreviewersassignees["hasCommented"].isNull())
				reviewersObject.hasCommented = valueresultresultItemreviewersassignees["hasCommented"].asString() == "true";
			if(!valueresultresultItemreviewersassignees["reviewOpinionStatus"].isNull())
				reviewersObject.reviewOpinionStatus = valueresultresultItemreviewersassignees["reviewOpinionStatus"].asString();
			resultObject.reviewers.push_back(reviewersObject);
		}
		auto allsubscribersNode = valueresultresultItem["subscribers"]["subscribersItem"];
		for (auto valueresultresultItemsubscriberssubscribersItem : allsubscribersNode)
		{
			ResultItem::SubscribersItem subscribersObject;
			if(!valueresultresultItemsubscriberssubscribersItem["id"].isNull())
				subscribersObject.id = std::stol(valueresultresultItemsubscriberssubscribersItem["id"].asString());
			if(!valueresultresultItemsubscriberssubscribersItem["name"].isNull())
				subscribersObject.name = valueresultresultItemsubscriberssubscribersItem["name"].asString();
			if(!valueresultresultItemsubscriberssubscribersItem["username"].isNull())
				subscribersObject.username = valueresultresultItemsubscriberssubscribersItem["username"].asString();
			if(!valueresultresultItemsubscriberssubscribersItem["state"].isNull())
				subscribersObject.state = valueresultresultItemsubscriberssubscribersItem["state"].asString();
			if(!valueresultresultItemsubscriberssubscribersItem["avatarUrl"].isNull())
				subscribersObject.avatarUrl = valueresultresultItemsubscriberssubscribersItem["avatarUrl"].asString();
			if(!valueresultresultItemsubscriberssubscribersItem["email"].isNull())
				subscribersObject.email = valueresultresultItemsubscriberssubscribersItem["email"].asString();
			resultObject.subscribers.push_back(subscribersObject);
		}
		auto alllabelsNode = valueresultresultItem["labels"]["node_labels"];
		for (auto valueresultresultItemlabelsnode_labels : alllabelsNode)
		{
			ResultItem::Node_labels labelsObject;
			if(!valueresultresultItemlabelsnode_labels["id"].isNull())
				labelsObject.id = valueresultresultItemlabelsnode_labels["id"].asString();
			if(!valueresultresultItemlabelsnode_labels["name"].isNull())
				labelsObject.name = valueresultresultItemlabelsnode_labels["name"].asString();
			if(!valueresultresultItemlabelsnode_labels["color"].isNull())
				labelsObject.color = valueresultresultItemlabelsnode_labels["color"].asString();
			if(!valueresultresultItemlabelsnode_labels["description"].isNull())
				labelsObject.description = valueresultresultItemlabelsnode_labels["description"].asString();
			resultObject.labels.push_back(labelsObject);
		}
		auto authorNode = value["author"];
		if(!authorNode["id"].isNull())
			resultObject.author.id = std::stol(authorNode["id"].asString());
		if(!authorNode["name"].isNull())
			resultObject.author.name = authorNode["name"].asString();
		if(!authorNode["username"].isNull())
			resultObject.author.username = authorNode["username"].asString();
		if(!authorNode["state"].isNull())
			resultObject.author.state = authorNode["state"].asString();
		if(!authorNode["avatarUrl"].isNull())
			resultObject.author.avatarUrl = authorNode["avatarUrl"].asString();
		if(!authorNode["email"].isNull())
			resultObject.author.email = authorNode["email"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListMergeRequestsResult::ResultItem> ListMergeRequestsResult::getresult()const
{
	return result_;
}

std::string ListMergeRequestsResult::getRequestId()const
{
	return requestId_;
}

long ListMergeRequestsResult::getTotal()const
{
	return total_;
}

std::string ListMergeRequestsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestsResult::getSuccess()const
{
	return success_;
}

