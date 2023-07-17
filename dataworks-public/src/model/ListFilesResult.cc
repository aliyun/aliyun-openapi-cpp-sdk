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

#include <alibabacloud/dataworks-public/model/ListFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListFilesResult::ListFilesResult() :
	ServiceResult()
{}

ListFilesResult::ListFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFilesResult::~ListFilesResult()
{}

void ListFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allFilesNode = dataNode["Files"]["File"];
	for (auto dataNodeFilesFile : allFilesNode)
	{
		Data::File fileObject;
		if(!dataNodeFilesFile["CommitStatus"].isNull())
			fileObject.commitStatus = std::stoi(dataNodeFilesFile["CommitStatus"].asString());
		if(!dataNodeFilesFile["AutoParsing"].isNull())
			fileObject.autoParsing = dataNodeFilesFile["AutoParsing"].asString() == "true";
		if(!dataNodeFilesFile["Owner"].isNull())
			fileObject.owner = dataNodeFilesFile["Owner"].asString();
		if(!dataNodeFilesFile["CreateTime"].isNull())
			fileObject.createTime = std::stol(dataNodeFilesFile["CreateTime"].asString());
		if(!dataNodeFilesFile["FileType"].isNull())
			fileObject.fileType = std::stoi(dataNodeFilesFile["FileType"].asString());
		if(!dataNodeFilesFile["CurrentVersion"].isNull())
			fileObject.currentVersion = std::stoi(dataNodeFilesFile["CurrentVersion"].asString());
		if(!dataNodeFilesFile["BizId"].isNull())
			fileObject.bizId = std::stol(dataNodeFilesFile["BizId"].asString());
		if(!dataNodeFilesFile["LastEditUser"].isNull())
			fileObject.lastEditUser = dataNodeFilesFile["LastEditUser"].asString();
		if(!dataNodeFilesFile["FileName"].isNull())
			fileObject.fileName = dataNodeFilesFile["FileName"].asString();
		if(!dataNodeFilesFile["ConnectionName"].isNull())
			fileObject.connectionName = dataNodeFilesFile["ConnectionName"].asString();
		if(!dataNodeFilesFile["UseType"].isNull())
			fileObject.useType = dataNodeFilesFile["UseType"].asString();
		if(!dataNodeFilesFile["FileFolderId"].isNull())
			fileObject.fileFolderId = dataNodeFilesFile["FileFolderId"].asString();
		if(!dataNodeFilesFile["FileId"].isNull())
			fileObject.fileId = std::stol(dataNodeFilesFile["FileId"].asString());
		if(!dataNodeFilesFile["ParentId"].isNull())
			fileObject.parentId = std::stol(dataNodeFilesFile["ParentId"].asString());
		if(!dataNodeFilesFile["CreateUser"].isNull())
			fileObject.createUser = dataNodeFilesFile["CreateUser"].asString();
		if(!dataNodeFilesFile["IsMaxCompute"].isNull())
			fileObject.isMaxCompute = dataNodeFilesFile["IsMaxCompute"].asString() == "true";
		if(!dataNodeFilesFile["BusinessId"].isNull())
			fileObject.businessId = std::stol(dataNodeFilesFile["BusinessId"].asString());
		if(!dataNodeFilesFile["FileDescription"].isNull())
			fileObject.fileDescription = dataNodeFilesFile["FileDescription"].asString();
		if(!dataNodeFilesFile["LastEditTime"].isNull())
			fileObject.lastEditTime = std::stol(dataNodeFilesFile["LastEditTime"].asString());
		if(!dataNodeFilesFile["Content"].isNull())
			fileObject.content = dataNodeFilesFile["Content"].asString();
		if(!dataNodeFilesFile["NodeId"].isNull())
			fileObject.nodeId = std::stol(dataNodeFilesFile["NodeId"].asString());
		if(!dataNodeFilesFile["AbsoluteFolderPath"].isNull())
			fileObject.absoluteFolderPath = dataNodeFilesFile["AbsoluteFolderPath"].asString();
		data_.files.push_back(fileObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListFilesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListFilesResult::Data ListFilesResult::getData()const
{
	return data_;
}

std::string ListFilesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListFilesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListFilesResult::getSuccess()const
{
	return success_;
}

