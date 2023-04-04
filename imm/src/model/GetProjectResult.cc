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

#include <alibabacloud/imm/model/GetProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetProjectResult::GetProjectResult() :
	ServiceResult()
{}

GetProjectResult::GetProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectResult::~GetProjectResult()
{}

void GetProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["Project"];
	if(!projectNode["ProjectName"].isNull())
		project_.projectName = projectNode["ProjectName"].asString();
	if(!projectNode["ServiceRole"].isNull())
		project_.serviceRole = projectNode["ServiceRole"].asString();
	if(!projectNode["TemplateId"].isNull())
		project_.templateId = projectNode["TemplateId"].asString();
	if(!projectNode["CreateTime"].isNull())
		project_.createTime = projectNode["CreateTime"].asString();
	if(!projectNode["UpdateTime"].isNull())
		project_.updateTime = projectNode["UpdateTime"].asString();
	if(!projectNode["Description"].isNull())
		project_.description = projectNode["Description"].asString();
	if(!projectNode["ProjectQueriesPerSecond"].isNull())
		project_.projectQueriesPerSecond = std::stol(projectNode["ProjectQueriesPerSecond"].asString());
	if(!projectNode["EngineConcurrency"].isNull())
		project_.engineConcurrency = std::stol(projectNode["EngineConcurrency"].asString());
	if(!projectNode["ProjectMaxDatasetCount"].isNull())
		project_.projectMaxDatasetCount = std::stol(projectNode["ProjectMaxDatasetCount"].asString());
	if(!projectNode["DatasetMaxBindCount"].isNull())
		project_.datasetMaxBindCount = std::stol(projectNode["DatasetMaxBindCount"].asString());
	if(!projectNode["DatasetMaxFileCount"].isNull())
		project_.datasetMaxFileCount = std::stol(projectNode["DatasetMaxFileCount"].asString());
	if(!projectNode["DatasetMaxEntityCount"].isNull())
		project_.datasetMaxEntityCount = std::stol(projectNode["DatasetMaxEntityCount"].asString());
	if(!projectNode["DatasetMaxRelationCount"].isNull())
		project_.datasetMaxRelationCount = std::stol(projectNode["DatasetMaxRelationCount"].asString());
	if(!projectNode["DatasetMaxTotalFileSize"].isNull())
		project_.datasetMaxTotalFileSize = std::stol(projectNode["DatasetMaxTotalFileSize"].asString());
	if(!projectNode["DatasetCount"].isNull())
		project_.datasetCount = std::stol(projectNode["DatasetCount"].asString());
	if(!projectNode["FileCount"].isNull())
		project_.fileCount = std::stol(projectNode["FileCount"].asString());
	if(!projectNode["TotalFileSize"].isNull())
		project_.totalFileSize = std::stol(projectNode["TotalFileSize"].asString());

}

GetProjectResult::Project GetProjectResult::getProject()const
{
	return project_;
}

