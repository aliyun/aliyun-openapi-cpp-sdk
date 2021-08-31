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

#include <alibabacloud/edas/model/GetServiceListPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetServiceListPageResult::GetServiceListPageResult() :
	ServiceResult()
{}

GetServiceListPageResult::GetServiceListPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceListPageResult::~GetServiceListPageResult()
{}

void GetServiceListPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	if(!dataNode["TotalElements"].isNull())
		data_.totalElements = std::stoi(dataNode["TotalElements"].asString());
	if(!dataNode["TotalPages"].isNull())
		data_.totalPages = std::stoi(dataNode["TotalPages"].asString());
	auto allContentNode = dataNode["Content"]["MseServiceResponse"];
	for (auto dataNodeContentMseServiceResponse : allContentNode)
	{
		Data::MseServiceResponse mseServiceResponseObject;
		if(!dataNodeContentMseServiceResponse["ServiceId"].isNull())
			mseServiceResponseObject.serviceId = dataNodeContentMseServiceResponse["ServiceId"].asString();
		if(!dataNodeContentMseServiceResponse["ServiceName"].isNull())
			mseServiceResponseObject.serviceName = dataNodeContentMseServiceResponse["ServiceName"].asString();
		if(!dataNodeContentMseServiceResponse["Version"].isNull())
			mseServiceResponseObject.version = dataNodeContentMseServiceResponse["Version"].asString();
		if(!dataNodeContentMseServiceResponse["Group"].isNull())
			mseServiceResponseObject.group = dataNodeContentMseServiceResponse["Group"].asString();
		if(!dataNodeContentMseServiceResponse["EdasAppId"].isNull())
			mseServiceResponseObject.edasAppId = dataNodeContentMseServiceResponse["EdasAppId"].asString();
		if(!dataNodeContentMseServiceResponse["EdasAppName"].isNull())
			mseServiceResponseObject.edasAppName = dataNodeContentMseServiceResponse["EdasAppName"].asString();
		if(!dataNodeContentMseServiceResponse["InstanceNum"].isNull())
			mseServiceResponseObject.instanceNum = std::stoi(dataNodeContentMseServiceResponse["InstanceNum"].asString());
		if(!dataNodeContentMseServiceResponse["RegisterType"].isNull())
			mseServiceResponseObject.registerType = dataNodeContentMseServiceResponse["RegisterType"].asString();
		data_.content.push_back(mseServiceResponseObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetServiceListPageResult::getMessage()const
{
	return message_;
}

GetServiceListPageResult::Data GetServiceListPageResult::getData()const
{
	return data_;
}

int GetServiceListPageResult::getCode()const
{
	return code_;
}

bool GetServiceListPageResult::getSuccess()const
{
	return success_;
}

