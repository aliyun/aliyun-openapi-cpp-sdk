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

#include <alibabacloud/quickbi-public/model/QueryWorksByWorkspaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryWorksByWorkspaceResult::QueryWorksByWorkspaceResult() :
	ServiceResult()
{}

QueryWorksByWorkspaceResult::QueryWorksByWorkspaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryWorksByWorkspaceResult::~QueryWorksByWorkspaceResult()
{}

void QueryWorksByWorkspaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stoi(resultNode["TotalNum"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	auto allDataNode = resultNode["Data"]["DataItem"];
	for (auto resultNodeDataDataItem : allDataNode)
	{
		Result::DataItem dataItemObject;
		if(!resultNodeDataDataItem["Auth3rdFlag"].isNull())
			dataItemObject.auth3rdFlag = std::stoi(resultNodeDataDataItem["Auth3rdFlag"].asString());
		if(!resultNodeDataDataItem["Description"].isNull())
			dataItemObject.description = resultNodeDataDataItem["Description"].asString();
		if(!resultNodeDataDataItem["GmtCreate"].isNull())
			dataItemObject.gmtCreate = resultNodeDataDataItem["GmtCreate"].asString();
		if(!resultNodeDataDataItem["GmtModify"].isNull())
			dataItemObject.gmtModify = resultNodeDataDataItem["GmtModify"].asString();
		if(!resultNodeDataDataItem["ModifyName"].isNull())
			dataItemObject.modifyName = resultNodeDataDataItem["ModifyName"].asString();
		if(!resultNodeDataDataItem["OwnerId"].isNull())
			dataItemObject.ownerId = resultNodeDataDataItem["OwnerId"].asString();
		if(!resultNodeDataDataItem["OwnerName"].isNull())
			dataItemObject.ownerName = resultNodeDataDataItem["OwnerName"].asString();
		if(!resultNodeDataDataItem["PublicFlag"].isNull())
			dataItemObject.publicFlag = resultNodeDataDataItem["PublicFlag"].asString() == "true";
		if(!resultNodeDataDataItem["PublicInvalidTime"].isNull())
			dataItemObject.publicInvalidTime = std::stol(resultNodeDataDataItem["PublicInvalidTime"].asString());
		if(!resultNodeDataDataItem["SecurityLevel"].isNull())
			dataItemObject.securityLevel = resultNodeDataDataItem["SecurityLevel"].asString();
		if(!resultNodeDataDataItem["Status"].isNull())
			dataItemObject.status = std::stoi(resultNodeDataDataItem["Status"].asString());
		if(!resultNodeDataDataItem["WorkName"].isNull())
			dataItemObject.workName = resultNodeDataDataItem["WorkName"].asString();
		if(!resultNodeDataDataItem["WorkType"].isNull())
			dataItemObject.workType = resultNodeDataDataItem["WorkType"].asString();
		if(!resultNodeDataDataItem["WorksId"].isNull())
			dataItemObject.worksId = resultNodeDataDataItem["WorksId"].asString();
		if(!resultNodeDataDataItem["WorkspaceId"].isNull())
			dataItemObject.workspaceId = resultNodeDataDataItem["WorkspaceId"].asString();
		if(!resultNodeDataDataItem["WorkspaceName"].isNull())
			dataItemObject.workspaceName = resultNodeDataDataItem["WorkspaceName"].asString();
		auto directoryNode = value["Directory"];
		if(!directoryNode["Id"].isNull())
			dataItemObject.directory.id = directoryNode["Id"].asString();
		if(!directoryNode["Name"].isNull())
			dataItemObject.directory.name = directoryNode["Name"].asString();
		if(!directoryNode["PathId"].isNull())
			dataItemObject.directory.pathId = directoryNode["PathId"].asString();
		if(!directoryNode["PathName"].isNull())
			dataItemObject.directory.pathName = directoryNode["PathName"].asString();
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryWorksByWorkspaceResult::getSuccess()const
{
	return success_;
}

QueryWorksByWorkspaceResult::Result QueryWorksByWorkspaceResult::getResult()const
{
	return result_;
}

