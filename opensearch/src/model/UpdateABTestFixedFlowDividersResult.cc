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

#include <alibabacloud/opensearch/model/UpdateABTestFixedFlowDividersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

UpdateABTestFixedFlowDividersResult::UpdateABTestFixedFlowDividersResult() :
	ServiceResult()
{}

UpdateABTestFixedFlowDividersResult::UpdateABTestFixedFlowDividersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateABTestFixedFlowDividersResult::~UpdateABTestFixedFlowDividersResult()
{}

void UpdateABTestFixedFlowDividersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresult = value["result"]["flowDivider"];
	for (const auto &item : allresult)
		result_.push_back(item.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string UpdateABTestFixedFlowDividersResult::getRequestId()const
{
	return requestId_;
}

std::vector<std::string> UpdateABTestFixedFlowDividersResult::getResult()const
{
	return result_;
}

