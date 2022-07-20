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

#include <alibabacloud/imm/model/AddStoryFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

AddStoryFilesResult::AddStoryFilesResult() :
	ServiceResult()
{}

AddStoryFilesResult::AddStoryFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddStoryFilesResult::~AddStoryFilesResult()
{}

void AddStoryFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFilesNode = value["Files"]["FilesItem"];
	for (auto valueFilesFilesItem : allFilesNode)
	{
		FilesItem filesObject;
		if(!valueFilesFilesItem["URI"].isNull())
			filesObject.uRI = valueFilesFilesItem["URI"].asString();
		if(!valueFilesFilesItem["ErrorCode"].isNull())
			filesObject.errorCode = valueFilesFilesItem["ErrorCode"].asString();
		if(!valueFilesFilesItem["ErrorMessage"].isNull())
			filesObject.errorMessage = valueFilesFilesItem["ErrorMessage"].asString();
		files_.push_back(filesObject);
	}

}

std::vector<AddStoryFilesResult::FilesItem> AddStoryFilesResult::getFiles()const
{
	return files_;
}

