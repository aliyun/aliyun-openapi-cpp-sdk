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

#include <alibabacloud/vpc/model/DescribeHighDefinitionMonitorLogAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeHighDefinitionMonitorLogAttributeResult::DescribeHighDefinitionMonitorLogAttributeResult() :
	ServiceResult()
{}

DescribeHighDefinitionMonitorLogAttributeResult::DescribeHighDefinitionMonitorLogAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHighDefinitionMonitorLogAttributeResult::~DescribeHighDefinitionMonitorLogAttributeResult()
{}

void DescribeHighDefinitionMonitorLogAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LogProject"].isNull())
		logProject_ = value["LogProject"].asString();
	if(!value["LogStore"].isNull())
		logStore_ = value["LogStore"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();

}

std::string DescribeHighDefinitionMonitorLogAttributeResult::getLogStore()const
{
	return logStore_;
}

std::string DescribeHighDefinitionMonitorLogAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeHighDefinitionMonitorLogAttributeResult::getInstanceType()const
{
	return instanceType_;
}

std::string DescribeHighDefinitionMonitorLogAttributeResult::getLogProject()const
{
	return logProject_;
}

std::string DescribeHighDefinitionMonitorLogAttributeResult::getSuccess()const
{
	return success_;
}

