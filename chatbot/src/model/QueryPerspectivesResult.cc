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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allPerspectives = value["Perspectives"]["Perspective"];
	for (auto value : allPerspectives)
	{
		Perspective perspectivesObject;
		if(!value["ModifyUserName"].isNull())
			perspectivesObject.modifyUserName = value["ModifyUserName"].asString();
		if(!value["ModifyTime"].isNull())
			perspectivesObject.modifyTime = value["ModifyTime"].asString();
		if(!value["CreateTime"].isNull())
			perspectivesObject.createTime = value["CreateTime"].asString();
		if(!value["SelfDefine"].isNull())
			perspectivesObject.selfDefine = value["SelfDefine"].asString();
		if(!value["PerspectiveId"].isNull())
			perspectivesObject.perspectiveId = value["PerspectiveId"].asString();
		if(!value["CreateUserName"].isNull())
			perspectivesObject.createUserName = value["CreateUserName"].asString();
		if(!value["PerspectiveCode"].isNull())
			perspectivesObject.perspectiveCode = value["PerspectiveCode"].asString();
		if(!value["Status"].isNull())
			perspectivesObject.status = std::stoi(value["Status"].asString());
		if(!value["Name"].isNull())
			perspectivesObject.name = value["Name"].asString();
		perspectives_.push_back(perspectivesObject);
	}

}

std::vector<QueryPerspectivesResult::Perspective> QueryPerspectivesResult::getPerspectives()const
{
	return perspectives_;
}

