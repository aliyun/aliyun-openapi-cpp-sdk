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

#include <alibabacloud/sophonsoar/model/DescribeLatestRecordSchemaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeLatestRecordSchemaResult::DescribeLatestRecordSchemaResult() :
	ServiceResult()
{}

DescribeLatestRecordSchemaResult::DescribeLatestRecordSchemaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLatestRecordSchemaResult::~DescribeLatestRecordSchemaResult()
{}

void DescribeLatestRecordSchemaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto playbookNodeSchemaNode = value["PlaybookNodeSchema"];
	if(!playbookNodeSchemaNode["IsFinished"].isNull())
		playbookNodeSchema_.isFinished = playbookNodeSchemaNode["IsFinished"].asString() == "true";
	auto allNodeSchemaNode = playbookNodeSchemaNode["NodeSchema"]["NodeSchemaItem"];
	for (auto playbookNodeSchemaNodeNodeSchemaNodeSchemaItem : allNodeSchemaNode)
	{
		PlaybookNodeSchema::NodeSchemaItem nodeSchemaItemObject;
		if(!playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["NodeName"].isNull())
			nodeSchemaItemObject.nodeName = playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["NodeName"].asString();
		if(!playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["ComponentName"].isNull())
			nodeSchemaItemObject.componentName = playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["ComponentName"].asString();
		if(!playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["ActionName"].isNull())
			nodeSchemaItemObject.actionName = playbookNodeSchemaNodeNodeSchemaNodeSchemaItem["ActionName"].asString();
		auto allOutputFields = value["OutputFields"]["OutputField"];
		for (auto value : allOutputFields)
			nodeSchemaItemObject.outputFields.push_back(value.asString());
		playbookNodeSchema_.nodeSchema.push_back(nodeSchemaItemObject);
	}

}

DescribeLatestRecordSchemaResult::PlaybookNodeSchema DescribeLatestRecordSchemaResult::getPlaybookNodeSchema()const
{
	return playbookNodeSchema_;
}

