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
			quotaObject.totalQuota = std::stol(value["TotalQuota"].asString());
			quotaObject.totalTrashQuota = std::stol(value["TotalTrashQuota"].asString());
			quotaObject.facesCount = std::stoi(value["FacesCount"].asString());
			quotaObject.photosCount = std::stoi(value["PhotosCount"].asString());
			quotaObject.usedQuota = std::stol(value["UsedQuota"].asString());
			quotaObject.videosCount = std::stoi(value["VideosCount"].asString());
			quotaObject.activeSize = std::stol(value["ActiveSize"].asString());
			quotaObject.inactiveSize = std::stol(value["InactiveSize"].asString());
			libraryObject.quota.push_back(quotaObject);
		}
		auto allAutoCleanConfig = value["AutoCleanConfig"];
		for (auto value : allAutoCleanConfig)
		{
			Library::AutoCleanConfig autoCleanConfigObject;
			autoCleanConfigObject.autoCleanEnabled = std::stoi(value["AutoCleanEnabled"].asString());
			autoCleanConfigObject.autoCleanDays = std::stoi(value["AutoCleanDays"].asString());
			libraryObject.autoCleanConfig.push_back(autoCleanConfigObject);
		}
		library_.push_back(libraryObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string GetLibraryResult::getAction()const
{
	return action_;
}

void GetLibraryResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string GetLibraryResult::getMessage()const
{
	return message_;
}

void GetLibraryResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string GetLibraryResult::getCode()const
{
	return code_;
}

void GetLibraryResult::setCode(const std::string& code)
{
	code_ = code;
}

