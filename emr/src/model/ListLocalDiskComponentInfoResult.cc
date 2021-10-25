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

#include <alibabacloud/emr/model/ListLocalDiskComponentInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListLocalDiskComponentInfoResult::ListLocalDiskComponentInfoResult() :
	ServiceResult()
{}

ListLocalDiskComponentInfoResult::ListLocalDiskComponentInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLocalDiskComponentInfoResult::~ListLocalDiskComponentInfoResult()
{}

void ListLocalDiskComponentInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentInfoListNode = value["ComponentInfoList"]["ComponentInfo"];
	for (auto valueComponentInfoListComponentInfo : allComponentInfoListNode)
	{
		ComponentInfo componentInfoListObject;
		if(!valueComponentInfoListComponentInfo["ServiceName"].isNull())
			componentInfoListObject.serviceName = valueComponentInfoListComponentInfo["ServiceName"].asString();
		if(!valueComponentInfoListComponentInfo["ServiceDisplayName"].isNull())
			componentInfoListObject.serviceDisplayName = valueComponentInfoListComponentInfo["ServiceDisplayName"].asString();
		if(!valueComponentInfoListComponentInfo["ComponentName"].isNull())
			componentInfoListObject.componentName = valueComponentInfoListComponentInfo["ComponentName"].asString();
		if(!valueComponentInfoListComponentInfo["ComponentDisplayName"].isNull())
			componentInfoListObject.componentDisplayName = valueComponentInfoListComponentInfo["ComponentDisplayName"].asString();
		if(!valueComponentInfoListComponentInfo["IsolateWarningMsg"].isNull())
			componentInfoListObject.isolateWarningMsg = valueComponentInfoListComponentInfo["IsolateWarningMsg"].asString();
		if(!valueComponentInfoListComponentInfo["MountWarningMsg"].isNull())
			componentInfoListObject.mountWarningMsg = valueComponentInfoListComponentInfo["MountWarningMsg"].asString();
		if(!valueComponentInfoListComponentInfo["RebootWarningMsg"].isNull())
			componentInfoListObject.rebootWarningMsg = valueComponentInfoListComponentInfo["RebootWarningMsg"].asString();
		if(!valueComponentInfoListComponentInfo["SupportDiskHotSwap"].isNull())
			componentInfoListObject.supportDiskHotSwap = valueComponentInfoListComponentInfo["SupportDiskHotSwap"].asString() == "true";
		auto allMountParamsNode = valueComponentInfoListComponentInfo["MountParams"]["MountParam"];
		for (auto valueComponentInfoListComponentInfoMountParamsMountParam : allMountParamsNode)
		{
			ComponentInfo::MountParam mountParamsObject;
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Name"].isNull())
				mountParamsObject.name = valueComponentInfoListComponentInfoMountParamsMountParam["Name"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Key"].isNull())
				mountParamsObject.key = valueComponentInfoListComponentInfoMountParamsMountParam["Key"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["ValueType"].isNull())
				mountParamsObject.valueType = valueComponentInfoListComponentInfoMountParamsMountParam["ValueType"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["DefaultValue"].isNull())
				mountParamsObject.defaultValue = valueComponentInfoListComponentInfoMountParamsMountParam["DefaultValue"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Tips"].isNull())
				mountParamsObject.tips = valueComponentInfoListComponentInfoMountParamsMountParam["Tips"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Unit"].isNull())
				mountParamsObject.unit = valueComponentInfoListComponentInfoMountParamsMountParam["Unit"].asString();
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Min"].isNull())
				mountParamsObject.min = std::stoi(valueComponentInfoListComponentInfoMountParamsMountParam["Min"].asString());
			if(!valueComponentInfoListComponentInfoMountParamsMountParam["Max"].isNull())
				mountParamsObject.max = std::stoi(valueComponentInfoListComponentInfoMountParamsMountParam["Max"].asString());
			auto allOptions = value["Options"]["Option"];
			for (auto value : allOptions)
				mountParamsObject.options.push_back(value.asString());
			componentInfoListObject.mountParams.push_back(mountParamsObject);
		}
		auto allApmMetrics = value["ApmMetrics"]["ApmMetric"];
		for (auto value : allApmMetrics)
			componentInfoListObject.apmMetrics.push_back(value.asString());
		componentInfoList_.push_back(componentInfoListObject);
	}

}

std::vector<ListLocalDiskComponentInfoResult::ComponentInfo> ListLocalDiskComponentInfoResult::getComponentInfoList()const
{
	return componentInfoList_;
}

