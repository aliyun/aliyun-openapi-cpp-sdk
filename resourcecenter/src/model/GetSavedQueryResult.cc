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

#include <alibabacloud/resourcecenter/model/GetSavedQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

GetSavedQueryResult::GetSavedQueryResult() :
	ServiceResult()
{}

GetSavedQueryResult::GetSavedQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSavedQueryResult::~GetSavedQueryResult()
{}

void GetSavedQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto savedQueryNode = value["SavedQuery"];
	if(!savedQueryNode["CreateTime"].isNull())
		savedQuery_.createTime = savedQueryNode["CreateTime"].asString();
	if(!savedQueryNode["Description"].isNull())
		savedQuery_.description = savedQueryNode["Description"].asString();
	if(!savedQueryNode["Expression"].isNull())
		savedQuery_.expression = savedQueryNode["Expression"].asString();
	if(!savedQueryNode["Name"].isNull())
		savedQuery_.name = savedQueryNode["Name"].asString();
	if(!savedQueryNode["QueryId"].isNull())
		savedQuery_.queryId = savedQueryNode["QueryId"].asString();
	if(!savedQueryNode["UpdateTime"].isNull())
		savedQuery_.updateTime = savedQueryNode["UpdateTime"].asString();

}

GetSavedQueryResult::SavedQuery GetSavedQueryResult::getSavedQuery()const
{
	return savedQuery_;
}

