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

#include <alibabacloud/nas/model/GetDirectoryOrFilePropertiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

GetDirectoryOrFilePropertiesResult::GetDirectoryOrFilePropertiesResult() :
	ServiceResult()
{}

GetDirectoryOrFilePropertiesResult::GetDirectoryOrFilePropertiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDirectoryOrFilePropertiesResult::~GetDirectoryOrFilePropertiesResult()
{}

void GetDirectoryOrFilePropertiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto entryNode = value["Entry"];
	if(!entryNode["Type"].isNull())
		entry_.type = entryNode["Type"].asString();
	if(!entryNode["HasInfrequentAccessFile"].isNull())
		entry_.hasInfrequentAccessFile = entryNode["HasInfrequentAccessFile"].asString() == "true";
	if(!entryNode["MTime"].isNull())
		entry_.mTime = entryNode["MTime"].asString();
	if(!entryNode["ATime"].isNull())
		entry_.aTime = entryNode["ATime"].asString();
	if(!entryNode["Size"].isNull())
		entry_.size = std::stol(entryNode["Size"].asString());
	if(!entryNode["CTime"].isNull())
		entry_.cTime = entryNode["CTime"].asString();
	if(!entryNode["StorageType"].isNull())
		entry_.storageType = entryNode["StorageType"].asString();
	if(!entryNode["Name"].isNull())
		entry_.name = entryNode["Name"].asString();
	if(!entryNode["RetrieveTime"].isNull())
		entry_.retrieveTime = entryNode["RetrieveTime"].asString();
	if(!entryNode["Inode"].isNull())
		entry_.inode = entryNode["Inode"].asString();
	if(!entryNode["HasArchiveFile"].isNull())
		entry_.hasArchiveFile = entryNode["HasArchiveFile"].asString() == "true";

}

GetDirectoryOrFilePropertiesResult::Entry GetDirectoryOrFilePropertiesResult::getEntry()const
{
	return entry_;
}

