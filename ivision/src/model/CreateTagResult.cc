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

#include <alibabacloud/ivision/model/CreateTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateTagResult::CreateTagResult() :
	ServiceResult()
{}

CreateTagResult::CreateTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTagResult::~CreateTagResult()
{}

void CreateTagResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto tagNode = value["Tag"];
	if(!tagNode["ProjectId"].isNull())
		tag_.projectId = tagNode["ProjectId"].asString();
	if(!tagNode["TagId"].isNull())
		tag_.tagId = tagNode["TagId"].asString();
	if(!tagNode["TagName"].isNull())
		tag_.tagName = tagNode["TagName"].asString();
	if(!tagNode["Description"].isNull())
		tag_.description = tagNode["Description"].asString();
	if(!tagNode["Count"].isNull())
		tag_.count = std::stoi(tagNode["Count"].asString());
	if(!tagNode["CreationTime"].isNull())
		tag_.creationTime = tagNode["CreationTime"].asString();

}

CreateTagResult::Tag CreateTagResult::getTag()const
{
	return tag_;
}

