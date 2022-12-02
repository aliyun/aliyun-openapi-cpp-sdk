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

#include <alibabacloud/sas/model/DescribeAlarmEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAlarmEventDetailResult::DescribeAlarmEventDetailResult() :
	ServiceResult()
{}

DescribeAlarmEventDetailResult::DescribeAlarmEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmEventDetailResult::~DescribeAlarmEventDetailResult()
{}

void DescribeAlarmEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Dealed"].isNull())
		data_.dealed = dataNode["Dealed"].asString() == "true";
	if(!dataNode["InternetIp"].isNull())
		data_.internetIp = dataNode["InternetIp"].asString();
	if(!dataNode["K8sClusterName"].isNull())
		data_.k8sClusterName = dataNode["K8sClusterName"].asString();
	if(!dataNode["ContainerImageId"].isNull())
		data_.containerImageId = dataNode["ContainerImageId"].asString();
	if(!dataNode["AlarmEventDesc"].isNull())
		data_.alarmEventDesc = dataNode["AlarmEventDesc"].asString();
	if(!dataNode["AlarmUniqueInfo"].isNull())
		data_.alarmUniqueInfo = dataNode["AlarmUniqueInfo"].asString();
	if(!dataNode["CanCancelFault"].isNull())
		data_.canCancelFault = dataNode["CanCancelFault"].asString() == "true";
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["CanBeDealOnLine"].isNull())
		data_.canBeDealOnLine = dataNode["CanBeDealOnLine"].asString() == "true";
	if(!dataNode["ContainerImageName"].isNull())
		data_.containerImageName = dataNode["ContainerImageName"].asString();
	if(!dataNode["K8sClusterId"].isNull())
		data_.k8sClusterId = dataNode["K8sClusterId"].asString();
	if(!dataNode["AccessCode"].isNull())
		data_.accessCode = dataNode["AccessCode"].asString();
	if(!dataNode["ContainHwMode"].isNull())
		data_.containHwMode = dataNode["ContainHwMode"].asString() == "true";
	if(!dataNode["InstanceName"].isNull())
		data_.instanceName = dataNode["InstanceName"].asString();
	if(!dataNode["K8sNodeId"].isNull())
		data_.k8sNodeId = dataNode["K8sNodeId"].asString();
	if(!dataNode["Solution"].isNull())
		data_.solution = dataNode["Solution"].asString();
	if(!dataNode["DataSource"].isNull())
		data_.dataSource = dataNode["DataSource"].asString();
	if(!dataNode["HasTraceInfo"].isNull())
		data_.hasTraceInfo = dataNode["HasTraceInfo"].asString() == "true";
	if(!dataNode["IntranetIp"].isNull())
		data_.intranetIp = dataNode["IntranetIp"].asString();
	if(!dataNode["AlarmEventAliasName"].isNull())
		data_.alarmEventAliasName = dataNode["AlarmEventAliasName"].asString();
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["Uuid"].isNull())
		data_.uuid = dataNode["Uuid"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["ContainerId"].isNull())
		data_.containerId = dataNode["ContainerId"].asString();
	if(!dataNode["K8sPodName"].isNull())
		data_.k8sPodName = dataNode["K8sPodName"].asString();
	if(!dataNode["K8sNamespace"].isNull())
		data_.k8sNamespace = dataNode["K8sNamespace"].asString();
	if(!dataNode["K8sNodeName"].isNull())
		data_.k8sNodeName = dataNode["K8sNodeName"].asString();
	if(!dataNode["Level"].isNull())
		data_.level = dataNode["Level"].asString();
	auto allCauseDetailsNode = dataNode["CauseDetails"]["CauseDetail"];
	for (auto dataNodeCauseDetailsCauseDetail : allCauseDetailsNode)
	{
		Data::CauseDetail causeDetailObject;
		if(!dataNodeCauseDetailsCauseDetail["Key"].isNull())
			causeDetailObject.key = dataNodeCauseDetailsCauseDetail["Key"].asString();
		auto allValueNode = dataNodeCauseDetailsCauseDetail["Value"]["ValueItem"];
		for (auto dataNodeCauseDetailsCauseDetailValueValueItem : allValueNode)
		{
			Data::CauseDetail::ValueItem valueObject;
			if(!dataNodeCauseDetailsCauseDetailValueValueItem["Type"].isNull())
				valueObject.type = dataNodeCauseDetailsCauseDetailValueValueItem["Type"].asString();
			if(!dataNodeCauseDetailsCauseDetailValueValueItem["Value"].isNull())
				valueObject.value = dataNodeCauseDetailsCauseDetailValueValueItem["Value"].asString();
			if(!dataNodeCauseDetailsCauseDetailValueValueItem["Name"].isNull())
				valueObject.name = dataNodeCauseDetailsCauseDetailValueValueItem["Name"].asString();
			causeDetailObject.value.push_back(valueObject);
		}
		data_.causeDetails.push_back(causeDetailObject);
	}

}

DescribeAlarmEventDetailResult::Data DescribeAlarmEventDetailResult::getData()const
{
	return data_;
}

