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

#include <alibabacloud/dms-enterprise/model/GetTableDesignProjectInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTableDesignProjectInfoResult::GetTableDesignProjectInfoResult() :
	ServiceResult()
{}

GetTableDesignProjectInfoResult::GetTableDesignProjectInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableDesignProjectInfoResult::~GetTableDesignProjectInfoResult()
{}

void GetTableDesignProjectInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectInfoNode = value["ProjectInfo"];
	if(!projectInfoNode["OrderId"].isNull())
		projectInfo_.orderId = std::stol(projectInfoNode["OrderId"].asString());
	if(!projectInfoNode["ProjectId"].isNull())
		projectInfo_.projectId = std::stol(projectInfoNode["ProjectId"].asString());
	if(!projectInfoNode["GmtCreate"].isNull())
		projectInfo_.gmtCreate = projectInfoNode["GmtCreate"].asString();
	if(!projectInfoNode["GmtModified"].isNull())
		projectInfo_.gmtModified = projectInfoNode["GmtModified"].asString();
	if(!projectInfoNode["Status"].isNull())
		projectInfo_.status = projectInfoNode["Status"].asString();
	if(!projectInfoNode["Title"].isNull())
		projectInfo_.title = projectInfoNode["Title"].asString();
	if(!projectInfoNode["Description"].isNull())
		projectInfo_.description = projectInfoNode["Description"].asString();
	if(!projectInfoNode["CreatorId"].isNull())
		projectInfo_.creatorId = std::stol(projectInfoNode["CreatorId"].asString());
	auto baseDatabaseNode = projectInfoNode["BaseDatabase"];
	if(!baseDatabaseNode["SearchName"].isNull())
		projectInfo_.baseDatabase.searchName = baseDatabaseNode["SearchName"].asString();
	if(!baseDatabaseNode["SchemaName"].isNull())
		projectInfo_.baseDatabase.schemaName = baseDatabaseNode["SchemaName"].asString();
	if(!baseDatabaseNode["DbId"].isNull())
		projectInfo_.baseDatabase.dbId = std::stoi(baseDatabaseNode["DbId"].asString());
	if(!baseDatabaseNode["Logic"].isNull())
		projectInfo_.baseDatabase.logic = baseDatabaseNode["Logic"].asString() == "true";
	if(!baseDatabaseNode["Alias"].isNull())
		projectInfo_.baseDatabase.alias = baseDatabaseNode["Alias"].asString();
	if(!baseDatabaseNode["EnvType"].isNull())
		projectInfo_.baseDatabase.envType = baseDatabaseNode["EnvType"].asString();
	if(!baseDatabaseNode["DbType"].isNull())
		projectInfo_.baseDatabase.dbType = baseDatabaseNode["DbType"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetTableDesignProjectInfoResult::ProjectInfo GetTableDesignProjectInfoResult::getProjectInfo()const
{
	return projectInfo_;
}

std::string GetTableDesignProjectInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTableDesignProjectInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTableDesignProjectInfoResult::getSuccess()const
{
	return success_;
}

