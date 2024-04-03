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

#include <alibabacloud/alikafka/model/DescribeAclsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

DescribeAclsResult::DescribeAclsResult() :
	ServiceResult()
{}

DescribeAclsResult::DescribeAclsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAclsResult::~DescribeAclsResult()
{}

void DescribeAclsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKafkaAclListNode = value["KafkaAclList"]["KafkaAclVO"];
	for (auto valueKafkaAclListKafkaAclVO : allKafkaAclListNode)
	{
		KafkaAclVO kafkaAclListObject;
		if(!valueKafkaAclListKafkaAclVO["AclResourceType"].isNull())
			kafkaAclListObject.aclResourceType = valueKafkaAclListKafkaAclVO["AclResourceType"].asString();
		if(!valueKafkaAclListKafkaAclVO["Host"].isNull())
			kafkaAclListObject.host = valueKafkaAclListKafkaAclVO["Host"].asString();
		if(!valueKafkaAclListKafkaAclVO["AclOperationType"].isNull())
			kafkaAclListObject.aclOperationType = valueKafkaAclListKafkaAclVO["AclOperationType"].asString();
		if(!valueKafkaAclListKafkaAclVO["AclResourceName"].isNull())
			kafkaAclListObject.aclResourceName = valueKafkaAclListKafkaAclVO["AclResourceName"].asString();
		if(!valueKafkaAclListKafkaAclVO["AclResourcePatternType"].isNull())
			kafkaAclListObject.aclResourcePatternType = valueKafkaAclListKafkaAclVO["AclResourcePatternType"].asString();
		if(!valueKafkaAclListKafkaAclVO["Username"].isNull())
			kafkaAclListObject.username = valueKafkaAclListKafkaAclVO["Username"].asString();
		if(!valueKafkaAclListKafkaAclVO["AclPermissionType"].isNull())
			kafkaAclListObject.aclPermissionType = valueKafkaAclListKafkaAclVO["AclPermissionType"].asString();
		kafkaAclList_.push_back(kafkaAclListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAclsResult::getMessage()const
{
	return message_;
}

int DescribeAclsResult::getCode()const
{
	return code_;
}

bool DescribeAclsResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeAclsResult::KafkaAclVO> DescribeAclsResult::getKafkaAclList()const
{
	return kafkaAclList_;
}

