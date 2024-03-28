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

#include <alibabacloud/devops/model/ListMergeRequestFilesReadsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListMergeRequestFilesReadsResult::ListMergeRequestFilesReadsResult() :
	ServiceResult()
{}

ListMergeRequestFilesReadsResult::ListMergeRequestFilesReadsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMergeRequestFilesReadsResult::~ListMergeRequestFilesReadsResult()
{}

void ListMergeRequestFilesReadsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["oldFilePath"].isNull())
			resultObject.oldFilePath = valueresultresultItem["oldFilePath"].asString();
		if(!valueresultresultItem["newFilePath"].isNull())
			resultObject.newFilePath = valueresultresultItem["newFilePath"].asString();
		if(!valueresultresultItem["newFile"].isNull())
			resultObject.newFile = valueresultresultItem["newFile"].asString() == "true";
		if(!valueresultresultItem["renamedFile"].isNull())
			resultObject.renamedFile = valueresultresultItem["renamedFile"].asString();
		if(!valueresultresultItem["deletedFile"].isNull())
			resultObject.deletedFile = valueresultresultItem["deletedFile"].asString();
		auto allreadUsersNode = valueresultresultItem["readUsers"]["read_users"];
		for (auto valueresultresultItemreadUsersread_users : allreadUsersNode)
		{
			ResultItem::Read_users readUsersObject;
			if(!valueresultresultItemreadUsersread_users["aliyunPk"].isNull())
				readUsersObject.aliyunPk = valueresultresultItemreadUsersread_users["aliyunPk"].asString();
			if(!valueresultresultItemreadUsersread_users["name"].isNull())
				readUsersObject.name = valueresultresultItemreadUsersread_users["name"].asString();
			if(!valueresultresultItemreadUsersread_users["username"].isNull())
				readUsersObject.username = valueresultresultItemreadUsersread_users["username"].asString();
			if(!valueresultresultItemreadUsersread_users["state"].isNull())
				readUsersObject.state = valueresultresultItemreadUsersread_users["state"].asString();
			if(!valueresultresultItemreadUsersread_users["avatarUrl"].isNull())
				readUsersObject.avatarUrl = valueresultresultItemreadUsersread_users["avatarUrl"].asString();
			if(!valueresultresultItemreadUsersread_users["email"].isNull())
				readUsersObject.email = valueresultresultItemreadUsersread_users["email"].asString();
			resultObject.readUsers.push_back(readUsersObject);
		}
		result_.push_back(resultObject);
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

std::vector<ListMergeRequestFilesReadsResult::ResultItem> ListMergeRequestFilesReadsResult::getresult()const
{
	return result_;
}

std::string ListMergeRequestFilesReadsResult::getRequestId()const
{
	return requestId_;
}

std::string ListMergeRequestFilesReadsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMergeRequestFilesReadsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMergeRequestFilesReadsResult::getSuccess()const
{
	return success_;
}

