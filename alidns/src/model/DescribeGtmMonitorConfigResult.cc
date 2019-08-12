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

#include <alibabacloud/alidns/model/DescribeGtmMonitorConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmMonitorConfigResult::DescribeGtmMonitorConfigResult() :
	ServiceResult()
{}

DescribeGtmMonitorConfigResult::DescribeGtmMonitorConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmMonitorConfigResult::~DescribeGtmMonitorConfigResult()
{}

void DescribeGtmMonitorConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allIspCityNodes = value["IspCityNodes"]["IspCityNode"];
	for (auto value : allIspCityNodes)
	{
		IspCityNode ispCityNodesObject;
		if(!value["CountryName"].isNull())
			ispCityNodesObject.countryName = value["CountryName"].asString();
		if(!value["CountryCode"].isNull())
			ispCityNodesObject.countryCode = value["CountryCode"].asString();
		if(!value["CityName"].isNull())
			ispCityNodesObject.cityName = value["CityName"].asString();
		if(!value["CityCode"].isNull())
			ispCityNodesObject.cityCode = value["CityCode"].asString();
		ispCityNodes_.push_back(ispCityNodesObject);
	}
	if(!value["MonitorConfigId"].isNull())
		monitorConfigId_ = value["MonitorConfigId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["UpdateTimestamp"].isNull())
		updateTimestamp_ = std::stol(value["UpdateTimestamp"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ProtocolType"].isNull())
		protocolType_ = value["ProtocolType"].asString();
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());
	if(!value["EvaluationCount"].isNull())
		evaluationCount_ = std::stoi(value["EvaluationCount"].asString());
	if(!value["Timeout"].isNull())
		timeout_ = std::stoi(value["Timeout"].asString());
	if(!value["MonitorExtendInfo"].isNull())
		monitorExtendInfo_ = value["MonitorExtendInfo"].asString();

}

std::vector<DescribeGtmMonitorConfigResult::IspCityNode> DescribeGtmMonitorConfigResult::getIspCityNodes()const
{
	return ispCityNodes_;
}

std::string DescribeGtmMonitorConfigResult::getProtocolType()const
{
	return protocolType_;
}

int DescribeGtmMonitorConfigResult::getTimeout()const
{
	return timeout_;
}

std::string DescribeGtmMonitorConfigResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeGtmMonitorConfigResult::getUpdateTime()const
{
	return updateTime_;
}

int DescribeGtmMonitorConfigResult::getEvaluationCount()const
{
	return evaluationCount_;
}

long DescribeGtmMonitorConfigResult::getUpdateTimestamp()const
{
	return updateTimestamp_;
}

std::string DescribeGtmMonitorConfigResult::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

std::string DescribeGtmMonitorConfigResult::getMonitorConfigId()const
{
	return monitorConfigId_;
}

long DescribeGtmMonitorConfigResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

std::string DescribeGtmMonitorConfigResult::getName()const
{
	return name_;
}

int DescribeGtmMonitorConfigResult::getInterval()const
{
	return interval_;
}

