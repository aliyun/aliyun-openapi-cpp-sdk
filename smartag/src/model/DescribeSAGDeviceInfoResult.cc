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

#include <alibabacloud/smartag/model/DescribeSAGDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSAGDeviceInfoResult::DescribeSAGDeviceInfoResult() :
	ServiceResult()
{}

DescribeSAGDeviceInfoResult::DescribeSAGDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSAGDeviceInfoResult::~DescribeSAGDeviceInfoResult()
{}

void DescribeSAGDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ServiceIP"].isNull())
		serviceIP_ = value["ServiceIP"].asString();
	if(!value["ControllerState"].isNull())
		controllerState_ = value["ControllerState"].asString();
	if(!value["SynStatus"].isNull())
		synStatus_ = value["SynStatus"].asString();
	if(!value["SmartAGType"].isNull())
		smartAGType_ = value["SmartAGType"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["VpnState"].isNull())
		vpnState_ = value["VpnState"].asString();
	if(!value["StartupTime"].isNull())
		startupTime_ = value["StartupTime"].asString();
	if(!value["LastConnectedControllerTime"].isNull())
		lastConnectedControllerTime_ = value["LastConnectedControllerTime"].asString();
	if(!value["ResettableStatus"].isNull())
		resettableStatus_ = value["ResettableStatus"].asString();

}

std::string DescribeSAGDeviceInfoResult::getServiceIP()const
{
	return serviceIP_;
}

std::string DescribeSAGDeviceInfoResult::getControllerState()const
{
	return controllerState_;
}

std::string DescribeSAGDeviceInfoResult::getSynStatus()const
{
	return synStatus_;
}

std::string DescribeSAGDeviceInfoResult::getSmartAGType()const
{
	return smartAGType_;
}

std::string DescribeSAGDeviceInfoResult::getVersion()const
{
	return version_;
}

std::string DescribeSAGDeviceInfoResult::getVpnState()const
{
	return vpnState_;
}

std::string DescribeSAGDeviceInfoResult::getStartupTime()const
{
	return startupTime_;
}

std::string DescribeSAGDeviceInfoResult::getResettableStatus()const
{
	return resettableStatus_;
}

std::string DescribeSAGDeviceInfoResult::getLastConnectedControllerTime()const
{
	return lastConnectedControllerTime_;
}

