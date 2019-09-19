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

#include <alibabacloud/chatbot/model/QueryPerspectivesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryPerspectivesResult::QueryPerspectivesResult() :
	ServiceResult()
{}

QueryPerspectivesResult::QueryPerspectivesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPerspectivesResult::~QueryPerspectivesResult()
{}

void QueryPerspectivesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerspectivesNode = value["Perspectives"]["Perspective"];
	for (auto valuePerspectivesPerspective : allPerspectivesNode)
	{
		Perspective perspectivesObject;
		if(!valuePerspectivesPerspective["ModifyUserName"].isNull())
			perspectivesObject.modifyUserName = valuePerspectivesPerspective["ModifyUserName"].asString();
		if(!valuePerspectivesPerspective["ModifyTime"].isNull())
			perspectivesObject.modifyTime = valuePerspectivesPerspective["ModifyTime"].asString();
		if(!valuePerspectivesPerspective["CreateTime"].isNull())
			perspectivesObject.createTime = valuePerspectivesPerspective["CreateTime"].asString();
		if(!valuePerspectivesPerspective["SelfDefine"].isNull())
			perspectivesObject.selfDefine = valuePerspectivesPerspective["SelfDefine"].asString();
		if(!valuePerspectivesPerspective["PerspectiveId"].isNull())
			perspectivesObject.perspectiveId = valuePerspectivesPerspective["PerspectiveId"].asString();
		if(!valuePerspectivesPerspective["CreateUserName"].isNull())
			perspectivesObject.createUserName = valuePerspectivesPerspective["CreateUserName"].asString();
		if(!valuePerspectivesPerspective["PerspectiveCode"].isNull())
			perspectivesObject.perspectiveCode = valuePerspectivesPerspective["PerspectiveCode"].asString();
		if(!valuePerspectivesPerspective["Status"].isNull())
			perspectivesObject.status = std::stoi(valuePerspectivesPerspective["Status"].asString());
		if(!valuePerspectivesPerspective["Name"].isNull())
			perspectivesObject.name = valuePerspectivesPerspective["Name"].asString();
		perspectives_.push_back(perspectivesObject);
	}

}

std::vector<QueryPerspectivesResult::Perspective> QueryPerspectivesResult::getPerspectives()const
{
	return perspectives_;
}

