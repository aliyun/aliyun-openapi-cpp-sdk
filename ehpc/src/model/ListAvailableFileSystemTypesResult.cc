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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFileSystemTypeList = value["FileSystemTypeList"]["FileSystemTypes"];
	for (auto value : allFileSystemTypeList)
	{
		FileSystemTypes fileSystemTypeListObject;
		if(!value["FileSystemType"].isNull())
			fileSystemTypeListObject.fileSystemType = value["FileSystemType"].asString();
		if(!value["Available"].isNull())
			fileSystemTypeListObject.available = value["Available"].asString() == "true";
		if(!value["ProtocolType"].isNull())
			fileSystemTypeListObject.protocolType = value["ProtocolType"].asString();
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

