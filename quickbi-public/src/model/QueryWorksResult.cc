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

#include <alibabacloud/quickbi-public/model/QueryWorksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryWorksResult::QueryWorksResult() :
	ServiceResult()
{}

QueryWorksResult::QueryWorksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryWorksResult::~QueryWorksResult()
{}

void QueryWorksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Auth3rdFlag"].isNull())
		result_.auth3rdFlag = std::stoi(resultNode["Auth3rdFlag"].asString());
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModify"].isNull())
		result_.gmtModify = resultNode["GmtModify"].asString();
	if(!resultNode["ModifyName"].isNull())
		result_.modifyName = resultNode["ModifyName"].asString();
	if(!resultNode["OwnerId"].isNull())
		result_.ownerId = resultNode["OwnerId"].asString();
	if(!resultNode["OwnerName"].isNull())
		result_.ownerName = resultNode["OwnerName"].asString();
	if(!resultNode["PublicFlag"].isNull())
		result_.publicFlag = resultNode["PublicFlag"].asString() == "true";
	if(!resultNode["PublicInvalidTime"].isNull())
		result_.publicInvalidTime = std::stol(resultNode["PublicInvalidTime"].asString());
	if(!resultNode["SecurityLevel"].isNull())
		result_.securityLevel = resultNode["SecurityLevel"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());
	if(!resultNode["WorkName"].isNull())
		result_.workName = resultNode["WorkName"].asString();
	if(!resultNode["WorkType"].isNull())
		result_.workType = resultNode["WorkType"].asString();
	if(!resultNode["WorksId"].isNull())
		result_.worksId = resultNode["WorksId"].asString();
	if(!resultNode["WorkspaceId"].isNull())
		result_.workspaceId = resultNode["WorkspaceId"].asString();
	if(!resultNode["WorkspaceName"].isNull())
		result_.workspaceName = resultNode["WorkspaceName"].asString();
	auto directoryNode = resultNode["Directory"];
	if(!directoryNode["Id"].isNull())
		result_.directory.id = directoryNode["Id"].asString();
	if(!directoryNode["Name"].isNull())
		result_.directory.name = directoryNode["Name"].asString();
	if(!directoryNode["PathId"].isNull())
		result_.directory.pathId = directoryNode["PathId"].asString();
	if(!directoryNode["PathName"].isNull())
		result_.directory.pathName = directoryNode["PathName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryWorksResult::getSuccess()const
{
	return success_;
}

QueryWorksResult::Result QueryWorksResult::getResult()const
{
	return result_;
}

