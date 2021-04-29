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

#include <alibabacloud/smartag/model/GetSmartAGDpiAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

GetSmartAGDpiAttributeResult::GetSmartAGDpiAttributeResult() :
	ServiceResult()
{}

GetSmartAGDpiAttributeResult::GetSmartAGDpiAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSmartAGDpiAttributeResult::~GetSmartAGDpiAttributeResult()
{}

void GetSmartAGDpiAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LogstoreName"].isNull())
		logstoreName_ = value["LogstoreName"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["SlsRegion"].isNull())
		slsRegion_ = value["SlsRegion"].asString();
	if(!value["DpiMonitorStatus"].isNull())
		dpiMonitorStatus_ = value["DpiMonitorStatus"].asString();
	if(!value["DpiStatus"].isNull())
		dpiStatus_ = value["DpiStatus"].asString();

}

std::string GetSmartAGDpiAttributeResult::getLogstoreName()const
{
	return logstoreName_;
}

std::string GetSmartAGDpiAttributeResult::getProjectName()const
{
	return projectName_;
}

std::string GetSmartAGDpiAttributeResult::getSlsRegion()const
{
	return slsRegion_;
}

std::string GetSmartAGDpiAttributeResult::getDpiMonitorStatus()const
{
	return dpiMonitorStatus_;
}

std::string GetSmartAGDpiAttributeResult::getDpiStatus()const
{
	return dpiStatus_;
}

