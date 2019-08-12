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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
	auto allCauseDetails = value["CauseDetails"]["CauseDetail"];
	for (auto value : allCauseDetails)
	{
		Data::CauseDetail causeDetailObject;
		if(!value["Key"].isNull())
			causeDetailObject.key = value["Key"].asString();
		auto allValue = value["Value"]["ValueItem"];
		for (auto value : allValue)
		{
			Data::CauseDetail::ValueItem valueObject;
			if(!value["Name"].isNull())
				valueObject.name = value["Name"].asString();
			if(!value["Type"].isNull())
				valueObject.type = value["Type"].asString();
			if(!value["Value"].isNull())
				valueObject.value = value["Value"].asString();
			causeDetailObject.value.push_back(valueObject);
		}
		data_.causeDetails.push_back(causeDetailObject);
	}

}

DescribeAlarmEventDetailResult::Data DescribeAlarmEventDetailResult::getData()const
{
	return data_;
}

