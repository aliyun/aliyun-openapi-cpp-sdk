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

#include <alibabacloud/dataworks-public/model/ListFileVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListFileVersionsResult::ListFileVersionsResult() :
	ServiceResult()
{}

ListFileVersionsResult::ListFileVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFileVersionsResult::~ListFileVersionsResult()
{}

void ListFileVersionsResult::parse(const std::string &payload)
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
	auto allFileVersionsNode = dataNode["FileVersions"]["FileVersion"];
	for (auto dataNodeFileVersionsFileVersion : allFileVersionsNode)
	{
		Data::FileVersion fileVersionObject;
		if(!dataNodeFileVersionsFileVersion["FileContent"].isNull())
			fileVersionObject.fileContent = dataNodeFileVersionsFileVersion["FileContent"].asString();
		if(!dataNodeFileVersionsFileVersion["Status"].isNull())
			fileVersionObject.status = dataNodeFileVersionsFileVersion["Status"].asString();
		if(!dataNodeFileVersionsFileVersion["IsCurrentProd"].isNull())
			fileVersionObject.isCurrentProd = dataNodeFileVersionsFileVersion["IsCurrentProd"].asString() == "true";
		if(!dataNodeFileVersionsFileVersion["CommitUser"].isNull())
			fileVersionObject.commitUser = dataNodeFileVersionsFileVersion["CommitUser"].asString();
		if(!dataNodeFileVersionsFileVersion["NodeContent"].isNull())
			fileVersionObject.nodeContent = dataNodeFileVersionsFileVersion["NodeContent"].asString();
		if(!dataNodeFileVersionsFileVersion["Comment"].isNull())
			fileVersionObject.comment = dataNodeFileVersionsFileVersion["Comment"].asString();
		if(!dataNodeFileVersionsFileVersion["FilePropertyContent"].isNull())
			fileVersionObject.filePropertyContent = dataNodeFileVersionsFileVersion["FilePropertyContent"].asString();
		if(!dataNodeFileVersionsFileVersion["FileName"].isNull())
			fileVersionObject.fileName = dataNodeFileVersionsFileVersion["FileName"].asString();
		if(!dataNodeFileVersionsFileVersion["UseType"].isNull())
			fileVersionObject.useType = dataNodeFileVersionsFileVersion["UseType"].asString();
		if(!dataNodeFileVersionsFileVersion["ChangeType"].isNull())
			fileVersionObject.changeType = dataNodeFileVersionsFileVersion["ChangeType"].asString();
		if(!dataNodeFileVersionsFileVersion["FileVersion"].isNull())
			fileVersionObject.fileVersion = std::stoi(dataNodeFileVersionsFileVersion["FileVersion"].asString());
		if(!dataNodeFileVersionsFileVersion["CommitTime"].isNull())
			fileVersionObject.commitTime = std::stol(dataNodeFileVersionsFileVersion["CommitTime"].asString());
		if(!dataNodeFileVersionsFileVersion["NodeId"].isNull())
			fileVersionObject.nodeId = std::stol(dataNodeFileVersionsFileVersion["NodeId"].asString());
		data_.fileVersions.push_back(fileVersionObject);
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

int ListFileVersionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListFileVersionsResult::Data ListFileVersionsResult::getData()const
{
	return data_;
}

std::string ListFileVersionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListFileVersionsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListFileVersionsResult::getSuccess()const
{
	return success_;
}

