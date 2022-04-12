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

#include <alibabacloud/dms-enterprise/model/ListDAGVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDAGVersionsResult::ListDAGVersionsResult() :
	ServiceResult()
{}

ListDAGVersionsResult::ListDAGVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDAGVersionsResult::~ListDAGVersionsResult()
{}

void ListDAGVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDagVersionListNode = value["DagVersionList"]["DagVersion"];
	for (auto valueDagVersionListDagVersion : allDagVersionListNode)
	{
		DagVersion dagVersionListObject;
		if(!valueDagVersionListDagVersion["DagName"].isNull())
			dagVersionListObject.dagName = valueDagVersionListDagVersion["DagName"].asString();
		if(!valueDagVersionListDagVersion["DagOwnerId"].isNull())
			dagVersionListObject.dagOwnerId = valueDagVersionListDagVersion["DagOwnerId"].asString();
		if(!valueDagVersionListDagVersion["DagOwnerNickName"].isNull())
			dagVersionListObject.dagOwnerNickName = valueDagVersionListDagVersion["DagOwnerNickName"].asString();
		if(!valueDagVersionListDagVersion["VersionComments"].isNull())
			dagVersionListObject.versionComments = valueDagVersionListDagVersion["VersionComments"].asString();
		if(!valueDagVersionListDagVersion["VersionId"].isNull())
			dagVersionListObject.versionId = std::stol(valueDagVersionListDagVersion["VersionId"].asString());
		if(!valueDagVersionListDagVersion["LastVersionId"].isNull())
			dagVersionListObject.lastVersionId = std::stol(valueDagVersionListDagVersion["LastVersionId"].asString());
		dagVersionList_.push_back(dagVersionListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDAGVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDAGVersionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDAGVersionsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListDAGVersionsResult::DagVersion> ListDAGVersionsResult::getDagVersionList()const
{
	return dagVersionList_;
}

bool ListDAGVersionsResult::getSuccess()const
{
	return success_;
}

