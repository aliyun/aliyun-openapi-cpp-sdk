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

#include <alibabacloud/cloudphoto/model/GetPhotoStoreResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetPhotoStoreResult::GetPhotoStoreResult() :
	ServiceResult()
{}

GetPhotoStoreResult::GetPhotoStoreResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPhotoStoreResult::~GetPhotoStoreResult()
{}

void GetPhotoStoreResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPhotoStore = value["PhotoStore"];
	for (auto value : allPhotoStore)
	{
		PhotoStore photoStoreObject;
		if(!value["Id"].isNull())
			photoStoreObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			photoStoreObject.idStr = value["IdStr"].asString();
		if(!value["Name"].isNull())
			photoStoreObject.name = value["Name"].asString();
		if(!value["Remark"].isNull())
			photoStoreObject.remark = value["Remark"].asString();
		if(!value["AutoCleanEnabled"].isNull())
			photoStoreObject.autoCleanEnabled = value["AutoCleanEnabled"].asString() == "true";
		if(!value["AutoCleanDays"].isNull())
			photoStoreObject.autoCleanDays = std::stoi(value["AutoCleanDays"].asString());
		if(!value["DefaultQuota"].isNull())
			photoStoreObject.defaultQuota = std::stol(value["DefaultQuota"].asString());
		if(!value["DefaultTrashQuota"].isNull())
			photoStoreObject.defaultTrashQuota = std::stol(value["DefaultTrashQuota"].asString());
		if(!value["Ctime"].isNull())
			photoStoreObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			photoStoreObject.mtime = std::stol(value["Mtime"].asString());
		auto allBuckets = value["Buckets"]["Bucket"];
		for (auto value : allBuckets)
		{
			PhotoStore::Bucket bucketObject;
			if(!value["Name"].isNull())
				bucketObject.name = value["Name"].asString();
			if(!value["Region"].isNull())
				bucketObject.region = value["Region"].asString();
			if(!value["State"].isNull())
				bucketObject.state = value["State"].asString();
			if(!value["Acl"].isNull())
				bucketObject.acl = value["Acl"].asString();
			photoStoreObject.buckets.push_back(bucketObject);
		}
		photoStore_.push_back(photoStoreObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetPhotoStoreResult::getAction()const
{
	return action_;
}

std::string GetPhotoStoreResult::getMessage()const
{
	return message_;
}

std::vector<GetPhotoStoreResult::PhotoStore> GetPhotoStoreResult::getPhotoStore()const
{
	return photoStore_;
}

std::string GetPhotoStoreResult::getCode()const
{
	return code_;
}

