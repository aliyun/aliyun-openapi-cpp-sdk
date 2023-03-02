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

#include <alibabacloud/lto/model/ListDeviceGroupAuthorizedBizChainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListDeviceGroupAuthorizedBizChainResult::ListDeviceGroupAuthorizedBizChainResult() :
	ServiceResult()
{}

ListDeviceGroupAuthorizedBizChainResult::ListDeviceGroupAuthorizedBizChainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceGroupAuthorizedBizChainResult::~ListDeviceGroupAuthorizedBizChainResult()
{}

void ListDeviceGroupAuthorizedBizChainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DeviceGroupAuthorizedInfo"];
	for (auto valueDataDeviceGroupAuthorizedInfo : allDataNode)
	{
		DeviceGroupAuthorizedInfo dataObject;
		if(!valueDataDeviceGroupAuthorizedInfo["BizChainName"].isNull())
			dataObject.bizChainName = valueDataDeviceGroupAuthorizedInfo["BizChainName"].asString();
		if(!valueDataDeviceGroupAuthorizedInfo["BizChainId"].isNull())
			dataObject.bizChainId = valueDataDeviceGroupAuthorizedInfo["BizChainId"].asString();
		if(!valueDataDeviceGroupAuthorizedInfo["Authorized"].isNull())
			dataObject.authorized = valueDataDeviceGroupAuthorizedInfo["Authorized"].asString() == "true";
		if(!valueDataDeviceGroupAuthorizedInfo["BlockChainType"].isNull())
			dataObject.blockChainType = valueDataDeviceGroupAuthorizedInfo["BlockChainType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListDeviceGroupAuthorizedBizChainResult::getMessage()const
{
	return message_;
}

int ListDeviceGroupAuthorizedBizChainResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListDeviceGroupAuthorizedBizChainResult::DeviceGroupAuthorizedInfo> ListDeviceGroupAuthorizedBizChainResult::getData()const
{
	return data_;
}

std::string ListDeviceGroupAuthorizedBizChainResult::getCode()const
{
	return code_;
}

bool ListDeviceGroupAuthorizedBizChainResult::getSuccess()const
{
	return success_;
}

