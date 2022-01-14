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

#include <alibabacloud/resourcemanager/model/GetFolderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetFolderResult::GetFolderResult() :
	ServiceResult()
{}

GetFolderResult::GetFolderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFolderResult::~GetFolderResult()
{}

void GetFolderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto folderNode = value["Folder"];
	if(!folderNode["FolderId"].isNull())
		folder_.folderId = folderNode["FolderId"].asString();
	if(!folderNode["CreateTime"].isNull())
		folder_.createTime = folderNode["CreateTime"].asString();
	if(!folderNode["ParentFolderId"].isNull())
		folder_.parentFolderId = folderNode["ParentFolderId"].asString();
	if(!folderNode["FolderName"].isNull())
		folder_.folderName = folderNode["FolderName"].asString();
	if(!folderNode["ResourceDirectoryPath"].isNull())
		folder_.resourceDirectoryPath = folderNode["ResourceDirectoryPath"].asString();

}

GetFolderResult::Folder GetFolderResult::getFolder()const
{
	return folder_;
}

