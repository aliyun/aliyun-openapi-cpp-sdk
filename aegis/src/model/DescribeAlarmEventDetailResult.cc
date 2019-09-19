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

#include <alibabacloud/aegis/model/DescribeAlarmEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	if(!dataNode["InternetIp"].isNull())
		data_.internetIp = dataNode["InternetIp"].asString();
	if(!dataNode["Level"].isNull())
		data_.level = dataNode["Level"].asString();
	if(!dataNode["InstanceName"].isNull())
		data_.instanceName = dataNode["InstanceName"].asString();
	if(!dataNode["AlarmEventAliasName"].isNull())
		data_.alarmEventAliasName = dataNode["AlarmEventAliasName"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Uuid"].isNull())
		data_.uuid = dataNode["Uuid"].asString();
	if(!dataNode["Solution"].isNull())
		data_.solution = dataNode["Solution"].asString();
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["AlarmEventDesc"].isNull())
		data_.alarmEventDesc = dataNode["AlarmEventDesc"].asString();
	if(!dataNode["IntranetIp"].isNull())
		data_.intranetIp = dataNode["IntranetIp"].asString();
	if(!dataNode["CanBeDealOnLine"].isNull())
		data_.canBeDealOnLine = dataNode["CanBeDealOnLine"].asString() == "true";
	if(!dataNode["AlarmUniqueInfo"].isNull())
		data_.alarmUniqueInfo = dataNode["AlarmUniqueInfo"].asString();
	if(!dataNode["DataSource"].isNull())
		data_.dataSource = dataNode["DataSource"].asString();
	if(!dataNode["CanCancelFault"].isNull())
		data_.canCancelFault = dataNode["CanCancelFault"].asString() == "true";
	if(!dataNode["HasTraceInfo"].isNull())
		data_.hasTraceInfo = dataNode["HasTraceInfo"].asString() == "true";
	if(!dataNode["AccessCode"].isNull())
		data_.accessCode = dataNode["AccessCode"].asString();
	if(!dataNode["Dealed"].isNull())
		data_.dealed = dataNode["Dealed"].asString() == "true";
	auto allCauseDetailsNode = dataNode["CauseDetails"]["CauseDetail"];
	for (auto dataNodeCauseDetailsCauseDetail : allCauseDetailsNode)
	{
		Data::CauseDetail causeDetailObject;
		if(!dataNodeCauseDetailsCauseDetail["Key"].isNull())
			causeDetailObject.key = dataNodeCauseDetailsCauseDetail["Key"].asString();
		auto allValueNode = allCauseDetailsNode["Value"]["ValueItem"];
		for (auto allCauseDetailsNodeValueValueItem : allValueNode)
		{
			Data::CauseDetail::ValueItem valueObject;
			if(!allCauseDetailsNodeValueValueItem["Name"].isNull())
				valueObject.name = allCauseDetailsNodeValueValueItem["Name"].asString();
			if(!allCauseDetailsNodeValueValueItem["Type"].isNull())
				valueObject.type = allCauseDetailsNodeValueValueItem["Type"].asString();
			if(!allCauseDetailsNodeValueValueItem["Value"].isNull())
				valueObject.value = allCauseDetailsNodeValueValueItem["Value"].asString();
			causeDetailObject.value.push_back(valueObject);
		}
		data_.causeDetails.push_back(causeDetailObject);
	}

}

DescribeAlarmEventDetailResult::Data DescribeAlarmEventDetailResult::getData()const
{
	return data_;
}

