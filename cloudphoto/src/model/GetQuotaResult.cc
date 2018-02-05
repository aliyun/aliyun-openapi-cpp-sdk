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

#include <alibabacloud/cloudphoto/model/GetQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetQuotaResult::GetQuotaResult() :
	ServiceResult()
{}

GetQuotaResult::GetQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaResult::~GetQuotaResult()
{}

void GetQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allQuota = value["Quota"];
	for (auto value : allQuota)
	{
		Quota quotaObject;
		if(!value["TotalQuota"].isNull())
			quotaObject.totalQuota = std::stol(value["TotalQuota"].asString());
		if(!value["FacesCount"].isNull())
			quotaObject.facesCount = std::stoi(value["FacesCount"].asString());
		if(!value["PhotosCount"].isNull())
			quotaObject.photosCount = std::stoi(value["PhotosCount"].asString());
		if(!value["UsedQuota"].isNull())
			quotaObject.usedQuota = std::stol(value["UsedQuota"].asString());
		if(!value["VideosCount"].isNull())
			quotaObject.videosCount = std::stoi(value["VideosCount"].asString());
		quota_.push_back(quotaObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetQuotaResult::getAction()const
{
	return action_;
}

std::vector<GetQuotaResult::Quota> GetQuotaResult::getQuota()const
{
	return quota_;
}

std::string GetQuotaResult::getMessage()const
{
	return message_;
}

std::string GetQuotaResult::getCode()const
{
	return code_;
}

