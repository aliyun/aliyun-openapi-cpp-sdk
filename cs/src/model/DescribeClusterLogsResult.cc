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

#include <alibabacloud/cs/model/DescribeClusterLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClusterLogsResult::DescribeClusterLogsResult() :
	ServiceResult()
{}

DescribeClusterLogsResult::DescribeClusterLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterLogsResult::~DescribeClusterLogsResult()
{}

void DescribeClusterLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["cluster_id"].isNull())
		cluster_id_ = value["cluster_id"].asString();
	if(!value["cluster_log"].isNull())
		cluster_log_ = value["cluster_log"].asString();
	if(!value["created"].isNull())
		created_ = value["created"].asString();
	if(!value["log_level"].isNull())
		log_level_ = value["log_level"].asString();
	if(!value["ID"].isNull())
		iD_ = value["ID"].asString();
	if(!value["updated"].isNull())
		updated_ = value["updated"].asString();

}

std::string DescribeClusterLogsResult::getCluster_id()const
{
	return cluster_id_;
}

std::string DescribeClusterLogsResult::getUpdated()const
{
	return updated_;
}

std::string DescribeClusterLogsResult::getLog_level()const
{
	return log_level_;
}

std::string DescribeClusterLogsResult::getID()const
{
	return iD_;
}

std::string DescribeClusterLogsResult::getCluster_log()const
{
	return cluster_log_;
}

std::string DescribeClusterLogsResult::getCreated()const
{
	return created_;
}

