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

#include <alibabacloud/quickbi-public/model/QueryReadableResourcesListByUserIdV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryReadableResourcesListByUserIdV2Result::QueryReadableResourcesListByUserIdV2Result() :
	ServiceResult()
{}

QueryReadableResourcesListByUserIdV2Result::QueryReadableResourcesListByUserIdV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryReadableResourcesListByUserIdV2Result::~QueryReadableResourcesListByUserIdV2Result()
{}

void QueryReadableResourcesListByUserIdV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["Status"].isNull())
			resultObject.status = std::stoi(valueResultData["Status"].asString());
		if(!valueResultData["ModifyTime"].isNull())
			resultObject.modifyTime = valueResultData["ModifyTime"].asString();
		if(!valueResultData["OwnerName"].isNull())
			resultObject.ownerName = valueResultData["OwnerName"].asString();
		if(!valueResultData["Description"].isNull())
			resultObject.description = valueResultData["Description"].asString();
		if(!valueResultData["WorkType"].isNull())
			resultObject.workType = valueResultData["WorkType"].asString();
		if(!valueResultData["ModifyName"].isNull())
			resultObject.modifyName = valueResultData["ModifyName"].asString();
		if(!valueResultData["CreateTime"].isNull())
			resultObject.createTime = valueResultData["CreateTime"].asString();
		if(!valueResultData["WorkspaceId"].isNull())
			resultObject.workspaceId = valueResultData["WorkspaceId"].asString();
		if(!valueResultData["ThirdPartAuthFlag"].isNull())
			resultObject.thirdPartAuthFlag = std::stoi(valueResultData["ThirdPartAuthFlag"].asString());
		if(!valueResultData["OwnerId"].isNull())
			resultObject.ownerId = valueResultData["OwnerId"].asString();
		if(!valueResultData["SecurityLevel"].isNull())
			resultObject.securityLevel = valueResultData["SecurityLevel"].asString();
		if(!valueResultData["WorkName"].isNull())
			resultObject.workName = valueResultData["WorkName"].asString();
		if(!valueResultData["WorkspaceName"].isNull())
			resultObject.workspaceName = valueResultData["WorkspaceName"].asString();
		if(!valueResultData["WorksId"].isNull())
			resultObject.worksId = valueResultData["WorksId"].asString();
		auto directoryNode = value["Directory"];
		if(!directoryNode["PathId"].isNull())
			resultObject.directory.pathId = directoryNode["PathId"].asString();
		if(!directoryNode["Id"].isNull())
			resultObject.directory.id = directoryNode["Id"].asString();
		if(!directoryNode["PathName"].isNull())
			resultObject.directory.pathName = directoryNode["PathName"].asString();
		if(!directoryNode["Name"].isNull())
			resultObject.directory.name = directoryNode["Name"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryReadableResourcesListByUserIdV2Result::getSuccess()const
{
	return success_;
}

std::vector<QueryReadableResourcesListByUserIdV2Result::Data> QueryReadableResourcesListByUserIdV2Result::getResult()const
{
	return result_;
}

