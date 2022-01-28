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

#include <alibabacloud/ens/model/RescaleDeviceServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

RescaleDeviceServiceResult::RescaleDeviceServiceResult() :
	ServiceResult()
{}

RescaleDeviceServiceResult::RescaleDeviceServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RescaleDeviceServiceResult::~RescaleDeviceServiceResult()
{}

void RescaleDeviceServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceDetailInfosNode = value["ResourceDetailInfos"]["ResourceDetailInfo"];
	for (auto valueResourceDetailInfosResourceDetailInfo : allResourceDetailInfosNode)
	{
		ResourceDetailInfo resourceDetailInfosObject;
		if(!valueResourceDetailInfosResourceDetailInfo["RegionID"].isNull())
			resourceDetailInfosObject.regionID = valueResourceDetailInfosResourceDetailInfo["RegionID"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["ID"].isNull())
			resourceDetailInfosObject.iD = valueResourceDetailInfosResourceDetailInfo["ID"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["IP"].isNull())
			resourceDetailInfosObject.iP = valueResourceDetailInfosResourceDetailInfo["IP"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["Server"].isNull())
			resourceDetailInfosObject.server = valueResourceDetailInfosResourceDetailInfo["Server"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["Type"].isNull())
			resourceDetailInfosObject.type = valueResourceDetailInfosResourceDetailInfo["Type"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["Status"].isNull())
			resourceDetailInfosObject.status = valueResourceDetailInfosResourceDetailInfo["Status"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["Mac"].isNull())
			resourceDetailInfosObject.mac = valueResourceDetailInfosResourceDetailInfo["Mac"].asString();
		if(!valueResourceDetailInfosResourceDetailInfo["ISP"].isNull())
			resourceDetailInfosObject.iSP = valueResourceDetailInfosResourceDetailInfo["ISP"].asString();
		resourceDetailInfos_.push_back(resourceDetailInfosObject);
	}
	auto allDeviceIds = value["DeviceIds"]["DeviceId"];
	for (const auto &item : allDeviceIds)
		deviceIds_.push_back(item.asString());
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::vector<std::string> RescaleDeviceServiceResult::getDeviceIds()const
{
	return deviceIds_;
}

std::string RescaleDeviceServiceResult::getOrderId()const
{
	return orderId_;
}

std::vector<RescaleDeviceServiceResult::ResourceDetailInfo> RescaleDeviceServiceResult::getResourceDetailInfos()const
{
	return resourceDetailInfos_;
}

