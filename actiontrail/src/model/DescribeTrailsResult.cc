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
	auto allTrailListNode = value["TrailList"]["Trail"];
	for (auto valueTrailListTrail : allTrailListNode)
	{
		Trail trailListObject;
		if(!valueTrailListTrail["TrailRegion"].isNull())
			trailListObject.trailRegion = valueTrailListTrail["TrailRegion"].asString();
		if(!valueTrailListTrail["Status"].isNull())
			trailListObject.status = valueTrailListTrail["Status"].asString();
		if(!valueTrailListTrail["UpdateTime"].isNull())
			trailListObject.updateTime = valueTrailListTrail["UpdateTime"].asString();
		if(!valueTrailListTrail["HomeRegion"].isNull())
			trailListObject.homeRegion = valueTrailListTrail["HomeRegion"].asString();
		if(!valueTrailListTrail["CreateTime"].isNull())
			trailListObject.createTime = valueTrailListTrail["CreateTime"].asString();
		if(!valueTrailListTrail["OssKeyPrefix"].isNull())
			trailListObject.ossKeyPrefix = valueTrailListTrail["OssKeyPrefix"].asString();
		if(!valueTrailListTrail["EventRW"].isNull())
			trailListObject.eventRW = valueTrailListTrail["EventRW"].asString();
		if(!valueTrailListTrail["StartLoggingTime"].isNull())
			trailListObject.startLoggingTime = valueTrailListTrail["StartLoggingTime"].asString();
		if(!valueTrailListTrail["OssWriteRoleArn"].isNull())
			trailListObject.ossWriteRoleArn = valueTrailListTrail["OssWriteRoleArn"].asString();
		if(!valueTrailListTrail["SlsProjectArn"].isNull())
			trailListObject.slsProjectArn = valueTrailListTrail["SlsProjectArn"].asString();
		if(!valueTrailListTrail["IsOrganizationTrail"].isNull())
			trailListObject.isOrganizationTrail = valueTrailListTrail["IsOrganizationTrail"].asString() == "true";
		if(!valueTrailListTrail["SlsWriteRoleArn"].isNull())
			trailListObject.slsWriteRoleArn = valueTrailListTrail["SlsWriteRoleArn"].asString();
		if(!valueTrailListTrail["StopLoggingTime"].isNull())
			trailListObject.stopLoggingTime = valueTrailListTrail["StopLoggingTime"].asString();
		if(!valueTrailListTrail["Name"].isNull())
			trailListObject.name = valueTrailListTrail["Name"].asString();
		if(!valueTrailListTrail["OssBucketName"].isNull())
			trailListObject.ossBucketName = valueTrailListTrail["OssBucketName"].asString();
		if(!valueTrailListTrail["Region"].isNull())
			trailListObject.region = valueTrailListTrail["Region"].asString();
		if(!valueTrailListTrail["OrganizationId"].isNull())
			trailListObject.organizationId = valueTrailListTrail["OrganizationId"].asString();
		if(!valueTrailListTrail["OssBucketLocation"].isNull())
			trailListObject.ossBucketLocation = valueTrailListTrail["OssBucketLocation"].asString();
		if(!valueTrailListTrail["IsShadowTrail"].isNull())
			trailListObject.isShadowTrail = std::stol(valueTrailListTrail["IsShadowTrail"].asString());
		if(!valueTrailListTrail["TrailArn"].isNull())
			trailListObject.trailArn = valueTrailListTrail["TrailArn"].asString();
		trailList_.push_back(trailListObject);
	}

}

std::vector<DescribeTrailsResult::Trail> DescribeTrailsResult::getTrailList()const
{
	return trailList_;
}

