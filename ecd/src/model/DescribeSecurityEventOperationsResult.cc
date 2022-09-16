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

#include <alibabacloud/ecd/model/DescribeSecurityEventOperationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeSecurityEventOperationsResult::DescribeSecurityEventOperationsResult() :
	ServiceResult()
{}

DescribeSecurityEventOperationsResult::DescribeSecurityEventOperationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityEventOperationsResult::~DescribeSecurityEventOperationsResult()
{}

void DescribeSecurityEventOperationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityEventOperationsNode = value["SecurityEventOperations"]["SecurityEventOperation"];
	for (auto valueSecurityEventOperationsSecurityEventOperation : allSecurityEventOperationsNode)
	{
		SecurityEventOperation securityEventOperationsObject;
		if(!valueSecurityEventOperationsSecurityEventOperation["OperationParams"].isNull())
			securityEventOperationsObject.operationParams = valueSecurityEventOperationsSecurityEventOperation["OperationParams"].asString();
		if(!valueSecurityEventOperationsSecurityEventOperation["OperationCode"].isNull())
			securityEventOperationsObject.operationCode = valueSecurityEventOperationsSecurityEventOperation["OperationCode"].asString();
		if(!valueSecurityEventOperationsSecurityEventOperation["UserCanOperate"].isNull())
			securityEventOperationsObject.userCanOperate = valueSecurityEventOperationsSecurityEventOperation["UserCanOperate"].asString() == "true";
		securityEventOperations_.push_back(securityEventOperationsObject);
	}

}

std::vector<DescribeSecurityEventOperationsResult::SecurityEventOperation> DescribeSecurityEventOperationsResult::getSecurityEventOperations()const
{
	return securityEventOperations_;
}

