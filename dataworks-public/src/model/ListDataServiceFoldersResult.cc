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

#include <alibabacloud/dataworks-public/model/ListDataServiceFoldersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceFoldersResult::ListDataServiceFoldersResult() :
	ServiceResult()
{}

ListDataServiceFoldersResult::ListDataServiceFoldersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceFoldersResult::~ListDataServiceFoldersResult()
{}

void ListDataServiceFoldersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto folderPagingResultNode = value["FolderPagingResult"];
	if(!folderPagingResultNode["PageNumber"].isNull())
		folderPagingResult_.pageNumber = std::stoi(folderPagingResultNode["PageNumber"].asString());
	if(!folderPagingResultNode["PageSize"].isNull())
		folderPagingResult_.pageSize = std::stoi(folderPagingResultNode["PageSize"].asString());
	if(!folderPagingResultNode["TotalCount"].isNull())
		folderPagingResult_.totalCount = std::stoi(folderPagingResultNode["TotalCount"].asString());
	auto allFoldersNode = folderPagingResultNode["Folders"]["Folder"];
	for (auto folderPagingResultNodeFoldersFolder : allFoldersNode)
	{
		FolderPagingResult::Folder folderObject;
		if(!folderPagingResultNodeFoldersFolder["ParentId"].isNull())
			folderObject.parentId = std::stol(folderPagingResultNodeFoldersFolder["ParentId"].asString());
		if(!folderPagingResultNodeFoldersFolder["ModifiedTime"].isNull())
			folderObject.modifiedTime = folderPagingResultNodeFoldersFolder["ModifiedTime"].asString();
		if(!folderPagingResultNodeFoldersFolder["GroupId"].isNull())
			folderObject.groupId = folderPagingResultNodeFoldersFolder["GroupId"].asString();
		if(!folderPagingResultNodeFoldersFolder["FolderId"].isNull())
			folderObject.folderId = std::stol(folderPagingResultNodeFoldersFolder["FolderId"].asString());
		if(!folderPagingResultNodeFoldersFolder["FolderName"].isNull())
			folderObject.folderName = folderPagingResultNodeFoldersFolder["FolderName"].asString();
		if(!folderPagingResultNodeFoldersFolder["ProjectId"].isNull())
			folderObject.projectId = std::stol(folderPagingResultNodeFoldersFolder["ProjectId"].asString());
		if(!folderPagingResultNodeFoldersFolder["CreatedTime"].isNull())
			folderObject.createdTime = folderPagingResultNodeFoldersFolder["CreatedTime"].asString();
		if(!folderPagingResultNodeFoldersFolder["TenantId"].isNull())
			folderObject.tenantId = std::stol(folderPagingResultNodeFoldersFolder["TenantId"].asString());
		folderPagingResult_.folders.push_back(folderObject);
	}

}

ListDataServiceFoldersResult::FolderPagingResult ListDataServiceFoldersResult::getFolderPagingResult()const
{
	return folderPagingResult_;
}

