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

#include <alibabacloud/nis/model/GetVbrFlowTopNResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetVbrFlowTopNResult::GetVbrFlowTopNResult() :
	ServiceResult()
{}

GetVbrFlowTopNResult::GetVbrFlowTopNResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVbrFlowTopNResult::~GetVbrFlowTopNResult()
{}

void GetVbrFlowTopNResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterFlowlogTopNNode = value["VirtualBorderRouterFlowlogTopN"]["VbrFlowlogTopN"];
	for (auto valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN : allVirtualBorderRouterFlowlogTopNNode)
	{
		VbrFlowlogTopN virtualBorderRouterFlowlogTopNObject;
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudRegion"].isNull())
			virtualBorderRouterFlowlogTopNObject.cloudRegion = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudRegion"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudIp"].isNull())
			virtualBorderRouterFlowlogTopNObject.cloudIp = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudIp"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["OtherIp"].isNull())
			virtualBorderRouterFlowlogTopNObject.otherIp = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["OtherIp"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudPort"].isNull())
			virtualBorderRouterFlowlogTopNObject.cloudPort = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["CloudPort"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["OtherPort"].isNull())
			virtualBorderRouterFlowlogTopNObject.otherPort = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["OtherPort"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Protocol"].isNull())
			virtualBorderRouterFlowlogTopNObject.protocol = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Protocol"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["AttachmentId"].isNull())
			virtualBorderRouterFlowlogTopNObject.attachmentId = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["AttachmentId"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["VirtualBorderRouterId"].isNull())
			virtualBorderRouterFlowlogTopNObject.virtualBorderRouterId = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["VirtualBorderRouterId"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Bytes"].isNull())
			virtualBorderRouterFlowlogTopNObject.bytes = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Bytes"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Packets"].isNull())
			virtualBorderRouterFlowlogTopNObject.packets = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["Packets"].asString();
		if(!valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["AccountId"].isNull())
			virtualBorderRouterFlowlogTopNObject.accountId = valueVirtualBorderRouterFlowlogTopNVbrFlowlogTopN["AccountId"].asString();
		virtualBorderRouterFlowlogTopN_.push_back(virtualBorderRouterFlowlogTopNObject);
	}

}

std::vector<GetVbrFlowTopNResult::VbrFlowlogTopN> GetVbrFlowTopNResult::getVirtualBorderRouterFlowlogTopN()const
{
	return virtualBorderRouterFlowlogTopN_;
}

