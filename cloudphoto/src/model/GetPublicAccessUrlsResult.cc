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

#include <alibabacloud/cloudphoto/model/GetPublicAccessUrlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetPublicAccessUrlsResult::GetPublicAccessUrlsResult() :
	ServiceResult()
{}

GetPublicAccessUrlsResult::GetPublicAccessUrlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPublicAccessUrlsResult::~GetPublicAccessUrlsResult()
{}

void GetPublicAccessUrlsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultsObject;
		if(!value["Code"].isNull())
			resultsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			resultsObject.message = value["Message"].asString();
		if(!value["PhotoId"].isNull())
			resultsObject.photoId = std::stol(value["PhotoId"].asString());
		if(!value["PhotoIdStr"].isNull())
			resultsObject.photoIdStr = value["PhotoIdStr"].asString();
		if(!value["AccessUrl"].isNull())
			resultsObject.accessUrl = value["AccessUrl"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetPublicAccessUrlsResult::getAction()const
{
	return action_;
}

std::string GetPublicAccessUrlsResult::getMessage()const
{
	return message_;
}

std::vector<GetPublicAccessUrlsResult::Result> GetPublicAccessUrlsResult::getResults()const
{
	return results_;
}

std::string GetPublicAccessUrlsResult::getCode()const
{
	return code_;
}

