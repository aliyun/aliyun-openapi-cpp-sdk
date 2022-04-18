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

#include <alibabacloud/sddp/model/DescribeEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	if(!eventNode["DisplayName"].isNull())
		event_.displayName = eventNode["DisplayName"].asString();
	if(!eventNode["Status"].isNull())
		event_.status = std::stoi(eventNode["Status"].asString());
	if(!eventNode["DealReason"].isNull())
		event_.dealReason = eventNode["DealReason"].asString();
	if(!eventNode["UserId"].isNull())
		event_.userId = std::stol(eventNode["UserId"].asString());
	if(!eventNode["StatusName"].isNull())
		event_.statusName = eventNode["StatusName"].asString();
	if(!eventNode["DepartName"].isNull())
		event_.departName = eventNode["DepartName"].asString();
	if(!eventNode["DealTime"].isNull())
		event_.dealTime = std::stol(eventNode["DealTime"].asString());
	if(!eventNode["DealLoginName"].isNull())
		event_.dealLoginName = eventNode["DealLoginName"].asString();
	if(!eventNode["SubTypeName"].isNull())
		event_.subTypeName = eventNode["SubTypeName"].asString();
	if(!eventNode["Backed"].isNull())
		event_.backed = eventNode["Backed"].asString() == "true";
	if(!eventNode["DataInstance"].isNull())
		event_.dataInstance = eventNode["DataInstance"].asString();
	if(!eventNode["EventTime"].isNull())
		event_.eventTime = std::stol(eventNode["EventTime"].asString());
	if(!eventNode["LoginName"].isNull())
		event_.loginName = eventNode["LoginName"].asString();
	if(!eventNode["UserIdValue"].isNull())
		event_.userIdValue = eventNode["UserIdValue"].asString();
	if(!eventNode["SubTypeCode"].isNull())
		event_.subTypeCode = eventNode["SubTypeCode"].asString();
	if(!eventNode["LogDetail"].isNull())
		event_.logDetail = eventNode["LogDetail"].asString();
	if(!eventNode["TypeCode"].isNull())
		event_.typeCode = eventNode["TypeCode"].asString();
	if(!eventNode["dealUserIdValue"].isNull())
		event_.dealUserIdValue = eventNode["dealUserIdValue"].asString();
	if(!eventNode["AlertTime"].isNull())
		event_.alertTime = std::stol(eventNode["AlertTime"].asString());
	if(!eventNode["DealUserId"].isNull())
		event_.dealUserId = std::stol(eventNode["DealUserId"].asString());
	if(!eventNode["TypeName"].isNull())
		event_.typeName = eventNode["TypeName"].asString();
	if(!eventNode["DealDisplayName"].isNull())
		event_.dealDisplayName = eventNode["DealDisplayName"].asString();
	if(!eventNode["Id"].isNull())
		event_.id = std::stol(eventNode["Id"].asString());
	if(!eventNode["ProductCode"].isNull())
		event_.productCode = eventNode["ProductCode"].asString();
	auto allHandleInfoListNode = eventNode["HandleInfoList"]["HandleInfo"];
	for (auto eventNodeHandleInfoListHandleInfo : allHandleInfoListNode)
	{
		Event::HandleInfo handleInfoObject;
		if(!eventNodeHandleInfoListHandleInfo["Status"].isNull())
			handleInfoObject.status = std::stoi(eventNodeHandleInfoListHandleInfo["Status"].asString());
		if(!eventNodeHandleInfoListHandleInfo["EnableTime"].isNull())
			handleInfoObject.enableTime = std::stol(eventNodeHandleInfoListHandleInfo["EnableTime"].asString());
		if(!eventNodeHandleInfoListHandleInfo["HandlerValue"].isNull())
			handleInfoObject.handlerValue = std::stoi(eventNodeHandleInfoListHandleInfo["HandlerValue"].asString());
		if(!eventNodeHandleInfoListHandleInfo["DisableTime"].isNull())
			handleInfoObject.disableTime = std::stol(eventNodeHandleInfoListHandleInfo["DisableTime"].asString());
		if(!eventNodeHandleInfoListHandleInfo["HandlerName"].isNull())
			handleInfoObject.handlerName = eventNodeHandleInfoListHandleInfo["HandlerName"].asString();
		if(!eventNodeHandleInfoListHandleInfo["HandlerType"].isNull())
			handleInfoObject.handlerType = eventNodeHandleInfoListHandleInfo["HandlerType"].asString();
		if(!eventNodeHandleInfoListHandleInfo["CurrentValue"].isNull())
			handleInfoObject.currentValue = eventNodeHandleInfoListHandleInfo["CurrentValue"].asString();
		if(!eventNodeHandleInfoListHandleInfo["Id"].isNull())
			handleInfoObject.id = std::stol(eventNodeHandleInfoListHandleInfo["Id"].asString());
		event_.handleInfoList.push_back(handleInfoObject);
	}
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
		if(!detailNodeChartChartItem["Type"].isNull())
			chartItemObject.type = detailNodeChartChartItem["Type"].asString();
		if(!detailNodeChartChartItem["Label"].isNull())
			chartItemObject.label = detailNodeChartChartItem["Label"].asString();
		if(!detailNodeChartChartItem["XLabel"].isNull())
			chartItemObject.xLabel = detailNodeChartChartItem["XLabel"].asString();
		if(!detailNodeChartChartItem["YLabel"].isNull())
			chartItemObject.yLabel = detailNodeChartChartItem["YLabel"].asString();
		auto dataNode = value["Data"];
			auto allY = dataNode["Y"]["Y"];
			for (auto value : allY)
				chartItemObject.data.y.push_back(value.asString());
			auto allX = dataNode["X"]["X"];
			for (auto value : allX)
				chartItemObject.data.x.push_back(value.asString());
		event_.detail.chart.push_back(chartItemObject);
	}
	auto allResourceInfoNode = detailNode["ResourceInfo"]["ResourceInfoItem"];
	for (auto detailNodeResourceInfoResourceInfoItem : allResourceInfoNode)
	{
		Event::Detail::ResourceInfoItem resourceInfoItemObject;
		if(!detailNodeResourceInfoResourceInfoItem["Label"].isNull())
			resourceInfoItemObject.label = detailNodeResourceInfoResourceInfoItem["Label"].asString();
		if(!detailNodeResourceInfoResourceInfoItem["Value"].isNull())
			resourceInfoItemObject.value = detailNodeResourceInfoResourceInfoItem["Value"].asString();
		event_.detail.resourceInfo.push_back(resourceInfoItemObject);
	}

}

DescribeEventDetailResult::Event DescribeEventDetailResult::getEvent()const
{
	return event_;
}

