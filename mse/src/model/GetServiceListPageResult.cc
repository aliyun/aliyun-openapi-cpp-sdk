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

#include <alibabacloud/mse/model/GetServiceListPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

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
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = dataNode["CurrentPage"].asString();
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = dataNode["TotalSize"].asString();
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = dataNode["PageNumber"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	auto allResultNode = dataNode["Result"]["MscServiceResponse"];
	for (auto dataNodeResultMscServiceResponse : allResultNode)
	{
		Data::MscServiceResponse mscServiceResponseObject;
		if(!dataNodeResultMscServiceResponse["EdasAppName"].isNull())
			mscServiceResponseObject.edasAppName = dataNodeResultMscServiceResponse["EdasAppName"].asString();
		if(!dataNodeResultMscServiceResponse["AppName"].isNull())
			mscServiceResponseObject.appName = dataNodeResultMscServiceResponse["AppName"].asString();
		if(!dataNodeResultMscServiceResponse["Version"].isNull())
			mscServiceResponseObject.version = dataNodeResultMscServiceResponse["Version"].asString();
		if(!dataNodeResultMscServiceResponse["InstanceNum"].isNull())
			mscServiceResponseObject.instanceNum = std::stoi(dataNodeResultMscServiceResponse["InstanceNum"].asString());
		if(!dataNodeResultMscServiceResponse["GmtModifyTime"].isNull())
			mscServiceResponseObject.gmtModifyTime = dataNodeResultMscServiceResponse["GmtModifyTime"].asString();
		if(!dataNodeResultMscServiceResponse["EdasAppId"].isNull())
			mscServiceResponseObject.edasAppId = dataNodeResultMscServiceResponse["EdasAppId"].asString();
		if(!dataNodeResultMscServiceResponse["AppId"].isNull())
			mscServiceResponseObject.appId = dataNodeResultMscServiceResponse["AppId"].asString();
		if(!dataNodeResultMscServiceResponse["ServiceName"].isNull())
			mscServiceResponseObject.serviceName = dataNodeResultMscServiceResponse["ServiceName"].asString();
		if(!dataNodeResultMscServiceResponse["Group"].isNull())
			mscServiceResponseObject.group = dataNodeResultMscServiceResponse["Group"].asString();
		if(!dataNodeResultMscServiceResponse["ClusterName"].isNull())
			mscServiceResponseObject.clusterName = dataNodeResultMscServiceResponse["ClusterName"].asString();
		data_.result.push_back(mscServiceResponseObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetServiceListPageResult::getMessage()const
{
	return message_;
}

int GetServiceListPageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
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

