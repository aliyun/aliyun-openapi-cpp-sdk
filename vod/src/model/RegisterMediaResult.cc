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

#include <alibabacloud/vod/model/RegisterMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

RegisterMediaResult::RegisterMediaResult() :
	ServiceResult()
{}

RegisterMediaResult::RegisterMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterMediaResult::~RegisterMediaResult()
{}

void RegisterMediaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRegisteredMediaList = value["RegisteredMediaList"]["RegisteredMedia"];
	for (auto value : allRegisteredMediaList)
	{
		RegisteredMedia registeredMediaListObject;
		if(!value["MediaId"].isNull())
			registeredMediaListObject.mediaId = value["MediaId"].asString();
		if(!value["FileURL"].isNull())
			registeredMediaListObject.fileURL = value["FileURL"].asString();
		if(!value["NewRegister"].isNull())
			registeredMediaListObject.newRegister = value["NewRegister"].asString() == "true";
		registeredMediaList_.push_back(registeredMediaListObject);
	}
	auto allFailedFileURLs = value["FailedFileURLs"]["FileURL"];
	for (const auto &item : allFailedFileURLs)
		failedFileURLs_.push_back(item.asString());

}

std::vector<std::string> RegisterMediaResult::getFailedFileURLs()const
{
	return failedFileURLs_;
}

std::vector<RegisterMediaResult::RegisteredMedia> RegisterMediaResult::getRegisteredMediaList()const
{
	return registeredMediaList_;
}

