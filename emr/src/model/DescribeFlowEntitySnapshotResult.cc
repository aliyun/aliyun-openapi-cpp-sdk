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

#include <alibabacloud/emr/model/DescribeFlowEntitySnapshotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeFlowEntitySnapshotResult::DescribeFlowEntitySnapshotResult() :
	ServiceResult()
{}

DescribeFlowEntitySnapshotResult::DescribeFlowEntitySnapshotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowEntitySnapshotResult::~DescribeFlowEntitySnapshotResult()
{}

void DescribeFlowEntitySnapshotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["Revision"].isNull())
		revision_ = value["Revision"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["CommitterId"].isNull())
		committerId_ = value["CommitterId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["EntityId"].isNull())
		entityId_ = value["EntityId"].asString();
	if(!value["EntityGroupId"].isNull())
		entityGroupId_ = value["EntityGroupId"].asString();
	if(!value["EntityType"].isNull())
		entityType_ = value["EntityType"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Active"].isNull())
		active_ = value["Active"].asString() == "true";

}

std::string DescribeFlowEntitySnapshotResult::getEntityId()const
{
	return entityId_;
}

std::string DescribeFlowEntitySnapshotResult::getEntityType()const
{
	return entityType_;
}

long DescribeFlowEntitySnapshotResult::getGmtCreate()const
{
	return gmtCreate_;
}

bool DescribeFlowEntitySnapshotResult::getActive()const
{
	return active_;
}

std::string DescribeFlowEntitySnapshotResult::getRevision()const
{
	return revision_;
}

std::string DescribeFlowEntitySnapshotResult::getMessage()const
{
	return message_;
}

std::string DescribeFlowEntitySnapshotResult::getUserId()const
{
	return userId_;
}

std::string DescribeFlowEntitySnapshotResult::getData()const
{
	return data_;
}

std::string DescribeFlowEntitySnapshotResult::getEntityGroupId()const
{
	return entityGroupId_;
}

std::string DescribeFlowEntitySnapshotResult::getCommitterId()const
{
	return committerId_;
}

