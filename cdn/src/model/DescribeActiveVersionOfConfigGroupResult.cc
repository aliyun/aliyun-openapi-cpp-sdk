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

#include <alibabacloud/cdn/model/DescribeActiveVersionOfConfigGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeActiveVersionOfConfigGroupResult::DescribeActiveVersionOfConfigGroupResult() :
	ServiceResult()
{}

DescribeActiveVersionOfConfigGroupResult::DescribeActiveVersionOfConfigGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveVersionOfConfigGroupResult::~DescribeActiveVersionOfConfigGroupResult()
{}

void DescribeActiveVersionOfConfigGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["SeqId"].isNull())
		seqId_ = std::stol(value["SeqId"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["VersionId"].isNull())
		versionId_ = value["VersionId"].asString();
	if(!value["ConfigGroupId"].isNull())
		configGroupId_ = value["ConfigGroupId"].asString();
	if(!value["Operator"].isNull())
		_operator_ = value["Operator"].asString();
	if(!value["BaseVersionId"].isNull())
		baseVersionId_ = value["BaseVersionId"].asString();

}

std::string DescribeActiveVersionOfConfigGroupResult::getStatus()const
{
	return status_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getVersionId()const
{
	return versionId_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getConfigGroupId()const
{
	return configGroupId_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getBaseVersionId()const
{
	return baseVersionId_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getDescription()const
{
	return description_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeActiveVersionOfConfigGroupResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeActiveVersionOfConfigGroupResult::get_Operator()const
{
	return _operator_;
}

long DescribeActiveVersionOfConfigGroupResult::getSeqId()const
{
	return seqId_;
}

