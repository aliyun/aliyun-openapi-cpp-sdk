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

#include <alibabacloud/sas/model/AdvanceSecurityEventOperationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

AdvanceSecurityEventOperationsResult::AdvanceSecurityEventOperationsResult() :
	ServiceResult()
{}

AdvanceSecurityEventOperationsResult::AdvanceSecurityEventOperationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AdvanceSecurityEventOperationsResult::~AdvanceSecurityEventOperationsResult()
{}

void AdvanceSecurityEventOperationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityEventOperationsResponseNode = value["SecurityEventOperationsResponse"]["SecurityEventOperation"];
	for (auto valueSecurityEventOperationsResponseSecurityEventOperation : allSecurityEventOperationsResponseNode)
	{
		SecurityEventOperation securityEventOperationsResponseObject;
		if(!valueSecurityEventOperationsResponseSecurityEventOperation["OperationParams"].isNull())
			securityEventOperationsResponseObject.operationParams = valueSecurityEventOperationsResponseSecurityEventOperation["OperationParams"].asString();
		if(!valueSecurityEventOperationsResponseSecurityEventOperation["OperationCode"].isNull())
			securityEventOperationsResponseObject.operationCode = valueSecurityEventOperationsResponseSecurityEventOperation["OperationCode"].asString();
		if(!valueSecurityEventOperationsResponseSecurityEventOperation["UserCanOperate"].isNull())
			securityEventOperationsResponseObject.userCanOperate = valueSecurityEventOperationsResponseSecurityEventOperation["UserCanOperate"].asString() == "true";
		auto allMarkFieldNode = valueSecurityEventOperationsResponseSecurityEventOperation["MarkField"]["MarkFieldItem"];
		for (auto valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem : allMarkFieldNode)
		{
			SecurityEventOperation::MarkFieldItem markFieldObject;
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["MarkMisType"].isNull())
				markFieldObject.markMisType = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["MarkMisType"].asString();
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["FiledName"].isNull())
				markFieldObject.filedName = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["FiledName"].asString();
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["FiledAliasName"].isNull())
				markFieldObject.filedAliasName = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["FiledAliasName"].asString();
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["MarkMisValue"].isNull())
				markFieldObject.markMisValue = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldMarkFieldItem["MarkMisValue"].asString();
			auto allSupportedMisType = value["SupportedMisType"]["StringItem"];
			for (auto value : allSupportedMisType)
				markFieldObject.supportedMisType.push_back(value.asString());
			securityEventOperationsResponseObject.markField.push_back(markFieldObject);
		}
		auto allMarkFieldsSourceNode = valueSecurityEventOperationsResponseSecurityEventOperation["MarkFieldsSource"]["SecurityEventOperation"];
		for (auto valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation : allMarkFieldsSourceNode)
		{
			SecurityEventOperation::SecurityEventOperation1 markFieldsSourceObject;
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["FiledName"].isNull())
				markFieldsSourceObject.filedName = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["FiledName"].asString();
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["FiledAliasName"].isNull())
				markFieldsSourceObject.filedAliasName = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["FiledAliasName"].asString();
			if(!valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["MarkMisValue"].isNull())
				markFieldsSourceObject.markMisValue = valueSecurityEventOperationsResponseSecurityEventOperationMarkFieldsSourceSecurityEventOperation["MarkMisValue"].asString();
			auto allSupportedMisType2 = value["SupportedMisType"]["StringItem"];
			for (auto value : allSupportedMisType2)
				markFieldsSourceObject.supportedMisType2.push_back(value.asString());
			securityEventOperationsResponseObject.markFieldsSource.push_back(markFieldsSourceObject);
		}
		securityEventOperationsResponse_.push_back(securityEventOperationsResponseObject);
	}

}

std::vector<AdvanceSecurityEventOperationsResult::SecurityEventOperation> AdvanceSecurityEventOperationsResult::getSecurityEventOperationsResponse()const
{
	return securityEventOperationsResponse_;
}

