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

#include <alibabacloud/actiontrail/model/DescribeTrailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

DescribeTrailsResult::DescribeTrailsResult() :
	ServiceResult()
{}

DescribeTrailsResult::DescribeTrailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrailsResult::~DescribeTrailsResult()
{}

void DescribeTrailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrailListNode = value["TrailList"]["TrailListItem"];
	for (auto valueTrailListTrailListItem : allTrailListNode)
	{
		TrailListItem trailListObject;
		if(!valueTrailListTrailListItem["Name"].isNull())
			trailListObject.name = valueTrailListTrailListItem["Name"].asString();
		if(!valueTrailListTrailListItem["HomeRegion"].isNull())
			trailListObject.homeRegion = valueTrailListTrailListItem["HomeRegion"].asString();
		if(!valueTrailListTrailListItem["RoleName"].isNull())
			trailListObject.roleName = valueTrailListTrailListItem["RoleName"].asString();
		if(!valueTrailListTrailListItem["OssBucketName"].isNull())
			trailListObject.ossBucketName = valueTrailListTrailListItem["OssBucketName"].asString();
		if(!valueTrailListTrailListItem["OssKeyPrefix"].isNull())
			trailListObject.ossKeyPrefix = valueTrailListTrailListItem["OssKeyPrefix"].asString();
		if(!valueTrailListTrailListItem["EventRW"].isNull())
			trailListObject.eventRW = valueTrailListTrailListItem["EventRW"].asString();
		if(!valueTrailListTrailListItem["SlsWriteRoleArn"].isNull())
			trailListObject.slsWriteRoleArn = valueTrailListTrailListItem["SlsWriteRoleArn"].asString();
		if(!valueTrailListTrailListItem["SlsProjectArn"].isNull())
			trailListObject.slsProjectArn = valueTrailListTrailListItem["SlsProjectArn"].asString();
		if(!valueTrailListTrailListItem["Status"].isNull())
			trailListObject.status = valueTrailListTrailListItem["Status"].asString();
		if(!valueTrailListTrailListItem["TrailRegion"].isNull())
			trailListObject.trailRegion = valueTrailListTrailListItem["TrailRegion"].asString();
		if(!valueTrailListTrailListItem["CreateTime"].isNull())
			trailListObject.createTime = valueTrailListTrailListItem["CreateTime"].asString();
		if(!valueTrailListTrailListItem["UpdateTime"].isNull())
			trailListObject.updateTime = valueTrailListTrailListItem["UpdateTime"].asString();
		if(!valueTrailListTrailListItem["StartLoggingTime"].isNull())
			trailListObject.startLoggingTime = valueTrailListTrailListItem["StartLoggingTime"].asString();
		if(!valueTrailListTrailListItem["StopLoggingTime"].isNull())
			trailListObject.stopLoggingTime = valueTrailListTrailListItem["StopLoggingTime"].asString();
		if(!valueTrailListTrailListItem["MnsTopicArn"].isNull())
			trailListObject.mnsTopicArn = valueTrailListTrailListItem["MnsTopicArn"].asString();
		if(!valueTrailListTrailListItem["IsOrganizationTrail"].isNull())
			trailListObject.isOrganizationTrail = valueTrailListTrailListItem["IsOrganizationTrail"].asString() == "true";
		trailList_.push_back(trailListObject);
	}

}

std::vector<DescribeTrailsResult::TrailListItem> DescribeTrailsResult::getTrailList()const
{
	return trailList_;
}

