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
		PhotoStore photoStoresObject;
		if(!value["Id"].isNull())
			photoStoresObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			photoStoresObject.idStr = value["IdStr"].asString();
		if(!value["Name"].isNull())
			photoStoresObject.name = value["Name"].asString();
		if(!value["Remark"].isNull())
			photoStoresObject.remark = value["Remark"].asString();
		if(!value["AutoCleanEnabled"].isNull())
			photoStoresObject.autoCleanEnabled = value["AutoCleanEnabled"].asString() == "true";
		if(!value["AutoCleanDays"].isNull())
			photoStoresObject.autoCleanDays = std::stoi(value["AutoCleanDays"].asString());
		if(!value["DefaultQuota"].isNull())
			photoStoresObject.defaultQuota = std::stol(value["DefaultQuota"].asString());
		if(!value["Ctime"].isNull())
			photoStoresObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			photoStoresObject.mtime = std::stol(value["Mtime"].asString());
		auto allBuckets = value["Buckets"]["Bucket"];
		for (auto value : allBuckets)
		{
			PhotoStore::Bucket bucketsObject;
			if(!value["Name"].isNull())
				bucketsObject.name = value["Name"].asString();
			if(!value["Region"].isNull())
				bucketsObject.region = value["Region"].asString();
			if(!value["State"].isNull())
				bucketsObject.state = value["State"].asString();
			photoStoresObject.buckets.push_back(bucketsObject);
		}
		photoStores_.push_back(photoStoresObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListPhotoStoresResult::getAction()const
{
	return action_;
}

std::string ListPhotoStoresResult::getMessage()const
{
	return message_;
}

std::vector<ListPhotoStoresResult::PhotoStore> ListPhotoStoresResult::getPhotoStores()const
{
	return photoStores_;
}

std::string ListPhotoStoresResult::getCode()const
{
	return code_;
}

