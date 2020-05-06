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

#include <alibabacloud/hbase/model/DescribeRestoreIncrDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeRestoreIncrDetailResult::DescribeRestoreIncrDetailResult() :
	ServiceResult()
{}

DescribeRestoreIncrDetailResult::DescribeRestoreIncrDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreIncrDetailResult::~DescribeRestoreIncrDetailResult()
{}

void DescribeRestoreIncrDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto restoreIncrDetailNode = value["RestoreIncrDetail"];
	if(!restoreIncrDetailNode["State"].isNull())
		restoreIncrDetail_.state = restoreIncrDetailNode["State"].asString();
	if(!restoreIncrDetailNode["StartTime"].isNull())
		restoreIncrDetail_.startTime = restoreIncrDetailNode["StartTime"].asString();
	if(!restoreIncrDetailNode["EndTime"].isNull())
		restoreIncrDetail_.endTime = restoreIncrDetailNode["EndTime"].asString();
	if(!restoreIncrDetailNode["RestoreStartTs"].isNull())
		restoreIncrDetail_.restoreStartTs = restoreIncrDetailNode["RestoreStartTs"].asString();
	if(!restoreIncrDetailNode["RestoredTs"].isNull())
		restoreIncrDetail_.restoredTs = restoreIncrDetailNode["RestoredTs"].asString();
	if(!restoreIncrDetailNode["RestoreDelay"].isNull())
		restoreIncrDetail_.restoreDelay = restoreIncrDetailNode["RestoreDelay"].asString();
	if(!restoreIncrDetailNode["Process"].isNull())
		restoreIncrDetail_.process = restoreIncrDetailNode["Process"].asString();

}

DescribeRestoreIncrDetailResult::RestoreIncrDetail DescribeRestoreIncrDetailResult::getRestoreIncrDetail()const
{
	return restoreIncrDetail_;
}

