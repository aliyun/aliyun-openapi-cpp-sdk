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

#include <alibabacloud/emr/model/DescribeAvailableInstanceTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeAvailableInstanceTypeResult::DescribeAvailableInstanceTypeResult() :
	ServiceResult()
{}

DescribeAvailableInstanceTypeResult::DescribeAvailableInstanceTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableInstanceTypeResult::~DescribeAvailableInstanceTypeResult()
{}

void DescribeAvailableInstanceTypeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEmrSupportedInstanceTypeList = value["EmrSupportedInstanceTypeList"]["EmrSupportInstanceType"];
	for (auto value : allEmrSupportedInstanceTypeList)
	{
		EmrSupportInstanceType emrSupportedInstanceTypeListObject;
		if(!value["ClusterType"].isNull())
			emrSupportedInstanceTypeListObject.clusterType = value["ClusterType"].asString();
		auto allNodeTypeSupportInfoList = value["NodeTypeSupportInfoList"]["ClusterNodeTypeSupportInfo"];
		for (auto value : allNodeTypeSupportInfoList)
		{
			EmrSupportInstanceType::ClusterNodeTypeSupportInfo nodeTypeSupportInfoListObject;
			if(!value["ClusterNodeType"].isNull())
				nodeTypeSupportInfoListObject.clusterNodeType = value["ClusterNodeType"].asString();
			auto allSupportInstanceTypeList = value["SupportInstanceTypeList"]["InstanceType"];
			for (auto value : allSupportInstanceTypeList)
				nodeTypeSupportInfoListObject.supportInstanceTypeList.push_back(value.asString());
			emrSupportedInstanceTypeListObject.nodeTypeSupportInfoList.push_back(nodeTypeSupportInfoListObject);
		}
		emrSupportedInstanceTypeList_.push_back(emrSupportedInstanceTypeListObject);
	}

}

std::vector<DescribeAvailableInstanceTypeResult::EmrSupportInstanceType> DescribeAvailableInstanceTypeResult::getEmrSupportedInstanceTypeList()const
{
	return emrSupportedInstanceTypeList_;
}

