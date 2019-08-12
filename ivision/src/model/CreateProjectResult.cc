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

#include <alibabacloud/ivision/model/CreateProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateProjectResult::CreateProjectResult() :
	ServiceResult()
{}

CreateProjectResult::CreateProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProjectResult::~CreateProjectResult()
{}

void CreateProjectResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto projectNode = value["Project"];
	if(!projectNode["ProjectId"].isNull())
		project_.projectId = projectNode["ProjectId"].asString();
	if(!projectNode["Name"].isNull())
		project_.name = projectNode["Name"].asString();
	if(!projectNode["Description"].isNull())
		project_.description = projectNode["Description"].asString();
	if(!projectNode["ProType"].isNull())
		project_.proType = projectNode["ProType"].asString();
	if(!projectNode["IterCount"].isNull())
		project_.iterCount = std::stoi(projectNode["IterCount"].asString());
	if(!projectNode["CreationTime"].isNull())
		project_.creationTime = projectNode["CreationTime"].asString();
	if(!projectNode["Status"].isNull())
		project_.status = projectNode["Status"].asString();

}

CreateProjectResult::Project CreateProjectResult::getProject()const
{
	return project_;
}

