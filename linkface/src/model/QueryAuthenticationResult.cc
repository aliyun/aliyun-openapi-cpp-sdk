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

#include <alibabacloud/linkface/model/QueryAuthenticationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkFace;
using namespace AlibabaCloud::LinkFace::Model;

QueryAuthenticationResult::QueryAuthenticationResult() :
	ServiceResult()
{}

QueryAuthenticationResult::QueryAuthenticationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAuthenticationResult::~QueryAuthenticationResult()
{}

void QueryAuthenticationResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["LicenseType"].isNull())
			dataObject.licenseType = std::stoi(value["LicenseType"].asString());
		if(!value["IotId"].isNull())
			dataObject.iotId = value["IotId"].asString();
		if(!value["BeginTime"].isNull())
			dataObject.beginTime = value["BeginTime"].asString();
		if(!value["ExpiredTime"].isNull())
			dataObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["ApkPubkey"].isNull())
			dataObject.apkPubkey = value["ApkPubkey"].asString();
		if(!value["PackageName"].isNull())
			dataObject.packageName = value["PackageName"].asString();
		if(!value["ClientId"].isNull())
			dataObject.clientId = value["ClientId"].asString();
		if(!value["ProductKey"].isNull())
			dataObject.productKey = value["ProductKey"].asString();
		if(!value["DeviceName"].isNull())
			dataObject.deviceName = value["DeviceName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAuthenticationResult::getMessage()const
{
	return message_;
}

int QueryAuthenticationResult::getPageCount()const
{
	return pageCount_;
}

int QueryAuthenticationResult::getPageSize()const
{
	return pageSize_;
}

int QueryAuthenticationResult::getTotal()const
{
	return total_;
}

std::vector<QueryAuthenticationResult::DataItem> QueryAuthenticationResult::getData()const
{
	return data_;
}

int QueryAuthenticationResult::getPage()const
{
	return page_;
}

int QueryAuthenticationResult::getCode()const
{
	return code_;
}

bool QueryAuthenticationResult::getSuccess()const
{
	return success_;
}

