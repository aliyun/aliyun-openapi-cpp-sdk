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

#include <alibabacloud/quickbi-public/model/QueryOrganizationWorkspaceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryOrganizationWorkspaceListResult::QueryOrganizationWorkspaceListResult() :
	ServiceResult()
{}

QueryOrganizationWorkspaceListResult::QueryOrganizationWorkspaceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOrganizationWorkspaceListResult::~QueryOrganizationWorkspaceListResult()
{}

void QueryOrganizationWorkspaceListResult::parse(const std::string &payload)
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
		if(!resultNodeDataDataItem["AllowPublishOperation"].isNull())
			dataItemObject.allowPublishOperation = resultNodeDataDataItem["AllowPublishOperation"].asString() == "true";
		if(!resultNodeDataDataItem["AllowShareOperation"].isNull())
			dataItemObject.allowShareOperation = resultNodeDataDataItem["AllowShareOperation"].asString() == "true";
		if(!resultNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = resultNodeDataDataItem["CreateTime"].asString();
		if(!resultNodeDataDataItem["CreateUser"].isNull())
			dataItemObject.createUser = resultNodeDataDataItem["CreateUser"].asString();
		if(!resultNodeDataDataItem["CreateUserAccountName"].isNull())
			dataItemObject.createUserAccountName = resultNodeDataDataItem["CreateUserAccountName"].asString();
		if(!resultNodeDataDataItem["ModifiedTime"].isNull())
			dataItemObject.modifiedTime = resultNodeDataDataItem["ModifiedTime"].asString();
		if(!resultNodeDataDataItem["ModifyUser"].isNull())
			dataItemObject.modifyUser = resultNodeDataDataItem["ModifyUser"].asString();
		if(!resultNodeDataDataItem["ModifyUserAccountName"].isNull())
			dataItemObject.modifyUserAccountName = resultNodeDataDataItem["ModifyUserAccountName"].asString();
		if(!resultNodeDataDataItem["OrganizationId"].isNull())
			dataItemObject.organizationId = resultNodeDataDataItem["OrganizationId"].asString();
		if(!resultNodeDataDataItem["Owner"].isNull())
			dataItemObject.owner = resultNodeDataDataItem["Owner"].asString();
		if(!resultNodeDataDataItem["OwnerAccountName"].isNull())
			dataItemObject.ownerAccountName = resultNodeDataDataItem["OwnerAccountName"].asString();
		if(!resultNodeDataDataItem["WorkspaceDescription"].isNull())
			dataItemObject.workspaceDescription = resultNodeDataDataItem["WorkspaceDescription"].asString();
		if(!resultNodeDataDataItem["WorkspaceId"].isNull())
			dataItemObject.workspaceId = resultNodeDataDataItem["WorkspaceId"].asString();
		if(!resultNodeDataDataItem["WorkspaceName"].isNull())
			dataItemObject.workspaceName = resultNodeDataDataItem["WorkspaceName"].asString();
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryOrganizationWorkspaceListResult::getSuccess()const
{
	return success_;
}

QueryOrganizationWorkspaceListResult::Result QueryOrganizationWorkspaceListResult::getResult()const
{
	return result_;
}

