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

#include <alibabacloud/arms/model/GetTraceAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetTraceAppResult::GetTraceAppResult() :
	ServiceResult()
{}

GetTraceAppResult::GetTraceAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTraceAppResult::~GetTraceAppResult()
{}

void GetTraceAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto traceAppNode = value["TraceApp"];
	if(!traceAppNode["Type"].isNull())
		traceApp_.type = traceAppNode["Type"].asString();
	if(!traceAppNode["AppName"].isNull())
		traceApp_.appName = traceAppNode["AppName"].asString();
	if(!traceAppNode["UpdateTime"].isNull())
		traceApp_.updateTime = std::stol(traceAppNode["UpdateTime"].asString());
	if(!traceAppNode["Show"].isNull())
		traceApp_.show = traceAppNode["Show"].asString() == "true";
	if(!traceAppNode["CreateTime"].isNull())
		traceApp_.createTime = std::stol(traceAppNode["CreateTime"].asString());
	if(!traceAppNode["Pid"].isNull())
		traceApp_.pid = traceAppNode["Pid"].asString();
	if(!traceAppNode["AppId"].isNull())
		traceApp_.appId = std::stol(traceAppNode["AppId"].asString());
	if(!traceAppNode["UserId"].isNull())
		traceApp_.userId = traceAppNode["UserId"].asString();
	if(!traceAppNode["RegionId"].isNull())
		traceApp_.regionId = traceAppNode["RegionId"].asString();
	if(!traceAppNode["Source"].isNull())
		traceApp_.source = traceAppNode["Source"].asString();
	if(!traceAppNode["ResourceGroupId"].isNull())
		traceApp_.resourceGroupId = traceAppNode["ResourceGroupId"].asString();
	if(!traceAppNode["ClusterId"].isNull())
		traceApp_.clusterId = traceAppNode["ClusterId"].asString();
	if(!traceAppNode["Language"].isNull())
		traceApp_.language = traceAppNode["Language"].asString();
	auto allTagsNode = traceAppNode["Tags"]["TagsItem"];
	for (auto traceAppNodeTagsTagsItem : allTagsNode)
	{
		TraceApp::TagsItem tagsItemObject;
		if(!traceAppNodeTagsTagsItem["Key"].isNull())
			tagsItemObject.key = traceAppNodeTagsTagsItem["Key"].asString();
		if(!traceAppNodeTagsTagsItem["Value"].isNull())
			tagsItemObject.value = traceAppNodeTagsTagsItem["Value"].asString();
		traceApp_.tags.push_back(tagsItemObject);
	}
		auto allLabels = traceAppNode["Labels"]["Labels"];
		for (auto value : allLabels)
			traceApp_.labels.push_back(value.asString());

}

GetTraceAppResult::TraceApp GetTraceAppResult::getTraceApp()const
{
	return traceApp_;
}

