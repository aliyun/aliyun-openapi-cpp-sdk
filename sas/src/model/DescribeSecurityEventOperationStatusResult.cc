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

#include <alibabacloud/sas/model/DescribeSecurityEventOperationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

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
	auto securityEventOperationStatusResponseNode = value["SecurityEventOperationStatusResponse"];
	if(!securityEventOperationStatusResponseNode["TaskStatus"].isNull())
		securityEventOperationStatusResponse_.taskStatus = securityEventOperationStatusResponseNode["TaskStatus"].asString();
	auto allSecurityEventOperationStatusesNode = securityEventOperationStatusResponseNode["SecurityEventOperationStatuses"]["SecurityEventOperationStatus"];
	for (auto securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus : allSecurityEventOperationStatusesNode)
	{
		SecurityEventOperationStatusResponse::SecurityEventOperationStatus securityEventOperationStatusObject;
		if(!securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["Status"].isNull())
			securityEventOperationStatusObject.status = securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["Status"].asString();
		if(!securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["SecurityEventId"].isNull())
			securityEventOperationStatusObject.securityEventId = securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["SecurityEventId"].asString();
		if(!securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["ErrorCode"].isNull())
			securityEventOperationStatusObject.errorCode = securityEventOperationStatusResponseNodeSecurityEventOperationStatusesSecurityEventOperationStatus["ErrorCode"].asString();
		securityEventOperationStatusResponse_.securityEventOperationStatuses.push_back(securityEventOperationStatusObject);
	}

}

DescribeSecurityEventOperationStatusResult::SecurityEventOperationStatusResponse DescribeSecurityEventOperationStatusResult::getSecurityEventOperationStatusResponse()const
{
	return securityEventOperationStatusResponse_;
}

