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

#include <alibabacloud/companyreg/model/ListVoucherResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListVoucherResult::ListVoucherResult() :
	ServiceResult()
{}

ListVoucherResult::ListVoucherResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVoucherResult::~ListVoucherResult()
{}

void ListVoucherResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["CreatedStamp"].isNull())
			resultObject.createdStamp = std::stol(valueResultResultItem["CreatedStamp"].asString());
		if(!valueResultResultItem["HasEditAuthority"].isNull())
			resultObject.hasEditAuthority = valueResultResultItem["HasEditAuthority"].asString() == "true";
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["Period"].isNull())
			resultObject.period = valueResultResultItem["Period"].asString();
		if(!valueResultResultItem["RefVoucherIds"].isNull())
			resultObject.refVoucherIds = valueResultResultItem["RefVoucherIds"].asString();
		if(!valueResultResultItem["RefVoucherInfo"].isNull())
			resultObject.refVoucherInfo = valueResultResultItem["RefVoucherInfo"].asString();
		if(!valueResultResultItem["UploadAttachmentCount"].isNull())
			resultObject.uploadAttachmentCount = std::stoi(valueResultResultItem["UploadAttachmentCount"].asString());
		if(!valueResultResultItem["VoucherDate"].isNull())
			resultObject.voucherDate = std::stol(valueResultResultItem["VoucherDate"].asString());
		if(!valueResultResultItem["VoucherNo"].isNull())
			resultObject.voucherNo = valueResultResultItem["VoucherNo"].asString();
		if(!valueResultResultItem["VoucherType"].isNull())
			resultObject.voucherType = valueResultResultItem["VoucherType"].asString();
		if(!valueResultResultItem["WrittenPerson"].isNull())
			resultObject.writtenPerson = valueResultResultItem["WrittenPerson"].asString();
		auto allDetailsNode = valueResultResultItem["Details"]["DetailsItem"];
		for (auto valueResultResultItemDetailsDetailsItem : allDetailsNode)
		{
			ResultItem::DetailsItem detailsObject;
			if(!valueResultResultItemDetailsDetailsItem["BasePostedCreditor"].isNull())
				detailsObject.basePostedCreditor = std::stof(valueResultResultItemDetailsDetailsItem["BasePostedCreditor"].asString());
			if(!valueResultResultItemDetailsDetailsItem["BasePostedDebtor"].isNull())
				detailsObject.basePostedDebtor = std::stof(valueResultResultItemDetailsDetailsItem["BasePostedDebtor"].asString());
			if(!valueResultResultItemDetailsDetailsItem["Comments"].isNull())
				detailsObject.comments = valueResultResultItemDetailsDetailsItem["Comments"].asString();
			resultObject.details.push_back(detailsObject);
		}
		auto extAttributesNode = value["ExtAttributes"];
		if(!extAttributesNode["IsSupervisor"].isNull())
			resultObject.extAttributes.isSupervisor = std::stoi(extAttributesNode["IsSupervisor"].asString());
		if(!extAttributesNode["NeedCheckCreatorId"].isNull())
			resultObject.extAttributes.needCheckCreatorId = std::stoi(extAttributesNode["NeedCheckCreatorId"].asString());
		if(!extAttributesNode["UpdateAttachment"].isNull())
			resultObject.extAttributes.updateAttachment = std::stoi(extAttributesNode["UpdateAttachment"].asString());
		auto voucherTransCategoryIdNode = value["VoucherTransCategoryId"];
		if(!voucherTransCategoryIdNode["Name"].isNull())
			resultObject.voucherTransCategoryId.name = voucherTransCategoryIdNode["Name"].asString();
		result_.push_back(resultObject);
	}
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListVoucherResult::getTotalCount()const
{
	return totalCount_;
}

int ListVoucherResult::getPageCount()const
{
	return pageCount_;
}

int ListVoucherResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListVoucherResult::ResultItem> ListVoucherResult::getResult()const
{
	return result_;
}

