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

#include <alibabacloud/cc5g/model/GetCardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

GetCardResult::GetCardResult() :
	ServiceResult()
{}

GetCardResult::GetCardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCardResult::~GetCardResult()
{}

void GetCardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Iccid"].isNull())
		iccid_ = value["Iccid"].asString();
	if(!value["NetType"].isNull())
		netType_ = value["NetType"].asString();
	if(!value["APN"].isNull())
		aPN_ = value["APN"].asString();
	if(!value["ISP"].isNull())
		iSP_ = value["ISP"].asString();
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["Imsi"].isNull())
		imsi_ = value["Imsi"].asString();
	if(!value["Imei"].isNull())
		imei_ = value["Imei"].asString();
	if(!value["Lock"].isNull())
		lock_ = value["Lock"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["SimStatus"].isNull())
		simStatus_ = value["SimStatus"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["WirelessCloudConnectorId"].isNull())
		wirelessCloudConnectorId_ = value["WirelessCloudConnectorId"].asString();
	if(!value["CloudConnectorId"].isNull())
		cloudConnectorId_ = value["CloudConnectorId"].asString();
	if(!value["UsageDataMonth"].isNull())
		usageDataMonth_ = std::stoi(value["UsageDataMonth"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["ActivatedTime"].isNull())
		activatedTime_ = value["ActivatedTime"].asString();
	if(!value["Msisdn"].isNull())
		msisdn_ = value["Msisdn"].asString();
	if(!value["UsageDataTotal"].isNull())
		usageDataTotal_ = std::stol(value["UsageDataTotal"].asString());
	if(!value["LimitThreshold"].isNull())
		limitThreshold_ = std::stol(value["LimitThreshold"].asString());
	if(!value["StopThreshold"].isNull())
		stopThreshold_ = std::stol(value["StopThreshold"].asString());
	if(!value["AlarmThreshold"].isNull())
		alarmThreshold_ = std::stol(value["AlarmThreshold"].asString());

}

std::string GetCardResult::getStatus()const
{
	return status_;
}

long GetCardResult::getUsageDataTotal()const
{
	return usageDataTotal_;
}

std::string GetCardResult::getDescription()const
{
	return description_;
}

int GetCardResult::getUsageDataMonth()const
{
	return usageDataMonth_;
}

std::string GetCardResult::getISP()const
{
	return iSP_;
}

std::string GetCardResult::getImei()const
{
	return imei_;
}

std::string GetCardResult::getSimStatus()const
{
	return simStatus_;
}

std::string GetCardResult::getOrderId()const
{
	return orderId_;
}

long GetCardResult::getAlarmThreshold()const
{
	return alarmThreshold_;
}

std::string GetCardResult::getLock()const
{
	return lock_;
}

std::string GetCardResult::getName()const
{
	return name_;
}

long GetCardResult::getStopThreshold()const
{
	return stopThreshold_;
}

std::string GetCardResult::getMsisdn()const
{
	return msisdn_;
}

long GetCardResult::getLimitThreshold()const
{
	return limitThreshold_;
}

std::string GetCardResult::getWirelessCloudConnectorId()const
{
	return wirelessCloudConnectorId_;
}

std::string GetCardResult::getActivatedTime()const
{
	return activatedTime_;
}

std::string GetCardResult::getCloudConnectorId()const
{
	return cloudConnectorId_;
}

std::string GetCardResult::getIccid()const
{
	return iccid_;
}

std::string GetCardResult::getImsi()const
{
	return imsi_;
}

std::string GetCardResult::getIpAddress()const
{
	return ipAddress_;
}

std::string GetCardResult::getSpec()const
{
	return spec_;
}

std::string GetCardResult::getNetType()const
{
	return netType_;
}

std::string GetCardResult::getAPN()const
{
	return aPN_;
}

