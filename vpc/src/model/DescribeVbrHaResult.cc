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

#include <alibabacloud/vpc/model/DescribeVbrHaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVbrHaResult::DescribeVbrHaResult() :
	ServiceResult()
{}

DescribeVbrHaResult::DescribeVbrHaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVbrHaResult::~DescribeVbrHaResult()
{}

void DescribeVbrHaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["VbrHaId"].isNull())
		vbrHaId_ = value["VbrHaId"].asString();
	if(!value["PeerVbrId"].isNull())
		peerVbrId_ = value["PeerVbrId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["VbrId"].isNull())
		vbrId_ = value["VbrId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string DescribeVbrHaResult::getStatus()const
{
	return status_;
}

std::string DescribeVbrHaResult::getVbrHaId()const
{
	return vbrHaId_;
}

std::string DescribeVbrHaResult::getDescription()const
{
	return description_;
}

std::string DescribeVbrHaResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeVbrHaResult::getVbrId()const
{
	return vbrId_;
}

std::string DescribeVbrHaResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeVbrHaResult::getPeerVbrId()const
{
	return peerVbrId_;
}

std::string DescribeVbrHaResult::getName()const
{
	return name_;
}

