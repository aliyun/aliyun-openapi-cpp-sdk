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

#include <alibabacloud/sgw/model/DescribeOssBucketInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeOssBucketInfoResult::DescribeOssBucketInfoResult() :
	ServiceResult()
{}

DescribeOssBucketInfoResult::DescribeOssBucketInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssBucketInfoResult::~DescribeOssBucketInfoResult()
{}

void DescribeOssBucketInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IsArchive"].isNull())
		isArchive_ = value["IsArchive"].asString() == "true";
	if(!value["IsBackToResource"].isNull())
		isBackToResource_ = value["IsBackToResource"].asString() == "true";
	if(!value["PollingInterval"].isNull())
		pollingInterval_ = std::stoi(value["PollingInterval"].asString());
	if(!value["IsSupportServerSideEncryption"].isNull())
		isSupportServerSideEncryption_ = value["IsSupportServerSideEncryption"].asString() == "true";
	if(!value["IsFresh"].isNull())
		isFresh_ = value["IsFresh"].asString() == "true";
	if(!value["StorageSize"].isNull())
		storageSize_ = std::stol(value["StorageSize"].asString());
	if(!value["IsVersioning"].isNull())
		isVersioning_ = value["IsVersioning"].asString() == "true";

}

std::string DescribeOssBucketInfoResult::getMessage()const
{
	return message_;
}

bool DescribeOssBucketInfoResult::getIsArchive()const
{
	return isArchive_;
}

bool DescribeOssBucketInfoResult::getIsFresh()const
{
	return isFresh_;
}

bool DescribeOssBucketInfoResult::getIsSupportServerSideEncryption()const
{
	return isSupportServerSideEncryption_;
}

long DescribeOssBucketInfoResult::getStorageSize()const
{
	return storageSize_;
}

bool DescribeOssBucketInfoResult::getIsBackToResource()const
{
	return isBackToResource_;
}

int DescribeOssBucketInfoResult::getPollingInterval()const
{
	return pollingInterval_;
}

bool DescribeOssBucketInfoResult::getIsVersioning()const
{
	return isVersioning_;
}

std::string DescribeOssBucketInfoResult::getCode()const
{
	return code_;
}

bool DescribeOssBucketInfoResult::getSuccess()const
{
	return success_;
}

