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

#include <alibabacloud/linkwan/model/ListNodeTransferPacketPathsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodeTransferPacketPathsResult::ListNodeTransferPacketPathsResult() :
	ServiceResult()
{}

ListNodeTransferPacketPathsResult::ListNodeTransferPacketPathsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeTransferPacketPathsResult::~ListNodeTransferPacketPathsResult()
{}

void ListNodeTransferPacketPathsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Path"];
	for (auto dataNodeListPath : allListNode)
	{
		Data::Path pathObject;
		if(!dataNodeListPath["GwEui"].isNull())
			pathObject.gwEui = dataNodeListPath["GwEui"].asString();
		if(!dataNodeListPath["DevEui"].isNull())
			pathObject.devEui = dataNodeListPath["DevEui"].asString();
		if(!dataNodeListPath["Rssi"].isNull())
			pathObject.rssi = std::stoi(dataNodeListPath["Rssi"].asString());
		if(!dataNodeListPath["Lsnr"].isNull())
			pathObject.lsnr = std::stof(dataNodeListPath["Lsnr"].asString());
		if(!dataNodeListPath["BestPath"].isNull())
			pathObject.bestPath = dataNodeListPath["BestPath"].asString() == "true";
		data_.list.push_back(pathObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListNodeTransferPacketPathsResult::Data ListNodeTransferPacketPathsResult::getData()const
{
	return data_;
}

bool ListNodeTransferPacketPathsResult::getSuccess()const
{
	return success_;
}

