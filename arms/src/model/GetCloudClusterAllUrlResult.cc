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

#include <alibabacloud/arms/model/GetCloudClusterAllUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetCloudClusterAllUrlResult::GetCloudClusterAllUrlResult() :
	ServiceResult()
{}

GetCloudClusterAllUrlResult::GetCloudClusterAllUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCloudClusterAllUrlResult::~GetCloudClusterAllUrlResult()
{}

void GetCloudClusterAllUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ProductCode"].isNull())
			dataObject.productCode = valueDataDataItem["ProductCode"].asString();
		if(!valueDataDataItem["Region"].isNull())
			dataObject.region = valueDataDataItem["Region"].asString();
		auto remoteUrlNode = value["RemoteUrl"];
		if(!remoteUrlNode["RemoteWriteUrl"].isNull())
			dataObject.remoteUrl.remoteWriteUrl = remoteUrlNode["RemoteWriteUrl"].asString();
		if(!remoteUrlNode["InternetRemoteWriteUrl"].isNull())
			dataObject.remoteUrl.internetRemoteWriteUrl = remoteUrlNode["InternetRemoteWriteUrl"].asString();
		if(!remoteUrlNode["RemoteReadUrl"].isNull())
			dataObject.remoteUrl.remoteReadUrl = remoteUrlNode["RemoteReadUrl"].asString();
		if(!remoteUrlNode["InternetRemoteReadUrl"].isNull())
			dataObject.remoteUrl.internetRemoteReadUrl = remoteUrlNode["InternetRemoteReadUrl"].asString();
		if(!remoteUrlNode["GrafanaUrl"].isNull())
			dataObject.remoteUrl.grafanaUrl = remoteUrlNode["GrafanaUrl"].asString();
		if(!remoteUrlNode["InternetGrafanaUrl"].isNull())
			dataObject.remoteUrl.internetGrafanaUrl = remoteUrlNode["InternetGrafanaUrl"].asString();
		if(!remoteUrlNode["InternetPushGatewayUrl"].isNull())
			dataObject.remoteUrl.internetPushGatewayUrl = remoteUrlNode["InternetPushGatewayUrl"].asString();
		if(!remoteUrlNode["PushGatewayUrl"].isNull())
			dataObject.remoteUrl.pushGatewayUrl = remoteUrlNode["PushGatewayUrl"].asString();
		if(!remoteUrlNode["AuthToken"].isNull())
			dataObject.remoteUrl.authToken = remoteUrlNode["AuthToken"].asString() == "true";
		if(!remoteUrlNode["Token"].isNull())
			dataObject.remoteUrl.token = remoteUrlNode["Token"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetCloudClusterAllUrlResult::getMessage()const
{
	return message_;
}

std::vector<GetCloudClusterAllUrlResult::DataItem> GetCloudClusterAllUrlResult::getData()const
{
	return data_;
}

int GetCloudClusterAllUrlResult::getCode()const
{
	return code_;
}

bool GetCloudClusterAllUrlResult::getSuccess()const
{
	return success_;
}

