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

#include <alibabacloud/sddp/model/DescribeUseFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeUseFlowResult::DescribeUseFlowResult() :
	ServiceResult()
{}

DescribeUseFlowResult::DescribeUseFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUseFlowResult::~DescribeUseFlowResult()
{}

void DescribeUseFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto useFlowNode = value["UseFlow"];
	if(!useFlowNode["TableNum"].isNull())
		useFlow_.tableNum = std::stol(useFlowNode["TableNum"].asString());
	if(!useFlowNode["OssSize"].isNull())
		useFlow_.ossSize = std::stol(useFlowNode["OssSize"].asString());
	if(!useFlowNode["DataMaskCells"].isNull())
		useFlow_.dataMaskCells = std::stol(useFlowNode["DataMaskCells"].asString());

}

DescribeUseFlowResult::UseFlow DescribeUseFlowResult::getUseFlow()const
{
	return useFlow_;
}

