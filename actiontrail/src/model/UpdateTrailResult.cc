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

#include <alibabacloud/actiontrail/model/UpdateTrailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

UpdateTrailResult::UpdateTrailResult() :
	ServiceResult()
{}

UpdateTrailResult::UpdateTrailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateTrailResult::~UpdateTrailResult()
{}

void UpdateTrailResult::parse(const std::string &payload)
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

std::string UpdateTrailResult::getSlsProjectArn()const
{
	return slsProjectArn_;
}

std::string UpdateTrailResult::getEventRW()const
{
	return eventRW_;
}

std::string UpdateTrailResult::getHomeRegion()const
{
	return homeRegion_;
}

std::string UpdateTrailResult::getOssKeyPrefix()const
{
	return ossKeyPrefix_;
}

std::string UpdateTrailResult::getOssBucketName()const
{
	return ossBucketName_;
}

std::string UpdateTrailResult::getOssWriteRoleArn()const
{
	return ossWriteRoleArn_;
}

std::string UpdateTrailResult::getSlsWriteRoleArn()const
{
	return slsWriteRoleArn_;
}

std::string UpdateTrailResult::getTrailRegion()const
{
	return trailRegion_;
}

std::string UpdateTrailResult::getName()const
{
	return name_;
}

