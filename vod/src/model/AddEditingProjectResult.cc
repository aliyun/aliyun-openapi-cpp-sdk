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

#include <alibabacloud/vod/model/AddEditingProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

AddEditingProjectResult::AddEditingProjectResult() :
	ServiceResult()
{}

AddEditingProjectResult::AddEditingProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddEditingProjectResult::~AddEditingProjectResult()
{}

void AddEditingProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["Project"];
	if(!projectNode["CreationTime"].isNull())
		project_.creationTime = projectNode["CreationTime"].asString();
	if(!projectNode["Status"].isNull())
		project_.status = projectNode["Status"].asString();
	if(!projectNode["ModifiedTime"].isNull())
		project_.modifiedTime = projectNode["ModifiedTime"].asString();
	if(!projectNode["Description"].isNull())
		project_.description = projectNode["Description"].asString();
	if(!projectNode["ProjectId"].isNull())
		project_.projectId = projectNode["ProjectId"].asString();
	if(!projectNode["Title"].isNull())
		project_.title = projectNode["Title"].asString();

}

AddEditingProjectResult::Project AddEditingProjectResult::getProject()const
{
	return project_;
}

