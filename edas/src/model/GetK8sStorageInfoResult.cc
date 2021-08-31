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

#include <alibabacloud/edas/model/GetK8sStorageInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetK8sStorageInfoResult::GetK8sStorageInfoResult() :
	ServiceResult()
{}

GetK8sStorageInfoResult::GetK8sStorageInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetK8sStorageInfoResult::~GetK8sStorageInfoResult()
{}

void GetK8sStorageInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto storageInfoNode = value["StorageInfo"];
	if(!storageInfoNode["VolumePlugin"].isNull())
		storageInfo_.volumePlugin = storageInfoNode["VolumePlugin"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetK8sStorageInfoResult::getMessage()const
{
	return message_;
}

GetK8sStorageInfoResult::StorageInfo GetK8sStorageInfoResult::getStorageInfo()const
{
	return storageInfo_;
}

int GetK8sStorageInfoResult::getCode()const
{
	return code_;
}

