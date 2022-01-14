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

#include <alibabacloud/resourcemanager/model/ListAncestorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListAncestorsResult::ListAncestorsResult() :
	ServiceResult()
{}

ListAncestorsResult::ListAncestorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAncestorsResult::~ListAncestorsResult()
{}

void ListAncestorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFoldersNode = value["Folders"]["Folder"];
	for (auto valueFoldersFolder : allFoldersNode)
	{
		Folder foldersObject;
		if(!valueFoldersFolder["FolderId"].isNull())
			foldersObject.folderId = valueFoldersFolder["FolderId"].asString();
		if(!valueFoldersFolder["CreateTime"].isNull())
			foldersObject.createTime = valueFoldersFolder["CreateTime"].asString();
		if(!valueFoldersFolder["FolderName"].isNull())
			foldersObject.folderName = valueFoldersFolder["FolderName"].asString();
		folders_.push_back(foldersObject);
	}

}

std::vector<ListAncestorsResult::Folder> ListAncestorsResult::getFolders()const
{
	return folders_;
}

