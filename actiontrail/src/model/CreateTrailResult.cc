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

#include <alibabacloud/actiontrail/model/CreateTrailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

CreateTrailResult::CreateTrailResult() :
	ServiceResult()
{}

CreateTrailResult::CreateTrailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrailResult::~CreateTrailResult()
{}

void CreateTrailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SlsProjectArn"].isNull())
		slsProjectArn_ = value["SlsProjectArn"].asString();
	if(!value["OssWriteRoleArn"].isNull())
		ossWriteRoleArn_ = value["OssWriteRoleArn"].asString();
	if(!value["EventRW"].isNull())
		eventRW_ = value["EventRW"].asString();
	if(!value["HomeRegion"].isNull())
		homeRegion_ = value["HomeRegion"].asString();
	if(!value["OssKeyPrefix"].isNull())
		ossKeyPrefix_ = value["OssKeyPrefix"].asString();
	if(!value["OssBucketName"].isNull())
		ossBucketName_ = value["OssBucketName"].asString();
	if(!value["SlsWriteRoleArn"].isNull())
		slsWriteRoleArn_ = value["SlsWriteRoleArn"].asString();
	if(!value["TrailRegion"].isNull())
		trailRegion_ = value["TrailRegion"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

std::string CreateTrailResult::getSlsProjectArn()const
{
	return slsProjectArn_;
}

std::string CreateTrailResult::getEventRW()const
{
	return eventRW_;
}

std::string CreateTrailResult::getHomeRegion()const
{
	return homeRegion_;
}

std::string CreateTrailResult::getOssKeyPrefix()const
{
	return ossKeyPrefix_;
}

std::string CreateTrailResult::getOssBucketName()const
{
	return ossBucketName_;
}

std::string CreateTrailResult::getOssWriteRoleArn()const
{
	return ossWriteRoleArn_;
}

std::string CreateTrailResult::getSlsWriteRoleArn()const
{
	return slsWriteRoleArn_;
}

std::string CreateTrailResult::getTrailRegion()const
{
	return trailRegion_;
}

std::string CreateTrailResult::getName()const
{
	return name_;
}

