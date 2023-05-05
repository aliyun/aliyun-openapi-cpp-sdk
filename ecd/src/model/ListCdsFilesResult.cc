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

#include <alibabacloud/ecd/model/ListCdsFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ListCdsFilesResult::ListCdsFilesResult() :
	ServiceResult()
{}

ListCdsFilesResult::ListCdsFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCdsFilesResult::~ListCdsFilesResult()
{}

void ListCdsFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileModelsNode = value["FileModels"]["fileModel"];
	for (auto valueFileModelsfileModel : allFileModelsNode)
	{
		FileModel fileModelsObject;
		if(!valueFileModelsfileModel["Status"].isNull())
			fileModelsObject.status = valueFileModelsfileModel["Status"].asString();
		if(!valueFileModelsfileModel["ContentType"].isNull())
			fileModelsObject.contentType = valueFileModelsfileModel["ContentType"].asString();
		if(!valueFileModelsfileModel["FileType"].isNull())
			fileModelsObject.fileType = valueFileModelsfileModel["FileType"].asString();
		if(!valueFileModelsfileModel["StorageType"].isNull())
			fileModelsObject.storageType = valueFileModelsfileModel["StorageType"].asString();
		if(!valueFileModelsfileModel["FileExtension"].isNull())
			fileModelsObject.fileExtension = valueFileModelsfileModel["FileExtension"].asString();
		if(!valueFileModelsfileModel["DomainId"].isNull())
			fileModelsObject.domainId = valueFileModelsfileModel["DomainId"].asString();
		if(!valueFileModelsfileModel["FileId"].isNull())
			fileModelsObject.fileId = valueFileModelsfileModel["FileId"].asString();
		if(!valueFileModelsfileModel["Creator"].isNull())
			fileModelsObject.creator = valueFileModelsfileModel["Creator"].asString();
		if(!valueFileModelsfileModel["OpenTime"].isNull())
			fileModelsObject.openTime = valueFileModelsfileModel["OpenTime"].asString();
		if(!valueFileModelsfileModel["ParentId"].isNull())
			fileModelsObject.parentId = valueFileModelsfileModel["ParentId"].asString();
		if(!valueFileModelsfileModel["Modifier"].isNull())
			fileModelsObject.modifier = valueFileModelsfileModel["Modifier"].asString();
		if(!valueFileModelsfileModel["Description"].isNull())
			fileModelsObject.description = valueFileModelsfileModel["Description"].asString();
		if(!valueFileModelsfileModel["Name"].isNull())
			fileModelsObject.name = valueFileModelsfileModel["Name"].asString();
		if(!valueFileModelsfileModel["DownloadUrl"].isNull())
			fileModelsObject.downloadUrl = valueFileModelsfileModel["DownloadUrl"].asString();
		if(!valueFileModelsfileModel["Sha1"].isNull())
			fileModelsObject.sha1 = valueFileModelsfileModel["Sha1"].asString();
		if(!valueFileModelsfileModel["OpenTimeStamp"].isNull())
			fileModelsObject.openTimeStamp = std::stol(valueFileModelsfileModel["OpenTimeStamp"].asString());
		if(!valueFileModelsfileModel["RegionId"].isNull())
			fileModelsObject.regionId = valueFileModelsfileModel["RegionId"].asString();
		if(!valueFileModelsfileModel["RootId"].isNull())
			fileModelsObject.rootId = valueFileModelsfileModel["RootId"].asString();
		if(!valueFileModelsfileModel["FilePath"].isNull())
			fileModelsObject.filePath = valueFileModelsfileModel["FilePath"].asString();
		if(!valueFileModelsfileModel["Size"].isNull())
			fileModelsObject.size = std::stol(valueFileModelsfileModel["Size"].asString());
		if(!valueFileModelsfileModel["Category"].isNull())
			fileModelsObject.category = valueFileModelsfileModel["Category"].asString();
		if(!valueFileModelsfileModel["Md5"].isNull())
			fileModelsObject.md5 = valueFileModelsfileModel["Md5"].asString();
		if(!valueFileModelsfileModel["DriveId"].isNull())
			fileModelsObject.driveId = valueFileModelsfileModel["DriveId"].asString();
		if(!valueFileModelsfileModel["Thumbnail"].isNull())
			fileModelsObject.thumbnail = valueFileModelsfileModel["Thumbnail"].asString();
		if(!valueFileModelsfileModel["CreateTime"].isNull())
			fileModelsObject.createTime = valueFileModelsfileModel["CreateTime"].asString();
		if(!valueFileModelsfileModel["ModifiedTime"].isNull())
			fileModelsObject.modifiedTime = valueFileModelsfileModel["ModifiedTime"].asString();
		fileModels_.push_back(fileModelsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Count"].isNull())
		count_ = value["Count"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListCdsFilesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListCdsFilesResult::getMessage()const
{
	return message_;
}

std::string ListCdsFilesResult::getCount()const
{
	return count_;
}

std::vector<ListCdsFilesResult::FileModel> ListCdsFilesResult::getFileModels()const
{
	return fileModels_;
}

std::string ListCdsFilesResult::getCode()const
{
	return code_;
}

bool ListCdsFilesResult::getSuccess()const
{
	return success_;
}

