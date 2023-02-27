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

#include <alibabacloud/ice/model/GetDefaultStorageLocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetDefaultStorageLocationResult::GetDefaultStorageLocationResult() :
	ServiceResult()
{}

GetDefaultStorageLocationResult::GetDefaultStorageLocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDefaultStorageLocationResult::~GetDefaultStorageLocationResult()
{}

void GetDefaultStorageLocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();
	if(!value["Bucket"].isNull())
		bucket_ = value["Bucket"].asString();
	if(!value["Path"].isNull())
		path_ = value["Path"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetDefaultStorageLocationResult::getPath()const
{
	return path_;
}

std::string GetDefaultStorageLocationResult::getStatus()const
{
	return status_;
}

std::string GetDefaultStorageLocationResult::getStorageType()const
{
	return storageType_;
}

std::string GetDefaultStorageLocationResult::getBucket()const
{
	return bucket_;
}

