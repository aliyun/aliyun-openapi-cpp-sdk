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

#include <alibabacloud/emr/model/DescribeClusterScriptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterScriptResult::DescribeClusterScriptResult() :
	ServiceResult()
{}

DescribeClusterScriptResult::DescribeClusterScriptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterScriptResult::~DescribeClusterScriptResult()
{}

void DescribeClusterScriptResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allScriptNodeInstances = value["ScriptNodeInstances"]["ScriptNodeInstance"];
	for (auto value : allScriptNodeInstances)
	{
		ScriptNodeInstance scriptNodeInstancesObject;
		if(!value["NodeId"].isNull())
			scriptNodeInstancesObject.nodeId = value["NodeId"].asString();
		if(!value["NodeIp"].isNull())
			scriptNodeInstancesObject.nodeIp = value["NodeIp"].asString();
		if(!value["StartTime"].isNull())
			scriptNodeInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			scriptNodeInstancesObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Status"].isNull())
			scriptNodeInstancesObject.status = value["Status"].asString();
		scriptNodeInstances_.push_back(scriptNodeInstancesObject);
	}

}

std::vector<DescribeClusterScriptResult::ScriptNodeInstance> DescribeClusterScriptResult::getScriptNodeInstances()const
{
	return scriptNodeInstances_;
}

