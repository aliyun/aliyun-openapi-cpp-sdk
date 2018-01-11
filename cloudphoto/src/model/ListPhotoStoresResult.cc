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

#include <alibabacloud/cloudphoto/model/ListPhotoStoresResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListPhotoStoresResult::ListPhotoStoresResult() :
	ServiceResult()
{}

ListPhotoStoresResult::ListPhotoStoresResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhotoStoresResult::~ListPhotoStoresResult()
{}

void ListPhotoStoresResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPhotoStores = value["PhotoStores"]["PhotoStore"];
	for (auto value : allPhotoStores)
	{
		PhotoStore photoStoreObject;
		photoStoreObject.id = std::stol(value["Id"].asString());
		photoStoreObject.name = value["Name"].asString();
		photoStoreObject.remark = value["Remark"].asString();
		photoStoreObject.autoCleanEnabled = std::stoi(value["AutoCleanEnabled"].asString());
		photoStoreObject.autoCleanDays = std::stoi(value["AutoCleanDays"].asString());
		photoStoreObject.defaultQuota = std::stol(value["DefaultQuota"].asString());
		photoStoreObject.ctime = std::stol(value["Ctime"].asString());
		photoStoreObject.mtime = std::stol(value["Mtime"].asString());
		auto allBuckets = value["Buckets"]["Bucket"];
		for (auto value : allBuckets)
		{
			PhotoStore::Bucket bucketObject;
			bucketObject.name = value["Name"].asString();
			bucketObject.region = value["Region"].asString();
			bucketObject.state = value["State"].asString();
			photoStoreObject.buckets.push_back(bucketObject);
		}
		photoStores_.push_back(photoStoreObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string ListPhotoStoresResult::getAction()const
{
	return action_;
}

void ListPhotoStoresResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListPhotoStoresResult::getMessage()const
{
	return message_;
}

void ListPhotoStoresResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListPhotoStoresResult::getCode()const
{
	return code_;
}

void ListPhotoStoresResult::setCode(const std::string& code)
{
	code_ = code;
}

