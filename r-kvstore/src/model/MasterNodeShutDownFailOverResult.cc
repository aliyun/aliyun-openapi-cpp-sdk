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

#include <alibabacloud/r-kvstore/model/MasterNodeShutDownFailOverResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

MasterNodeShutDownFailOverResult::MasterNodeShutDownFailOverResult() :
	ServiceResult()
{}

MasterNodeShutDownFailOverResult::MasterNodeShutDownFailOverResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MasterNodeShutDownFailOverResult::~MasterNodeShutDownFailOverResult()
{}

void MasterNodeShutDownFailOverResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TaskID"].isNull())
		taskID_ = value["TaskID"].asString();

}

std::string MasterNodeShutDownFailOverResult::getTaskID()const
{
	return taskID_;
}

std::string MasterNodeShutDownFailOverResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

