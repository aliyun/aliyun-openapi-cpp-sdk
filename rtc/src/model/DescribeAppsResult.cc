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

#include <alibabacloud/rtc/model/DescribeAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeAppsResult::DescribeAppsResult() :
	ServiceResult()
{}

DescribeAppsResult::DescribeAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppsResult::~DescribeAppsResult()
{}

void DescribeAppsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAppList = value["AppList"]["App"];
	for (auto value : allAppList)
	{
		App appListObject;
		if(!value["Status"].isNull())
			appListObject.status = std::stoi(value["Status"].asString());
		if(!value["AppId"].isNull())
			appListObject.appId = value["AppId"].asString();
		if(!value["AppName"].isNull())
			appListObject.appName = value["AppName"].asString();
		if(!value["CreateTime"].isNull())
			appListObject.createTime = value["CreateTime"].asString();
		if(!value["AppType"].isNull())
			appListObject.appType = value["AppType"].asString();
		if(!value["BillType"].isNull())
			appListObject.billType = value["BillType"].asString();
		auto allServiceAreas = value["ServiceAreas"]["ServiceArea"];
		for (auto value : allServiceAreas)
			appListObject.serviceAreas.push_back(value.asString());
		appList_.push_back(appListObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeAppsResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeAppsResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeAppsResult::App> DescribeAppsResult::getAppList()const
{
	return appList_;
}

