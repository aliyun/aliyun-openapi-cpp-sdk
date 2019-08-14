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

#include <alibabacloud/vod/model/UpdateVideoInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

UpdateVideoInfosResult::UpdateVideoInfosResult() :
	ServiceResult()
{}

UpdateVideoInfosResult::UpdateVideoInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateVideoInfosResult::~UpdateVideoInfosResult()
{}

void UpdateVideoInfosResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allNonExistVideoIds = value["NonExistVideoIds"]["VideoId"];
	for (const auto &item : allNonExistVideoIds)
		nonExistVideoIds_.push_back(item.asString());
	auto allForbiddenVideoIds = value["ForbiddenVideoIds"]["VideoId"];
	for (const auto &item : allForbiddenVideoIds)
		forbiddenVideoIds_.push_back(item.asString());

}

std::vector<std::string> UpdateVideoInfosResult::getForbiddenVideoIds()const
{
	return forbiddenVideoIds_;
}

std::vector<std::string> UpdateVideoInfosResult::getNonExistVideoIds()const
{
	return nonExistVideoIds_;
}

