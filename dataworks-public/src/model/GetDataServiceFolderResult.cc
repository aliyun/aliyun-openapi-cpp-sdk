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

#include <alibabacloud/dataworks-public/model/GetDataServiceFolderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDataServiceFolderResult::GetDataServiceFolderResult() :
	ServiceResult()
{}

GetDataServiceFolderResult::GetDataServiceFolderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataServiceFolderResult::~GetDataServiceFolderResult()
{}

void GetDataServiceFolderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto folderNode = value["Folder"];
	if(!folderNode["ParentId"].isNull())
		folder_.parentId = std::stol(folderNode["ParentId"].asString());
	if(!folderNode["ModifiedTime"].isNull())
		folder_.modifiedTime = folderNode["ModifiedTime"].asString();
	if(!folderNode["GroupId"].isNull())
		folder_.groupId = folderNode["GroupId"].asString();
	if(!folderNode["FolderId"].isNull())
		folder_.folderId = std::stol(folderNode["FolderId"].asString());
	if(!folderNode["ProjectId"].isNull())
		folder_.projectId = std::stol(folderNode["ProjectId"].asString());
	if(!folderNode["FolderName"].isNull())
		folder_.folderName = folderNode["FolderName"].asString();
	if(!folderNode["CreatedTime"].isNull())
		folder_.createdTime = folderNode["CreatedTime"].asString();
	if(!folderNode["TenantId"].isNull())
		folder_.tenantId = std::stol(folderNode["TenantId"].asString());

}

GetDataServiceFolderResult::Folder GetDataServiceFolderResult::getFolder()const
{
	return folder_;
}

