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

#include <alibabacloud/cloudphoto/model/GetLibraryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetLibraryResult::GetLibraryResult() :
	ServiceResult()
{}

GetLibraryResult::GetLibraryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLibraryResult::~GetLibraryResult()
{}

void GetLibraryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLibrary = value["Library"];
	for (auto value : allLibrary)
	{
		Library libraryObject;
		auto allQuota = value["Quota"];
		for (auto value : allQuota)
		{
			Library::Quota quotaObject;
			if(!value["TotalQuota"].isNull())
				quotaObject.totalQuota = std::stol(value["TotalQuota"].asString());
			if(!value["TotalTrashQuota"].isNull())
				quotaObject.totalTrashQuota = std::stol(value["TotalTrashQuota"].asString());
			if(!value["FacesCount"].isNull())
				quotaObject.facesCount = std::stoi(value["FacesCount"].asString());
			if(!value["PhotosCount"].isNull())
				quotaObject.photosCount = std::stoi(value["PhotosCount"].asString());
			if(!value["UsedQuota"].isNull())
				quotaObject.usedQuota = std::stol(value["UsedQuota"].asString());
			if(!value["VideosCount"].isNull())
				quotaObject.videosCount = std::stoi(value["VideosCount"].asString());
			if(!value["ActiveSize"].isNull())
				quotaObject.activeSize = std::stol(value["ActiveSize"].asString());
			if(!value["InactiveSize"].isNull())
				quotaObject.inactiveSize = std::stol(value["InactiveSize"].asString());
			libraryObject.quota.push_back(quotaObject);
		}
		auto allAutoCleanConfig = value["AutoCleanConfig"];
		for (auto value : allAutoCleanConfig)
		{
			Library::AutoCleanConfig autoCleanConfigObject;
			if(!value["AutoCleanEnabled"].isNull())
				autoCleanConfigObject.autoCleanEnabled = value["AutoCleanEnabled"].asString() == "true";
			if(!value["AutoCleanDays"].isNull())
				autoCleanConfigObject.autoCleanDays = std::stoi(value["AutoCleanDays"].asString());
			libraryObject.autoCleanConfig.push_back(autoCleanConfigObject);
		}
		library_.push_back(libraryObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetLibraryResult::getAction()const
{
	return action_;
}

std::string GetLibraryResult::getMessage()const
{
	return message_;
}

std::vector<GetLibraryResult::Library> GetLibraryResult::getLibrary()const
{
	return library_;
}

std::string GetLibraryResult::getCode()const
{
	return code_;
}

