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

#include <alibabacloud/yundun-ds/model/DescribeEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeEventDetailResult::DescribeEventDetailResult() :
	ServiceResult()
{}

DescribeEventDetailResult::DescribeEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventDetailResult::~DescribeEventDetailResult()
{}

void DescribeEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto eventNode = value["Event"];
	if(!eventNode["Id"].isNull())
		event_.id = std::stol(eventNode["Id"].asString());
	if(!eventNode["UserId"].isNull())
		event_.userId = std::stol(eventNode["UserId"].asString());
	if(!eventNode["LoginName"].isNull())
		event_.loginName = eventNode["LoginName"].asString();
	if(!eventNode["DisplayName"].isNull())
		event_.displayName = eventNode["DisplayName"].asString();
	if(!eventNode["ProductCode"].isNull())
		event_.productCode = eventNode["ProductCode"].asString();
	if(!eventNode["TypeCode"].isNull())
		event_.typeCode = eventNode["TypeCode"].asString();
	if(!eventNode["TypeName"].isNull())
		event_.typeName = eventNode["TypeName"].asString();
	if(!eventNode["TelephoneNum"].isNull())
		event_.telephoneNum = eventNode["TelephoneNum"].asString();
	if(!eventNode["SubTypeCode"].isNull())
		event_.subTypeCode = eventNode["SubTypeCode"].asString();
	if(!eventNode["SubTypeName"].isNull())
		event_.subTypeName = eventNode["SubTypeName"].asString();
	if(!eventNode["AlertTime"].isNull())
		event_.alertTime = std::stol(eventNode["AlertTime"].asString());
	if(!eventNode["DataInstance"].isNull())
		event_.dataInstance = eventNode["DataInstance"].asString();
	if(!eventNode["EventTime"].isNull())
		event_.eventTime = std::stol(eventNode["EventTime"].asString());
	if(!eventNode["Status"].isNull())
		event_.status = std::stoi(eventNode["Status"].asString());
	if(!eventNode["StatusName"].isNull())
		event_.statusName = eventNode["StatusName"].asString();
	if(!eventNode["DealUserId"].isNull())
		event_.dealUserId = std::stol(eventNode["DealUserId"].asString());
	if(!eventNode["DealLoginName"].isNull())
		event_.dealLoginName = eventNode["DealLoginName"].asString();
	if(!eventNode["DealDisplayName"].isNull())
		event_.dealDisplayName = eventNode["DealDisplayName"].asString();
	if(!eventNode["DealTime"].isNull())
		event_.dealTime = std::stol(eventNode["DealTime"].asString());
	if(!eventNode["DepartName"].isNull())
		event_.departName = eventNode["DepartName"].asString();
	if(!eventNode["Backed"].isNull())
		event_.backed = eventNode["Backed"].asString() == "true";
	if(!eventNode["DealReason"].isNull())
		event_.dealReason = eventNode["DealReason"].asString();
	auto detailNode = eventNode["Detail"];
	auto allContentNode = detailNode["Content"]["ContentItem"];
	for (auto detailNodeContentContentItem : allContentNode)
	{
		Event::Detail::ContentItem contentItemObject;
		if(!detailNodeContentContentItem["Label"].isNull())
			contentItemObject.label = detailNodeContentContentItem["Label"].asString();
		if(!detailNodeContentContentItem["Value"].isNull())
			contentItemObject.value = detailNodeContentContentItem["Value"].asString();
		event_.detail.content.push_back(contentItemObject);
	}
	auto allChartNode = detailNode["Chart"]["ChartItem"];
	for (auto detailNodeChartChartItem : allChartNode)
	{
		Event::Detail::ChartItem chartItemObject;
		if(!detailNodeChartChartItem["Label"].isNull())
			chartItemObject.label = detailNodeChartChartItem["Label"].asString();
		if(!detailNodeChartChartItem["XLabel"].isNull())
			chartItemObject.xLabel = detailNodeChartChartItem["XLabel"].asString();
		if(!detailNodeChartChartItem["YLabel"].isNull())
			chartItemObject.yLabel = detailNodeChartChartItem["YLabel"].asString();
		auto dataNode = value["Data"];
		if(!dataNode["X"].isNull())
			chartItemObject.data.x = dataNode["X"].asString();
		if(!dataNode["Y"].isNull())
			chartItemObject.data.y = dataNode["Y"].asString();
		event_.detail.chart.push_back(chartItemObject);
	}

}

DescribeEventDetailResult::Event DescribeEventDetailResult::getEvent()const
{
	return event_;
}

