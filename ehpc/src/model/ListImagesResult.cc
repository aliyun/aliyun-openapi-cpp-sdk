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

#include <alibabacloud/ehpc/model/ListImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListImagesResult::ListImagesResult() :
	ServiceResult()
{}

ListImagesResult::ListImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImagesResult::~ListImagesResult()
{}

void ListImagesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOsTags = value["OsTags"]["OsInfo"];
	for (auto value : allOsTags)
	{
		OsInfo osTagsObject;
		if(!value["OsTag"].isNull())
			osTagsObject.osTag = value["OsTag"].asString();
		if(!value["Platform"].isNull())
			osTagsObject.platform = value["Platform"].asString();
		if(!value["Version"].isNull())
			osTagsObject.version = value["Version"].asString();
		if(!value["Architecture"].isNull())
			osTagsObject.architecture = value["Architecture"].asString();
		osTags_.push_back(osTagsObject);
	}

}

std::vector<ListImagesResult::OsInfo> ListImagesResult::getOsTags()const
{
	return osTags_;
}

