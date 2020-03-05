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

#include <alibabacloud/ehpc/model/DescribeGWSClusterPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeGWSClusterPolicyResult::DescribeGWSClusterPolicyResult() :
	ServiceResult()
{}

DescribeGWSClusterPolicyResult::DescribeGWSClusterPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGWSClusterPolicyResult::~DescribeGWSClusterPolicyResult()
{}

void DescribeGWSClusterPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Clipboard"].isNull())
		clipboard_ = value["Clipboard"].asString();
	if(!value["UsbRedirect"].isNull())
		usbRedirect_ = value["UsbRedirect"].asString();
	if(!value["Watermark"].isNull())
		watermark_ = value["Watermark"].asString();
	if(!value["LocalDrive"].isNull())
		localDrive_ = value["LocalDrive"].asString();

}

std::string DescribeGWSClusterPolicyResult::getLocalDrive()const
{
	return localDrive_;
}

std::string DescribeGWSClusterPolicyResult::getUsbRedirect()const
{
	return usbRedirect_;
}

std::string DescribeGWSClusterPolicyResult::getClipboard()const
{
	return clipboard_;
}

std::string DescribeGWSClusterPolicyResult::getWatermark()const
{
	return watermark_;
}

