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

#include <alibabacloud/dcdn/model/DescribeDcdnSLSRealtimeLogDeliveryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnSLSRealtimeLogDeliveryResult::DescribeDcdnSLSRealtimeLogDeliveryResult() :
	ServiceResult()
{}

DescribeDcdnSLSRealtimeLogDeliveryResult::DescribeDcdnSLSRealtimeLogDeliveryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnSLSRealtimeLogDeliveryResult::~DescribeDcdnSLSRealtimeLogDeliveryResult()
{}

void DescribeDcdnSLSRealtimeLogDeliveryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Type"].isNull())
		content_.type = contentNode["Type"].asString();
	if(!contentNode["SLSLogStore"].isNull())
		content_.sLSLogStore = contentNode["SLSLogStore"].asString();
	if(!contentNode["DataCenter"].isNull())
		content_.dataCenter = contentNode["DataCenter"].asString();
	if(!contentNode["FieldName"].isNull())
		content_.fieldName = contentNode["FieldName"].asString();
	if(!contentNode["ProjectName"].isNull())
		content_.projectName = contentNode["ProjectName"].asString();
	if(!contentNode["SamplingRate"].isNull())
		content_.samplingRate = contentNode["SamplingRate"].asString();
	if(!contentNode["SLSProject"].isNull())
		content_.sLSProject = contentNode["SLSProject"].asString();
	if(!contentNode["DomainName"].isNull())
		content_.domainName = contentNode["DomainName"].asString();
	if(!contentNode["BusinessType"].isNull())
		content_.businessType = contentNode["BusinessType"].asString();
	if(!contentNode["SLSRegion"].isNull())
		content_.sLSRegion = contentNode["SLSRegion"].asString();

}

DescribeDcdnSLSRealtimeLogDeliveryResult::Content DescribeDcdnSLSRealtimeLogDeliveryResult::getContent()const
{
	return content_;
}

