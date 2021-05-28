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

#include <alibabacloud/sgw/model/DescribeGatewayCapacityLimitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayCapacityLimitResult::DescribeGatewayCapacityLimitResult() :
	ServiceResult()
{}

DescribeGatewayCapacityLimitResult::DescribeGatewayCapacityLimitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayCapacityLimitResult::~DescribeGatewayCapacityLimitResult()
{}

void DescribeGatewayCapacityLimitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FileSystemSizeInTB"].isNull())
		fileSystemSizeInTB_ = std::stol(value["FileSystemSizeInTB"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IsMetadataSeparate"].isNull())
		isMetadataSeparate_ = value["IsMetadataSeparate"].asString() == "true";
	if(!value["FileNumber"].isNull())
		fileNumber_ = std::stol(value["FileNumber"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeGatewayCapacityLimitResult::getFileSystemSizeInTB()const
{
	return fileSystemSizeInTB_;
}

std::string DescribeGatewayCapacityLimitResult::getMessage()const
{
	return message_;
}

bool DescribeGatewayCapacityLimitResult::getIsMetadataSeparate()const
{
	return isMetadataSeparate_;
}

long DescribeGatewayCapacityLimitResult::getFileNumber()const
{
	return fileNumber_;
}

std::string DescribeGatewayCapacityLimitResult::getCode()const
{
	return code_;
}

bool DescribeGatewayCapacityLimitResult::getSuccess()const
{
	return success_;
}

