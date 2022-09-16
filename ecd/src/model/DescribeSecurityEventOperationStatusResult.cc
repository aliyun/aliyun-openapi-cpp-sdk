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

#include <alibabacloud/ecd/model/DescribeSecurityEventOperationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeSecurityEventOperationStatusResult::DescribeSecurityEventOperationStatusResult() :
	ServiceResult()
{}

DescribeSecurityEventOperationStatusResult::DescribeSecurityEventOperationStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityEventOperationStatusResult::~DescribeSecurityEventOperationStatusResult()
{}

void DescribeSecurityEventOperationStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityEventOperationStatusesNode = value["SecurityEventOperationStatuses"]["SecurityEventOperationStatus"];
	for (auto valueSecurityEventOperationStatusesSecurityEventOperationStatus : allSecurityEventOperationStatusesNode)
	{
		SecurityEventOperationStatus securityEventOperationStatusesObject;
		if(!valueSecurityEventOperationStatusesSecurityEventOperationStatus["Status"].isNull())
			securityEventOperationStatusesObject.status = valueSecurityEventOperationStatusesSecurityEventOperationStatus["Status"].asString();
		if(!valueSecurityEventOperationStatusesSecurityEventOperationStatus["SecurityEventId"].isNull())
			securityEventOperationStatusesObject.securityEventId = std::stol(valueSecurityEventOperationStatusesSecurityEventOperationStatus["SecurityEventId"].asString());
		if(!valueSecurityEventOperationStatusesSecurityEventOperationStatus["ErrorCode"].isNull())
			securityEventOperationStatusesObject.errorCode = valueSecurityEventOperationStatusesSecurityEventOperationStatus["ErrorCode"].asString();
		securityEventOperationStatuses_.push_back(securityEventOperationStatusesObject);
	}
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();

}

std::vector<DescribeSecurityEventOperationStatusResult::SecurityEventOperationStatus> DescribeSecurityEventOperationStatusResult::getSecurityEventOperationStatuses()const
{
	return securityEventOperationStatuses_;
}

std::string DescribeSecurityEventOperationStatusResult::getTaskStatus()const
{
	return taskStatus_;
}

