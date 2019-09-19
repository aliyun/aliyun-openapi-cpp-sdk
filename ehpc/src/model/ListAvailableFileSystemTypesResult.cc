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

#include <alibabacloud/ehpc/model/ListAvailableFileSystemTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListAvailableFileSystemTypesResult::ListAvailableFileSystemTypesResult() :
	ServiceResult()
{}

ListAvailableFileSystemTypesResult::ListAvailableFileSystemTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAvailableFileSystemTypesResult::~ListAvailableFileSystemTypesResult()
{}

void ListAvailableFileSystemTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemTypeListNode = value["FileSystemTypeList"]["FileSystemTypes"];
	for (auto valueFileSystemTypeListFileSystemTypes : allFileSystemTypeListNode)
	{
		FileSystemTypes fileSystemTypeListObject;
		if(!valueFileSystemTypeListFileSystemTypes["FileSystemType"].isNull())
			fileSystemTypeListObject.fileSystemType = valueFileSystemTypeListFileSystemTypes["FileSystemType"].asString();
		if(!valueFileSystemTypeListFileSystemTypes["Available"].isNull())
			fileSystemTypeListObject.available = valueFileSystemTypeListFileSystemTypes["Available"].asString() == "true";
		if(!valueFileSystemTypeListFileSystemTypes["ProtocolType"].isNull())
			fileSystemTypeListObject.protocolType = valueFileSystemTypeListFileSystemTypes["ProtocolType"].asString();
		auto allStorageTypes = value["StorageTypes"]["StorageType"];
		for (auto value : allStorageTypes)
			fileSystemTypeListObject.storageTypes.push_back(value.asString());
		fileSystemTypeList_.push_back(fileSystemTypeListObject);
	}

}

std::vector<ListAvailableFileSystemTypesResult::FileSystemTypes> ListAvailableFileSystemTypesResult::getFileSystemTypeList()const
{
	return fileSystemTypeList_;
}

