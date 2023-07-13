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

#include <alibabacloud/mse/model/GetApplicationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetApplicationListResult::GetApplicationListResult() :
	ServiceResult()
{}

GetApplicationListResult::GetApplicationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationListResult::~GetApplicationListResult()
{}

void GetApplicationListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["ApplicationList"];
	for (auto dataNodeResultApplicationList : allResultNode)
	{
		Data::ApplicationList applicationListObject;
		if(!dataNodeResultApplicationList["Status"].isNull())
			applicationListObject.status = std::stol(dataNodeResultApplicationList["Status"].asString());
		if(!dataNodeResultApplicationList["ExtraInfo"].isNull())
			applicationListObject.extraInfo = dataNodeResultApplicationList["ExtraInfo"].asString();
		if(!dataNodeResultApplicationList["AppName"].isNull())
			applicationListObject.appName = dataNodeResultApplicationList["AppName"].asString();
		if(!dataNodeResultApplicationList["LicenseKey"].isNull())
			applicationListObject.licenseKey = dataNodeResultApplicationList["LicenseKey"].asString();
		if(!dataNodeResultApplicationList["AppId"].isNull())
			applicationListObject.appId = dataNodeResultApplicationList["AppId"].asString();
		if(!dataNodeResultApplicationList["UserId"].isNull())
			applicationListObject.userId = dataNodeResultApplicationList["UserId"].asString();
		if(!dataNodeResultApplicationList["InstancesNumber"].isNull())
			applicationListObject.instancesNumber = std::stoi(dataNodeResultApplicationList["InstancesNumber"].asString());
		if(!dataNodeResultApplicationList["Source"].isNull())
			applicationListObject.source = dataNodeResultApplicationList["Source"].asString();
		if(!dataNodeResultApplicationList["Language"].isNull())
			applicationListObject.language = dataNodeResultApplicationList["Language"].asString();
		if(!dataNodeResultApplicationList["RegionId"].isNull())
			applicationListObject.regionId = dataNodeResultApplicationList["RegionId"].asString();
		if(!dataNodeResultApplicationList["Namespace"].isNull())
			applicationListObject._namespace = dataNodeResultApplicationList["Namespace"].asString();
		if(!dataNodeResultApplicationList["TagCount"].isNull())
			applicationListObject.tagCount = std::stol(dataNodeResultApplicationList["TagCount"].asString());
		data_.result.push_back(applicationListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetApplicationListResult::getMessage()const
{
	return message_;
}

int GetApplicationListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetApplicationListResult::Data GetApplicationListResult::getData()const
{
	return data_;
}

std::string GetApplicationListResult::getErrorCode()const
{
	return errorCode_;
}

int GetApplicationListResult::getCode()const
{
	return code_;
}

bool GetApplicationListResult::getSuccess()const
{
	return success_;
}

