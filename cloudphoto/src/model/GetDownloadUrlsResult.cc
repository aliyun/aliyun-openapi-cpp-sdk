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

#include <alibabacloud/cloudphoto/model/GetDownloadUrlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetDownloadUrlsResult::GetDownloadUrlsResult() :
	ServiceResult()
{}

GetDownloadUrlsResult::GetDownloadUrlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDownloadUrlsResult::~GetDownloadUrlsResult()
{}

void GetDownloadUrlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
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
		if(!value["DownloadUrl"].isNull())
			resultsObject.downloadUrl = value["DownloadUrl"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetDownloadUrlsResult::getAction()const
{
	return action_;
}

std::string GetDownloadUrlsResult::getMessage()const
{
	return message_;
}

std::vector<GetDownloadUrlsResult::Result> GetDownloadUrlsResult::getResults()const
{
	return results_;
}

std::string GetDownloadUrlsResult::getCode()const
{
	return code_;
}

